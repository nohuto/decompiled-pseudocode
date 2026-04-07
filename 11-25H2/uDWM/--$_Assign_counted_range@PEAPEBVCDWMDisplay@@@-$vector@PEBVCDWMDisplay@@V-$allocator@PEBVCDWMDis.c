/*
 * XREFs of ??$_Assign_counted_range@PEAPEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAXPEAPEBVCDWMDisplay@@_K@Z @ 0x18008DCE0
 * Callers:
 *     ?SetChangeContextInfo@CDisplayAnimatedVisual@@QEAAXPEAVCDWMDisplaySet@@AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180096070 (-SetChangeContextInfo@CDisplayAnimatedVisual@@QEAAXPEAVCDWMDisplaySet@@AEAV-$vector@PEBVCDWMDisp.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAX_K@Z @ 0x180095FA8 (-_Clear_and_reserve_geometric@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDisplay@@@std@@@std.c)
 *     ??$_Copy_memmove_n@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX_K0@Z @ 0x180096478 (--$_Copy_memmove_n@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX_K0@Z.c)
 */

__int64 __fastcall std::vector<CDWMDisplay const *>::_Assign_counted_range<CDWMDisplay const * *>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 v7; // rcx
  __int64 result; // rax
  unsigned __int64 v9; // rbp

  v3 = *a1;
  v4 = a3;
  if ( a3 <= (__int64)(a1[2] - *a1) >> 3 )
  {
    v9 = (a1[1] - v3) >> 3;
    if ( a3 > v9 )
    {
      std::_Copy_memmove_n<void * *,void * *>(a2, (a1[1] - v3) >> 3, *a1);
      v3 = a1[1];
      v7 = a2 + 8 * v9;
      v4 -= v9;
      goto LABEL_4;
    }
  }
  else
  {
    std::vector<CDWMDisplay const *>::_Clear_and_reserve_geometric(a1, a3);
    v3 = *a1;
  }
  v7 = a2;
LABEL_4:
  std::_Copy_memmove_n<void * *,void * *>(v7, v4, v3);
  result = v3 + 8 * v4;
  a1[1] = result;
  return result;
}
