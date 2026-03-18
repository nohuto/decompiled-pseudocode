/*
 * XREFs of ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x140065A50
 * Callers:
 *     InvokeMouseCursorPositionCallout @ 0x140064640 (InvokeMouseCursorPositionCallout.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x140224C2C (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     IsKSTThread @ 0x1400659B0 (IsKSTThread.c)
 *     ApiSetEditionInputExtensibilityCallout @ 0x140065AA4 (ApiSetEditionInputExtensibilityCallout.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 */

void __fastcall InputExtensibilityCallout::CallUserModeLockFree(
        InputExtensibilityCallout *this,
        struct _CLIENT_DEVICE_NOTIFICATION *a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  if ( !(unsigned __int8)IsInputThread() && !IsKSTThread(v5, v4, v6) )
    KeBugCheck(0x164u);
  ApiSetEditionInputExtensibilityCallout(*(_QWORD *)this, a2);
}
