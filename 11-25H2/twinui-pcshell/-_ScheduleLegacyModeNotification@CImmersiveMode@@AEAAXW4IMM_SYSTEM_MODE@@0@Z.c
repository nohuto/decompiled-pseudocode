/*
 * XREFs of ?_ScheduleLegacyModeNotification@CImmersiveMode@@AEAAXW4IMM_SYSTEM_MODE@@0@Z @ 0x18017E874
 * Callers:
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x18017E65C (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18003C030 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6b79eb4b576a38d0be641e968c7b0b59___ @ 0x1802A3B54 (Windows--Internal--ComTaskPool--QueueTask__lambda_6b79eb4b576a38d0be641e968c7b0b59___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveMode::_ScheduleLegacyModeNotification(RTL_SRWLOCK *a1, int a2, int a3)
{
  RTL_SRWLOCK *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct IObjectArray *v9; // rcx
  struct IObjectArray *v10; // [rsp+20h] [rbp-20h] BYREF
  int v11; // [rsp+28h] [rbp-18h]
  int v12; // [rsp+2Ch] [rbp-14h]
  int v13; // [rsp+30h] [rbp-10h]
  int v14; // [rsp+60h] [rbp+20h] BYREF
  struct IObjectArray *v15; // [rsp+78h] [rbp+38h] BYREF

  v15 = 0LL;
  v5 = a1 + 30;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  result = AgileRegistrationList::GetCallbackArray(v5, &v15);
  if ( (int)result >= 0 )
  {
    v14 = 0;
    result = ((__int64 (__fastcall *)(struct IObjectArray *, int *))v15->lpVtbl->GetCount)(v15, &v14);
    if ( (int)result >= 0 )
    {
      if ( v14 )
      {
        v10 = v15;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
        v11 = a2;
        v12 = a3;
        v13 = v14;
        Windows::Internal::ComTaskPool::QueueTask__lambda_6b79eb4b576a38d0be641e968c7b0b59___(
          v8,
          v7,
          LODWORD(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr),
          &v10);
        result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
      }
    }
  }
  v9 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    return ((__int64 (__fastcall *)(struct IObjectArray *))v9->lpVtbl->Release)(v9);
  }
  return result;
}
