/*
 * XREFs of ?_AddProjectionBorderForAllDisplays@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A3EA8
 * Callers:
 *     ?StartDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A1DD0 (-StartDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StartFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A1F90 (-StartFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?UpdateDisplayCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800A3490 (-UpdateDisplayCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z.c)
 *     ?UpdateFilteredDisplayCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800A3580 (-UpdateFilteredDisplayCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z.c)
 *     ?_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A66B4 (-_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x1800645B8 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A3FBC (-_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_EN.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CCaptureManager::_AddProjectionBorderForAllDisplays(
        CCaptureManager *this,
        struct CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY *a2)
{
  __int64 v3; // rcx
  int AllDisplaysNoRef; // eax
  CCaptureManager *v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 v8; // rsi
  int v9; // eax
  int v10; // edi
  int v12[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]
  unsigned int v14; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 18);
  if ( !v3 )
  {
LABEL_11:
    v6 = 0;
    goto LABEL_12;
  }
  *(_OWORD *)v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(v3, (__int64)v12);
  v6 = AllDisplaysNoRef;
  if ( AllDisplaysNoRef >= 0 )
  {
    v7 = 0LL;
    v8 = *(_QWORD *)v12;
    while ( (unsigned int)v7 < v14 )
    {
      v9 = CCaptureManager::_AddProjectionBorderForDisplay(v5, *(HMONITOR *)(*(_QWORD *)(v8 + 8 * v7) + 16LL), a2);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7A6,
          (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
          (const char *)(unsigned int)v9);
        v6 = v10;
        goto LABEL_9;
      }
      v7 = (unsigned int)(v7 + 1);
    }
    CBitmapSourceArray::~CBitmapSourceArray((void **)v12);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7A3,
    (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)(unsigned int)AllDisplaysNoRef);
LABEL_9:
  CBitmapSourceArray::~CBitmapSourceArray((void **)v12);
LABEL_12:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v6;
}
