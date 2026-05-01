/*
 * XREFs of ?HampSystemWaitForSingleObject@@YAJPEAXK@Z @ 0x180017CC8
 * Callers:
 *     ?HampUtilActOnThreads@@YAJPEAXKKP6AJ000@Z0@Z @ 0x1800177F4 (-HampUtilActOnThreads@@YAJPEAXKKP6AJ000@Z0@Z.c)
 *     ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180017954 (-HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall HampSystemWaitForSingleObject(void *a1)
{
  _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+18h] BYREF

  Timeout.QuadPart = 0LL;
  return NtWaitForSingleObject(a1, 0, &Timeout);
}
