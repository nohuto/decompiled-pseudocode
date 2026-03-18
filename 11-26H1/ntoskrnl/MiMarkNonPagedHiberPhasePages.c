/*
 * XREFs of MiMarkNonPagedHiberPhasePages @ 0x140C00CD0
 * Callers:
 *     MmMarkHiberPhase @ 0x140C01120 (MmMarkHiberPhase.c)
 *     MmMarkImageForHiberPhase @ 0x140C014C8 (MmMarkImageForHiberPhase.c)
 *     MiMarkHotPatchForHiberPhase @ 0x140C01770 (MiMarkHotPatchForHiberPhase.c)
 *     MiMarkHotPatchesForHiberPhase @ 0x140C017D4 (MiMarkHotPatchesForHiberPhase.c)
 * Callees:
 *     MiWalkPageTables @ 0x140326A80 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x140457870 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall MiMarkNonPagedHiberPhasePages(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  _DWORD v7[2]; // [rsp+20h] [rbp-C8h] BYREF
  char v8; // [rsp+29h] [rbp-BFh]
  char *AnyMultiplexedVm; // [rsp+40h] [rbp-A8h]
  __int64 v10; // [rsp+48h] [rbp-A0h]
  __int64 v11; // [rsp+50h] [rbp-98h]
  __int64 (__fastcall *v12)(); // [rsp+C8h] [rbp-20h]

  memset_0(v7, 0, 0xC0uLL);
  v7[0] = a3 | 0x1081;
  v12 = MiMarkNonPagedHiberPhasePte;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v8 = 17;
  v10 = a1;
  v11 = a2;
  return MiWalkPageTables((__int64)v7);
}
