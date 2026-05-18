/*
 * XREFs of sub_1800CE4B0 @ 0x1800CE4B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_1800BC140 @ 0x1800BC140 (sub_1800BC140.c)
 *     sub_1800CDE40 @ 0x1800CDE40 (sub_1800CDE40.c)
 *     sub_1800CE794 @ 0x1800CE794 (sub_1800CE794.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800CE4B0(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+28h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  __int64 v16; // [rsp+80h] [rbp+20h] BYREF
  __int64 v17; // [rsp+88h] [rbp+28h] BYREF

  sub_1800CE794(a1, &v10);
  sub_1800BC140(v10, &v17);
  v3 = **(_QWORD **)(a1 + 552);
  v16 = v3;
  v4 = v17;
  while ( !*(_BYTE *)(v3 + 25) )
  {
    v5 = (__int64 *)(*(_QWORD *)(v3 + 40) + 48LL);
    v6 = *(_QWORD *)(v3 + 40) + 144LL;
    while ( v5 != (__int64 *)v6 )
    {
      v7 = *v5;
      v12 = v7;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v8 = v5[1];
      v13 = v8;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      sub_180012C40(&v14, v5 + 2);
      sub_180012C40(&v15, v5 + 4);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 944LL))(v4, v12);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 944LL))(v4, v13);
      sub_1800CDE40(&v12);
      v5 += 6;
    }
    sub_18001D6F4(&v16, v2);
    v3 = v16;
  }
  result = sub_18000F938(&v17);
  if ( v11 )
    return sub_180010EC8(v11);
  return result;
}
