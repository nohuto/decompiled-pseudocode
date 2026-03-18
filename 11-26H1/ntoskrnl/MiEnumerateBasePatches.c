/*
 * XREFs of MiEnumerateBasePatches @ 0x140C016F8
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406FB178 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiReplaceImportEntriesForVerifier @ 0x14086A738 (MiReplaceImportEntriesForVerifier.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x14086E384 (MiApplyHotPatchToLoadedDriver.c)
 *     MiMarkHotPatchesForHiberPhase @ 0x140C017D4 (MiMarkHotPatchesForHiberPhase.c)
 * Callees:
 *     MiGetBaseLoaderPortion @ 0x1404F5130 (MiGetBaseLoaderPortion.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiEnumerateBasePatches(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD *v5; // rdi
  _QWORD *i; // rbx
  __int64 BaseLoaderPortion; // rax

  result = MiGetBaseLoaderPortion(a1);
  v5 = (_QWORD *)(result + 256);
  for ( i = *(_QWORD **)(result + 256); i != v5; i = (_QWORD *)*i )
  {
    BaseLoaderPortion = MiGetBaseLoaderPortion((__int64)(i - 32));
    result = guard_dispatch_icall_no_overrides(BaseLoaderPortion, a3);
    if ( !(_DWORD)result )
      break;
  }
  return result;
}
