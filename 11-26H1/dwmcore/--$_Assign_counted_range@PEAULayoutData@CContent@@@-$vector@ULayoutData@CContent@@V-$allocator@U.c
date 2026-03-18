/*
 * XREFs of ??$_Assign_counted_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXPEAULayoutData@CContent@@_K@Z @ 0x18026D904
 * Callers:
 *     ??4?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18026DDC0 (--4-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV.c)
 * Callees:
 *     ??$_Copy_memmove_n@PEAULayoutData@CContent@@PEAU12@@std@@YAPEAULayoutData@CContent@@PEAU12@_K0@Z @ 0x18026D9CC (--$_Copy_memmove_n@PEAULayoutData@CContent@@PEAU12@@std@@YAPEAULayoutData@CContent@@PEAU12@_K0@Z.c)
 *     ??$_Uninitialized_copy_n@PEAULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@YAPEAULayoutData@CContent@@PEAU12@_K0AEAV?$allocator@ULayoutData@CContent@@@0@@Z @ 0x18026DD18 (--$_Uninitialized_copy_n@PEAULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@.c)
 *     ?_Clear_and_reserve_geometric@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAX_K@Z @ 0x18026E810 (-_Clear_and_reserve_geometric@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@.c)
 */

__int64 __fastcall std::vector<CContent::LayoutData>::_Assign_counted_range<CContent::LayoutData *>(
        __int64 *a1,
        char *a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v5; // rdi
  __int64 v7; // r8
  char *v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 result; // rax

  v3 = *a1;
  v5 = a3;
  if ( a3 <= 0x6DB6DB6DB6DB6DB7LL * ((a1[2] - *a1) >> 3) )
  {
    v9 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - v3) >> 3);
    if ( a3 <= v9 )
    {
      std::_Copy_memmove_n<CContent::LayoutData *,CContent::LayoutData *>(a2);
      result = v3 + 56 * v5;
      goto LABEL_7;
    }
    std::_Copy_memmove_n<CContent::LayoutData *,CContent::LayoutData *>(a2);
    v7 = a1[1];
    v5 -= v9;
    v8 = &a2[56 * v9];
  }
  else
  {
    std::vector<CContent::LayoutData>::_Clear_and_reserve_geometric(a1, a3);
    v7 = *a1;
    v8 = a2;
  }
  result = std::_Uninitialized_copy_n<CContent::LayoutData *>(v8, v5, v7);
LABEL_7:
  a1[1] = result;
  return result;
}
