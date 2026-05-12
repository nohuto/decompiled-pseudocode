/*
 * XREFs of sub_14006A4DC @ 0x14006A4DC
 * Callers:
 *     sub_14006A2B0 @ 0x14006A2B0 (sub_14006A2B0.c)
 * Callees:
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 *     sub_1400296E0 @ 0x1400296E0 (sub_1400296E0.c)
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 */

__int64 __fastcall sub_14006A4DC(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rcx
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-18h] BYREF

  if ( !*(_QWORD *)(a1 + 5624) )
    return 3221225659LL;
  v6 = a1 + 376;
  if ( !sub_140020090(a1 + 376, 18) )
    return 3221225659LL;
  if ( *a3 != 1 || a3[1] != 40 )
    return 3221225485LL;
  result = sub_1400296E0(v6);
  if ( (_DWORD)result )
  {
    v7 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)BugCheckParameter2 = 0LL;
    sub_1400403EC(v7, (__int64)BugCheckParameter2);
    KeBugCheckEx(0xF0u, 4uLL, BugCheckParameter2[1], 1uLL, 0LL);
  }
  return result;
}
