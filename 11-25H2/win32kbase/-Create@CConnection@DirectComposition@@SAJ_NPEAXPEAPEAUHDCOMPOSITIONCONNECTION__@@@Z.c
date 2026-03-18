/*
 * XREFs of ?Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140227B78
 * Callers:
 *     NtDCompositionCreateConnection @ 0x140226B80 (NtDCompositionCreateConnection.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x14004E260 (UserIsCurrentProcessDwm.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14004F5D4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140050200 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x140055860 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z @ 0x14015FC94 (-ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z @ 0x1402279DC (-Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Create(char a1, void *a2, struct HDCOMPOSITIONCONNECTION__ **a3)
{
  struct DirectComposition::CProcessData *v6; // rax
  struct DirectComposition::CProcessData *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // edx
  DirectComposition::CConnection *v12; // rsi
  int v13; // edi
  struct HDCOMPOSITIONCONNECTION__ *v14; // rax
  struct DirectComposition::CConnection *v16; // [rsp+58h] [rbp+20h] BYREF

  v16 = 0LL;
  v6 = DirectComposition::CProcessData::Current();
  v7 = v6;
  if ( v6 )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)v6 + 4));
    if ( *((_QWORD *)v7 + 3) || !UserIsCurrentProcessDwm(v9, v8) )
    {
      v13 = -1073741790;
    }
    else
    {
      v10 = DirectComposition::CConnection::ReclaimSessionGlobalConnection(&v16);
      v12 = v16;
      v13 = v10;
      if ( v10 < 0 || (v13 = DirectComposition::CConnection::Connect(v16, a1, a2), v13 < 0) )
      {
        if ( v12 )
          DirectComposition::CConnection::Release(v12, v11);
      }
      else
      {
        *((_QWORD *)v7 + 2) += 4LL;
        v14 = (struct HDCOMPOSITIONCONNECTION__ *)*((_QWORD *)v7 + 2);
        *((_QWORD *)v7 + 3) = v12;
        *a3 = v14;
      }
    }
    ExReleaseResourceLite(*((PERESOURCE *)v7 + 4));
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v13;
}
