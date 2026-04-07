/*
 * XREFs of ?_AddFilteredDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_NPEAVCContainerVisualProxy@@@Z @ 0x1800C325C
 * Callers:
 *     ?StartFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C0E20 (-StartFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180009100 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x180011E44 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x18008EBFC (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPL.c)
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x180093F9C (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEA.c)
 *     ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x180096B38 (-_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY.c)
 *     ??1CAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@QEAA@XZ @ 0x1800AC058 (--1CAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@QEAA@XZ.c)
 *     ??4?$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@Z @ 0x1800BDC34 (--4-$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800BE190 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjection.c)
 *     ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x1800C3B24 (-_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ.c)
 *     ?_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C43D0 (-_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCC.c)
 *     ?_UpdateCaptureControllerContentOffsetFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C4848 (-_UpdateCaptureControllerContentOffsetFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C4B74 (-_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::_AddFilteredDisplayCaptureEntry(
        struct _RTL_GENERIC_TABLE *this,
        HMONITOR a2,
        struct CCaptureControllerProxy *a3,
        const struct DWM_CAPTURE_TOKEN *a4,
        bool a5,
        struct CContainerVisualProxy *a6)
{
  __int64 v10; // rdx
  int v11; // r8d
  unsigned int v12; // ebx
  int v13; // r9d
  CBaseObject *v14; // rax
  struct CContainerVisualProxy *v15; // rcx
  struct CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *inserted; // rbx
  CProjectionBorderManager *v17; // rcx
  int updated; // eax
  CProjectionBorderManager *v19; // rcx
  CProjectionBorderManager *v20; // rcx
  CProjectionBorderManager *v21; // rcx
  CProjectionBorderManager *v22; // rcx
  unsigned int v24; // [rsp+20h] [rbp-79h]
  __int64 Buffer; // [rsp+30h] [rbp-69h] BYREF
  CBaseObject *v26; // [rsp+38h] [rbp-61h] BYREF
  HMONITOR v27; // [rsp+40h] [rbp-59h]
  _BYTE v28[33]; // [rsp+48h] [rbp-51h] BYREF
  int v29; // [rsp+69h] [rbp-30h]
  __int16 v30; // [rsp+6Dh] [rbp-2Ch]
  char v31; // [rsp+6Fh] [rbp-2Ah]
  struct CContainerVisualProxy *v32; // [rsp+70h] [rbp-29h]
  _BYTE v33[32]; // [rsp+78h] [rbp-21h] BYREF
  _BYTE v34[40]; // [rsp+98h] [rbp-1h] BYREF
  CBaseObject *v35; // [rsp+F0h] [rbp+57h] BYREF

  Buffer = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  CBitmapSourceArray::CBitmapSourceArray((CBitmapSourceArray *)v28);
  v28[32] = 1;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0LL;
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)v33, 0LL, 0);
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)v34, v10, v11);
  if ( CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>::FindElement() )
  {
    v12 = -2147418113;
    v24 = 2215;
LABEL_3:
    v13 = v12;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, v24, 0LL);
    goto LABEL_25;
  }
  Buffer = *(_QWORD *)a4;
  Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=(&v26, a3);
  v27 = a2;
  v14 = v32;
  v15 = a6;
  if ( v32 != a6 )
  {
    if ( a6 )
    {
      CMILRefCountBase::AddRef(a6);
      v14 = v32;
    }
    v35 = v14;
    v32 = v15;
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v35);
  }
  inserted = (struct CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *)RtlInsertElementGenericTable(
                                                                             this + 8,
                                                                             &Buffer,
                                                                             0x88u,
                                                                             0LL);
  if ( !inserted )
  {
    v12 = -2147024882;
    v24 = 2223;
    goto LABEL_3;
  }
  v26 = 0LL;
  v32 = 0LL;
  CProjectionBorderManager::_EnsureCursorStateForCapture((CProjectionBorderManager *)this);
  if ( a2 )
  {
    updated = CProjectionBorderManager::_AddProjectionBorderForDisplay(v17, a2, inserted);
    v12 = updated;
    if ( updated < 0 )
    {
      v24 = 2237;
LABEL_23:
      v13 = updated;
      goto LABEL_24;
    }
  }
  else
  {
    updated = CProjectionBorderManager::_AddProjectionBorderForAllDisplays(v17, inserted);
    v12 = updated;
    if ( updated < 0 )
    {
      v24 = 2241;
      goto LABEL_23;
    }
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerTransformFromDisplay(v19, a2, a3);
  v12 = updated;
  if ( updated < 0 )
  {
    v24 = 2245;
    goto LABEL_23;
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerContentOffsetFromDisplay(v20, a2, a3);
  v12 = updated;
  if ( updated < 0 )
  {
    v24 = 2246;
    goto LABEL_23;
  }
  updated = CProjectionBorderManager::_SendBoundsToCaptureControllerFromDisplay(v21, a2, a3);
  v12 = updated;
  if ( updated < 0 )
  {
    v24 = 2247;
    goto LABEL_23;
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerDefaultSDRBoostFromDisplay(v22, a2, a3);
  v12 = updated;
  if ( updated < 0 )
  {
    v24 = 2248;
    goto LABEL_23;
  }
LABEL_25:
  CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY::~CAPTURE_FILTERED_DISPLAY_MAP_ENTRY((CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *)&Buffer);
  return v12;
}
