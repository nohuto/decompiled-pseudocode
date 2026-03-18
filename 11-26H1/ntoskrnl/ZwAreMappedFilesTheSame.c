/*
 * XREFs of ZwAreMappedFilesTheSame @ 0x1407245F0
 * Callers:
 *     DifZwAreMappedFilesTheSameWrapper @ 0x14069C010 (DifZwAreMappedFilesTheSameWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAreMappedFilesTheSame(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
