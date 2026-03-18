/*
 * XREFs of ZwCreateNamedPipeFile @ 0x140724B50
 * Callers:
 *     DifZwCreateNamedPipeFileWrapper @ 0x1406A04B0 (DifZwCreateNamedPipeFileWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateNamedPipeFile(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
