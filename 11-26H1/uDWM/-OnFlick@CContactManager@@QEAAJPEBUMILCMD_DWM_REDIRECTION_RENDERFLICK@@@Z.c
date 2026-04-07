/*
 * XREFs of ?OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z @ 0x1800A9028
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180003280 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18005F0C0 (-StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x180085558 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ??$CreateTouchVisual@VCFlickVisual@@@@YAJ_KPEAPEAVCFlickVisual@@@Z @ 0x1800A80E4 (--$CreateTouchVisual@VCFlickVisual@@@@YAJ_KPEAPEAVCFlickVisual@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::OnFlick(struct CTouchVisual **this, POINT *a2)
{
  CContactManager *v4; // rcx
  struct CVisual **v5; // rsi
  int v6; // ebp
  int Touch; // eax
  CContactManager *v8; // rcx
  unsigned int v9; // ebx
  unsigned __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( a2->y > 0x14u )
  {
    v9 = -2147024809;
  }
  else
  {
    v5 = this + 39;
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v4, this[39]);
    this[39] = 0LL;
    v6 = *((_DWORD *)this + 80);
    *((_DWORD *)this + 80) = v6 + 1;
    v11 = 0LL;
    GetDesktopID(1LL, &v11);
    Touch = CreateTouchVisual<CFlickVisual>(v11, this + 39);
    v9 = Touch;
    if ( Touch < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Touch, 0x341u, 0LL);
    }
    else
    {
      CContactManager::AddToTouchNode(v8, v11, *v5);
      CFlickVisual::Start((__int64)*v5, a2 + 1, (unsigned int)a2->y, v6);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v9;
}
