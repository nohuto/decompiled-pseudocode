/*
 * XREFs of std::_Global_new_std::_Func_impl_no_alloc__lambda_7099901f832ab090231de188016256f4__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension___lambda_7099901f832ab090231de188016256f4___ @ 0x1805C4A10
 * Callers:
 *     ?StartSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x1805D74C0 (-StartSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     _std::_Global_new_std::_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void___lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c____::_2_::_Guard_type::__Guard_type @ 0x1805CC44C (_std--_Global_new_std--_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void___lamb.c)
 */

_QWORD *__fastcall std::_Global_new_std::_Func_impl_no_alloc__lambda_7099901f832ab090231de188016256f4__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension___lambda_7099901f832ab090231de188016256f4___(
        __int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = operator new(0x40uLL);
  *v2 = &off_1807596D0;
  v2[1] = *(_QWORD *)a1;
  v2[2] = *(_QWORD *)(a1 + 8);
  std::wstring::wstring((__int64)(v2 + 3), a1 + 16);
  *((_BYTE *)v2 + 56) = *(_BYTE *)(a1 + 48);
  v4 = 0LL;
  std::_Global_new_std::_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void___lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c____::_2_::_Guard_type::__Guard_type(&v4);
  return v2;
}
