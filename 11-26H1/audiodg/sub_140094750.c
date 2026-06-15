/*
 * XREFs of sub_140094750 @ 0x140094750
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400942C8 @ 0x1400942C8 (sub_1400942C8.c)
 */

__int64 __fastcall sub_140094750(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  __int64 v6; // [rsp+78h] [rbp+10h] BYREF
  __int64 v7; // [rsp+80h] [rbp+18h] BYREF
  int v8; // [rsp+88h] [rbp+20h] BYREF

  v8 = a4;
  v7 = a3;
  v6 = a2;
  return sub_1400942C8(
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
