/*
 * XREFs of ZwCreateMailslotFile @ 0x140724B10
 * Callers:
 *     DifZwCreateMailslotFileWrapper @ 0x1406A0150 (DifZwCreateMailslotFileWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateMailslotFile(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
