/*
 * XREFs of sub_140136390 @ 0x140136390
 * Callers:
 *     <none>
 * Callees:
 *     sub_14013C088 @ 0x14013C088 (sub_14013C088.c)
 *     sub_14013C0F0 @ 0x14013C0F0 (sub_14013C0F0.c)
 */

__int64 __fastcall sub_140136390(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v7; // r9d
  __int64 v8; // r8

  result = sub_14013C0F0(a3, 0LL, *(_QWORD *)a4);
  if ( (int)result >= 0 )
  {
    v7 = *(_DWORD *)(a4 + 24);
    v8 = *(_QWORD *)(a4 + 16);
    if ( v7 >= *(_DWORD *)(a3 + 8) - *(_DWORD *)(a3 + 12) - 14 )
      v7 = *(_DWORD *)(a3 + 8) - *(_DWORD *)(a3 + 12) - 14;
    *(_DWORD *)(a4 + 24) = v7;
    return sub_14013C088(a3, 1LL, v8);
  }
  return result;
}
