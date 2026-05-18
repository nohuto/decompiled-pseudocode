/*
 * XREFs of sub_180082100 @ 0x180082100
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800141F0 @ 0x1800141F0 (sub_1800141F0.c)
 *     sub_1800293DC @ 0x1800293DC (sub_1800293DC.c)
 *     sub_180036040 @ 0x180036040 (sub_180036040.c)
 *     sub_180052820 @ 0x180052820 (sub_180052820.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180082100(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_1800293DC(a1 + 10);
  result = a1[14];
  if ( !result || *(_DWORD *)(result + 24) != 2 )
    result = sub_180052820(a1 + 15);
  if ( (a1[5] & 1) != 0 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
    sub_180036040(v3, v6);
    v4 = v6[0];
    v5 = v6[1];
    while ( v4 != v5 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 16LL))(a1, v4);
      v4 += 16LL;
    }
    return sub_1800141F0((__int64)v6);
  }
  return result;
}
