/*
 * XREFs of ?RuntimeClassInitialize@CoverWindowAcc@@QEAAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@@Z @ 0x180535AB0
 * Callers:
 *     ??$MakeAndInitialize@VCoverWindowAcc@@V1@AEAPEAUHWND__@@AEAPEBGAEAPEAUIRawElementProviderFragment@@@Details@WRL@Microsoft@@YAJPEAPEAVCoverWindowAcc@@AEAPEAUHWND__@@AEAPEBGAEAPEAUIRawElementProviderFragment@@@Z @ 0x1805352D4 (--$MakeAndInitialize@VCoverWindowAcc@@V1@AEAPEAUHWND__@@AEAPEBGAEAPEAUIRawElementProviderFragmen.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005FE30 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x180082308 (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ??$As@UICoverWindowAcc@@@?$ComPtr@UIRawElementProviderSimple@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICoverWindowAcc@@@WRL@Microsoft@@@Details@12@@Z @ 0x18052FBB8 (--$As@UICoverWindowAcc@@@-$ComPtr@UIRawElementProviderSimple@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@.c)
 *     ?CoverWindowAcc_CreateInstance@@YAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@AEBU_GUID@@PEAPEAX@Z @ 0x1805354EC (-CoverWindowAcc_CreateInstance@@YAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@AEBU_GUID@@P.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CoverWindowAcc::RuntimeClassInitialize(
        CoverWindowAcc *this,
        HWND a2,
        const unsigned __int16 *a3,
        IRawElementProviderSimple *a4)
{
  int v8; // eax
  unsigned int v9; // esi
  int IsThreadRTL; // r13d
  const unsigned __int16 *v12; // r15
  const unsigned __int16 *v13; // rdx
  int Instance; // eax
  __int64 v15; // rdx
  HRESULT v16; // eax
  HRESULT v17; // eax
  HRESULT v18; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  IRawElementProviderSimple *pProvider; // [rsp+60h] [rbp+30h] BYREF

  if ( *((IRawElementProviderSimple **)this + 5) != a4 )
  {
    pProvider = a4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&pProvider);
    pProvider = (IRawElementProviderSimple *)*((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = a4;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pProvider);
  }
  *((_QWORD *)this + 12) = a2;
  v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (__int64)this + 72,
         (__int64)a3,
         0xFFFFFFFFFFFFFFFFuLL);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (int)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
  if ( !*((_QWORD *)this + 5) )
  {
    IsThreadRTL = Mirror_IsThreadRTL();
    pProvider = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pProvider);
    v12 = L"TabletModeCoverWindow_EdgeSwitch";
    v13 = L"TabletModeCoverWindow_EdgeActionCenter";
    if ( !IsThreadRTL )
      v13 = L"TabletModeCoverWindow_EdgeSwitch";
    Instance = CoverWindowAcc_CreateInstance(
                 0LL,
                 v13,
                 (struct IRawElementProviderFragment *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL)),
                 &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c,
                 (void **)&pProvider);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v15 = 92LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
        (const char *)(unsigned int)Instance);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pProvider);
      return v9;
    }
    Instance = Microsoft::WRL::ComPtr<IRawElementProviderSimple>::As<ICoverWindowAcc>(
                 (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&pProvider,
                 (__int64 *)this + 6);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v15 = 93LL;
      goto LABEL_27;
    }
    v16 = UiaRaiseStructureChangedEvent(pProvider, StructureChangeType_ChildAdded, 0LL, 0);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5E,
        (int)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
        (const char *)(unsigned int)v16);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pProvider);
    Instance = CoverWindowAcc_CreateInstance(
                 0LL,
                 L"TabletModeCoverWindow_EdgeTop",
                 (struct IRawElementProviderFragment *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL)),
                 &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c,
                 (void **)&pProvider);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v15 = 96LL;
      goto LABEL_27;
    }
    Instance = Microsoft::WRL::ComPtr<IRawElementProviderSimple>::As<ICoverWindowAcc>(
                 (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&pProvider,
                 (__int64 *)this + 7);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v15 = 97LL;
      goto LABEL_27;
    }
    v17 = UiaRaiseStructureChangedEvent(pProvider, StructureChangeType_ChildAdded, 0LL, 0);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x62,
        (int)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
        (const char *)(unsigned int)v17);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pProvider);
    if ( !IsThreadRTL )
      v12 = L"TabletModeCoverWindow_EdgeActionCenter";
    Instance = CoverWindowAcc_CreateInstance(
                 0LL,
                 v12,
                 (struct IRawElementProviderFragment *)this + 1,
                 &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c,
                 (void **)&pProvider);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v15 = 100LL;
      goto LABEL_27;
    }
    Instance = Microsoft::WRL::ComPtr<IRawElementProviderSimple>::As<ICoverWindowAcc>(
                 (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&pProvider,
                 (__int64 *)this + 8);
    v9 = Instance;
    if ( Instance < 0 )
    {
      v15 = 101LL;
      goto LABEL_27;
    }
    v18 = UiaRaiseStructureChangedEvent(pProvider, StructureChangeType_ChildAdded, 0LL, 0);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x66,
        (int)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
        (const char *)(unsigned int)v18);
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pProvider);
  }
  return 0LL;
}
