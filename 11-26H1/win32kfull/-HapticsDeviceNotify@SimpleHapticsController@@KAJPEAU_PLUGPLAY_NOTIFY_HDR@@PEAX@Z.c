/*
 * XREFs of ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1402FFF90
 * Callers:
 *     <none>
 * Callees:
 *     W32AttachToSessionAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f___ @ 0x1402FFCB0 (W32AttachToSessionAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f___.c)
 */

NTSTATUS __fastcall SimpleHapticsController::HapticsDeviceNotify(
        struct _PLUGPLAY_NOTIFY_HDR *NotificationStructure,
        struct _PLUGPLAY_NOTIFY_HDR *Context)
{
  struct _PLUGPLAY_NOTIFY_HDR *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = NotificationStructure;
  v3[1] = Context;
  return W32AttachToSessionAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f_(*((unsigned int *)Context + 24), v3);
}
