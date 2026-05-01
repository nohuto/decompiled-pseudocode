/*
 * XREFs of ?IsGamingAppView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804FEE84
 * Callers:
 *     _lambda_ab57ea0a18b59054314f7ae3775d9ac6_::operator() @ 0x1804F82D0 (_lambda_ab57ea0a18b59054314f7ae3775d9ac6_--operator().c)
 *     ?MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804FF4B8 (-MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ShouldImmediatelyMakeViewPrimary@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180503870 (-ShouldImmediatelyMakeViewPrimary@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002C6F8 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180173FA4 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?IsSamePackageFamilyName@GamingPosturePositioner@@AEAA_NPEBG0@Z @ 0x1804FF044 (-IsSamePackageFamilyName@GamingPosturePositioner@@AEAA_NPEBG0@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59197926@@@details@wil@@QEAA_NXZ @ 0x180504D34 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_59197926@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall GamingPosturePositioner::IsGamingAppView(GamingPosturePositioner *this, struct IApplicationView *a2)
{
  char IsEnabled; // al
  __int64 *v5; // rcx
  __int64 v6; // rax
  int (__fastcall *v7)(struct IApplicationView *, void **); // rbx
  void **v8; // rax
  const unsigned __int16 *v9; // rbx
  const unsigned __int16 *StringRawBuffer; // rax
  GamingPosturePositioner *v11; // rcx
  HSTRING *p_string; // rcx
  __int64 v14; // rax
  int (__fastcall *v15)(struct IApplicationView *, PCWSTR, HSTRING *); // rbx
  PCWSTR v16; // rax
  HSTRING string; // [rsp+40h] [rbp+20h] BYREF
  HSTRING v18; // [rsp+48h] [rbp+28h] BYREF

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_59197926>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_59197926>::GetImpl'::`2'::impl);
  v5 = (__int64 *)*((_QWORD *)this + 30);
  if ( IsEnabled )
  {
    string = 0LL;
    v18 = 0LL;
    v6 = *v5;
    string = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, HSTRING *))(v6 + 64))(v5, &string) >= 0 )
    {
      v7 = *(int (__fastcall **)(struct IApplicationView *, void **))(*(_QWORD *)a2 + 136LL);
      v8 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&v18);
      if ( v7(a2, v8) >= 0 )
      {
        v9 = (const unsigned __int16 *)v18;
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        LOBYTE(v9) = GamingPosturePositioner::IsSamePackageFamilyName(v11, StringRawBuffer, v9);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v18);
        wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
        return (char)v9;
      }
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v18);
    p_string = &string;
  }
  else
  {
    v18 = 0LL;
    v14 = *v5;
    v18 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, HSTRING *))(v14 + 64))(v5, &v18) >= 0 )
    {
      LODWORD(string) = 0;
      v15 = *(int (__fastcall **)(struct IApplicationView *, PCWSTR, HSTRING *))(*(_QWORD *)a2 + 152LL);
      v16 = WindowsGetStringRawBuffer(v18, 0LL);
      if ( v15(a2, v16, &string) >= 0 )
      {
        if ( (_DWORD)string )
        {
          wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v18);
          return 1;
        }
      }
    }
    p_string = &v18;
  }
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(p_string);
  return 0;
}
