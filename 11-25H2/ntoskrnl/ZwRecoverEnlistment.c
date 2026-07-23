/*
 * XREFs of ZwRecoverEnlistment @ 0x14069E040
 * Callers:
 *     CmpRecoverEnlistment @ 0x1407D096C (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
