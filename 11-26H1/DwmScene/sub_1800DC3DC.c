/*
 * XREFs of sub_1800DC3DC @ 0x1800DC3DC
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031884 @ 0x180031884 (sub_180031884.c)
 */

__int64 __fastcall sub_1800DC3DC(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_180031884(*(_QWORD *)(a2 + 48));
  }
  return result;
}
