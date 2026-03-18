/*
 * XREFs of rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem @ 0x14020BFB4
 * Callers:
 *     rimHandleAnyPnpRemovePendingDevices @ 0x140098420 (rimHandleAnyPnpRemovePendingDevices.c)
 * Callees:
 *     RIMQueueAndSignalAsyncWorkItem @ 0x1400460CC (RIMQueueAndSignalAsyncWorkItem.c)
 *     RIMAllocateAsyncInputWorkItem @ 0x1400475D0 (RIMAllocateAsyncInputWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDqd @ 0x14020B6C8 (WPP_RECORDER_AND_TRACE_SF_qqqDqd.c)
 */

_UNKNOWN **__fastcall rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem(struct RawInputManagerObject *a1)
{
  char **v2; // rax
  int v3; // edx
  int v4; // r8d
  _UNKNOWN **result; // rax
  char v6; // bp
  char v7; // r15
  __int64 UserSessionState; // rax
  int v9; // [rsp+20h] [rbp-68h]
  int v10; // [rsp+28h] [rbp-60h]
  int v11; // [rsp+30h] [rbp-58h]
  int v12; // [rsp+38h] [rbp-50h]

  v2 = (char **)RIMAllocateAsyncInputWorkItem(a1, 0LL, 0, 0LL, 0LL, 0LL, 0, 6);
  if ( v2 )
  {
    *((_DWORD *)a1 + 279) = 1;
    return (_UNKNOWN **)RIMQueueAndSignalAsyncWorkItem(a1, v2);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v6 = 1, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v6 = 0;
    }
    result = &WPP_RECORDER_INITIALIZED;
    v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v3, v4);
      return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qqqDqd(
                            *((_QWORD *)WPP_GLOBAL_Control + 3),
                            v6,
                            v7,
                            *(_QWORD *)(UserSessionState + 19368),
                            v9,
                            v10,
                            v11,
                            v12);
    }
  }
  return result;
}
