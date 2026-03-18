/*
 * XREFs of ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KPEAHPEAU_InputHitTestResult@@@Z @ 0x140106654
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x14009B3E4 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 * Callees:
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x140070610 (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@SA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x1400D0FF0 (-GetExecutionEnvironment@CBaseProcessor@@SA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     MouseButtonToPointerFlags @ 0x140106970 (MouseButtonToPointerFlags.c)
 *     CanHitTestInDwm @ 0x140106A10 (CanHitTestInDwm.c)
 *     ApiSetEditionPostDwmSpeedHitTest @ 0x140106B50 (ApiSetEditionPostDwmSpeedHitTest.c)
 *     ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x140106C58 (-GetInputSpaceId@Mouse@InputConfig@@SA-AU_LUID@@XZ.c)
 *     INPUTDEST_FROM_PWND @ 0x140148938 (INPUTDEST_FROM_PWND.c)
 *     Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline @ 0x14018DB38 (Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline.c)
 *     ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x14019026C (ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetEditionNonDwmSpeedHitTest @ 0x1401BA238 (ApiSetEditionNonDwmSpeedHitTest.c)
 *     ApiSetEditionMouseCaptureHitTest @ 0x1402279CC (ApiSetEditionMouseCaptureHitTest.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

_OWORD *__fastcall CMouseProcessor::MouseSpeedHitTest(
        _OWORD *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int16 a4,
        __int16 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        _DWORD *a11,
        __int64 a12)
{
  int v16; // edi
  __int128 *v17; // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  __int128 v22; // xmm4
  __int128 v23; // xmm5
  __int128 v24; // xmm6
  _OWORD *v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int128 v29; // xmm3
  __int128 v30; // xmm4
  __int128 v31; // xmm5
  __int128 v32; // xmm6
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  __int64 UserSessionState; // rax
  _OWORD *v37; // rax
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  __int64 v41; // rax
  int v42; // edx
  int v43; // ecx
  int v44; // r8d
  __int64 v45; // rax
  __int128 v46; // [rsp+40h] [rbp-C8h]
  _QWORD v47[10]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v48; // [rsp+A8h] [rbp-60h]
  __int128 v49; // [rsp+B8h] [rbp-50h]
  __int128 v50; // [rsp+C8h] [rbp-40h]
  __int128 v51; // [rsp+D8h] [rbp-30h]
  __int128 v52; // [rsp+E8h] [rbp-20h]
  __int128 v53; // [rsp+F8h] [rbp-10h]
  _DWORD v54[20]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v55; // [rsp+158h] [rbp+50h] BYREF
  int v56; // [rsp+164h] [rbp+5Ch]

  v16 = 0;
  if ( *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3) + 16256) )
  {
    if ( (unsigned int)Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline() )
    {
      UserSessionState = W32GetUserSessionState(v34, v33, v35);
      v37 = (_OWORD *)INPUTDEST_FROM_PWND(v54, *(_QWORD *)(UserSessionState + 16256));
      *a1 = *v37;
      a1[1] = v37[1];
      a1[2] = v37[2];
      a1[3] = v37[3];
      a1[4] = v37[4];
      a1[5] = v37[5];
      a1[6] = v37[6];
      ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint(a2, *a2, a3, a1);
    }
    else
    {
      if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment(v34, v33, v35) != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6453LL);
      v41 = W32GetUserSessionState(v39, v38, v40);
      ApiSetEditionMouseCaptureHitTest(*(_QWORD *)(v41 + 16256), a2, a3);
      *a11 = 1;
      v45 = W32GetUserSessionState(v43, v42, v44);
      INPUTDEST_FROM_PWND(a1, *(_QWORD *)(v45 + 16256));
    }
  }
  else
  {
    memset(a1, 0, 0x70uLL);
    memset(v47, 0, sizeof(v47));
    *(_QWORD *)((char *)&v47[2] + 4) = *a2;
    v47[6] = a6;
    LODWORD(v47[5]) = a7;
    v47[4] = a8;
    LODWORD(v47[0]) = 4;
    HIDWORD(v47[1]) = 0;
    HIDWORD(v47[0]) = MouseButtonToPointerFlags(a4);
    LOWORD(v47[1]) = a5;
    LODWORD(v47[7]) = 1;
    if ( (unsigned __int8)CanHitTestInDwm() )
    {
      LODWORD(v47[8]) = a9;
      *(struct _LUID *)((char *)&v47[8] + 4) = InputConfig::Mouse::GetInputSpaceId();
      HIDWORD(v47[9]) = a10;
      v17 = (__int128 *)CSpatialProcessor::SpeedHitTest(v54, (unsigned int *)v47, a12);
      v18 = *v17;
      v19 = v17[1];
      v20 = v17[2];
      v21 = v17[3];
      v22 = v17[4];
      v23 = v17[5];
      v24 = v17[6];
      v46 = *v17;
      v48 = v19;
      v49 = v20;
      v50 = v21;
      v51 = v22;
      v52 = v23;
      v53 = v24;
      if ( v56 )
      {
        HMAssignmentUnlock(&v55);
        v18 = v46;
        v19 = v48;
        v20 = v49;
        v21 = v50;
        v22 = v51;
        v23 = v52;
        v24 = v53;
      }
      *a1 = v18;
      a1[1] = v19;
      a1[2] = v20;
      a1[3] = v21;
      a1[4] = v22;
      a1[5] = v23;
      a1[6] = v24;
      LOBYTE(v16) = *(_DWORD *)a1 != 0;
      *a11 = v16;
      ApiSetEditionPostDwmSpeedHitTest((_DWORD)a1, (_DWORD)a2, a3, 0, a12, (__int64)a11);
    }
    else
    {
      v26 = (_OWORD *)ApiSetEditionNonDwmSpeedHitTest(v54, a2, a3, a11);
      v27 = v26[1];
      v28 = v26[2];
      v29 = v26[3];
      v30 = v26[4];
      v31 = v26[5];
      v32 = v26[6];
      *a1 = *v26;
      a1[1] = v27;
      a1[2] = v28;
      a1[3] = v29;
      a1[4] = v30;
      a1[5] = v31;
      a1[6] = v32;
    }
  }
  return a1;
}
