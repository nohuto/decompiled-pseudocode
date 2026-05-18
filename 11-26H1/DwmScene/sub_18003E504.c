/*
 * XREFs of sub_18003E504 @ 0x18003E504
 * Callers:
 *     sub_18003E504 @ 0x18003E504 (sub_18003E504.c)
 *     sub_1800401E4 @ 0x1800401E4 (sub_1800401E4.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180025EA0 @ 0x180025EA0 (sub_180025EA0.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 *     sub_18003E504 @ 0x18003E504 (sub_18003E504.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18003E504(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 i; // rbx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  sub_180012C40(&v7, a2);
  sub_180025EA0(a1);
  if ( v8 )
    sub_180010EC8(v8);
  v4 = *a2;
  sub_18003D718(v4);
  v5 = *(_QWORD *)(v4 + 40);
  for ( i = *(_QWORD *)(v4 + 32); i != v5; i += 16LL )
    sub_18003E504(a1, i);
}
