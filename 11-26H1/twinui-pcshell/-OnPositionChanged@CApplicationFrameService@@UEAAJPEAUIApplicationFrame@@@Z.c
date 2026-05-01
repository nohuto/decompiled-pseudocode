/*
 * XREFs of ?OnPositionChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180063720
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x18005D0E4 (-InternalAddRef@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180063908 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$ChainInterface.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180063EC0 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180063EF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$ChainInterfaces.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationFrameService::OnPositionChanged(
        CApplicationFrameService *this,
        struct IApplicationFrame *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  unsigned __int64 i; // rdx
  int v6; // ebx
  __int64 *v7; // r8
  __int64 *v8; // r8
  __int64 v9; // rdi
  int (__fastcall *v10)(__int64, __int64, GUID *, __int64 *); // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 j; // rdx
  __int64 v15; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+60h] [rbp+20h] BYREF
  __int64 v17; // [rsp+70h] [rbp+30h] BYREF
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF

  if ( *((_DWORD *)this + 36) )
  {
    v15 = 0LL;
    if ( (*(int (__fastcall **)(struct IApplicationFrame *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v15) >= 0 )
    {
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v17 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
      v3 = v15;
      v17 = 0LL;
      v16 = 0LL;
      Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v16);
      v4 = 0LL;
      v16 = 0LL;
      for ( i = 0LL; ; ++i )
      {
        v6 = -2147023728;
        if ( i >= *((_QWORD *)this + 12) )
          break;
        v7 = (__int64 *)(*((_QWORD *)this + 11) + 8 * i);
        if ( *(_QWORD *)(*v7 + 80) == v3 )
        {
LABEL_6:
          Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalAddRef(v7);
          v16 = *v8;
          v6 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>>(
                 v16,
                 &GUID_7342f6ea_5b75_4f66_8b08_e40f686d2b41,
                 &v17);
          v4 = v16;
          goto LABEL_7;
        }
      }
      for ( j = 0LL; j < *((_QWORD *)this + 8); ++j )
      {
        v7 = (__int64 *)(*((_QWORD *)this + 7) + 8 * j);
        if ( *(_QWORD *)(*v7 + 80) == v3 )
          goto LABEL_6;
        v6 = -2147023728;
      }
LABEL_7:
      if ( v4 )
      {
        v16 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::Release();
      }
      if ( v6 >= 0 )
      {
        v18 = 0LL;
        v9 = *((_QWORD *)this + 15);
        v10 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v9 + 48LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
        if ( v10(v9, v17, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v18) >= 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 488LL))(v18);
        v11 = v18;
        if ( v18 )
        {
          v18 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v12 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
  }
  return 0LL;
}
