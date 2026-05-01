/*
 * XREFs of ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x1802E5840
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180086D74 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x1801385A0 (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z @ 0x180138C1C (-GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z.c)
 *     ?_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1801C4534 (-_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x1801EA1D4 (-_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicati.c)
 *     ??$As@UIImmersiveApplication2@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication2@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801F3574 (--$As@UIImmersiveApplication2@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CApplicationManager::CreateNewGlom(
        CApplicationManager *this,
        HWND a2,
        struct IImmersiveApplicationInternal *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4,
        struct IImmersiveApplicationInternal **a5)
{
  struct IImmersiveApplicationInternal **v8; // r15
  __int64 (__fastcall *v9)(struct IImmersiveApplicationInternal *, GUID *, _QWORD); // rbx
  int ImmersiveApp; // ebx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v12)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v13; // r9
  HWND v14; // rdx
  void (__fastcall *v15)(struct IImmersiveApplicationInternal *, struct IImmersiveMonitor **); // rbx
  struct IImmersiveMonitor *v16; // rbx
  int NextGlomId; // eax
  struct IImmersiveApplicationInternal **v18; // rax
  const struct _GUID *v20; // [rsp+30h] [rbp-49h]
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-31h] BYREF
  struct IImmersiveMonitor *v22; // [rsp+50h] [rbp-29h] BYREF
  void *v23; // [rsp+58h] [rbp-21h] BYREF
  __int64 v24; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int16 *v25; // [rsp+68h] [rbp-11h] BYREF
  __int64 v26; // [rsp+70h] [rbp-9h]
  __int64 v27; // [rsp+78h] [rbp-1h]
  unsigned __int64 v28; // [rsp+80h] [rbp+7h] BYREF
  HWND v29; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v30; // [rsp+90h] [rbp+17h] BYREF
  char v31; // [rsp+98h] [rbp+1Fh]
  __int64 v32; // [rsp+E8h] [rbp+6Fh] BYREF

  v8 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  v9 = **(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, _QWORD))a3;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
  ImmersiveApp = v9(a3, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v21);
  if ( ImmersiveApp >= 0 )
  {
    ImmersiveApp = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication2>(&v21, &v24);
    if ( ImmersiveApp >= 0 )
    {
      v28 = -1LL;
      ImmersiveApp = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v24 + 24LL))(v24, &v28);
      if ( ImmersiveApp >= 0 )
      {
        v25 = 0LL;
        v26 = 0LL;
        v27 = 0LL;
        v11 = v21;
        v12 = (*v21)[4];
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v25);
        v26 = -1LL;
        v27 = -1LL;
        ImmersiveApp = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), unsigned __int16 **))v12)(
                         v11,
                         &v25);
        if ( ImmersiveApp >= 0 )
        {
          v32 = 0LL;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
          v29 = a2;
          v30 = 0LL;
          v31 = 0;
          CApplicationManager::_RemoveWindowFromGlom(
            (CApplicationManager *)((char *)this - 240),
            (__int64)&v29,
            a3,
            v13,
            &v32);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
          v23 = 0LL;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
          ImmersiveApp = CApplicationManager::_IWMFromWindow(
                           (CApplicationManager *)((char *)this - 240),
                           v14,
                           &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
                           &v23);
          if ( ImmersiveApp < 0 )
            goto LABEL_9;
          v22 = 0LL;
          v15 = *(void (__fastcall **)(struct IImmersiveApplicationInternal *, struct IImmersiveMonitor **))(*(_QWORD *)a3 + 464LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
          v15(a3, &v22);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
          v16 = v22;
          NextGlomId = CActivationBasedAppAndGlomCollection::GetNextGlomId(
                         (CApplicationManager *)((char *)this + 384),
                         v25);
          ImmersiveApp = CApplicationManager::_CreateImmersiveApp(
                           (CApplicationManager *)((char *)this - 240),
                           (CallerIdentity *)v25,
                           (unsigned __int16 **)v28,
                           NextGlomId,
                           v16,
                           v20,
                           (void **)&a5);
          if ( ImmersiveApp >= 0 )
            ImmersiveApp = CApplicationManager::_AddViewToGlom((__int64)this - 240, 0LL, (__int64)a5, 0, v32);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
          if ( ImmersiveApp < 0 )
LABEL_9:
            CApplicationManager::_AddViewToGlom((__int64)this - 240, 0LL, (__int64)a3, 9, v32);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v25);
        if ( ImmersiveApp >= 0 )
        {
          v18 = a5;
          a5 = 0LL;
          *v8 = (struct IImmersiveApplicationInternal *)v18;
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
  return (unsigned int)ImmersiveApp;
}
