/*
 * XREFs of ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x14019045C
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x140037658 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 * Callees:
 *     DCompHitTest @ 0x1400382D0 (DCompHitTest.c)
 *     ApiSetEditionPostDwmSpeedHitTest @ 0x1400C4B9C (ApiSetEditionPostDwmSpeedHitTest.c)
 *     CanHitTestInDwm @ 0x1400C5D40 (CanHitTestInDwm.c)
 *     ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x1400E102C (-GetInputSpaceId@Mouse@InputConfig@@SA-AU_LUID@@XZ.c)
 *     MouseButtonToPointerFlags @ 0x1400E4DB0 (MouseButtonToPointerFlags.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@SA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x140104744 (-GetExecutionEnvironment@CBaseProcessor@@SA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     INPUTDEST_FROM_PWND @ 0x140108EC4 (INPUTDEST_FROM_PWND.c)
 *     ApiSetEditionMouseCaptureHitTest @ 0x140195FDC (ApiSetEditionMouseCaptureHitTest.c)
 *     ApiSetEditionNonDwmSpeedHitTest @ 0x1401960A0 (ApiSetEditionNonDwmSpeedHitTest.c)
 *     ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x14019623C (ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline @ 0x140222CEC (Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall CMouseProcessor::MouseSpeedHitTest(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int16 a4,
        __int16 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        unsigned int a9,
        unsigned int a10,
        int a11,
        _DWORD *a12,
        __int64 a13)
{
  int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 UserSessionState; // rax
  _OWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  _OWORD *v32; // rax
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  __int128 v35; // xmm3
  __int128 v36; // xmm4
  __int128 v37; // xmm5
  __int128 v38; // xmm6
  __int64 v39; // rax
  _OWORD *v40; // rax
  __int128 v41; // xmm1
  __int128 v42; // xmm2
  __int128 v43; // xmm3
  __int128 v44; // xmm4
  __int128 v45; // xmm5
  __int128 v46; // xmm6
  _OWORD *v47; // rax
  __int128 v48; // xmm1
  __int128 v49; // xmm2
  __int128 v50; // xmm3
  __int128 v51; // xmm4
  __int128 v52; // xmm5
  __int128 v53; // xmm6
  _QWORD v55[11]; // [rsp+38h] [rbp-D0h] BYREF
  _OWORD v56[8]; // [rsp+98h] [rbp-70h] BYREF

  v17 = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 16264) )
  {
    if ( (unsigned int)Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline() )
    {
      UserSessionState = W32GetUserSessionState(v19, v18);
      v21 = INPUTDEST_FROM_PWND(v56, *(_QWORD *)(UserSessionState + 16264));
      *(_OWORD *)a1 = *v21;
      *(_OWORD *)(a1 + 16) = v21[1];
      *(_OWORD *)(a1 + 32) = v21[2];
      *(_OWORD *)(a1 + 48) = v21[3];
      *(_OWORD *)(a1 + 64) = v21[4];
      *(_OWORD *)(a1 + 80) = v21[5];
      *(_OWORD *)(a1 + 96) = v21[6];
      ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint(a2, *a2, a3, a1);
    }
    else
    {
      if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment(v19, v18) != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6412LL);
      v24 = W32GetUserSessionState(v23, v22);
      ApiSetEditionMouseCaptureHitTest(*(_QWORD *)(v24 + 16264), a2, a3);
      *a12 = 1;
      v27 = W32GetUserSessionState(v26, v25);
      INPUTDEST_FROM_PWND((_DWORD *)a1, *(_QWORD *)(v27 + 16264));
    }
  }
  else
  {
    memset((void *)a1, 0, 0x70uLL);
    memset(v55, 0, sizeof(v55));
    *(_QWORD *)((char *)&v55[2] + 4) = *a2;
    v55[6] = a6;
    LODWORD(v55[5]) = a7;
    v55[4] = a8;
    LODWORD(v55[0]) = 4;
    HIDWORD(v55[1]) = 0;
    HIDWORD(v55[0]) = MouseButtonToPointerFlags(a4);
    LOWORD(v55[1]) = a5;
    LODWORD(v55[7]) = 1;
    if ( CanHitTestInDwm(v29, v28) )
    {
      v55[8] = __PAIR64__(a10, a9);
      v55[9] = InputConfig::Mouse::GetInputSpaceId(v31, v30);
      LODWORD(v55[10]) = a11;
      v32 = DCompHitTest(v56);
      v33 = v32[1];
      v34 = v32[2];
      v35 = v32[3];
      v36 = v32[4];
      v37 = v32[5];
      v38 = v32[6];
      *(_OWORD *)a1 = *v32;
      *(_OWORD *)(a1 + 16) = v33;
      *(_OWORD *)(a1 + 32) = v34;
      *(_OWORD *)(a1 + 48) = v35;
      *(_OWORD *)(a1 + 64) = v36;
      *(_OWORD *)(a1 + 80) = v37;
      *(_OWORD *)(a1 + 96) = v38;
      LOBYTE(v17) = *(_DWORD *)a1 != 0;
      *a12 = v17;
      ApiSetEditionPostDwmSpeedHitTest(a1, (__int64)a2, a3, 0, a13, (__int64)a12);
    }
    else if ( a10 )
    {
      v39 = W32GetUserSessionState(v31, v30);
      v40 = INPUTDEST_FROM_PWND(v56, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 19144) + 8LL) + 24LL));
      v41 = v40[1];
      v42 = v40[2];
      v43 = v40[3];
      v44 = v40[4];
      v45 = v40[5];
      v46 = v40[6];
      *(_OWORD *)a1 = *v40;
      *(_OWORD *)(a1 + 16) = v41;
      *(_OWORD *)(a1 + 32) = v42;
      *(_OWORD *)(a1 + 48) = v43;
      *(_OWORD *)(a1 + 64) = v44;
      *(_OWORD *)(a1 + 80) = v45;
      *(_OWORD *)(a1 + 96) = v46;
      *a12 = 0;
    }
    else
    {
      v47 = (_OWORD *)ApiSetEditionNonDwmSpeedHitTest(v56, a2, a3, a12);
      v48 = v47[1];
      v49 = v47[2];
      v50 = v47[3];
      v51 = v47[4];
      v52 = v47[5];
      v53 = v47[6];
      *(_OWORD *)a1 = *v47;
      *(_OWORD *)(a1 + 16) = v48;
      *(_OWORD *)(a1 + 32) = v49;
      *(_OWORD *)(a1 + 48) = v50;
      *(_OWORD *)(a1 + 64) = v51;
      *(_OWORD *)(a1 + 80) = v52;
      *(_OWORD *)(a1 + 96) = v53;
    }
  }
  return a1;
}
