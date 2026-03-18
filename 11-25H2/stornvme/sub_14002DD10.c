/*
 * XREFs of sub_14002DD10 @ 0x14002DD10
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 */

__int64 __fastcall sub_14002DD10(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // rbx

  result = sub_140005000(a2);
  v6 = result;
  if ( (*(_DWORD *)(v5 + 4336) & 2) != 0 || v4 && *(_BYTE *)(v3 + 3) != 14 )
  {
    if ( (*(_BYTE *)(v5 + 21) & 8) != 0 )
      result = StorPortExtendedFunction(85LL, v5, 0LL, 0LL);
    *(_BYTE *)(v6 + 4225) |= 8u;
  }
  return result;
}
