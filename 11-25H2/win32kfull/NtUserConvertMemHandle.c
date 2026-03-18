/*
 * XREFs of NtUserConvertMemHandle @ 0x1401F5820
 * Callers:
 *     <none>
 * Callees:
 *     _ConvertMemHandle @ 0x1401F588C (_ConvertMemHandle.c)
 */

__int64 __fastcall NtUserConvertMemHandle(volatile void *Address, SIZE_T Length)
{
  unsigned int v2; // ebx
  __int64 v4; // rbx
  __int64 v5; // rcx

  v2 = Length;
  EnterCrit(0LL, 0LL);
  ProbeForRead(Address, v2, 1u);
  v4 = ConvertMemHandle(Address, v2);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
