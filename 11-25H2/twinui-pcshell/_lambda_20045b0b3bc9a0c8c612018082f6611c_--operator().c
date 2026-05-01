/*
 * XREFs of _lambda_20045b0b3bc9a0c8c612018082f6611c_::operator() @ 0x18022AD10
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___::operator() @ 0x1802E47E0 (CDelayIAMOperations--CDelayedOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x1800881A4 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x180088CBC (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18018B7B8 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_GetForegroundApplicationNoLock@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18022AF08 (-_GetForegroundApplicationNoLock@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall lambda_20045b0b3bc9a0c8c612018082f6611c_::operator()(__int64 a1)
{
  CApplicationManager *v2; // rbx
  __int64 v3; // rbx
  void (__fastcall *v4)(__int64, struct IUnknown **); // rdi
  CApplicationManager *v5; // rbx
  struct IObjectArray *v6; // rbx
  HRESULT (__stdcall *GetAt)(IObjectArray *, UINT, const IID *const, void **); // rdi
  CApplicationManager *v8; // rbx
  struct IImmersiveApplication *v9; // rcx
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF
  struct IUnknown *v11; // [rsp+48h] [rbp-20h] BYREF
  __int64 v12[3]; // [rsp+50h] [rbp-18h] BYREF
  int v13; // [rsp+90h] [rbp+28h] BYREF
  struct IImmersiveApplication *v14; // [rsp+98h] [rbp+30h] BYREF
  struct IObjectArray *v15; // [rsp+A0h] [rbp+38h] BYREF
  struct ISyncIAMEventHandler *v16; // [rsp+A8h] [rbp+40h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v14 = 0LL;
  v2 = *(CApplicationManager **)a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
  if ( (int)CApplicationManager::_GetForegroundApplicationNoLock(v2, &v14) >= 0 )
  {
    v12[0] = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v14,
                v12) >= 0 )
    {
      v11 = 0LL;
      v3 = v12[0];
      v4 = *(void (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v12[0] + 464LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
      v4(v3, &v11);
      if ( SHIsSameObject(v11, *(struct IUnknown **)(a1 + 8)) )
      {
        v15 = 0LL;
        v10 = 0LL;
        v13 = 0;
        v5 = *(CApplicationManager **)a1;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
        if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(v5, 0LL, &v15) >= 0 )
        {
          v6 = v15;
          GetAt = v15->lpVtbl->GetAt;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
          if ( ((int (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, __int64 *))GetAt)(
                 v6,
                 0LL,
                 &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                 &v10) >= 0
            && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 48LL))(v10, &v13) >= 0
            && v13 )
          {
            v16 = 0LL;
            v8 = *(CApplicationManager **)a1;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
            if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(v8, &v16) >= 0 )
              (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, __int64, struct IImmersiveApplication *, int, int, int))(*(_QWORD *)v16 + 24LL))(
                v16,
                v15,
                (*(_QWORD *)a1 + 248LL) & -(__int64)(*(_QWORD *)a1 != 0LL),
                v14,
                8,
                8,
                0xFFFF);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
          }
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v12);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v9 + 16LL))(v9);
  }
}
