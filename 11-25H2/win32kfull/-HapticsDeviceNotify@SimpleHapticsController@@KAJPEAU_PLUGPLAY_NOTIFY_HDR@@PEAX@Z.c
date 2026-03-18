/*
 * XREFs of ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1402F0840
 * Callers:
 *     <none>
 * Callees:
 *     W32AttachToSessionAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f___ @ 0x1402F057C (W32AttachToSessionAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f___.c)
 */

NTSTATUS __fastcall SimpleHapticsController::HapticsDeviceNotify(
        struct _PLUGPLAY_NOTIFY_HDR *NotificationStructure,
        struct _PLUGPLAY_NOTIFY_HDR *Context)
{
  unsigned int v2; // ecx
  struct _PLUGPLAY_NOTIFY_HDR *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = NotificationStructure;
  v2 = *((_DWORD *)Context + 24);
  v4[1] = Context;
  return W32AttachToSessionAndExecute__lambda_65ee24ea5d3e0064f8b894a08a68a71f_(v2, v4);
}
