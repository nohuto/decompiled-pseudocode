/*
 * XREFs of ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1401AFB50
 * Callers:
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x14013E518 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x140179B50 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 * Callees:
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x14016B2F8 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall CBaseInput::ForwardPnpNotificationToISM(int a1, __int64 a2, int a3, int a4)
{
  bool v8; // zf
  __int64 result; // rax
  bool v10; // cf
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // di
  const void *v16; // rdx
  int v17; // eax
  int v18; // eax
  __int64 v19; // xmm1_8
  __int64 v20; // rcx
  __int16 v21; // ax
  __int64 v22; // rcx
  _DWORD v23[144]; // [rsp+30h] [rbp-D0h] BYREF

  v8 = (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() == 0;
  result = (unsigned int)(a4 - 2);
  if ( v8 )
  {
    if ( (unsigned int)result > 1 )
      return result;
  }
  else if ( (result & 0xFFFFFFFA) != 0 || a4 == 7 )
  {
    return result;
  }
  memset(&v23[4], 0, 0x22CuLL);
  v10 = __CFSHR__(*(_DWORD *)(a2 + 168), 14);
  v23[0] = a1;
  v23[1] = a3;
  v23[3] = -v10;
  v11 = *(_QWORD *)(a2 + 368);
  v23[2] = a4;
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 88);
    if ( v12 )
      v23[4] = *(_DWORD *)(v12 + 56);
  }
  v13 = *(_WORD *)(a2 + 192);
  if ( v13 )
  {
    v14 = v13 >> 1;
    v15 = 260;
    if ( v14 <= 0x104u )
      v15 = v14;
    else
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2109LL);
    v16 = *(const void **)(a2 + 200);
    v23[12] = v15;
    memmove(&v23[13], v16, 2LL * v15);
  }
  if ( a1 == 1 )
  {
    v17 = *(_DWORD *)(a2 + 448);
    *(_QWORD *)&v23[5] = *(_QWORD *)(a2 + 440);
    v23[7] = v17;
  }
  else if ( a1 == 2 )
  {
    v18 = *(_DWORD *)(a2 + 464);
    v19 = *(_QWORD *)(a2 + 456);
    *(_OWORD *)&v23[5] = *(_OWORD *)(a2 + 440);
    v23[11] = v18;
    *(_QWORD *)&v23[9] = v19;
  }
  else
  {
    v20 = *(_QWORD *)(a2 + 448);
    LOWORD(v23[5]) = *(_WORD *)(v20 + 16);
    v21 = *(_WORD *)(v20 + 18);
    v22 = *(_QWORD *)(a2 + 440);
    HIWORD(v23[5]) = v21;
    v23[6] = *(_DWORD *)(v22 + 110);
    LOWORD(v23[7]) = *(_WORD *)(v22 + 114);
  }
  return SendMessageTo(12, (int)v23, 572);
}
