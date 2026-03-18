/*
 * XREFs of ?ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z @ 0x14023F42C
 * Callers:
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     EditionPrepareHidForInputThreadMigration @ 0x140249400 (EditionPrepareHidForInputThreadMigration.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ResetPointerDevices(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 UserSessionState; // rax
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  Handle = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  result = CHidInput::GetKernelHandleToRimObj(*(CHidInput **)(UserSessionState + 16832), &Handle);
  if ( result >= 0 )
  {
    RIMResetPointerDevices(Handle, v2);
    return ZwClose(Handle);
  }
  return result;
}
