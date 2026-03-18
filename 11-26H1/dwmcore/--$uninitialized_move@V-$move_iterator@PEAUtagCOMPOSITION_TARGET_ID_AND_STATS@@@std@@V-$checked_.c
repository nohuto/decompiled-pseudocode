/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@std@@V?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@stdext@@V?$move_iterator@PEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@0@0V12@@Z @ 0x18022DAB0
 * Callers:
 *     ?ConfirmCompositionFrame@CComposition@@IEAAJXZ @ 0x180032890 (-ConfirmCompositionFrame@CComposition@@IEAAJXZ.c)
 *     ?push_back@?$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V?$buffer_impl@UtagCOMPOSITION_TARGET_ID_AND_STATS@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z @ 0x180033608 (-push_back@-$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V-$buffer_impl@UtagCOMPOSITION_T.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>,stdext::checked_array_iterator<tagCOMPOSITION_TARGET_ID_AND_STATS *>>(
        __int64 a1,
        void *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // xmm1_8

  stdext::checked_array_iterator<char *>::_Verify_offset((__int64)a4, 0xEEEEEEEEEEEEEEEFuLL * ((a3 - (__int64)a2) >> 3));
  a4[2] = 0xEEEEEEEEEEEEEEEFuLL
        * ((std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(
              a2,
              a3,
              (void *)(*a4 + 120LL * a4[2]))
          - *a4) >> 3);
  result = a1;
  v9 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v9;
  return result;
}
