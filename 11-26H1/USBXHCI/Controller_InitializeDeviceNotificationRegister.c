/*
 * XREFs of Controller_InitializeDeviceNotificationRegister @ 0x1400082F0
 * Callers:
 *     Controller_D0EntryRestoreState @ 0x140039BB0 (Controller_D0EntryRestoreState.c)
 * Callees:
 *     XilRegister_WriteUlong @ 0x140008FA4 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Controller_InitializeDeviceNotificationRegister(__int64 a1)
{
  return XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL) + 20LL, 2LL);
}
