/*
 * XREFs of ?CreateImageSource@AppViewIconFactory@@UEAAJUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIImageSource@Media@Xaml@UI@6@@Z @ 0x1801C7440
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801C7900 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowM.c)
 *     ??$MakeAndInitializeOrThrow@VAppViewIconLoader@@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PEAUIWriteableBitmap@Imaging@Media@Xaml@UI@6@PEAUIApplicationViewIconLoader@@@wil@@YA?AV?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@$$QEAPEAUIApplicationView@@$$QEAPEAUIWriteableBitmap@Imaging@Media@Xaml@UI@8@$$QEAPEAUIApplicationViewIconLoader@@@Z @ 0x1802AA378 (--$MakeAndInitializeOrThrow@VAppViewIconLoader@@AEAUIconProperties@Multitasking@ComposableShell@.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
__int64 __fastcall AppViewIconFactory::CreateImageSource(__int64 a1, __int64 a2, _QWORD *a3)
{
  HRESULT v6; // eax
  int v7; // edx
  unsigned int v8; // r8d
  int ActivationFactory; // eax
  unsigned int v10; // ebx
  __int64 v11; // r8
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64, __int64 *); // rax
  int v13; // eax
  int v14; // eax
  int v16; // [rsp+20h] [rbp-88h]
  int v17; // [rsp+20h] [rbp-88h]
  __int64 v18; // [rsp+30h] [rbp-78h] BYREF
  __int64 v19; // [rsp+38h] [rbp-70h] BYREF
  __int64 v20; // [rsp+40h] [rbp-68h] BYREF
  int v21[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v22; // [rsp+50h] [rbp-58h] BYREF
  __int64 v23; // [rsp+58h] [rbp-50h] BYREF
  HSTRING_HEADER v24; // [rsp+60h] [rbp-48h] BYREF
  HSTRING v25; // [rsp+78h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  *a3 = 0LL;
  v19 = 0LL;
  v25 = 0LL;
  v6 = WindowsCreateStringReference(L"Windows.UI.Xaml.Media.Imaging.WriteableBitmap", 0x2Du, &v24, &v25);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6, v7, v8);
  ActivationFactory = RoGetActivationFactory(v25, &GUID_5563ebb1_3ef2_42c5_9c6d_1cf5dcc041ff, &v19);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5B,
      (int)"pcshell\\private\\shell\\inc\\appviewdatasource\\AppViewIconFactory.h",
      (const char *)(unsigned int)ActivationFactory,
      v16);
  v10 = MulDiv((int)*(float *)a2, *(_DWORD *)(a2 + 24), 96);
  v11 = (unsigned int)MulDiv((int)*(float *)(a2 + 4), *(_DWORD *)(a2 + 24), 96);
  v18 = 0LL;
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v19 + 48LL);
  v18 = 0LL;
  v13 = v12(v19, v10, v11, &v18);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x60,
      (int)"pcshell\\private\\shell\\inc\\appviewdatasource\\AppViewIconFactory.h",
      (const char *)(unsigned int)v13,
      v16);
  *(_QWORD *)v21 = *(_QWORD *)(a1 + 40);
  v22 = v18;
  v23 = *(_QWORD *)(a1 + 32);
  wil::MakeAndInitializeOrThrow<AppViewIconLoader,Windows::Internal::ComposableShell::Multitasking::IconProperties &,IApplicationView *,Windows::UI::Xaml::Media::Imaging::IWriteableBitmap *,IApplicationViewIconLoader *>(
    (unsigned int)&v20,
    a2,
    (unsigned int)&v23,
    (unsigned int)&v22,
    (unsigned int)v21);
  v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v18)(
          v18,
          &GUID_737ef309_ea41_4d96_a71c_98e98efcab07,
          a3);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C89,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
      (const char *)(unsigned int)v14,
      v17);
  if ( v20 )
  {
    v20 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IImmersiveWindowMessageNotification>::Release();
  }
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  return 0LL;
}
