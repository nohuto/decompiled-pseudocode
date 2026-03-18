/*
 * XREFs of ?clear@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18008BA5C
 * Callers:
 *     ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x18008D080 (-Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x1800ADAF0 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ??1?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18019A6AC (--1-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@std@.c)
 *     ?Initialize@CDesktopTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x18019EC20 (-Initialize@CDesktopTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear(
        __int64 *a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rbx
  __int64 v4; // r8
  __int64 v5; // rsi
  _QWORD *v6; // rbp
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = (_QWORD *)*a1;
  v4 = (a1[1] - *a1) >> 3;
  if ( v4 )
  {
    v5 = 8 * v4;
    v6 = &v2[v4];
    result = stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v7, *a1, v4);
    while ( v2 != v6 )
    {
      if ( *v2 )
        result = (_QWORD *)(**(__int64 (__fastcall ***)(_QWORD, __int64))*v2)(*v2, 1LL);
      ++v2;
    }
    a1[1] -= v5;
  }
  return result;
}
