/*
 * XREFs of ??1?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18001E7BC
 * Callers:
 *     ??1CTreeData@@UEAA@XZ @ 0x1800ADD08 (--1CTreeData@@UEAA@XZ.c)
 *     ??1CProjectedShadow@@MEAA@XZ @ 0x18018E98C (--1CProjectedShadow@@MEAA@XZ.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001ECD0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

int __fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::~vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>(
        __int64 *a1)
{
  __int64 v1; // rdi
  __int64 v3; // r8
  __int64 v4; // rsi
  __int64 v5; // rbp
  void *v6; // rdi
  int result; // eax
  bool v8; // zf
  HANDLE ProcessHeap; // rax
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *a1;
  v3 = (a1[1] - *a1) >> 4;
  if ( v3 )
  {
    v4 = 16 * v3;
    v5 = 16 * v3 + v1;
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v10, v1, v3);
    while ( v1 != v5 )
    {
      wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(v1 + 8);
      v1 += 16LL;
    }
    a1[1] -= v4;
  }
  v6 = (void *)*a1;
  result = (_DWORD)a1 + 24;
  v8 = *a1 == (_QWORD)(a1 + 3);
  *a1 = 0LL;
  if ( v8 )
    v6 = 0LL;
  if ( v6 )
  {
    ProcessHeap = GetProcessHeap();
    return HeapFree(ProcessHeap, 0, v6);
  }
  return result;
}
