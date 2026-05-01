/*
 * XREFs of ?GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAUCRect@Geometry@@@Z @ 0x180585CBC
 * Callers:
 *     ?HandleDesktopModeSnapping@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SNAP_TO_LOCATION_FLAGS@@PEAUtagRECT@@@Z @ 0x180585F38 (-HandleDesktopModeSnapping@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@W4SN.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1800A51F4 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipCo.c)
 *     ?CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBU_GUID@@PEAPEAX@Z @ 0x1800BC690 (-CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PE.c)
 *     ?s_CreateInstance@CSnappedWindow@@SAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x1800DAFDC (-s_CreateInstance@CSnappedWindow@@SAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBU_GUID@@PEA.c)
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@1@@Z @ 0x1800DB2D8 (-GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMo.c)
 *     ?DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z @ 0x18021AB9C (-DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SnapServiceProvider::GetSnapRectForDesktopMode(
        __int64 a1,
        struct IApplicationView *a2,
        int a3,
        __int64 a4)
{
  __int64 (__fastcall *v8)(struct IApplicationView *, struct IImmersiveMonitor **); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  unsigned int v12; // esi
  int v13; // eax
  int v14; // eax
  const struct _GUID *v15; // r8
  int RectForRegion; // eax
  __int64 v17; // rdx
  LONG top; // ecx
  LONG right; // edx
  LONG bottom; // r8d
  __int64 v22; // [rsp+20h] [rbp-59h]
  __int64 v23; // [rsp+30h] [rbp-49h] BYREF
  struct IImmersiveMonitor *v24; // [rsp+38h] [rbp-41h] BYREF
  void *v25; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v26[4]; // [rsp+48h] [rbp-31h] BYREF
  RECT v27; // [rsp+68h] [rbp-11h] BYREF
  struct tagRECT v28; // [rsp+78h] [rbp-1h] BYREF
  __int128 v29; // [rsp+88h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  v24 = 0LL;
  v8 = *(__int64 (__fastcall **)(struct IApplicationView *, struct IImmersiveMonitor **))(*(_QWORD *)a2 + 80LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
  v9 = v8(a2, &v24);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( a3 == 2 )
    {
      v9 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int64))(*(_QWORD *)v24 + 88LL))(v24, a4);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 192LL;
        goto LABEL_6;
      }
LABEL_21:
      v10 = 0;
      goto LABEL_22;
    }
    v12 = a3 != 0 ? 0xFFFFFFFC : 0;
    v23 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    v13 = CSnappedWindowModel_CreateInstance((__int64)a2, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32), 1, v22, &v23);
    v10 = v13;
    if ( v13 >= 0 )
    {
      memset(v26, 0, sizeof(v26));
      v14 = (*(__int64 (__fastcall **)(__int64, struct IImmersiveMonitor *, _QWORD *))(*(_QWORD *)v23 + 24LL))(
              v23,
              v24,
              v26);
      v10 = v14;
      if ( v14 >= 0 )
      {
        v25 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
        RectForRegion = CSnappedWindow::s_CreateInstance(v24, a2, v15, &v25);
        v10 = RectForRegion;
        if ( RectForRegion >= 0 )
        {
          v28 = 0LL;
          v29 = 0LL;
          RectForRegion = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(*(_QWORD *)v24 + 88LL))(
                            v24,
                            &v29);
          v10 = RectForRegion;
          if ( RectForRegion >= 0 )
          {
            SnapLayoutHelpers::DetermineDefaultSnapRegionRect((__int64)&v27, v12 + 8, (int *)&v29);
            RectForRegion = SnapLayoutHelpers::GetRectForRegion(&v27, 0, v24, (__int64)v26, &v28, 0LL);
            v10 = RectForRegion;
            if ( RectForRegion >= 0 )
            {
              top = v28.top;
              right = v28.right;
              bottom = v28.bottom;
              *(_DWORD *)a4 = v28.left;
              *(_DWORD *)(a4 + 4) = top;
              *(_DWORD *)(a4 + 8) = right;
              *(_DWORD *)(a4 + 12) = bottom;
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
              CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)v26);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
              goto LABEL_21;
            }
            v17 = 218LL;
          }
          else
          {
            v17 = 215LL;
          }
        }
        else
        {
          v17 = 210LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
          (const char *)(unsigned int)RectForRegion);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xCF,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
          (const char *)(unsigned int)v14);
      }
      CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)v26);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCC,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
        (const char *)(unsigned int)v13);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    goto LABEL_22;
  }
  v11 = 188LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapserviceprovider.cpp",
    (const char *)(unsigned int)v9);
LABEL_22:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
  return v10;
}
