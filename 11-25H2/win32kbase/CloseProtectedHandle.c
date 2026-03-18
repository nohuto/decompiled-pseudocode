/*
 * XREFs of CloseProtectedHandle @ 0x1400DE398
 * Callers:
 *     DestroyProcessInfo @ 0x140162224 (DestroyProcessInfo.c)
 *     xxxCreateThreadInfo @ 0x140162D44 (xxxCreateThreadInfo.c)
 * Callees:
 *     SetHandleFlag @ 0x1400DE3E0 (SetHandleFlag.c)
 */

NTSTATUS __fastcall CloseProtectedHandle(HANDLE Handle)
{
  if ( !Handle )
    return 0;
  SetHandleFlag(Handle, 1LL);
  return ObCloseHandle(Handle, 1);
}
