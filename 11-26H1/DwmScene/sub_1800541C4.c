/*
 * XREFs of sub_1800541C4 @ 0x1800541C4
 * Callers:
 *     sub_1800C31E8 @ 0x1800C31E8 (sub_1800C31E8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800541C4(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned __int64 v3; // r8
  __int64 v4; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = (unsigned int)(HIDWORD(a2) + *(_DWORD *)(a1 + 48) * a2);
  if ( v3 >= (*(_QWORD *)(a1 + 32) - v2) >> 5 )
    return 0LL;
  v4 = 32 * v3;
  result = 0LL;
  if ( *(_DWORD *)(v4 + v2 + 28) == HIDWORD(a2) )
    return v4 + v2;
  return result;
}
