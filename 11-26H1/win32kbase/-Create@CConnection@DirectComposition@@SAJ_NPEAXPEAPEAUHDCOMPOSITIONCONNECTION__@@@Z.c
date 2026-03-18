/*
 * XREFs of ?Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140229ED8
 * Callers:
 *     NtDCompositionCreateConnection @ 0x140228DB0 (NtDCompositionCreateConnection.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x14006F430 (UserIsCurrentProcessDwm.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1400A6790 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1400A9050 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z @ 0x1401A495C (-ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z @ 0x140229D3C (-Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Create(__int64 a1, void *a2, struct HDCOMPOSITIONCONNECTION__ **a3)
{
  char v5; // r15
  struct DirectComposition::CProcessData *v6; // rax
  struct DirectComposition::CProcessData *v7; // rbx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // eax
  DirectComposition::CConnection *v12; // rsi
  int v13; // edi
  struct HDCOMPOSITIONCONNECTION__ *v14; // rax
  struct DirectComposition::CConnection *v16; // [rsp+58h] [rbp+20h] BYREF

  v16 = 0LL;
  v5 = a1;
  v6 = DirectComposition::CProcessData::Current(a1);
  v7 = v6;
  if ( v6 )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)v6 + 4));
    if ( *((_QWORD *)v7 + 3) || !UserIsCurrentProcessDwm(v9, v8, v10) )
    {
      v13 = -1073741790;
    }
    else
    {
      v11 = DirectComposition::CConnection::ReclaimSessionGlobalConnection(&v16);
      v12 = v16;
      v13 = v11;
      if ( v11 < 0 || (v13 = DirectComposition::CConnection::Connect(v16, v5, a2), v13 < 0) )
      {
        if ( v12 )
          DirectComposition::CConnection::Release(v12);
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
