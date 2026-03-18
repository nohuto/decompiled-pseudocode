/*
 * XREFs of ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@_J@Z @ 0x18022941C
 * Callers:
 *     ??$move@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@V?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@0@0V12@@Z @ 0x1802296C0 (--$move@V-$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@V-$checked_array_iterator@PEAVCPre.c)
 *     ??$move_backward@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@V?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@0@0V12@@Z @ 0x18022C904 (--$move_backward@V-$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@V-$checked_array_iterator.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@V?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@0@0V12@@Z @ 0x18022C9B0 (--$uninitialized_move@V-$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@V-$checked_array_ite.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 */

__int64 __fastcall std::_Get_unwrapped_n<stdext::checked_array_iterator<CPreComputeSubTreeContext *> &,__int64>(
        _QWORD *a1,
        __int64 a2)
{
  stdext::checked_array_iterator<char *>::_Verify_offset((__int64)a1, a2);
  return *a1 + 352LL * a1[2];
}
