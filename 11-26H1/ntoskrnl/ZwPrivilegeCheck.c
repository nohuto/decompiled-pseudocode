/*
 * XREFs of ZwPrivilegeCheck @ 0x140725C50
 * Callers:
 *     DifZwPrivilegeCheckWrapper @ 0x1406AED20 (DifZwPrivilegeCheckWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPrivilegeCheck(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
