/*
 * XREFs of sub_140026C00 @ 0x140026C00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_140026C00(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  *a2 = off_1400B9840;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v3 = a1[2];
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  a2[1] = a1[1];
  a2[2] = a1[2];
  v4 = a1[3];
  a2[3] = v4;
  if ( v4 )
    sub_1400B6010(v4);
  return a2;
}
