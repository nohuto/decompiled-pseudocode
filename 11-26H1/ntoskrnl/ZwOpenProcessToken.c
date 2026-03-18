/*
 * XREFs of ZwOpenProcessToken @ 0x140725A70
 * Callers:
 *     DifZwOpenProcessTokenWrapper @ 0x1406ACE60 (DifZwOpenProcessTokenWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenProcessToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
