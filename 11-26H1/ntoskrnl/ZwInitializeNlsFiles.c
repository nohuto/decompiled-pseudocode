/*
 * XREFs of ZwInitializeNlsFiles @ 0x1407254F0
 * Callers:
 *     DifZwInitializeNlsFilesWrapper @ 0x1406A87F0 (DifZwInitializeNlsFilesWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwInitializeNlsFiles(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
