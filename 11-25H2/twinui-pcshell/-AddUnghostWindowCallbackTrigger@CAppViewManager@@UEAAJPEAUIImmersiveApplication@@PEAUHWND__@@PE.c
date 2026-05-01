/*
 * XREFs of ?AddUnghostWindowCallbackTrigger@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUHWND__@@PEAUIAsyncCallback@@@Z @ 0x1802F5F30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801D54D0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x1802FA824 (-_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::AddUnghostWindowCallbackTrigger(
        CAppViewManager *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplication *, GUID *, __int64 *),
        HWND a3,
        struct IAsyncCallback *a4)
{
  __int64 (__fastcall *v8)(struct IImmersiveApplication *, GUID *, __int64 *); // rbx
  int v9; // ebx
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  RTL_SRWLOCK *v12[4]; // [rsp+38h] [rbp-20h] BYREF
  int v13; // [rsp+68h] [rbp+10h] BYREF

  CIAMGlobals::AcquireExclusive((__int64)this, v12);
  v11 = 0LL;
  v8 = **a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  v9 = v8((struct IImmersiveApplication *)a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v11);
  if ( v9 >= 0 )
  {
    v9 = -2147019873;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 472LL))(v11) )
    {
      v13 = 0;
      v9 = CAppViewManager::_AddPresentedWindowCallbackTrigger((char *)this - 40, 1LL, v11, a3, a4, &v13);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v12);
  return (unsigned int)v9;
}
