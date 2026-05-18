/*
 * XREFs of sub_180059718 @ 0x180059718
 * Callers:
 *     sub_180064530 @ 0x180064530 (sub_180064530.c)
 * Callees:
 *     sub_1800597B4 @ 0x1800597B4 (sub_1800597B4.c)
 *     sub_18005A750 @ 0x18005A750 (sub_18005A750.c)
 *     sub_18005A8BC @ 0x18005A8BC (sub_18005A8BC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180059718(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 176LL))(a1, a3);
  (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 184LL))(a1, a2, a3);
  result = sub_1800597B4(a1, a2, a3);
  if ( a1[32] )
  {
    v7 = 0LL;
    sub_18005A8BC(a1, &v7);
    v7 = 0LL;
    return sub_18005A750(a1, &v7);
  }
  return result;
}
