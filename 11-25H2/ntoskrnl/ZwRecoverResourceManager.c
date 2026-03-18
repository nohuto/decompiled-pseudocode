/*
 * XREFs of ZwRecoverResourceManager @ 0x14069E060
 * Callers:
 *     CmpInitCmRM @ 0x140AD3ED8 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverResourceManager(HANDLE ResourceManagerHandle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle, v1);
}
