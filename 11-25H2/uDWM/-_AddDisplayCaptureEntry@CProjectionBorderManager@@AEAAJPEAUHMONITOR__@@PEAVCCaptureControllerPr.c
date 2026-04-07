/*
 * XREFs of ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800C3078
 * Callers:
 *     ?StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C0C30 (-StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@.c)
 *     ?StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C1010 (-StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_T.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x180011E44 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x18008EBFC (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPL.c)
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x180093F9C (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEA.c)
 *     ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x180096B38 (-_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800979D0 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderMan.c)
 *     ??1CAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@QEAA@XZ @ 0x180099D78 (--1CAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@QEAA@XZ.c)
 *     ??4?$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@Z @ 0x1800BDC34 (--4-$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@.c)
 *     ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x1800C3B24 (-_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ.c)
 *     ?_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C43D0 (-_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCC.c)
 *     ?_UpdateCaptureControllerContentOffsetFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C4848 (-_UpdateCaptureControllerContentOffsetFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C4B74 (-_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::_AddDisplayCaptureEntry(
        struct _RTL_GENERIC_TABLE *this,
        HMONITOR a2,
        struct CCaptureControllerProxy *a3,
        const struct DWM_CAPTURE_TOKEN *a4,
        bool a5)
{
  unsigned int v9; // ebx
  int v10; // r9d
  struct CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *inserted; // rbx
  CProjectionBorderManager *v12; // rcx
  int updated; // eax
  CProjectionBorderManager *v14; // rcx
  CProjectionBorderManager *v15; // rcx
  CProjectionBorderManager *v16; // rcx
  unsigned int v18; // [rsp+20h] [rbp-50h]
  __int64 Buffer; // [rsp+30h] [rbp-40h] BYREF
  CBaseObject *v20; // [rsp+38h] [rbp-38h] BYREF
  HMONITOR v21; // [rsp+40h] [rbp-30h]
  _BYTE v22[33]; // [rsp+48h] [rbp-28h] BYREF
  int v23; // [rsp+69h] [rbp-7h]
  __int16 v24; // [rsp+6Dh] [rbp-3h]
  char v25; // [rsp+6Fh] [rbp-1h]

  Buffer = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  CBitmapSourceArray::CBitmapSourceArray((CBitmapSourceArray *)v22);
  v22[32] = 1;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::FindElement() )
  {
    v9 = -2147418113;
    v18 = 1935;
LABEL_3:
    v10 = v9;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, v18, 0LL);
    goto LABEL_22;
  }
  Buffer = *(_QWORD *)a4;
  v21 = a2;
  Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=(&v20, a3);
  inserted = (struct CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *)RtlInsertElementGenericTable(
                                                                             this + 7,
                                                                             &Buffer,
                                                                             0x40u,
                                                                             0LL);
  if ( !inserted )
  {
    v9 = -2147024882;
    v18 = 1942;
    goto LABEL_3;
  }
  CProjectionBorderManager::_EnsureCursorStateForCapture((CProjectionBorderManager *)this);
  if ( a5 )
  {
    if ( a2 )
    {
      updated = CProjectionBorderManager::_AddProjectionBorderForDisplay(v12, a2, inserted);
      v9 = updated;
      if ( updated < 0 )
      {
        v18 = 1949;
LABEL_20:
        v10 = updated;
        goto LABEL_21;
      }
    }
    else
    {
      updated = CProjectionBorderManager::_AddProjectionBorderForAllDisplays(v12, inserted);
      v9 = updated;
      if ( updated < 0 )
      {
        v18 = 1953;
        goto LABEL_20;
      }
    }
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerTransformFromDisplay(v12, a2, a3);
  v9 = updated;
  if ( updated < 0 )
  {
    v18 = 1957;
    goto LABEL_20;
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerContentOffsetFromDisplay(v14, a2, a3);
  v9 = updated;
  if ( updated < 0 )
  {
    v18 = 1958;
    goto LABEL_20;
  }
  updated = CProjectionBorderManager::_SendBoundsToCaptureControllerFromDisplay(v15, a2, a3);
  v9 = updated;
  if ( updated < 0 )
  {
    v18 = 1959;
    goto LABEL_20;
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerDefaultSDRBoostFromDisplay(v16, a2, a3);
  v9 = updated;
  if ( updated < 0 )
  {
    v18 = 1960;
    goto LABEL_20;
  }
LABEL_22:
  CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY::~CAPTURE_DISPLAY_MAP_ENTRY((CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *)&Buffer);
  return v9;
}
