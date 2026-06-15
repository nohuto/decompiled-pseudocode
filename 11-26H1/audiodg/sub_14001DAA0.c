/*
 * XREFs of sub_14001DAA0 @ 0x14001DAA0
 * Callers:
 *     sub_14001DA2C @ 0x14001DA2C (sub_14001DA2C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14001DAA0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  bool v3; // zf

  result = *(_QWORD *)(a1 + 32);
  *(_QWORD *)a2 = result;
  v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v3 )
    return sub_14000EB88(a1, a2);
  return result;
}
