/*
 * XREFs of RIMRegisterForDeviceChangeNotifications @ 0x140093704
 * Callers:
 *     rimOnPnpArrived @ 0x140093AC0 (rimOnPnpArrived.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x140096120 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_DSd @ 0x14020B29C (WPP_RECORDER_AND_TRACE_SF_DSd.c)
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
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
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
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (v9 = 1, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v9 = 0;
      }
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        RimDeviceTypeToRimInputType(a1, *(unsigned int *)(a1 + 48));
        UserSessionState = W32GetUserSessionState(v12, v11, v13);
        LOBYTE(v15) = v10;
        LOBYTE(v16) = v9;
        WPP_RECORDER_AND_TRACE_SF_DSd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v16,
          v15,
          *(_QWORD *)(UserSessionState + 19368),
          CallbackRoutine,
          Context,
          NotificationEntry);
      }
    }
  }
  return (unsigned int)v7;
}
