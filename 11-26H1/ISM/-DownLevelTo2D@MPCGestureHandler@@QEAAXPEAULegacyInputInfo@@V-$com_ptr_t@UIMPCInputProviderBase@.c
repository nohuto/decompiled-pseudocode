/*
 * XREFs of ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BDA84
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B1CCC (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18000DD50 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsInContact@ManipulationInjector@@QEAA_NXZ @ 0x1800B1F9C (-IsInContact@ManipulationInjector@@QEAA_NXZ.c)
 *     ?DownLevelDragTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BD624 (-DownLevelDragTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelHoverTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BD6A4 (-DownLevelHoverTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BD734 (-DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelReleaseTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BD810 (-DownLevelReleaseTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelScrollTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BD918 (-DownLevelScrollTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelSelectTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BDA34 (-DownLevelSelectTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelZoomTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BDC74 (-DownLevelZoomTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800C29B0 (-FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?SetInjectionRect@ManipulationInjector@@QEAAXPEBUtagRECT@@@Z @ 0x1801153D4 (-SetInjectionRect@ManipulationInjector@@QEAAXPEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCGestureHandler::DownLevelTo2D(MPCGestureHandler *this, struct LegacyInputInfo *a2, __int64 *a3)
{
  ManipulationInjector *v6; // rbp
  __int64 v7; // rdx
  _QWORD *v8; // r8
  MPCSpatialGestureRecognizerHandler *v9; // rcx
  ManipulationInjector *v10; // rcx
  unsigned int v11; // eax
  struct tagPOINT v13; // [rsp+40h] [rbp+8h]

  if ( *((_DWORD *)a2 + 224) == *((_DWORD *)this + 228) || *((_DWORD *)a2 + 214) == 2 )
  {
    v6 = (MPCGestureHandler *)((char *)this + 80);
    if ( (ManipulationInjector::IsInContact((MPCGestureHandler *)((char *)this + 80)) || *(_BYTE *)(v7 + 648))
      && (!(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 152LL))(*v8)
       || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a3 + 160LL))(*a3)
       || *((_BYTE *)a2 + 651))
      && (*((_DWORD *)MPCHolographicInputManager::GetInstance() + 912) == 1 || *((_DWORD *)this + 228)) )
    {
      *((_DWORD *)this + 221) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a3 + 368LL))(*a3);
      v9 = (MPCSpatialGestureRecognizerHandler *)*((_QWORD *)this + 113);
      if ( v9 )
        MPCSpatialGestureRecognizerHandler::FeedRecognizer(v9, a2);
      if ( !ManipulationInjector::IsInContact(v6) )
        ManipulationInjector::SetInjectionRect(v10, (const struct tagRECT *)a2 + 55);
      v13.x = (int)*((float *)a2 + 218);
      v13.y = (int)*((float *)a2 + 219);
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a3 + 88LL))(*a3);
      switch ( *((_DWORD *)a2 + 214) )
      {
        case 1:
          MPCGestureHandler::DownLevelPressTo2D(this, a2, v11, v13);
          break;
        case 2:
          MPCGestureHandler::DownLevelReleaseTo2D(this, a2, v11, v13);
          break;
        case 3:
          MPCGestureHandler::DownLevelSelectTo2D(this, a2, v11, v13);
          break;
        case 4:
          MPCGestureHandler::DownLevelHoverTo2D(this, a2, v11, v13);
          break;
        case 5:
          MPCGestureHandler::DownLevelScrollTo2D(this, a2, v11, v13);
          break;
        case 6:
          MPCGestureHandler::DownLevelZoomTo2D(this, a2, v11, v13);
          break;
        case 7:
          MPCGestureHandler::DownLevelDragTo2D(this, (const RECT *)a2, v11, v13);
          break;
      }
    }
  }
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(a3);
}
