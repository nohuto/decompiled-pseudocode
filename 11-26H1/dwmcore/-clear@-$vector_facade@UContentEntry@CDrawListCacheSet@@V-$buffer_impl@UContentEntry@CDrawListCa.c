/*
 * XREFs of ?clear@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18001EC50
 * Callers:
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18001E9C8 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18001EB60 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x1800ADAF0 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ?OnChanged@CProjectedShadow@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180193250 (-OnChanged@CProjectedShadow@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001ECD0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

_QWORD *__fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::clear(
        __int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // r8
  __int64 v4; // r14
  __int64 v5; // rdi
  _QWORD *result; // rax
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *a1;
  v3 = (a1[1] - *a1) >> 4;
  if ( v3 )
  {
    v4 = 16 * v3;
    v5 = 16 * v3 + v1;
    for ( result = stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v7, v1, v3);
          v1 != v5;
          v1 += 16LL )
    {
      result = (_QWORD *)wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(v1 + 8);
    }
    a1[1] -= v4;
  }
  return result;
}
