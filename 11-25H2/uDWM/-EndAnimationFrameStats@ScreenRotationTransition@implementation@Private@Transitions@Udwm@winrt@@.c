/*
 * XREFs of ?EndAnimationFrameStats@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D5CB8
 * Callers:
 *     ?StopAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D7020 (-StopAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004911C (-reset@-$com_ptr_t@VIDCompositionAnimationStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180063EA4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ??$_Integral_to_string@GH@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@H@Z @ 0x1800D4680 (--$_Integral_to_string@GH@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@0@H@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::EndAnimationFrameStats(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this)
{
  __int64 *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, __int128 *, _QWORD, _QWORD, const wchar_t *, _QWORD *, int); // rbx
  _QWORD *v6; // r8
  __int128 v7; // [rsp+50h] [rbp-29h] BYREF
  __int64 v8; // [rsp+60h] [rbp-19h]
  int v9; // [rsp+68h] [rbp-11h]
  __int128 v10; // [rsp+70h] [rbp-9h] BYREF
  __int64 v11; // [rsp+80h] [rbp+7h]
  int v12; // [rsp+88h] [rbp+Fh]
  _QWORD v13[4]; // [rsp+90h] [rbp+17h] BYREF

  v2 = (__int64 *)((char *)this + 96);
  v3 = *((_QWORD *)this + 12);
  if ( v3 )
  {
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0;
    if ( (*(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v3 + 88LL))(v3, &v10) >= 0 )
    {
      v4 = *v2;
      v5 = *(void (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD, const wchar_t *, _QWORD *, int))(*(_QWORD *)*v2 + 216LL);
      std::_Integral_to_string<unsigned short,int>((__int64)v13, *((_DWORD *)this + 28));
      v6 = v13;
      if ( v13[3] > 7uLL )
        v6 = (_QWORD *)v13[0];
      v7 = v10;
      v8 = v11;
      v9 = v12;
      v5(v4, &v7, 0LL, 0LL, L"Responsive Screen Rotation", v6, 540);
      std::wstring::~wstring((__int64)v13);
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v2 + 40LL))(*v2, 0LL);
    wil::com_ptr_t<IDCompositionAnimationStats,wil::err_returncode_policy>::reset(v2);
    *((_DWORD *)this + 28) = 0;
  }
}
