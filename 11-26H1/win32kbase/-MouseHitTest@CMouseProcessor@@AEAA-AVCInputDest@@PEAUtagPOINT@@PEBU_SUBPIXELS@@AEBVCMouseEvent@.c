/*
 * XREFs of ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x14009B3E4
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140088610 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14009A480 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1401447E8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x140068490 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x14006A864 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x140071D30 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KPEAHPEAU_InputHitTestResult@@@Z @ 0x140106654 (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 *     ?SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@K_N@Z @ 0x14010B398 (-SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@K_N@Z.c)
 *     ?GetNextInputStreamToken@CInputStreamTokenGenerator@CSpatialProcessor@@SAKXZ @ 0x140136458 (-GetNextInputStreamToken@CInputStreamTokenGenerator@CSpatialProcessor@@SAKXZ.c)
 *     ?UpdateTargetForCapture@Mouse@InputTraceLogging@@SAX_KPEAUHWND__@@@Z @ 0x1401389BC (-UpdateTargetForCapture@Mouse@InputTraceLogging@@SAX_KPEAUHWND__@@@Z.c)
 *     ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x14019026C (ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KI@Z @ 0x1401992A8 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

struct CInputDest *__fastcall CMouseProcessor::MouseHitTest(
        __int64 a1,
        struct CInputDest *a2,
        struct tagPOINT *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        unsigned int *a7)
{
  unsigned int v8; // r13d
  struct tagPOINT v9; // rax
  char v13; // di
  int v14; // r14d
  int *v15; // rbx
  int v16; // r12d
  int v17; // eax
  __int64 v18; // rcx
  int v19; // r15d
  __int64 v20; // rdi
  int v21; // esi
  __int64 v22; // r14
  __int16 v23; // bx
  unsigned __int16 v24; // ax
  struct tagPOINT *v25; // rdi
  _OWORD *v26; // rax
  struct CInputDest *v27; // rbx
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  unsigned int *v34; // rcx
  HWND WindowHandle; // rax
  __int64 v37; // [rsp+38h] [rbp-C8h]
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v39; // [rsp+68h] [rbp-98h]
  __int64 v40; // [rsp+70h] [rbp-90h]
  struct tagPOINT *v41; // [rsp+78h] [rbp-88h]
  struct CInputDest *v42; // [rsp+80h] [rbp-80h]
  unsigned int *v43; // [rsp+88h] [rbp-78h]
  struct tagPOINT v44; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v45[7]; // [rsp+A0h] [rbp-60h] BYREF
  char v46[112]; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v47[28]; // [rsp+180h] [rbp+80h] BYREF

  v8 = 0;
  v9 = *a3;
  v40 = a4;
  v41 = a3;
  v42 = a2;
  v39 = (_QWORD *)a5;
  v43 = a7;
  v44 = v9;
  if ( a7 )
    *a7 = 0;
  v13 = 1;
  if ( (a6 & 1) != 0 )
  {
    CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
      (CSpatialProcessor *)a1,
      4u,
      *a3,
      *(_QWORD *)(*(_QWORD *)(a5 + 8) + 96LL),
      0);
    CInputDest::CInputDest(a2, (const struct CInputDest *)(a1 + 3784));
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3904), 1, 1) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6549LL);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint)(
      a3,
      *a3,
      a4,
      a2);
    WindowHandle = CInputDest::GetWindowHandle(a2);
    InputTraceLogging::Mouse::UpdateTargetForCapture(*(_QWORD *)(*(_QWORD *)(a5 + 8) + 96LL), WindowHandle);
    return a2;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)(a5 + 8) + 96LL);
    *(_QWORD *)(a1 + 24) = 4LL;
    if ( a6 )
    {
      LODWORD(v38) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6567LL);
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3904), 1, 1) )
    {
      v14 = 512;
    }
    else
    {
      v13 = 0;
      v14 = 0;
    }
    if ( *(_DWORD *)(a5 + 16) == 3 )
    {
      *(_DWORD *)(a1 + 3660) = CSpatialProcessor::CInputStreamTokenGenerator::GetNextInputStreamToken();
    }
    else if ( !v13 )
    {
      *(_DWORD *)(a1 + 3656) = CSpatialProcessor::CInputStreamTokenGenerator::GetNextInputStreamToken();
    }
    HIDWORD(v38) = 0;
    memset(v47, 0, sizeof(v47));
    if ( *(_DWORD *)(a5 + 16) == 3 )
      v15 = (int *)(a1 + 3660);
    else
      v15 = (int *)(a1 + 3656);
    v16 = *v15;
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a5 + 16LL))(a5);
    v18 = *(_QWORD *)(a5 + 8);
    v19 = v14 | v17;
    v20 = *(_QWORD *)(v18 + 8);
    v21 = *(_DWORD *)(v18 + 88);
    v22 = *(_QWORD *)(v18 + 96);
    v23 = (*(__int64 (__fastcall **)(_QWORD *))(*v39 + 8LL))(v39);
    v24 = (*(__int64 (__fastcall **)(_QWORD *))*v39)(v39);
    v37 = v20;
    v25 = v41;
    v26 = (_OWORD *)CMouseProcessor::MouseSpeedHitTest(
                      v46,
                      v41,
                      v40,
                      v24,
                      v23,
                      v22,
                      v21,
                      v37,
                      v19,
                      v16,
                      (char *)&v38 + 4,
                      v47,
                      v38);
    v27 = v42;
    v28 = v26[1];
    v45[0] = *v26;
    v29 = v26[2];
    v45[1] = v28;
    v30 = v26[3];
    v45[2] = v29;
    v31 = v26[4];
    v45[3] = v30;
    v32 = v26[5];
    v45[4] = v31;
    v33 = v26[6];
    v45[5] = v32;
    v45[6] = v33;
    CInputDest::CInputDest(v42, (const struct tagINPUTDEST *)v45);
    v34 = v43;
    if ( v43 )
      *v43 = v47[20];
    if ( v34 )
      v8 = *v34;
    InputTraceLogging::Mouse::SpeedHitTest(*(_QWORD *)(v39[1] + 96LL), &v44, v25, v27, v8, HIDWORD(v38) != 0);
    return v27;
  }
}
