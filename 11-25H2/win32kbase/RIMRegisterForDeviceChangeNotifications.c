/*
 * XREFs of RIMRegisterForDeviceChangeNotifications @ 0x140140134
 * Callers:
 *     rimOnPnpArrived @ 0x140181640 (rimOnPnpArrived.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x140099344 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_DSd @ 0x1401EC994 (WPP_RECORDER_AND_TRACE_SF_DSd.c)
 */

__int64 __fastcall RIMRegisterForDeviceChangeNotifications(
        __int64 a1,
        struct _DRIVER_OBJECT *a2,
        __int64 a3,
        void *a4,
        PVOID *a5)
{
  void *v5; // r8
  NTSTATUS v7; // ebp
  char v9; // si
  bool v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  int CallbackRoutine; // [rsp+20h] [rbp-48h]
  int Context; // [rsp+28h] [rbp-40h]
  int NotificationEntry; // [rsp+30h] [rbp-38h]

  v5 = *(void **)(a1 + 216);
  v7 = -1073741823;
  if ( v5 )
  {
    v7 = IoRegisterPlugPlayNotification(EventCategoryTargetDeviceChange, 0, v5, a2, RIMDeviceNotify, a4, a5);
    if ( v7 < 0 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (v9 = 1, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v9 = 0;
      }
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        RimDeviceTypeToRimInputType(a1, *(_DWORD *)(a1 + 48));
        UserSessionState = W32GetUserSessionState(v12, v11);
        LOBYTE(v14) = v10;
        LOBYTE(v15) = v9;
        WPP_RECORDER_AND_TRACE_SF_DSd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v15,
          v14,
          *(_QWORD *)(UserSessionState + 19336),
          CallbackRoutine,
          Context,
          NotificationEntry);
      }
    }
  }
  return (unsigned int)v7;
}
