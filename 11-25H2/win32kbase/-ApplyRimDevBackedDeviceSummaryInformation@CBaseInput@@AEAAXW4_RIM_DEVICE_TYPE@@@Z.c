/*
 * XREFs of ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z @ 0x140106ACC
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1401166DC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ApiSetApplyGatheredDeviceInfoSummaryInformation @ 0x140106D24 (ApiSetApplyGatheredDeviceInfoSummaryInformation.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x140106DC8 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     ?GatherKeyboardDeviceSummaryInfo@CKeyboardProcessor@@QEAAXPEAUDEVICEINFO@@PEAK@Z @ 0x140106E00 (-GatherKeyboardDeviceSummaryInfo@CKeyboardProcessor@@QEAAXPEAUDEVICEINFO@@PEAK@Z.c)
 */

__int64 __fastcall CBaseInput::ApplyRimDevBackedDeviceSummaryInformation(__int64 a1, int a2)
{
  struct W32_PUSH_LOCK *v2; // rbx
  unsigned int v3; // esi
  int v6; // ebp
  int v7; // r14d
  int v8; // r15d
  unsigned int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rdi
  int v12; // eax
  char v13; // r14
  bool v14; // r15
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v19; // rax
  int v20; // eax
  __int16 v21; // cx
  CKeyboardProcessor *v22; // rcx
  int v23; // [rsp+90h] [rbp+8h]
  unsigned int v24; // [rsp+A0h] [rbp+18h] BYREF
  int v25; // [rsp+A8h] [rbp+20h]

  v2 = *(struct W32_PUSH_LOCK **)(a1 + 1232);
  v3 = 0;
  v23 = 0;
  v25 = 0;
  v24 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  W32AcquirePushLockExclusiveEx(v2, 0);
  v11 = **(_QWORD **)(a1 + 1240);
  if ( v11 )
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(v11 + 48);
      if ( v12 == a2 )
      {
        if ( !*(_QWORD *)(v11 + 208) )
        {
          if ( v12 == 2 )
          {
            if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
              || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v13 = 0;
            }
            v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
              LOBYTE(v16) = v14;
              LOBYTE(v17) = v13;
              WPP_RECORDER_AND_TRACE_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v17,
                v16,
                *(_QWORD *)(UserSessionState + 69144),
                4,
                2,
                23,
                (__int64)&WPP_16b0d3e1bc85332a6529a599abe513a5_Traceguids,
                v11);
            }
            v7 = v23;
          }
          goto LABEL_12;
        }
        if ( !v12 )
        {
          ++v6;
          v21 = *(_WORD *)(v11 + 440);
          if ( v9 <= *(unsigned __int16 *)(v11 + 442) )
            v9 = *(unsigned __int16 *)(v11 + 442);
          if ( v21 < 0 )
          {
            v25 = 1;
            v21 &= ~0x8000u;
          }
          if ( v21 == 32 || v21 == 64 || v21 == 256 )
            v23 = ++v7;
          goto LABEL_12;
        }
        v20 = v12 - 1;
        if ( !v20 )
        {
          if ( anonymous_namespace_::GetKeyboardProcessor() )
            CKeyboardProcessor::GatherKeyboardDeviceSummaryInfo(v22, (struct DEVICEINFO *)v11, &v24);
          goto LABEL_12;
        }
        if ( v20 == 1 && (*(_DWORD *)(v11 + 184) & 0x80u) != 0 )
          goto LABEL_20;
      }
      else
      {
        if ( a2 != 2 )
        {
          if ( a2 || v12 != 2 )
            goto LABEL_12;
LABEL_20:
          v19 = *(_QWORD *)(v11 + 456);
          if ( !v19 || (unsigned int)(*(_DWORD *)(v19 + 24) - 1) > 6 )
            goto LABEL_12;
LABEL_17:
          ++v6;
          goto LABEL_12;
        }
        if ( !v12 )
          goto LABEL_17;
      }
LABEL_12:
      v11 = *(_QWORD *)(v11 + 56);
      if ( !v11 )
      {
        v3 = v24;
        v8 = v25;
        break;
      }
    }
  }
  W32ReleasePushLockExclusiveEx(v2, 0LL);
  return ApiSetApplyGatheredDeviceInfoSummaryInformation(a2, v6, v9, v7, v8, v3);
}
