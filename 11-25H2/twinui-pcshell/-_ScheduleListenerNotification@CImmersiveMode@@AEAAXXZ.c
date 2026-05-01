/*
 * XREFs of ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x180089A08
 * Callers:
 *     ?ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z @ 0x180025220 (-ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z @ 0x180089BF8 (--_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveMode::_ScheduleListenerNotification(CImmersiveMode *this)
{
  ZBAND_NOTIFICATION_DATA *v2; // rdi
  unsigned int v3; // edx
  _QWORD *v4; // rsi
  ZBAND_NOTIFICATION_DATA *v5; // rax
  unsigned int Ptr; // r15d
  __int64 *v7; // rax
  __int64 *v8; // rbx
  _QWORD *v9; // r14
  _QWORD *v10; // rbp
  ZBAND_NOTIFICATION_DATA *v11; // rcx
  __int64 v12[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = (ZBAND_NOTIFICATION_DATA *)*((_QWORD *)this + 42);
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = v2;
    v2 = 0LL;
    v4[1] = v5;
    *v4 = &CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::`vftable';
    *((_DWORD *)v4 + 4) = 0;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
    *((_QWORD *)this + 42) = 0LL;
    v12[0] = (__int64)v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v12);
    Ptr = (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr;
    v7 = (__int64 *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v7;
    if ( v7 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v7);
      v8[2] = 0LL;
      v9 = v4;
      v10 = v4;
      if ( v8 + 2 != v12 )
      {
        v8[2] = (__int64)v4;
        v9 = 0LL;
        v10 = 0LL;
      }
      *v8 = (__int64)&off_1806F4FB8;
    }
    else
    {
      v9 = v4;
      v10 = v4;
      v8 = 0LL;
    }
    SHTaskPoolQueueTask(3LL, 2LL, Ptr);
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64 *))(*v8 + 16))(v8);
      v9 = v10;
    }
    if ( v9 )
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
  }
  else
  {
    v11 = (ZBAND_NOTIFICATION_DATA *)*((_QWORD *)this + 42);
    if ( v11 )
      ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(v11, v3);
  }
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  if ( v2 )
    ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(v2, v3);
}
