/*
 * XREFs of sub_1800DA07B @ 0x1800DA07B
 * Callers:
 *     <none>
 * Callees:
 *     sub_180013488 @ 0x180013488 (sub_180013488.c)
 */

__int64 __fastcall sub_1800DA07B(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 8;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~8u;
    return sub_180013488();
  }
  return result;
}
