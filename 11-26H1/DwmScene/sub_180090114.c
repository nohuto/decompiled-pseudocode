/*
 * XREFs of sub_180090114 @ 0x180090114
 * Callers:
 *     sub_180092160 @ 0x180092160 (sub_180092160.c)
 * Callees:
 *     sub_18005C180 @ 0x18005C180 (sub_18005C180.c)
 *     sub_180076260 @ 0x180076260 (sub_180076260.c)
 *     sub_180090358 @ 0x180090358 (sub_180090358.c)
 *     sub_1800906E4 @ 0x1800906E4 (sub_1800906E4.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180090114(__int64 *a1, unsigned __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 i; // rdi
  __int64 *v12; // [rsp+60h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0x3FFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    v12 = (__int64 *)a2;
    v9 = sub_180076260((__int64)a1, (unsigned __int64 *)&v12);
    *a1 = v9;
    a1[1] = v9;
    a1[2] = v9 + (a2 << 6);
    v12 = a1;
    v10 = *a4;
    for ( i = *a3; i != v10; i += 64LL )
    {
      sub_180090358(v8, v9, i);
      v9 += 64LL;
    }
    sub_18005C180(v9, v9);
    a1[1] = v9;
    v12 = 0LL;
    sub_1800906E4(&v12);
  }
}
