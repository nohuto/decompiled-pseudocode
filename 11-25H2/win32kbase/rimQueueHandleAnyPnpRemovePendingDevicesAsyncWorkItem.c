/*
 * XREFs of rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem @ 0x1401ED8B4
 * Callers:
 *     rimHandleAnyPnpRemovePendingDevices @ 0x140035294 (rimHandleAnyPnpRemovePendingDevices.c)
 * Callees:
 *     RIMQueueAndSignalAsyncWorkItem @ 0x140199F14 (RIMQueueAndSignalAsyncWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDqd @ 0x1401ECDB8 (WPP_RECORDER_AND_TRACE_SF_qqqDqd.c)
 *     RIMAllocateAsyncInputWorkItem @ 0x1401EFAA0 (RIMAllocateAsyncInputWorkItem.c)
 */

void __fastcall rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem(struct RawInputManagerObject *a1)
{
  struct RIMAsyncWorkItem *v2; // rax
  __int64 v3; // rdx
  char v4; // bp
  char v5; // r15
  __int64 UserSessionState; // rax
  int v7; // [rsp+20h] [rbp-68h]
  int v8; // [rsp+28h] [rbp-60h]
  int v9; // [rsp+30h] [rbp-58h]
  int v10; // [rsp+38h] [rbp-50h]

  v2 = (struct RIMAsyncWorkItem *)RIMAllocateAsyncInputWorkItem(a1, 0LL, 0LL, 0LL, 0, 6);
  if ( v2 )
  {
    *((_DWORD *)a1 + 279) = 1;
    RIMQueueAndSignalAsyncWorkItem(a1, v2);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (v4 = 1, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v4 = 0;
    }
    v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v3);
      WPP_RECORDER_AND_TRACE_SF_qqqDqd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v4,
        v5,
        *(_QWORD *)(UserSessionState + 19336),
        v7,
        v8,
        v9,
        v10);
    }
  }
}
