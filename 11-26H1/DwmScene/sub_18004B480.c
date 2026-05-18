/*
 * XREFs of sub_18004B480 @ 0x18004B480
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800128EC @ 0x1800128EC (sub_1800128EC.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800434E4 @ 0x1800434E4 (sub_1800434E4.c)
 *     sub_18004A294 @ 0x18004A294 (sub_18004A294.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_18004B480(_QWORD *a1)
{
  char result; // al
  __int64 *v3; // r9
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 (__fastcall *v9)(__int64, _QWORD *); // r8
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h] BYREF
  __int64 v14; // [rsp+58h] [rbp-8h]

  result = sub_18004A294((__int64)a1, (__int64)&v10);
  if ( v10 )
  {
    result = sub_180012A94((__int64)(a1 + 7), &v13);
    v3 = (__int64 *)a1[13];
    v4 = v3 + 9;
    if ( v3[9] )
    {
      v5 = a1[18];
      if ( v5 && (result = sub_1800128EC(v5)) != 0 )
      {
        v6 = a1[17];
        v7 = a1[18];
      }
      else
      {
        v7 = 0LL;
        v6 = 0LL;
      }
      if ( v6 )
      {
        sub_1800434E4(*v3, (__int64)&unk_1801CCF18, 1);
        v8 = sub_180012C40(&v12, v4);
        result = v9(v6, v8);
      }
      if ( v7 )
        result = sub_180010EC8(v7);
    }
    if ( v14 )
      result = sub_180010EC8(v14);
  }
  if ( v11 )
    return sub_180010EC8(v11);
  return result;
}
