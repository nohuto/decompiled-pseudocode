/*
 * XREFs of ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801703D8
 * Callers:
 *     ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x180059DB0 (-CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@.c)
 *     ?DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18016FCD0 (-DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_MODE@@@Z @ 0x180170784 (--0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_M.c)
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x180170AF8 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@$0PPPPPPPO@V?$CTPolicyLocalMem@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@@@@@QEAAJ_K0@Z @ 0x180170DE8 (-_EnsureCapacity@-$CTSimpleArray@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@$0PPPPPPPO@V.c)
 *     ??0CDesktopVisibilityChangeHelper@@QEAA@PEAUIDesktopVisibilityChangesNotification@@@Z @ 0x18029B9D4 (--0CDesktopVisibilityChangeHelper@@QEAA@PEAUIDesktopVisibilityChangesNotification@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z @ 0x1802EB3B8 (--_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z.c)
 *     WPP_SF_ddddd @ 0x1802EBB80 (WPP_SF_ddddd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CImmersiveMode::_RegisterDesktopVisibilitySource(CImmersiveMode *this, IUnknown *a2)
{
  HRESULT v4; // edi
  unsigned __int64 i; // rbx
  CDesktopVisibilityChangeHelper *v6; // rax
  CDesktopVisibilityChangeHelper *v7; // rax
  CDesktopVisibilityChangeHelper *v8; // rbx
  void *v9; // rax
  __int64 v10; // r9
  CImmersiveMode::CDesktopVisibilityChangeSource *v11; // rbx
  __int64 v12; // rdx
  CImmersiveMode::CDesktopVisibilityChangeSource **v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  void *v17; // rcx
  int v19; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-3Ch] BYREF
  void *ppvOut; // [rsp+48h] [rbp-38h] BYREF
  __int64 v22; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v23[2]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v24; // [rsp+68h] [rbp-18h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v4 = IUnknown_QueryService(
         a2,
         (const GUID *const)&SID_PerMonitorDesktopVisibilityService,
         &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84,
         &ppvOut);
  if ( v4 >= 0 )
  {
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    for ( i = 0LL; i < *((_QWORD *)this + 53); ++i )
    {
      if ( SHIsSameObject(**(struct IUnknown ***)(*((_QWORD *)this + 52) + 8 * i), a2) )
        v4 = -2147467260;
    }
    ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v4 >= 0 )
    {
      v22 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
      v22 = 0LL;
      v6 = (CDesktopVisibilityChangeHelper *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v6 )
      {
        v7 = CDesktopVisibilityChangeHelper::CDesktopVisibilityChangeHelper(
               v6,
               (struct IDesktopVisibilityChangesNotification *)(((unsigned __int64)this + 152) & -(__int64)(this != 0LL)));
        v8 = v7;
        if ( v7 )
        {
          v4 = (**(__int64 (__fastcall ***)(CDesktopVisibilityChangeHelper *, GUID *, __int64 *))v7)(
                 v7,
                 &GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84,
                 &v22);
LABEL_12:
          if ( v8 )
            (*(void (__fastcall **)(CDesktopVisibilityChangeHelper *))(*(_QWORD *)v8 + 16LL))(v8);
          if ( v4 >= 0 )
          {
            v20 = 0;
            v4 = (*(__int64 (__fastcall **)(void *, __int64, __int64, unsigned int *))(*(_QWORD *)ppvOut + 32LL))(
                   ppvOut,
                   1LL,
                   v22,
                   &v20);
            if ( v4 < 0 )
              goto LABEL_36;
            v19 = 0;
            v4 = (*(__int64 (__fastcall **)(void *, _QWORD, int *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, 0LL, &v19);
            if ( v4 < 0 )
              goto LABEL_36;
            AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
            v9 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
            v23[0] = v9;
            if ( v9 )
            {
              LOBYTE(v10) = v19 != 0;
              v11 = (CImmersiveMode::CDesktopVisibilityChangeSource *)CImmersiveMode::CDesktopVisibilityChangeSource::CDesktopVisibilityChangeSource(
                                                                        v9,
                                                                        a2,
                                                                        v20,
                                                                        v10,
                                                                        *((_QWORD *)this + 46),
                                                                        *((_DWORD *)this + 80));
            }
            else
            {
              v11 = 0LL;
            }
            if ( v11 )
            {
              v4 = 0;
              v12 = *((_QWORD *)this + 53);
              if ( v12 != *((_QWORD *)this + 55)
                || (v4 = CTSimpleArray<CImmersiveMode::CDesktopVisibilityChangeSource *,4294967294,CTPolicyLocalMem<CImmersiveMode::CDesktopVisibilityChangeSource *>,CSimpleArrayStandardCompareHelper<CImmersiveMode::CDesktopVisibilityChangeSource *>,CSimpleArrayStandardMergeHelper<CImmersiveMode::CDesktopVisibilityChangeSource *>>::_EnsureCapacity(
                           (char *)this + 416,
                           v12 + 1),
                    v4 >= 0) )
              {
                v13 = (CImmersiveMode::CDesktopVisibilityChangeSource **)(*((_QWORD *)this + 52)
                                                                        + 8 * (*((_QWORD *)this + 53))++);
                if ( v13 )
                  *v13 = v11;
              }
            }
            else
            {
              v4 = -2147024882;
            }
            ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
            if ( v4 >= 0 )
            {
              v11 = 0LL;
              v23[1] = 0LL;
              CImmersiveMode::_HandleDesktopVisibilityChange(this, (struct IImmersiveMonitor *)a2, v19 != 0, 1);
              if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0 )
              {
                LODWORD(v23[0]) = 0;
                v24 = 0LL;
                if ( ((int (__fastcall *)(IUnknown *, __int128 *))a2->lpVtbl[3].QueryInterface)(a2, &v24) >= 0
                  && ((int (__fastcall *)(IUnknown *, _QWORD *))a2->lpVtbl[1].QueryInterface)(a2, v23) >= 0
                  && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
                  && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
                {
                  WPP_SF_ddddd(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
                    v14,
                    v15,
                    (unsigned int)v24,
                    DWORD1(v24),
                    DWORD2(v24),
                    HIDWORD(v24),
                    v23[0]);
                }
              }
            }
            if ( v11 )
              CImmersiveMode::CDesktopVisibilityChangeSource::`scalar deleting destructor'(v11, v14);
            if ( v4 < 0 )
            {
LABEL_36:
              if ( v20 )
                (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 40LL))(ppvOut);
            }
          }
          v16 = v22;
          if ( v22 )
          {
            v22 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          }
          goto LABEL_40;
        }
      }
      else
      {
        v8 = 0LL;
      }
      v4 = -2147024882;
      goto LABEL_12;
    }
  }
LABEL_40:
  v17 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (unsigned int)v4;
}
