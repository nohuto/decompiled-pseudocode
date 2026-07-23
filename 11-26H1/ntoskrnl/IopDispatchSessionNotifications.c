/*
 * XREFs of IopDispatchSessionNotifications @ 0x14079A1B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IopDispatchSessionNotifications(_QWORD *CallbackContext, int *Argument1, PVOID Argument2)
{
  __int64 v4; // rax
  int v6; // edx
  __int64 *v7; // rcx

  v4 = CallbackContext[6];
  v6 = *((_DWORD *)IopSessionEventType + Argument1[8]);
  v7 = (__int64 *)(Argument1 + 14);
  if ( (!v4 || v4 == *v7) && (v6 & (_DWORD)CallbackContext[7]) != 0 )
    guard_dispatch_icall_no_overrides(*v7, CallbackContext[5]);
}
