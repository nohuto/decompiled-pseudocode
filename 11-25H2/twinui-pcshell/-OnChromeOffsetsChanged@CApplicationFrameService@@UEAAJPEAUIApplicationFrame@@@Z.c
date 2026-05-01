/*
 * XREFs of ?OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18006A630
 * Callers:
 *     ?SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x1800696F0 (-SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B04C (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006B080 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$ChainInterfaces.c)
 *     ?InternalAddRef@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1801831E0 (-InternalAddRef@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationFrameService::OnChromeOffsetsChanged(
        CApplicationFrameService *this,
        struct IApplicationFrame *a2)
{
  __int64 v4; // rbx
  __int64 v5; // r9
  unsigned __int64 i; // rcx
  __int64 v7; // r8
  unsigned __int64 j; // rcx
  __int64 v9; // rdi
  int (__fastcall *v10)(__int64, __int64, GUID *, __int64 *); // rbx
  __int64 v11; // rcx
  __int64 *v13; // r8
  __int64 v14; // [rsp+30h] [rbp-40h] BYREF
  int v15; // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-30h] BYREF
  __int64 v17; // [rsp+48h] [rbp-28h] BYREF
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF

  v18 = 0LL;
  if ( (*(int (__fastcall **)(struct IApplicationFrame *, __int128 *))(*(_QWORD *)a2 + 120LL))(a2, &v18) >= 0 )
  {
    v15 = 0;
    if ( (*(int (__fastcall **)(struct IApplicationFrame *, int *))(*(_QWORD *)a2 + 128LL))(a2, &v15) >= 0 )
    {
      v17 = 0LL;
      if ( (*(int (__fastcall **)(struct IApplicationFrame *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v17) >= 0 )
      {
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        v14 = 0LL;
        v4 = v17;
        Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v14);
        v14 = 0LL;
        for ( i = 0LL; i < *((_QWORD *)this + 12); ++i )
        {
          v7 = *((_QWORD *)this + 11) + 8 * i;
          if ( *(_QWORD *)(*(_QWORD *)v7 + 80LL) == v4 )
          {
LABEL_19:
            Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalAddRef(v7, 2147943568LL, v7, v5);
            v14 = *v13;
            v16 = 0LL;
            v9 = *((_QWORD *)this + 15);
            v10 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v9 + 48LL);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
            if ( v10(v9, (v14 + 8) & -(__int64)(v14 != 0), &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v16) >= 0 )
            {
              *(_OWORD *)(v14 + 88) = v18;
              *(_DWORD *)(v14 + 104) = v15;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 488LL))(v16);
            }
            v11 = v16;
            if ( v16 )
            {
              v16 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
            }
            goto LABEL_13;
          }
        }
        for ( j = 0LL; j < *((_QWORD *)this + 8); ++j )
        {
          v7 = *((_QWORD *)this + 7) + 8 * j;
          if ( *(_QWORD *)(*(_QWORD *)v7 + 80LL) == v4 )
            goto LABEL_19;
        }
LABEL_13:
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( v14 )
        {
          v14 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::Release();
        }
      }
    }
  }
  return 0LL;
}
