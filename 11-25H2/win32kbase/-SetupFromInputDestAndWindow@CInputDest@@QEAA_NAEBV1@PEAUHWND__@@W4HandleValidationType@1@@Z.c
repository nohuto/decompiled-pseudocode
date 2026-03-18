/*
 * XREFs of ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1401F7170
 * Callers:
 *     ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1400C5818 (-SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUta.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x140187CD8 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1400B8074 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ValidateHwndEx @ 0x1400BAF40 (ValidateHwndEx.c)
 *     HMAssignmentLock @ 0x1400F4780 (HMAssignmentLock.c)
 *     ValidateHbwnd @ 0x140121970 (ValidateHbwnd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x140243000 (memset.c)
 */

bool __fastcall CInputDest::SetupFromInputDestAndWindow(_QWORD *a1, __int64 a2, HWND a3, int a4)
{
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rax
  char v11; // dl
  _QWORD v13[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( *(_DWORD *)a1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 320);
  if ( !*(_DWORD *)(a2 + 92) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 321);
  if ( CInputDest::GetWindowHandle((CInputDest *)a2) == a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 322);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *((_OWORD *)a1 + 1) = *(_OWORD *)(a2 + 16);
  *((_OWORD *)a1 + 2) = *(_OWORD *)(a2 + 32);
  *((_OWORD *)a1 + 3) = *(_OWORD *)(a2 + 48);
  *((_OWORD *)a1 + 4) = *(_OWORD *)(a2 + 64);
  *((_OWORD *)a1 + 5) = *(_OWORD *)(a2 + 80);
  *((_OWORD *)a1 + 6) = *(_OWORD *)(a2 + 96);
  v9 = *((_DWORD *)a1 + 23);
  a1[10] = 0LL;
  if ( v9 == 2 )
  {
    if ( a4 == 2 )
    {
      v10 = ValidateHwndEx((__int64)a3, 1LL, 0);
      goto LABEL_20;
    }
    if ( a4 != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 342);
    v11 = 1;
  }
  else
  {
    if ( v9 != 1 )
    {
LABEL_22:
      memset(a1, 0, 0x78uLL);
      return a1[10] != 0LL;
    }
    if ( a4 == 2 )
    {
      v10 = ValidateHbwnd((__int64)a3, v8);
      goto LABEL_20;
    }
    if ( a4 != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 354);
    v11 = 23;
  }
  v10 = HMValidateHandleNoSecure((int)a3, v11);
LABEL_20:
  if ( !v10 )
    goto LABEL_22;
  v13[0] = a1 + 10;
  v13[1] = v10;
  HMAssignmentLock((__int64)v13, 0LL);
  return a1[10] != 0LL;
}
