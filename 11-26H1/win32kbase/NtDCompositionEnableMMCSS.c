/*
 * XREFs of NtDCompositionEnableMMCSS @ 0x14012B680
 * Callers:
 *     <none>
 * Callees:
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1400A6790 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A8FE8 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1400A9050 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1400A96C0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x14012B768 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 */

__int64 __fastcall NtDCompositionEnableMMCSS(int a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rcx
  DirectComposition::CConnection *DefaultConnection; // rsi
  struct DirectComposition::CProcessData *v7; // rdi
  int v8; // eax
  bool v9; // cl
  int v10; // eax

  v2 = 0;
  KeEnterCriticalRegion();
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v3);
  if ( DefaultConnection )
  {
    v7 = DirectComposition::CProcessData::Current(v4);
    ExAcquirePushLockExclusiveEx((char *)v7 + 40, 0LL);
    *((_BYTE *)v7 + 48) = 1;
    v8 = *((_DWORD *)v7 + 16);
    if ( a1 )
    {
      if ( v8 != -1 )
      {
        v9 = v8 == 0;
        v10 = v8 + 1;
LABEL_7:
        *((_DWORD *)v7 + 16) = v10;
        if ( v9 )
        {
          v2 = DirectComposition::CConnection::EnableMMCSS(DefaultConnection, a1);
          if ( v2 < 0 )
          {
            if ( a1 )
              --*((_DWORD *)v7 + 16);
          }
        }
        goto LABEL_9;
      }
    }
    else if ( v8 )
    {
      v10 = v8 - 1;
      v9 = v10 == 0;
      goto LABEL_7;
    }
    v2 = -1073741823;
LABEL_9:
    DirectComposition::CPushLockCriticalSection::Release((struct DirectComposition::CProcessData *)((char *)v7 + 40));
    DirectComposition::CConnection::Release(DefaultConnection);
    goto LABEL_3;
  }
  v2 = -1073741790;
LABEL_3:
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
