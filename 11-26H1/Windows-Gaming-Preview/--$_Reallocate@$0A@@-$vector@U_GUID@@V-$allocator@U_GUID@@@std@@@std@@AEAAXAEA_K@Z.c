/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAXAEA_K@Z @ 0x180013EB8
 * Callers:
 *     ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x18001454C (-DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV-$function@$$A6AJU_GUID@.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000C6F4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x180011100 (-__scrt_throw_std_bad_array_new_length@@YAXXZ.c)
 *     ??1_Simple_reallocation_guard@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@QEAA@XZ @ 0x180014234 (--1_Simple_reallocation_guard@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@QEAA@XZ.c)
 *     memmove_0 @ 0x18004337C (memmove_0.c)
 */

__int64 __fastcall std::vector<_GUID>::_Reallocate<0>(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  _QWORD *v5; // rbp
  size_t v6; // r8
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rsi
  const struct std::nothrow_t *v10; // rdx
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a1[1] - *a1;
  if ( *a2 > 0xFFFFFFFFFFFFFFFuLL )
    __scrt_throw_std_bad_array_new_length();
  v5 = std::_Allocate<16,std::_Default_allocate_traits>(16LL * *a2);
  v6 = a1[1] - *a1;
  v7 = (_QWORD *)*a1;
  v12[2] = *a2;
  v12[0] = a1;
  memmove_0(v5, v7, v6);
  v8 = (_QWORD *)*a1;
  v9 = *a2;
  v12[1] = 0LL;
  if ( v8 )
  {
    v10 = (const struct std::nothrow_t *)((a1[2] - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned __int64)v10 >= 0x1000 )
    {
      v10 = (const struct std::nothrow_t *)((char *)v10 + 39);
      if ( (unsigned __int64)v8 - *(v8 - 1) - 8 > 0x1F )
        _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
      v8 = (_QWORD *)*(v8 - 1);
    }
    operator delete(v8, v10);
  }
  *a1 = v5;
  a1[1] = (char *)v5 + (v3 & 0xFFFFFFFFFFFFFFF0uLL);
  a1[2] = &v5[2 * v9];
  return std::vector<_GUID>::_Simple_reallocation_guard::~_Simple_reallocation_guard(v12);
}
