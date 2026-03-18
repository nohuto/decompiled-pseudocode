/*
 * XREFs of NtDCompositionBoostCompositorClock @ 0x14016B370
 * Callers:
 *     <none>
 * Callees:
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1400A6790 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A8FE8 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1400A9050 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1400A96C0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z @ 0x1400A97E0 (-BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z.c)
 */

__int64 __fastcall NtDCompositionBoostCompositorClock(int a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rcx
  DirectComposition::CConnection *DefaultConnection; // rsi
  struct DirectComposition::CProcessData *v6; // rdi
  int v7; // eax
  int v8; // eax
  bool v9; // cl

  v2 = 0;
  KeEnterCriticalRegion();
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v3);
  if ( !DefaultConnection )
  {
    v2 = -1073741790;
    goto LABEL_8;
  }
  v6 = DirectComposition::CProcessData::Current(v4);
  ExAcquirePushLockExclusiveEx((char *)v6 + 40, 0LL);
  *((_BYTE *)v6 + 48) = 1;
  v7 = *((_DWORD *)v6 + 17);
  if ( a1 )
  {
    if ( v7 != -1 )
    {
      v9 = v7 == 0;
      v8 = v7 + 1;
      goto LABEL_5;
    }
  }
  else if ( v7 )
  {
    v8 = v7 - 1;
    v9 = v8 == 0;
LABEL_5:
    *((_DWORD *)v6 + 17) = v8;
    if ( v9 )
    {
      v2 = DirectComposition::CConnection::BoostCompositorClock(DefaultConnection, a1);
      if ( v2 < 0 )
      {
        if ( a1 )
          --*((_DWORD *)v6 + 17);
      }
    }
    goto LABEL_7;
  }
  v2 = -1073741823;
LABEL_7:
  DirectComposition::CPushLockCriticalSection::Release((struct DirectComposition::CProcessData *)((char *)v6 + 40));
  DirectComposition::CConnection::Release(DefaultConnection);
LABEL_8:
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
