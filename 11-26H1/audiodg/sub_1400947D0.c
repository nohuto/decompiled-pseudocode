/*
 * XREFs of sub_1400947D0 @ 0x1400947D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14009441C @ 0x14009441C (sub_14009441C.c)
 */

__int64 __fastcall sub_1400947D0(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  __int64 v6; // [rsp+78h] [rbp+10h] BYREF
  __int64 v7; // [rsp+80h] [rbp+18h] BYREF
  int v8; // [rsp+88h] [rbp+20h] BYREF

  v8 = a4;
  v7 = a3;
  v6 = a2;
  return sub_14009441C(
           a5,
           &v6,
           &v7,
           &v8,
           (__int64 *)(a1 + 24),
           (__int64 *)(a1 + 32),
           (__int64 *)(a1 + 16),
           (_DWORD *)(a1 + 44),
           (_DWORD *)(a1 + 48),
           (_DWORD *)(a1 + 52),
           (__int64 *)(a1 + 56));
}
