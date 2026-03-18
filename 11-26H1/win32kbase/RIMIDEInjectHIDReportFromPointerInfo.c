/*
 * XREFs of RIMIDEInjectHIDReportFromPointerInfo @ 0x1401BB6B8
 * Callers:
 *     NtUserInjectPointerInput @ 0x1401E6D30 (NtUserInjectPointerInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYPE_INFO@@III@Z @ 0x14020653C (-RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYP.c)
 *     RIMIDEGetTimeStampDelta @ 0x140208DE0 (RIMIDEGetTimeStampDelta.c)
 */

__int64 __fastcall RIMIDEInjectHIDReportFromPointerInfo(
        struct RawInputManagerDeviceObject *a1,
        struct tagPOINTER_TYPE_INFO *a2,
        unsigned int a3)
{
  int v3; // eax
  struct tagPOINTER_TYPE_INFO *v5; // rsi
  unsigned int v7; // ebx
  int v8; // edx
  int v9; // r8d
  bool v10; // bl
  bool v11; // di
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  __int64 result; // rax
  unsigned int v16; // r15d
  unsigned int v17; // edi
  unsigned int v18; // [rsp+68h] [rbp+10h] BYREF

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
  v18 = 0;
  if ( !(unsigned int)RIMIDEGetTimeStampDelta(a1, (char *)a2 + 8, &v18) )
  {
    v10 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v8, v9);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        *(_QWORD *)(UserSessionState + 19368),
        2,
        1,
        51,
        (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids);
    }
    return 3221225485LL;
  }
  v16 = v18;
  result = 0LL;
  v17 = a3;
  while ( v17 )
  {
    if ( v17 <= v7 )
      return RIMIDEInjectPartialFrameFromPointerInfo(a1, v5, v17, a3, v16);
    result = RIMIDEInjectPartialFrameFromPointerInfo(a1, v5, v7, a3, v16);
    v17 -= v7;
    a3 = 0;
    v5 = (struct tagPOINTER_TYPE_INFO *)((char *)v5 + 152 * v7);
    if ( (int)result < 0 )
      return result;
  }
  return result;
}
