/*
 * XREFs of sub_140050874 @ 0x140050874
 * Callers:
 *     sub_14005089C @ 0x14005089C (sub_14005089C.c)
 *     sub_140050D0C @ 0x140050D0C (sub_140050D0C.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140050874(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return sub_1400B6010(v1);
  return result;
}
