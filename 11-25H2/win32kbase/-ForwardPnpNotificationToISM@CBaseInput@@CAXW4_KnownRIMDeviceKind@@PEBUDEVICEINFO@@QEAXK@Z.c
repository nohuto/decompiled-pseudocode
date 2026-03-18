/*
 * XREFs of ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x14020F598
 * Callers:
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x14020FBD8 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1402105B8 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 * Callees:
 *     SendMessageTo @ 0x1400675F0 (SendMessageTo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall CBaseInput::ForwardPnpNotificationToISM(int a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  bool v9; // cf
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // di
  const void *v15; // rdx
  int v16; // eax
  int v17; // eax
  __int64 v18; // xmm1_8
  __int64 v19; // rcx
  __int16 v20; // ax
  __int64 v21; // rcx
  _DWORD v22[144]; // [rsp+30h] [rbp-D0h] BYREF

  result = (unsigned int)(a4 - 2);
  if ( (unsigned int)result <= 1 )
  {
    memset(&v22[4], 0, 0x22CuLL);
    v9 = __CFSHR__(*(_DWORD *)(a2 + 168), 14);
    v22[0] = a1;
    v22[1] = a3;
    v22[3] = -v9;
    v10 = *(_QWORD *)(a2 + 368);
    v22[2] = a4;
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 88);
      if ( v11 )
        v22[4] = *(_DWORD *)(v11 + 56);
    }
    v12 = *(_WORD *)(a2 + 192);
    if ( v12 )
    {
      v13 = v12 >> 1;
      v14 = 260;
      if ( v13 <= 0x104u )
        v14 = v13;
      else
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2097);
      v15 = *(const void **)(a2 + 200);
      v22[12] = v14;
      memmove(&v22[13], v15, 2LL * v14);
    }
    if ( a1 == 1 )
    {
      v16 = *(_DWORD *)(a2 + 448);
      *(_QWORD *)&v22[5] = *(_QWORD *)(a2 + 440);
      v22[7] = v16;
    }
    else if ( a1 == 2 )
    {
      v17 = *(_DWORD *)(a2 + 464);
      v18 = *(_QWORD *)(a2 + 456);
      *(_OWORD *)&v22[5] = *(_OWORD *)(a2 + 440);
      v22[11] = v17;
      *(_QWORD *)&v22[9] = v18;
    }
    else
    {
      v19 = *(_QWORD *)(a2 + 448);
      LOWORD(v22[5]) = *(_WORD *)(v19 + 16);
      v20 = *(_WORD *)(v19 + 18);
      v21 = *(_QWORD *)(a2 + 440);
      HIWORD(v22[5]) = v20;
      v22[6] = *(_DWORD *)(v21 + 110);
      LOWORD(v22[7]) = *(_WORD *)(v21 + 114);
    }
    return SendMessageTo(12LL, v22, 572LL);
  }
  return result;
}
