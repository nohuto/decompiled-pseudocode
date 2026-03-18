/*
 * XREFs of ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKKPEAHPEAU_InputHitTestResult@@@Z @ 0x1400C4988
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x140209AA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x14020D188 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 * Callees:
 *     DCompHitTest @ 0x1400382D0 (DCompHitTest.c)
 *     ApiSetEditionPostDwmSpeedHitTest @ 0x1400C4B9C (ApiSetEditionPostDwmSpeedHitTest.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C5510 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     CanHitTestInDwm @ 0x1400C5D40 (CanHitTestInDwm.c)
 *     ApiSetEditionComputeInputSpaceId @ 0x1400C5E78 (ApiSetEditionComputeInputSpaceId.c)
 *     ApiSetEditionNeedsTouchTargeting @ 0x1400C5EE8 (ApiSetEditionNeedsTouchTargeting.c)
 *     ApiSetEditionNonDwmTouchHitTest @ 0x140225A80 (ApiSetEditionNonDwmTouchHitTest.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

CInputDest *__fastcall CTouchProcessor::TouchHitTest(
        CInputDest *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  int v12; // eax
  unsigned __int64 v13; // rbx
  _OWORD *v14; // rax
  __int128 v15; // xmm0
  _OWORD *v17; // rax
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v19[12]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v20[7]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v21[7]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v22[192]; // [rsp+180h] [rbp+80h] BYREF

  memset(v21, 0, sizeof(v21));
  memset(v19, 0, 0x58uLL);
  LODWORD(v19[0]) = *(_DWORD *)(a2 + 8);
  HIDWORD(v19[0]) = *(_DWORD *)(a2 + 20);
  HIDWORD(v19[1]) = *(_DWORD *)(a2 + 12);
  *(_QWORD *)((char *)&v19[2] + 4) = *(_QWORD *)(a2 + 40);
  v19[4] = *(_QWORD *)(a2 + 24);
  v19[6] = *(_QWORD *)(a2 + 88);
  LODWORD(v19[5]) = *(_DWORD *)(a2 + 72);
  LODWORD(v19[2]) = *(_DWORD *)(a2 + 180);
  LODWORD(v19[7]) = a6;
  LODWORD(v19[10]) = a5;
  v19[8] = __PAIR64__(a4, a3);
  v19[9] = ApiSetEditionComputeInputSpaceId(a4);
  memset(v22, 0, sizeof(v22));
  v12 = ApiSetEditionNeedsTouchTargeting(v19, a2 + 8, v22);
  if ( v12 )
    LODWORD(v19[8]) |= 0x10u;
  v13 = (unsigned __int64)v22 & -(__int64)(v12 != 0);
  if ( (unsigned __int8)CanHitTestInDwm() )
  {
    v14 = DCompHitTest(v20);
    v21[0] = *v14;
    v21[1] = v14[1];
    v21[2] = v14[2];
    v21[3] = v14[3];
    v21[4] = v14[4];
    v21[5] = v14[5];
    v15 = v14[6];
    v18 = *(_QWORD *)(a2 + 40);
    v21[6] = v15;
    ApiSetEditionPostDwmSpeedHitTest((unsigned int)v21, (unsigned int)&v18, 0, v13, a8, a7);
  }
  else
  {
    v17 = (_OWORD *)ApiSetEditionNonDwmTouchHitTest(v20, v19, v13, a7);
    v21[0] = *v17;
    v21[1] = v17[1];
    v21[2] = v17[2];
    v21[3] = v17[3];
    v21[4] = v17[4];
    v21[5] = v17[5];
    v21[6] = v17[6];
  }
  CInputDest::CInputDest(a1, (const struct tagINPUTDEST *)v21);
  return a1;
}
