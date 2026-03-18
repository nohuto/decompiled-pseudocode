/*
 * XREFs of ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x140216B88
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x14006AA00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAI@Z @ 0x14010DBCC (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 * Callees:
 *     DCompHitTest @ 0x140070590 (DCompHitTest.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x140071D30 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     CanHitTestInDwm @ 0x140106A10 (CanHitTestInDwm.c)
 *     ApiSetEditionPostDwmSpeedHitTest @ 0x140106B50 (ApiSetEditionPostDwmSpeedHitTest.c)
 *     ApiSetEditionNonDwmTouchHitTest @ 0x140227A4C (ApiSetEditionNonDwmTouchHitTest.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

CInputDest *__fastcall CTouchProcessor::TouchHitTest(
        CInputDest *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // rbx
  __int64 v12; // rcx
  int (*v13)(void); // rax
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(_QWORD); // rax
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r8d
  int (*v21)(void); // rax
  __int64 (__fastcall *v22)(__int64, _BYTE *); // rax
  unsigned __int64 v23; // rbx
  _OWORD *v24; // rax
  __int128 v25; // xmm0
  _OWORD *v26; // rax
  __int64 v28; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v29[5]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+54h] [rbp-ACh]
  int v31; // [rsp+5Ch] [rbp-A4h]
  __int64 v32; // [rsp+60h] [rbp-A0h]
  int v33; // [rsp+68h] [rbp-98h]
  int v34; // [rsp+6Ch] [rbp-94h]
  __int64 v35; // [rsp+70h] [rbp-90h]
  int v36; // [rsp+78h] [rbp-88h]
  int v37; // [rsp+7Ch] [rbp-84h]
  int v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+84h] [rbp-7Ch]
  int v40; // [rsp+8Ch] [rbp-74h]
  _OWORD v41[7]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v42[7]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v43[192]; // [rsp+170h] [rbp+70h] BYREF

  memset(v42, 0, sizeof(v42));
  v38 = a3;
  v29[2] = 0;
  v11 = 0LL;
  v31 = 0;
  v34 = 0;
  v37 = 0;
  v29[0] = *(_DWORD *)(a2 + 8);
  v29[1] = *(_DWORD *)(a2 + 20);
  v29[3] = *(_DWORD *)(a2 + 12);
  v30 = *(_QWORD *)(a2 + 40);
  v32 = *(_QWORD *)(a2 + 24);
  v35 = *(_QWORD *)(a2 + 88);
  v33 = *(_DWORD *)(a2 + 72);
  v29[4] = *(_DWORD *)(a2 + 180);
  v36 = a5;
  v40 = a4;
  v13 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v12) + 48) + 5616LL);
  if ( v13 )
  {
    if ( v13() >= 0 )
    {
      v15 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v14) + 48) + 5624LL);
      if ( v15 )
        v11 = v15(0LL);
    }
  }
  v39 = v11;
  memset(v43, 0, sizeof(v43));
  v16 = 0;
  v19 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v17) + 48);
  v21 = *(int (**)(void))(v19 + 5632);
  if ( v21 && v21() >= 0 )
  {
    v18 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v19) + 48);
    v22 = *(__int64 (__fastcall **)(__int64, _BYTE *))(v18 + 5640);
    if ( v22 )
      v16 = v22(a2 + 8, v43);
    if ( v16 )
      v38 |= 0x10u;
  }
  v23 = (unsigned __int64)v43 & -(__int64)(v16 != 0);
  if ( CanHitTestInDwm(v19, v18, v20) )
  {
    v24 = DCompHitTest(v41);
    v42[0] = *v24;
    v42[1] = v24[1];
    v42[2] = v24[2];
    v42[3] = v24[3];
    v42[4] = v24[4];
    v42[5] = v24[5];
    v25 = v24[6];
    v28 = *(_QWORD *)(a2 + 40);
    v42[6] = v25;
    ApiSetEditionPostDwmSpeedHitTest((__int64)v42, (int)&v28, 0, v23, a7, a6);
  }
  else
  {
    v26 = (_OWORD *)ApiSetEditionNonDwmTouchHitTest(v41, v29, v23, a6);
    v42[0] = *v26;
    v42[1] = v26[1];
    v42[2] = v26[2];
    v42[3] = v26[3];
    v42[4] = v26[4];
    v42[5] = v26[5];
    v42[6] = v26[6];
  }
  CInputDest::CInputDest(a1, (const struct tagINPUTDEST *)v42);
  return a1;
}
