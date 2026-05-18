/*
 * XREFs of sub_1800DDF49 @ 0x1800DDF49
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038000 @ 0x180038000 (sub_180038000.c)
 */

__int64 __fastcall sub_1800DDF49(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    return sub_180038000(*(_QWORD *)(a2 + 128));
  }
  return result;
}
