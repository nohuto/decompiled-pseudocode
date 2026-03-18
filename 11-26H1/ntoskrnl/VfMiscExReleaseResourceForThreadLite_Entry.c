/*
 * XREFs of VfMiscExReleaseResourceForThreadLite_Entry @ 0x140C3CAF0
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscCheckResourceRelease @ 0x140C3E3B4 (ViMiscCheckResourceRelease.c)
 */

__int64 __fastcall VfMiscExReleaseResourceForThreadLite_Entry(__int64 a1)
{
  return ViMiscCheckResourceRelease(*(_QWORD *)(a1 + 16), *(_QWORD *)a1);
}
