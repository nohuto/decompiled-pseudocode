/*
 * XREFs of ?GetBehaviorFlagsInternal@CImmersiveApp@@UEAAJPEAW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0003@@@Z @ 0x1802FD1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x1800655C0 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x18018C714 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveApp::GetBehaviorFlagsInternal(
        signed __int64 this,
        enum __MIDL___MIDL_itf_shpriv_core_0000_0331_0003 *a2)
{
  int v4; // r14d
  struct IUnknown **v5; // rax
  void *v6; // rbx
  __int64 (__fastcall *v7)(void *, _QWORD, __int64 *); // rdi
  void *v8; // rbx
  int (__fastcall *v9)(void *, signed __int64, __int64 *); // rdi
  void *v11; // [rsp+50h] [rbp+30h] BYREF
  __int64 v12; // [rsp+58h] [rbp+38h] BYREF
  __int64 v13; // [rsp+60h] [rbp+40h] BYREF

  *(_DWORD *)a2 = 0;
  v11 = 0LL;
  if ( *(_BYTE *)(this + 608) )
  {
    v4 = -2147019873;
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
    v5 = (struct IUnknown **)CWRLObjectWithGITSite::SiteUnk(this - 64, &v12);
    v4 = IAMPrivate_QueryObject(
           *v5,
           (const struct _GUID *)&SID_ImmersiveApplicationManagerPriv,
           &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
           &v11);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    if ( v4 >= 0 )
    {
      v12 = 0LL;
      v6 = v11;
      v7 = *(__int64 (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)v11 + 56LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
      v4 = v7(v6, *(_QWORD *)(this + 464), &v12);
      if ( v4 >= 0 )
      {
        *(_DWORD *)a2 = *(_DWORD *)(this + 372);
        v4 = 0;
        if ( *(_BYTE *)(v12 + 33) || *(_BYTE *)(v12 + 35) )
        {
          v13 = 0LL;
          v8 = v11;
          v9 = *(int (__fastcall **)(void *, signed __int64, __int64 *))(*(_QWORD *)v11 + 112LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
          if ( v9(v8, this & -(__int64)(this != 112), &v13) < 0 )
            *(_DWORD *)a2 |= 0x80000000;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
  return (unsigned int)v4;
}
