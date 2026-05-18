/*
 * XREFs of sub_180098A18 @ 0x180098A18
 * Callers:
 *     sub_180098584 @ 0x180098584 (sub_180098584.c)
 *     sub_180098664 @ 0x180098664 (sub_180098664.c)
 *     sub_18009888C @ 0x18009888C (sub_18009888C.c)
 *     sub_18009891C @ 0x18009891C (sub_18009891C.c)
 *     sub_180098A64 @ 0x180098A64 (sub_180098A64.c)
 *     sub_180098AFC @ 0x180098AFC (sub_180098AFC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180098A18(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rcx
  _QWORD *v4; // rax

  v3 = (_QWORD *)(a1 + 144);
  v4 = v3;
  while ( *v4 != a3 )
  {
    if ( ++v4 == v3 + 5 )
    {
      *(_BYTE *)a2 = 0;
      *(_QWORD *)(a2 + 8) = 0LL;
      return a2;
    }
  }
  *(_BYTE *)a2 = 1;
  *(_QWORD *)(a2 + 8) = (unsigned int)(v4 - v3);
  return a2;
}
