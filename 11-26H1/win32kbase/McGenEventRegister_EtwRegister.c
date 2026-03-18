/*
 * XREFs of McGenEventRegister_EtwRegister @ 0x1401A1790
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS McGenEventRegister_EtwRegister()
{
  NTSTATUS result; // eax

  result = 0;
  if ( !W32kControlGuid_Context )
    return EtwRegister(&W32kControlGuid, McGenControlCallbackV2, &W32kControlGuid_Context, &W32kControlGuid_Context);
  return result;
}
