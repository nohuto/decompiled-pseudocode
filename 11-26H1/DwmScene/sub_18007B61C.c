/*
 * XREFs of sub_18007B61C @ 0x18007B61C
 * Callers:
 *     sub_18007AC98 @ 0x18007AC98 (sub_18007AC98.c)
 *     sub_18007AEA8 @ 0x18007AEA8 (sub_18007AEA8.c)
 *     sub_18007D884 @ 0x18007D884 (sub_18007D884.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 */

__int64 __fastcall sub_18007B61C(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax

  sub_180012C40(a1, a2);
  sub_180012C40((_QWORD *)(v3 + 16), (_QWORD *)(v2 + 16));
  result = v5;
  *(_DWORD *)(v5 + 32) = *(_DWORD *)(v4 + 32);
  return result;
}
