/*
 * XREFs of ??$_Construct@$00PEBD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXQEBD_K@Z @ 0x180207AF4
 * Callers:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1802079A0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x1802079DC (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 * Callees:
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x18022FC5C (-_Xlen_string@std@@YAXXZ.c)
 *     ??$_Allocate_for_capacity@$0A@@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@CAPEADAEAV?$allocator@D@1@AEA_K@Z @ 0x1802370E4 (--$_Allocate_for_capacity@$0A@@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@CAPE.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@CA_K_K00@Z @ 0x180237240 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@CA_K_K00@Z.c)
 */

void *__fastcall std::string::_Construct<1,char const *>(_QWORD *a1, const void *a2, size_t a3)
{
  void *result; // rax
  __int64 v7; // rcx
  _BYTE *v8; // rax
  _BYTE *v9; // rbx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlen_string();
  if ( a3 > 0xF )
  {
    v10 = std::string::_Calculate_growth(a3);
    v8 = (_BYTE *)std::string::_Allocate_for_capacity<0>(v7, &v10);
    a1[3] = v10;
    *a1 = v8;
    v9 = v8;
    a1[2] = a3;
    result = memcpy_0(v8, a2, a3);
    v9[a3] = 0;
  }
  else
  {
    a1[3] = 15LL;
    a1[2] = a3;
    result = memcpy_0(a1, a2, a3);
    *((_BYTE *)a1 + a3) = 0;
  }
  return result;
}
