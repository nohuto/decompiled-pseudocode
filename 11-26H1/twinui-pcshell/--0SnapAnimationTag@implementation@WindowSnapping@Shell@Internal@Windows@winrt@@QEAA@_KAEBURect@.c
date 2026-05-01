/*
 * XREFs of ??0SnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@QEAA@_KAEBURect@Foundation@56@PEAUIPrivilegedPresentationOperations@@@Z @ 0x1805BD800
 * Callers:
 *     ??$make@USnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@AEA_KAEAURect@Foundation@67@PEAUIPrivilegedPresentationOperations@@@winrt@@YA?A_PAEA_KAEAURect@Foundation@Windows@0@$$QEAPEAUIPrivilegedPresentationOperations@@@Z @ 0x1805A6018 (--$make@USnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@AEA_KAEAUR.c)
 * Callees:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ??0?$producers_base@USnapMigrationHandler@@V?$tuple@UIInspectable@Foundation@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x1802A6C74 (--0-$producers_base@USnapMigrationHandler@@V-$tuple@UIInspectable@Foundation@Windows@winrt@@@std.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag *__fastcall winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag::SnapAnimationTag(
        winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag *this,
        __int64 a2,
        const struct winrt::Windows::Foundation::Rect *a3,
        struct IPrivilegedPresentationOperations *a4)
{
  __int64 v7; // r9
  float v8; // xmm1_4
  float v9; // xmm0_4
  _DWORD v11[4]; // [rsp+38h] [rbp-30h] BYREF

  winrt::impl::producers_base<SnapMigrationHandler,std::tuple<winrt::Windows::Foundation::IInspectable>>::producers_base<SnapMigrationHandler,std::tuple<winrt::Windows::Foundation::IInspectable>>();
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>((__int64)this + 8, 1LL);
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag::`vftable';
  *((_QWORD *)this + 3) = v7;
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
    (_QWORD *)this + 4,
    (__int64)a4);
  v8 = *((float *)a3 + 1);
  v9 = *(float *)a3;
  v11[0] = (int)*(float *)a3;
  v11[1] = (int)v8;
  v11[2] = (int)(float)(v9 + *((float *)a3 + 2));
  v11[3] = (int)(float)(v8 + *((float *)a3 + 3));
  (*(void (__fastcall **)(struct IPrivilegedPresentationOperations *, _QWORD, __int64, _DWORD *, int))(*(_QWORD *)a4 + 40LL))(
    a4,
    *((_QWORD *)this + 3),
    31LL,
    v11,
    16);
  return this;
}
