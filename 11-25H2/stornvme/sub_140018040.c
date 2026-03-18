/*
 * XREFs of sub_140018040 @ 0x140018040
 * Callers:
 *     sub_140017FC0 @ 0x140017FC0 (sub_140017FC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140018040(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 result; // rax

  if ( a2 < 0 )
    return 3238002695LL;
  v4 = a1 + 8LL * a2;
  v5 = *(_QWORD *)(v4 + 3816);
  if ( !v5 )
    return 3238002695LL;
  result = StorPortExtendedFunction(1LL, a1, v5, a4);
  *(_QWORD *)(v4 + 3816) = 0LL;
  return result;
}
