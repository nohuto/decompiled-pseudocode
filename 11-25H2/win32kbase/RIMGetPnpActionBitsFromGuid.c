/*
 * XREFs of RIMGetPnpActionBitsFromGuid @ 0x140113A94
 * Callers:
 *     RIMDeviceNotifyAsyncWorkItem @ 0x140113824 (RIMDeviceNotifyAsyncWorkItem.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006101C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_LLLD @ 0x1401ECB08 (WPP_RECORDER_AND_TRACE_SF_LLLD.c)
 */

_DWORD *__fastcall RIMGetPnpActionBitsFromGuid(char a1, __int64 a2, _QWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  __int64 v7; // rax
  __int64 v10; // rax
  bool v11; // bl
  bool v12; // di
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  _DWORD *result; // rax
  __int64 v17; // rax
  bool v18; // bl
  bool v19; // di
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  bool v23; // bl
  bool v24; // di
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  char v28; // r14
  bool v29; // r15
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx

  v7 = *a3 - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( *a3 == *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 )
    v7 = a3[1] - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( v7 )
  {
    v10 = *a3 - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
    if ( *a3 == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 )
      v10 = a3[1] - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
    if ( !v10 )
    {
      v11 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
        LOBYTE(v14) = v12;
        LOBYTE(v15) = v11;
        WPP_RECORDER_AND_TRACE_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v15,
          v14,
          *(_QWORD *)(UserSessionState + 19336),
          4,
          1,
          11,
          (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids,
          a1,
          a2);
      }
      result = a5;
LABEL_14:
      *result = 1;
      return result;
    }
    v17 = *a3 - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
    if ( *a3 == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 )
      v17 = a3[1] - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
    if ( !v17 )
    {
      v18 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
        LOBYTE(v21) = v19;
        LOBYTE(v22) = v18;
        WPP_RECORDER_AND_TRACE_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v22,
          v21,
          *(_QWORD *)(v20 + 19336),
          4,
          1,
          12,
          (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids,
          a1,
          a2);
      }
      result = a6;
      goto LABEL_14;
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (v28 = 1, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v28 = 0;
    }
    result = &WPP_RECORDER_INITIALIZED;
    v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v31) = v29;
      LOBYTE(v32) = v28;
      return (_DWORD *)WPP_RECORDER_AND_TRACE_SF_LLLD(
                         *((_QWORD *)WPP_GLOBAL_Control + 3),
                         v32,
                         v31,
                         *(_QWORD *)(v30 + 19336));
    }
  }
  else
  {
    v23 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    result = &WPP_RECORDER_INITIALIZED;
    v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v26) = v24;
      LOBYTE(v27) = v23;
      result = (_DWORD *)WPP_RECORDER_AND_TRACE_SF_qq(
                           *((_QWORD *)WPP_GLOBAL_Control + 3),
                           v27,
                           v26,
                           *(_QWORD *)(v25 + 19336),
                           4,
                           1,
                           10,
                           (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids,
                           a1,
                           a2);
    }
    *a4 = 1;
  }
  return result;
}
