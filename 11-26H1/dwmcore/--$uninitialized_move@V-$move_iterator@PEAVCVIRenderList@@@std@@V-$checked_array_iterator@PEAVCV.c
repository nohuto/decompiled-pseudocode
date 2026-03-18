/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAVCVIRenderList@@@std@@V?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@V?$move_iterator@PEAVCVIRenderList@@@0@0V12@@Z @ 0x18020EEB0
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180170928 (-ensure_extra_capacity@-$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@.c)
 * Callees:
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@_J@Z @ 0x1801714BC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVCVIRenderList@@@stdext@@_J@std@@YA-A_TAEAV-.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CVIRenderList *>,stdext::checked_array_iterator<CVIRenderList *>>(
        __int64 a1,
        void *a2,
        __int64 a3,
        _QWORD *a4)
{
  void *v8; // rax
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v8 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CVIRenderList *> &,__int64>(
                 a4,
                 0xCCCCCCCCCCCCCCCDuLL * ((a3 - (__int64)a2) >> 3));
  a4[2] = 0xCCCCCCCCCCCCCCCDuLL
        * ((std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(a2, a3, v8) - *a4) >> 3);
  result = a1;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
