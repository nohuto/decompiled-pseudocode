/*
 * XREFs of ?_FireWindowSnappingEvent@CShellSnapComponent@@AEAAXPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x18013573C
 * Callers:
 *     ?SnapWindow@CShellSnapComponent@@UEAAJPEAUHWND__@@PEBUtagRECT@@K@Z @ 0x18008F6F0 (-SnapWindow@CShellSnapComponent@@UEAAJPEAUHWND__@@PEBUtagRECT@@K@Z.c)
 *     ?_SendAppSnapUnsnapEvent@CShellSnapComponent@@AEAAJPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x180226F0C (-_SendAppSnapUnsnapEvent@CShellSnapComponent@@AEAAJPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18008BF68 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_24ec9e02e088ddd9b3320f3956162b55___ @ 0x1802B4BA0 (Windows--Internal--ComTaskPool--QueueTask__lambda_24ec9e02e088ddd9b3320f3956162b55___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CShellSnapComponent::_FireWindowSnappingEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct IObjectArray *v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  struct IObjectArray *v11; // [rsp+28h] [rbp-18h] BYREF
  int v12; // [rsp+30h] [rbp-10h]
  struct IObjectArray *v13; // [rsp+60h] [rbp+20h] BYREF
  __int64 v14; // [rsp+68h] [rbp+28h]

  v14 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v13 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  result = CGITRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 312), &v13);
  if ( (int)result >= 0 )
  {
    v10 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    v11 = v13;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    v12 = a3;
    Windows::Internal::ComTaskPool::QueueTask__lambda_24ec9e02e088ddd9b3320f3956162b55___(
      v8,
      v7,
      *(unsigned int *)(a1 + 360),
      &v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
    result = Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  }
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    result = ((__int64 (__fastcall *)(struct IObjectArray *))v9->lpVtbl->Release)(v9);
  }
  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  return result;
}
