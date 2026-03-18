/*
 * XREFs of ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z @ 0x14013E738
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x14013DFAC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x14013E9E8 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     ?GatherKeyboardDeviceSummaryInfo@CKeyboardProcessor@@QEAAXPEAUDEVICEINFO@@PEAK@Z @ 0x14013EA20 (-GatherKeyboardDeviceSummaryInfo@CKeyboardProcessor@@QEAAXPEAUDEVICEINFO@@PEAK@Z.c)
 *     IsCursorShowablePointerDevice @ 0x14013EB20 (IsCursorShowablePointerDevice.c)
 *     ApiSetApplyGatheredDeviceInfoSummaryInformation @ 0x1401BD3AC (ApiSetApplyGatheredDeviceInfoSummaryInformation.c)
 */

__int64 __fastcall CBaseInput::ApplyRimDevBackedDeviceSummaryInformation(__int64 a1, int a2)
{
  struct W32_PUSH_LOCK *v2; // rbx
  unsigned int v3; // esi
  int v6; // ebp
  int v7; // r14d
  int v8; // r12d
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // ecx
  char v16; // r14
  bool v17; // r12
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  int v22; // eax
  __int64 v23; // rcx
  __int16 v24; // ax
  __int16 v25; // cx
  CKeyboardProcessor *v26; // rcx
  int v27; // [rsp+90h] [rbp+8h]
  int v28; // [rsp+A0h] [rbp+18h]
  unsigned int v29; // [rsp+A8h] [rbp+20h] BYREF

  v2 = *(struct W32_PUSH_LOCK **)(a1 + 1232);
  v3 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  W32AcquirePushLockExclusiveEx(v2);
  v12 = **(_QWORD **)(a1 + 1240);
  if ( v12 )
  {
    v13 = 1LL;
    while ( 1 )
    {
      v14 = *(_DWORD *)(v12 + 48);
      v15 = v9;
      if ( v14 == a2 )
      {
        if ( *(_QWORD *)(v12 + 208) )
        {
          if ( !v14 )
          {
            v24 = *(_WORD *)(v12 + 440);
            v6 += v13;
            v9 = *(unsigned __int16 *)(v12 + 442);
            v10 = 0x7FFFLL;
            if ( v15 > v9 )
              v9 = v15;
            if ( v24 < 0 )
              v8 = v13;
            v25 = v24 & 0x7FFF;
            v28 = v8;
            if ( v24 >= 0 )
              v25 = *(_WORD *)(v12 + 440);
            if ( v25 == 32 || v25 == 64 || v25 == 256 )
            {
              v7 += v13;
              v27 = v7;
            }
            goto LABEL_13;
          }
          v22 = v14 - 1;
          if ( v22 )
          {
            if ( v22 != 1 || (*(_DWORD *)(v12 + 184) & 0x80u) == 0 )
              goto LABEL_13;
LABEL_23:
            v23 = *(_QWORD *)(v12 + 456);
            if ( !v23 || !(unsigned int)IsCursorShowablePointerDevice(v23, v10, v11, v13) )
              goto LABEL_13;
LABEL_18:
            v6 += v13;
            goto LABEL_13;
          }
          if ( anonymous_namespace_::GetKeyboardProcessor(v9, v10, v11, v13) )
            CKeyboardProcessor::GatherKeyboardDeviceSummaryInfo(v26, (struct DEVICEINFO *)v12, &v29);
          goto LABEL_12;
        }
        if ( v14 == 2 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
            || (v16 = v13, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v16 = 0;
          }
          v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v7 = v27;
            v8 = v28;
            goto LABEL_13;
          }
          UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v11);
          LOBYTE(v19) = v17;
          LOBYTE(v20) = v16;
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v20,
            v19,
            *(_QWORD *)(UserSessionState + 69136),
            4,
            2,
            24,
            (__int64)&WPP_a07c44b8f26832a02b5dbe6dbb74dde0_Traceguids,
            v12);
          v7 = v27;
          v8 = v28;
LABEL_12:
          v13 = 1LL;
        }
      }
      else
      {
        if ( a2 != 2 )
        {
          if ( a2 || v14 != 2 )
            goto LABEL_13;
          goto LABEL_23;
        }
        if ( !v14 )
          goto LABEL_18;
      }
LABEL_13:
      v12 = *(_QWORD *)(v12 + 56);
      if ( !v12 )
      {
        v3 = v29;
        break;
      }
    }
  }
  W32ReleasePushLockExclusiveEx(v2);
  return ApiSetApplyGatheredDeviceInfoSummaryInformation(a2, v6, v9, v7, v8, v3);
}
