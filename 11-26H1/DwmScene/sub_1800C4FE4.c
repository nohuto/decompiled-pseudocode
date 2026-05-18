/*
 * XREFs of sub_1800C4FE4 @ 0x1800C4FE4
 * Callers:
 *     sub_1800C4F18 @ 0x1800C4F18 (sub_1800C4F18.c)
 * Callees:
 *     sub_180020570 @ 0x180020570 (sub_180020570.c)
 *     sub_180020794 @ 0x180020794 (sub_180020794.c)
 *     sub_1800208F4 @ 0x1800208F4 (sub_1800208F4.c)
 *     sub_18002110C @ 0x18002110C (sub_18002110C.c)
 *     sub_1800C2B64 @ 0x1800C2B64 (sub_1800C2B64.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C4FE4(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE v11[16]; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v12[240]; // [rsp+40h] [rbp-F8h] BYREF

  v4 = 0LL;
  sub_180020794((__int64)v11);
  if ( *a2 != a2[1] )
  {
    sub_180020570((__int64)v12, (__int64)"{");
    if ( (__int64)(a2[1] - *a2) >> 4 )
    {
      v5 = 0LL;
      do
      {
        v6 = sub_180020570((__int64)v12, (__int64)"[");
        v7 = std::ostream::operator<<(v6, v4);
        v8 = sub_180020570(v7, (__int64)"] = ");
        v9 = sub_1800C2B64(v8, v5 + *a2);
        sub_180020570(v9, (__int64)",");
        ++v4;
        v5 += 16LL;
      }
      while ( v4 < (__int64)(a2[1] - *a2) >> 4 );
    }
    sub_180020570((__int64)v12, (__int64)"}");
  }
  sub_18002110C((__int64)v11, a1);
  sub_1800208F4((__int64)v11);
  return a1;
}
