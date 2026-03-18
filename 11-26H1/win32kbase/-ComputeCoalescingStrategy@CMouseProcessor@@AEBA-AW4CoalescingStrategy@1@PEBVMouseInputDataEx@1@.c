/*
 * XREFs of ?ComputeCoalescingStrategy@CMouseProcessor@@AEBA?AW4CoalescingStrategy@1@PEBVMouseInputDataEx@1@AEBUtagINPUT_MESSAGE_SOURCE@@W4RawMouseProcessingOptions@@PEBUMouseInputProcessingState@@@Z @ 0x140133154
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x14009F5B4 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEB.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1400818C4 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsEqualInputSource @ 0x1401334E0 (IsEqualInputSource.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::ComputeCoalescingStrategy(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        __int64 a5)
{
  __int64 v8; // rdi
  __int16 v9; // r14
  int v11; // esi
  __int16 v12; // si
  char v13; // bl
  int v14; // r10d
  int v15; // r9d
  int v16; // r8d
  int v17; // edx
  char v18; // r8
  int v19; // eax
  char v20; // bl
  int v21; // eax
  int v22; // r8d
  int v23; // edx
  char v24; // di
  bool v25; // si
  __int64 UserSessionState; // rax
  int v27; // r8d
  int v28; // edx
  bool v29; // di
  bool v30; // cf
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx

  if ( !*(_WORD *)(a1 + 3002) )
    return 0LL;
  v8 = a1 + 184LL * *(unsigned __int16 *)(a1 + 3000) + 56;
  if ( !v8 )
    return 0LL;
  if ( *(_QWORD *)(v8 + 164) != *(_QWORD *)(a2 + 80) )
    return 0LL;
  v9 = *(_WORD *)(a2 + 2);
  if ( (v9 & 8) != 0 )
    return 0LL;
  v11 = *(_DWORD *)(v8 + 120);
  if ( (v11 & 4) != 0 )
    return 0LL;
  if ( !*(_WORD *)(v8 + 28) && !*(_WORD *)(a2 + 4) && (unsigned __int8)IsEqualInputSource(v8 + 112, a3) )
  {
    v12 = a4 | v11;
    if ( (v12 & 0x10) != 0 )
      return 3LL;
    v13 = 1;
    if ( (v9 & 1) != 0 || (*(_BYTE *)(v8 + 36) & 1) != 0 || (v12 & 0x2000) != 0 )
      return 3LL;
    v14 = *(_DWORD *)(a5 + 8) + *(_DWORD *)(a2 + 12);
    v15 = *(_DWORD *)(a5 + 12) + *(_DWORD *)(a2 + 16);
    v16 = *(_DWORD *)(v8 + 44) + *(_DWORD *)(v8 + 76);
    v17 = *(_DWORD *)(v8 + 48) + *(_DWORD *)(v8 + 80);
    if ( v14 <= 0 == v16 <= 0 || (v30 = (~v14 ^ ~v16) < 0, v18 = 0, !v30) )
      v18 = 1;
    if ( v15 <= 0 != v17 <= 0 && (~v15 ^ ~v17) < 0 )
      v13 = 0;
    if ( v18 && v13 )
      return 3LL;
    return 0LL;
  }
  if ( (v11 & 0x8000) != 0 )
    return 0LL;
  v19 = *(_DWORD *)(v8 + 116);
  v20 = 1;
  if ( v19 != 1 && v19 != 4 && (v11 & 1) == 0 )
    return 0LL;
  v21 = *(_DWORD *)(a3 + 4);
  if ( v21 != 4 && v21 != 1 && !CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 32) )
    return 0LL;
  v22 = *(_DWORD *)(a2 + 88);
  v23 = *(_DWORD *)(v8 + 120) & 0x800;
  if ( (v23 != 0) == (v22 == 4) || *(_WORD *)(a2 + 4) || *(_WORD *)(v8 + 28) )
    return 0LL;
  if ( v22 == 4 )
  {
    if ( v23 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3613LL);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v24 = 0;
    }
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v23, v22);
      LOBYTE(v27) = v25;
      LOBYTE(v28) = v24;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v28,
        v27,
        *(_QWORD *)(UserSessionState + 69136),
        4,
        6,
        25,
        (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
    }
    return 1LL;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v20 = 0;
    }
    v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v23, v22);
      LOBYTE(v32) = v29;
      LOBYTE(v33) = v20;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v33,
        v32,
        *(_QWORD *)(v31 + 69136),
        4,
        6,
        26,
        (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
    }
    return 2LL;
  }
}
