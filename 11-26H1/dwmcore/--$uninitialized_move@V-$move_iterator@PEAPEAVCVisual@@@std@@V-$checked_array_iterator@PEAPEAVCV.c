/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAPEAVCVisual@@@std@@V?$checked_array_iterator@PEAPEAVCVisual@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCVisual@@@stdext@@V?$move_iterator@PEAPEAVCVisual@@@0@0V12@@Z @ 0x1801B0BF4
 * Callers:
 *     ?AddVisualToBVIPreRenderList@CPreComputeContext@@AEAAXPEAVCVisual@@@Z @ 0x18008FAA0 (-AddVisualToBVIPreRenderList@CPreComputeContext@@AEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CVisual * *>,stdext::checked_array_iterator<CVisual * *>>(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  stdext::checked_array_iterator<char *>::_Verify_offset((__int64)a4, (a3 - (__int64)a2) >> 3);
  v8 = *a4;
  a4[2] = (std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(
             a2,
             a3,
             (void *)(*a4 + 8 * a4[2]))
         - v8) >> 3;
  result = a1;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
