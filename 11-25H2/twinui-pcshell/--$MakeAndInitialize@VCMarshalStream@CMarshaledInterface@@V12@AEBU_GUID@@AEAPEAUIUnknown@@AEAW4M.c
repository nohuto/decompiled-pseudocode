/*
 * XREFs of ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@@012@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180051AC0
 * Callers:
 *     ??$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x180050694 (--$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@Y.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0CMarshalStream@CMarshaledInterface@@QEAA@XZ @ 0x18005257C (--0CMarshalStream@CMarshaledInterface@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
        __int64 *a1,
        const IID *a2,
        IUnknown **a3,
        int *a4)
{
  void *v8; // rax
  __int64 v9; // rsi
  int v10; // edi
  IUnknown *v11; // r14
  __int64 v12; // rax
  HRESULT AgileReference; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // [rsp+50h] [rbp+30h] BYREF
  void *v18; // [rsp+58h] [rbp+38h] BYREF
  __int64 v19; // [rsp+60h] [rbp+40h] BYREF

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
  *a1 = 0LL;
  v8 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v18 = v8;
  if ( v8 )
  {
    v9 = CMarshaledInterface::CMarshalStream::CMarshalStream((CMarshaledInterface::CMarshalStream *)v8);
    v19 = v9;
    v18 = 0LL;
    v10 = *a4;
    v11 = *a3;
    *(_DWORD *)(v9 + 40) = GetCurrentThreadId();
    *(_DWORD *)(v9 + 24) = v10;
    if ( v10 == 2 )
    {
      v12 = 0LL;
      v17 = 0LL;
      AgileReference = 0;
      if ( v11 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
        AgileReference = RoGetAgileReference(0LL, a2, v11, &v17);
        v12 = v17;
      }
      v14 = 0LL;
      v17 = 0LL;
      v15 = *(_QWORD *)(v9 + 32);
      *(_QWORD *)(v9 + 32) = v12;
      if ( v15 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        v14 = v17;
      }
      if ( v14 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v9 + 16));
      AgileReference = CoMarshalInterThreadInterfaceInStream(a2, v11, (LPSTREAM *)(v9 + 16));
    }
    if ( AgileReference < 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
      Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v18);
    }
    else
    {
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      *a1 = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      return 0;
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v18);
    return (unsigned int)-2147024882;
  }
  return (unsigned int)AgileReference;
}
