/*
 * XREFs of ??$_Assign_counted_range@PEAPEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAXPEAPEBVCDWMDisplay@@_K@Z @ 0x18007C654
 * Callers:
 *     ?SetChangeContextInfo@CDisplayAnimatedVisual@@QEAAXPEAVCDWMDisplaySet@@AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180088804 (-SetChangeContextInfo@CDisplayAnimatedVisual@@QEAAXPEAVCDWMDisplaySet@@AEAV-$vector@PEBVCDWMDisp.c)
 * Callees:
 *     ??$_Copy_memmove_n@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX_K0@Z @ 0x1800737B8 (--$_Copy_memmove_n@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX_K0@Z.c)
 *     ?_Clear_and_reserve_geometric@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAX_K@Z @ 0x180088448 (-_Clear_and_reserve_geometric@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDisplay@@@std@@@std.c)
 */

__int64 __fastcall std::vector<CDWMDisplay const *>::_Assign_counted_range<CDWMDisplay const * *>(
        char **a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v4; // r8
  char *v5; // r14
  unsigned __int64 v7; // rdi
  char *v8; // rbp
  __int64 result; // rax

  v4 = *a1;
  v5 = a2;
  if ( a3 <= (a1[2] - *a1) >> 3 )
  {
    v7 = (a1[1] - v4) >> 3;
    if ( a3 > v7 )
    {
      std::_Copy_memmove_n<void * *,void * *>(a2, (a1[1] - v4) >> 3, v4);
      v4 = a1[1];
      v5 += 8 * v7;
      a3 -= v7;
    }
  }
  else
  {
    std::vector<CDWMDisplay const *>::_Clear_and_reserve_geometric(a1, a3);
    v4 = *a1;
  }
  v8 = &v4[8 * a3];
  result = std::_Copy_memmove_n<void * *,void * *>(v5, a3, v4);
  a1[1] = v8;
  return result;
}
