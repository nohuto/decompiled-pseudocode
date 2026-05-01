/*
 * XREFs of ?JointDivider_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1801A4DA4
 * Callers:
 *     ?RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z @ 0x1801A4C2C (-RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180057770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A4ECC (-InternalRelease@-$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@U?$ChainInterfaces@UIPlaceModeData@@UIDragData@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801A4F00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWR_ea_1801A4F00.c)
 *     ??$MakeAndInitialize@VJointDivider@@V1@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VJointDivider@@@WRL@Microsoft@@@012@AEAPEAUHWND__@@@Z @ 0x1801A4F58 (--$MakeAndInitialize@VJointDivider@@V1@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModeChrome@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18052FCEC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModeChrome@@@De.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall JointDivider_CreateInstance(HWND a1, const struct _GUID *a2, void **a3)
{
  int v4; // eax
  int CanCastTo; // ebx
  char *v6; // rcx
  const struct _GUID *v7; // rcx
  char *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HWND v11; // [rsp+30h] [rbp+8h] BYREF
  char *v12; // [rsp+40h] [rbp+18h] BYREF

  v11 = a1;
  *a3 = 0LL;
  v12 = 0LL;
  v4 = Microsoft::WRL::Details::MakeAndInitialize<JointDivider,JointDivider,HWND__ * &>(&v12, &v11);
  CanCastTo = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15A,
      (int)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
      (const char *)(unsigned int)v4);
    v6 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,Microsoft::WRL::ChainInterfaces<IPlaceModeData,IDragData,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::Release(v6);
    }
    return (unsigned int)CanCastTo;
  }
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_2c36ae3a_298c_4659_b51a_0859453e8d8f, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v8 = v12;
    *a3 = v12;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 8LL))(v8);
    CanCastTo = 0;
    goto LABEL_10;
  }
  if ( InlineIsEqualGUID(v7, &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352) )
  {
    *a3 = v12;
    CanCastTo = 0;
LABEL_8:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    goto LABEL_10;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModeChrome>::CanCastTo(v12 + 24);
  if ( CanCastTo >= 0 )
    goto LABEL_8;
LABEL_10:
  if ( CanCastTo < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15B,
      (int)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
      (const char *)(unsigned int)CanCastTo);
  Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease(&v12);
  return (unsigned int)CanCastTo;
}
