/*
 * XREFs of RIMIDEInjectHIDReportFromPointerInfo @ 0x1401EA134
 * Callers:
 *     NtUserInjectPointerInput @ 0x1401BE260 (NtUserInjectPointerInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYPE_INFO@@III@Z @ 0x1401E77D8 (-RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYP.c)
 *     RIMIDEGetTimeStampDelta @ 0x1401E9B20 (RIMIDEGetTimeStampDelta.c)
 */

__int64 __fastcall RIMIDEInjectHIDReportFromPointerInfo(
        struct RawInputManagerDeviceObject *a1,
        struct tagPOINTER_TYPE_INFO *a2,
        int a3)
{
  int v3; // eax
  struct tagPOINTER_TYPE_INFO *v5; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rdx
  bool v9; // bl
  bool v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 result; // rax
  unsigned int v15; // r15d
  unsigned int v16; // edi
  unsigned int v17; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_DWORD *)a2;
  v5 = a2;
  if ( *(_DWORD *)a2 == 2 )
  {
    v7 = 10;
  }
  else if ( v3 == 3 )
  {
    v7 = 1;
  }
  else
  {
    v7 = 5;
    if ( v3 != 5 )
      return 3221225485LL;
  }
  v17 = 0;
  if ( !(unsigned int)RIMIDEGetTimeStampDelta((__int64)a1, (__int64)a2 + 8, &v17) )
  {
    v9 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 19336),
        2,
        1,
        51,
        (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids);
    }
    return 3221225485LL;
  }
  v15 = v17;
  result = 0LL;
  v16 = a3;
  while ( v16 )
  {
    if ( v16 <= v7 )
      return RIMIDEInjectPartialFrameFromPointerInfo(a1, v5, v16, a3, v15);
    result = RIMIDEInjectPartialFrameFromPointerInfo(a1, v5, v7, a3, v15);
    v16 -= v7;
    a3 = 0;
    v5 = (struct tagPOINTER_TYPE_INFO *)((char *)v5 + 152 * v7);
    if ( (int)result < 0 )
      return result;
  }
  return result;
}
