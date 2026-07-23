/*
 * XREFs of MiGetMultiplexedVm @ 0x1402C67F0
 * Callers:
 *     MiSynchronizeSystemVa @ 0x1402C58B0 (MiSynchronizeSystemVa.c)
 *     MiInitializeProbePacketVm @ 0x1402C77CC (MiInitializeProbePacketVm.c)
 *     MmSetAddressRangeModifiedEx @ 0x14039C3F8 (MmSetAddressRangeModifiedEx.c)
 *     MiTrimViewVaIsCandidate @ 0x140465B88 (MiTrimViewVaIsCandidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetMultiplexedVm(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx

  v3 = *(_QWORD *)(48 * ((*(_QWORD *)(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
                 - 0x220000000000LL) >> 1;
  LODWORD(v3) = v3 & 0x7FFFFFFF;
  v4 = v3 | ((unsigned __int64)(*(_DWORD *)(48
                                          * ((*(_QWORD *)(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
                                          - 0x220000000000LL
                                          + 36) & 0x3FF0000) << 15);
  if ( v4 )
  {
    if ( (unsigned __int64)(v4 - 0x10000000000LL) <= 1 )
    {
      if ( v4 == 0x10000000001LL && PsInitialSystemProcess )
        v4 = (__int64)PsInitialSystemProcess;
    }
    else
    {
      v4 = qword_140E37D10 + 16 * (v4 - 1);
    }
    if ( v4 )
      v4 += 40 * ((a2 >> 18) & 7);
  }
  else
  {
    v4 = 0LL;
  }
  v5 = *(_QWORD *)(v4 + 24);
  v6 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v5 & 1) == 0 )
    v6 = v5;
  return *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(*(_QWORD *)v6 + 60LL) & 0x3FF)) + 22592LL;
}
