/*
 * XREFs of MiMarkNonPagedHiberPhasePages @ 0x140C06EE0
 * Callers:
 *     MmMarkHiberPhase @ 0x140C07330 (MmMarkHiberPhase.c)
 *     MmMarkImageForHiberPhase @ 0x140C076D8 (MmMarkImageForHiberPhase.c)
 *     MiMarkHotPatchForHiberPhase @ 0x140C07980 (MiMarkHotPatchForHiberPhase.c)
 *     MiMarkHotPatchesForHiberPhase @ 0x140C079E4 (MiMarkHotPatchesForHiberPhase.c)
 * Callees:
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
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
