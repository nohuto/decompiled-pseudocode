/*
 * XREFs of ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x18004C5AC
 * Callers:
 *     ?ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z @ 0x180048810 (-ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z @ 0x18006499C (--_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveMode::_ScheduleListenerNotification(CImmersiveMode *this)
{
  ZBAND_NOTIFICATION_DATA *v2; // rdi
  ZBAND_NOTIFICATION_DATA *v3; // rsi
  _QWORD *v4; // rax
  unsigned int v5; // edx
  __int64 v6; // r14
  __int64 v7; // rdi
  unsigned int Ptr; // ebp
  __int64 *v9; // rax
  __int64 *v10; // rbx
  ZBAND_NOTIFICATION_DATA *v11; // rcx
  __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = (ZBAND_NOTIFICATION_DATA *)*((_QWORD *)this + 42);
  v3 = v2;
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = (__int64)v4;
  if ( v4 )
  {
    v3 = 0LL;
    v4[1] = v2;
    *v4 = &CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::`vftable';
    *((_DWORD *)v4 + 4) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    *((_QWORD *)this + 42) = 0LL;
    v7 = v6;
    v12[0] = v6;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v12);
    Ptr = (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr;
    v9 = (__int64 *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v9);
      v10[2] = 0LL;
      if ( v10 + 2 != v12 )
      {
        v10[2] = v6;
        v7 = 0LL;
      }
      *v10 = (__int64)&off_18070CEA8;
    }
    else
    {
      v10 = 0LL;
    }
    SHTaskPoolQueueTask(3LL, 2LL, Ptr);
    if ( v10 )
      (*(void (__fastcall **)(__int64 *))(*v10 + 16))(v10);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    v11 = (ZBAND_NOTIFICATION_DATA *)*((_QWORD *)this + 42);
    if ( v11 )
      ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(v11, v5);
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v3 )
    ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(v3, v5);
}
