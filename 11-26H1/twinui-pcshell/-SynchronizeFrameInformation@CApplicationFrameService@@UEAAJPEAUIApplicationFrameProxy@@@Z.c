/*
 * XREFs of ?SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x180023490
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     CApplicationFrameService::_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___ @ 0x180023574 (CApplicationFrameService--_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180063EC0 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180063EF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$ChainInterfaces.c)
 *     ?OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1800641C0 (-OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationFrameService::SynchronizeFrameInformation(
        CApplicationFrameService *this,
        struct IApplicationFrameProxy *a2)
{
  int FrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed; // ebx
  __int64 v5; // rbx
  struct IApplicationFrame *v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  struct IApplicationFrame *v9; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v8);
  FrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed = CApplicationFrameService::_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___(
                                                            (char *)this - 40,
                                                            a2,
                                                            &v8);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( FrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed >= 0 )
  {
    v9 = 0LL;
    v5 = v8;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v5 + 112);
    v9 = *(struct IApplicationFrame **)(v5 + 112);
    FrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed = CApplicationFrameService::OnChromeOffsetsChanged(
                                                              (CApplicationFrameService *)((char *)this + 8),
                                                              v9);
    v6 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  if ( v8 )
  {
    v8 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::Release();
  }
  return (unsigned int)FrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed;
}
