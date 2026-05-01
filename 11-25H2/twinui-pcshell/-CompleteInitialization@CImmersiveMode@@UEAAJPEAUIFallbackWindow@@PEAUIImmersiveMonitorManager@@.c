/*
 * XREFs of ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x1800DB910
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180022890 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?_RegisterForLauncherVisibilityNotifications@CImmersiveMode@@AEAAJXZ @ 0x1800DA400 (-_RegisterForLauncherVisibilityNotifications@CImmersiveMode@@AEAAJXZ.c)
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18017DFA8 (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ??0CMonitorNotificationHelper@@QEAA@PEAUIImmersiveMonitorNotification@@@Z @ 0x1802B250C (--0CMonitorNotificationHelper@@QEAA@PEAUIImmersiveMonitorNotification@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CImmersiveMode::CompleteInitialization(
        CImmersiveMode *this,
        struct IFallbackWindow *a2,
        __int64 (__fastcall ***a3)(struct IImmersiveMonitorManager *, GUID *, __int64 *))
{
  CImmersiveMode *v6; // r14
  struct _RTL_CRITICAL_SECTION *v7; // r12
  int v8; // r13d
  __int64 (__fastcall *v9)(struct IImmersiveMonitorManager *, GUID *, __int64 *); // rbx
  signed int v10; // edi
  CMonitorNotificationHelper *v11; // rax
  CMonitorNotificationHelper *v12; // rax
  CMonitorNotificationHelper *v13; // rbx
  __int64 (__fastcall *v14)(struct IImmersiveMonitorManager *, __int64 *); // rbx
  unsigned int v15; // esi
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, _QWORD, GUID *, struct IImmersiveMonitor **); // rdi
  struct IImmersiveMonitor *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v23; // [rsp+30h] [rbp-28h] BYREF
  __int64 v24[2]; // [rsp+38h] [rbp-20h] BYREF
  int v25; // [rsp+48h] [rbp-10h]
  __int64 v26; // [rsp+A0h] [rbp+48h] BYREF
  int v27; // [rsp+A8h] [rbp+50h] BYREF
  struct IImmersiveMonitor *v28; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v29; // [rsp+B8h] [rbp+60h] BYREF

  v6 = (CImmersiveMode *)((char *)this - 88);
  v7 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 96) & -(__int64)(this != (CImmersiveMode *)88));
  v24[1] = (__int64)v7;
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  v25 = v8;
  if ( *((struct IFallbackWindow **)this + 30) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IFallbackWindow *))(*(_QWORD *)a2 + 8LL))(a2);
    v26 = *((_QWORD *)this + 30);
    *((_QWORD *)this + 30) = a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
  }
  v24[0] = 0LL;
  v9 = **a3;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v24);
  v10 = v9((struct IImmersiveMonitorManager *)a3, &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83, v24);
  if ( v10 >= 0 )
  {
    v23 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    v23 = 0LL;
    v11 = (CMonitorNotificationHelper *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v11 )
    {
      v12 = CMonitorNotificationHelper::CMonitorNotificationHelper(
              v11,
              (struct IImmersiveMonitorNotification *)(((unsigned __int64)this + 48) & -(__int64)(v6 != 0LL)));
      v13 = v12;
      if ( v12 )
      {
        v10 = (**(__int64 (__fastcall ***)(CMonitorNotificationHelper *, GUID *, __int64 *))v12)(
                v12,
                &GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270,
                &v23);
LABEL_11:
        if ( v13 )
          (*(void (__fastcall **)(CMonitorNotificationHelper *))(*(_QWORD *)v13 + 16LL))(v13);
        if ( v10 >= 0 )
        {
          v10 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v24[0] + 24LL))(
                  v24[0],
                  v23,
                  (char *)this + 256);
          if ( v10 >= 0 )
          {
            v10 = CImmersiveMode::_RegisterForLauncherVisibilityNotifications(v6);
            if ( v10 >= 0 )
            {
              v29 = 0LL;
              v14 = (__int64 (__fastcall *)(struct IImmersiveMonitorManager *, __int64 *))(*a3)[14];
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
              v10 = v14((struct IImmersiveMonitorManager *)a3, &v29);
              if ( v10 >= 0 )
              {
                LODWORD(v26) = 0;
                v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 24LL))(v29, &v26);
                if ( v10 >= 0 )
                {
                  v15 = 0;
                  do
                  {
                    if ( v15 >= (unsigned int)v26 )
                      break;
                    v28 = 0LL;
                    v16 = v29;
                    v17 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v29 + 32LL);
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
                    v10 = v17(v16, v15, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v28);
                    if ( v10 >= 0 )
                    {
                      v27 = 0;
                      v10 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)v28 + 48LL))(
                              v28,
                              &v27);
                      if ( v10 >= 0 )
                      {
                        if ( v27 )
                          CImmersiveMode::_RegisterDesktopVisibilitySource(v6, v28);
                      }
                    }
                    v18 = v28;
                    if ( v28 )
                    {
                      v28 = 0LL;
                      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v18 + 16LL))(v18);
                    }
                    ++v15;
                  }
                  while ( v10 >= 0 );
                }
              }
              v19 = v29;
              if ( v29 )
              {
                v29 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
              }
            }
          }
        }
        v20 = v23;
        if ( v23 )
        {
          v23 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
        goto LABEL_31;
      }
    }
    else
    {
      v13 = 0LL;
    }
    v10 = -2147024882;
    goto LABEL_11;
  }
LABEL_31:
  v21 = v24[0];
  if ( v24[0] )
  {
    v24[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return (unsigned int)v10;
}
