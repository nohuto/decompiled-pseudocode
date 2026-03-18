/*
 * XREFs of PopPluginUnregisterDevice @ 0x140606088
 * Callers:
 *     PopFxUnregisterDevice @ 0x140B06628 (PopFxUnregisterDevice.c)
 * Callees:
 *     PopFxBugCheck @ 0x1403B0E54 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPluginUnregisterDevice(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  result = guard_dispatch_icall_no_overrides(4LL, &v4);
  if ( !(_BYTE)result )
    PopFxBugCheck(0x605uLL, 4uLL, BugCheckParameter3, 0LL);
  return result;
}
