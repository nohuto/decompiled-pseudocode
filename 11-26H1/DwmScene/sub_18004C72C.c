/*
 * XREFs of sub_18004C72C @ 0x18004C72C
 * Callers:
 *     sub_18004BFB8 @ 0x18004BFB8 (sub_18004BFB8.c)
 * Callees:
 *     sub_18001D260 @ 0x18001D260 (sub_18001D260.c)
 */

__int64 __fastcall sub_18004C72C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r9
  int v5; // eax
  __int64 result; // rax

  sub_18001D260(a2, a3);
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_QWORD *)(v3 + 32) = *(_QWORD *)v4;
  *(_QWORD *)(v3 + 40) = *(_QWORD *)(v4 + 8);
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 8) = 0LL;
  v5 = *(_DWORD *)(v4 + 16);
  *(_QWORD *)(v3 + 56) = 0LL;
  *(_QWORD *)(v3 + 64) = 0LL;
  *(_DWORD *)(v3 + 48) = v5;
  *(_QWORD *)(v3 + 56) = *(_QWORD *)(v4 + 24);
  result = *(_QWORD *)(v4 + 32);
  *(_QWORD *)(v3 + 64) = result;
  *(_QWORD *)(v4 + 24) = 0LL;
  *(_QWORD *)(v4 + 32) = 0LL;
  return result;
}
