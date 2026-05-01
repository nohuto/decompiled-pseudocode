/*
 * XREFs of ?_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18012A870
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___::operator() @ 0x1802DDFA0 (CDelayIAMOperations--CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@PEA_N@Z @ 0x180047484 (-_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV-$CCoSimpleArray@V-$ComPtr@UIImmersiveMoni.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1800CA0DC (-RemoveAll@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipCo.c)
 *     ??$_Add@$$QEAV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@PEA_K@Z @ 0x18012AAF4 (--$_Add@$$QEAV-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPtr@UIImmersiv.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18012B5A8 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x18012B720 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180161968 (--$FindEx@VComPtrCompareHelper@@@-$CTSimpleFixedArray@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CApplicationManager::_PerformDesktopActivationCallouts(
        CApplicationManager *a1,
        struct IObjectArray *a2,
        char a3)
{
  int v6; // esi
  unsigned int i; // r15d
  __int64 v8; // rdi
  int (__fastcall *v9)(__int64, _QWORD, struct ISyncIAMEventHandler **); // rbx
  __int64 v10; // rdx
  char v11; // bl
  int SingleMonitorObjectArray; // eax
  struct IObjectArray *v13; // rcx
  struct ISyncIAMEventHandler *v14; // rcx
  struct ISyncIAMEventHandler *v15; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v16[8]; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v17[4]; // [rsp+50h] [rbp-20h] BYREF
  struct IObjectArray *v18; // [rsp+B8h] [rbp+48h] BYREF
  unsigned int v19; // [rsp+C0h] [rbp+50h] BYREF
  struct ISyncIAMEventHandler *v20; // [rsp+C8h] [rbp+58h] BYREF

  v6 = 0;
  LODWORD(v18) = 0;
  memset(v17, 0, sizeof(v17));
  if ( !a2
    || (v18 = a2,
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18),
        CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::_Add<Microsoft::WRL::ComPtr<IImmersiveMonitor> &&>(
          v17,
          &v18),
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18),
        (a3 & 0x12) != 0) )
  {
    v19 = 0;
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)a1 + 70) + 32LL))(*((_QWORD *)a1 + 70), &v19) >= 0 )
    {
      for ( i = 0; i < v19; ++i )
      {
        v20 = 0LL;
        v8 = *((_QWORD *)a1 + 70);
        v9 = *(int (__fastcall **)(__int64, _QWORD, struct ISyncIAMEventHandler **))(*(_QWORD *)v8 + 40LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
        if ( v9(v8, i, &v20) < 0
          || (v15 = v20,
              Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15),
              v6 |= 1u,
              LODWORD(v18) = v6,
              v11 = 1,
              (unsigned int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
                              v17,
                              v10,
                              &v15,
                              v16) != -2147319765) )
        {
          v11 = 0;
        }
        if ( (v6 & 1) != 0 )
        {
          v6 &= ~1u;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
        }
        if ( v11 )
        {
          v18 = (struct IObjectArray *)v20;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
          CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::_Add<Microsoft::WRL::ComPtr<IImmersiveMonitor> &&>(
            v17,
            &v18);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
      }
    }
  }
  if ( (a3 & 1) != 0 )
  {
    v20 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
    if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(a1, &v20) >= 0 )
    {
      v18 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
      if ( a2 )
        SingleMonitorObjectArray = CApplicationManager::_GetSingleMonitorObjectArray(
                                     a1,
                                     (struct IImmersiveMonitor *)a2,
                                     &v18);
      else
        SingleMonitorObjectArray = CApplicationManager::_GetMonitorObjectArray(a1, v17, &v18, &v19);
      if ( SingleMonitorObjectArray >= 0 )
      {
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, unsigned __int64, _QWORD, int, int, int))(*(_QWORD *)v20 + 24LL))(
          v20,
          v18,
          ((unsigned __int64)a1 + 248) & -(__int64)(a1 != 0LL),
          0LL,
          1,
          (a3 & 8) != 0 ? 4 : 1,
          0xFFFF);
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      }
      v13 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        ((void (__fastcall *)(struct IObjectArray *))v13->lpVtbl->Release)(v13);
      }
    }
    v14 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)v17);
}
