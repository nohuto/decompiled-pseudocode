/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAUPrimitiveUVDesc@@@std@@V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@V?$move_iterator@PEAUPrimitiveUVDesc@@@0@0V12@@Z @ 0x180259F7C
 * Callers:
 *     ?resize@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18016CBCC (-resize@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expans.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAUPrimitiveUVDesc@@@std@@PEAUPrimitiveUVDesc@@@std@@YAPEAUPrimitiveUVDesc@@V?$move_iterator@PEAUPrimitiveUVDesc@@@0@V20@PEAU1@@Z @ 0x180259D68 (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAUPrimitiveUVDesc@@@std@@PEAUPrimitiveUVDesc.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<PrimitiveUVDesc *>,stdext::checked_array_iterator<PrimitiveUVDesc *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // xmm1_8

  stdext::checked_array_iterator<char *>::_Verify_offset((__int64)a4, 0x6DB6DB6DB6DB6DB7LL * ((a3 - a2) >> 3));
  a4[2] = 0x6DB6DB6DB6DB6DB7LL
        * ((std::_Uninitialized_move_unchecked<std::move_iterator<PrimitiveUVDesc *>,PrimitiveUVDesc *>(
              a2,
              a3,
              *a4 + 56LL * a4[2])
          - *a4) >> 3);
  result = a1;
  v9 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v9;
  return result;
}
