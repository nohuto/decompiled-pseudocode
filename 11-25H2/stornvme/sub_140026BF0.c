/*
 * XREFs of sub_140026BF0 @ 0x140026BF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 */

__int64 __fastcall sub_140026BF0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r9
  __int64 v4; // rdi
  _QWORD *v5; // rbx

  result = sub_140005000(a2);
  v4 = result;
  v5 = (_QWORD *)(result + 4176);
  if ( (*(_DWORD *)(v3 + 56) & 8) != 0 || !*v5 )
  {
    *(_DWORD *)v5 = 0;
  }
  else
  {
    result = StorPortExtendedFunction(1LL, v3, *v5, v3);
    *v5 = 0LL;
  }
  *(_BYTE *)(v4 + 4225) |= 8u;
  return result;
}
