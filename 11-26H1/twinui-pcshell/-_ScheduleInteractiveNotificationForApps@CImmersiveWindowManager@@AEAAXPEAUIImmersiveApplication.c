/*
 * XREFs of ?_ScheduleInteractiveNotificationForApps@CImmersiveWindowManager@@AEAAXPEAUIImmersiveApplicationArray@@W4WINDOW_PRESENTED_OVERRIDE@@@Z @ 0x18015952C
 * Callers:
 *     ?Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmersiveMonitor@@@Z @ 0x1801598A0 (-Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmer.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_497cdd3be1990e13318bbe793e150545___ @ 0x180159FB8 (Windows--Internal--ComTaskPool--QueueTask__lambda_497cdd3be1990e13318bbe793e150545___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveWindowManager::_ScheduleInteractiveNotificationForApps(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, SID *, GUID *, __int64 *); // rbx
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64 *); // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h] BYREF
  int v16; // [rsp+40h] [rbp-10h]
  __int64 v17; // [rsp+70h] [rbp+20h] BYREF
  __int64 v18; // [rsp+88h] [rbp+38h] BYREF

  v18 = 0LL;
  v5 = *(_QWORD *)(a1 + 256);
  v6 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  result = v6(v5, &SID_ImmersiveApplicationListeners, &GUID_747669b9_e53c_46ce_b0d5_6629c216fafc, &v18);
  if ( (int)result >= 0 )
  {
    v17 = 0LL;
    v8 = v18;
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    result = v9(v8, &v17);
    if ( (int)result >= 0 )
    {
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v14 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
      v15 = v17;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
      v16 = (a3 != 2) + 13;
      Windows::Internal::ComTaskPool::QueueTask__lambda_497cdd3be1990e13318bbe793e150545___(
        v11,
        v10,
        LODWORD(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr),
        &v14);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
      result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
      if ( a2 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    }
    v12 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  v13 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return result;
}
