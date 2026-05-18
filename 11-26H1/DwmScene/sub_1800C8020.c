/*
 * XREFs of sub_1800C8020 @ 0x1800C8020
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800C5BE0 @ 0x1800C5BE0 (sub_1800C5BE0.c)
 *     sub_1800C5CB8 @ 0x1800C5CB8 (sub_1800C5CB8.c)
 *     sub_1800C8CD8 @ 0x1800C8CD8 (sub_1800C8CD8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C8020(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 *v7; // rax
  char v8; // bl
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 result; // rax
  char v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+30h] [rbp-38h]
  __int64 v16; // [rsp+38h] [rbp-30h]
  __int64 v17; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+48h] [rbp-20h]
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF

  LODWORD(v19) = 0;
  _InterlockedIncrement64(qword_1801C8A90);
  if ( *a2 )
  {
    v7 = sub_1800C5CB8(*a2, &v17, *(_DWORD *)(a1 + 88));
    v8 = 1;
    v9 = *v7;
  }
  else
  {
    v14 = 0LL;
    v7 = (__int64 *)&v13;
    v8 = 2;
    v9 = 0LL;
  }
  v15 = v9;
  v10 = v7[1];
  v16 = v10;
  *v7 = 0LL;
  v7[1] = 0LL;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v14 )
      sub_180010EC8(v14);
  }
  if ( (v8 & 1) != 0 && v18 )
    sub_180010EC8(v18);
  v11 = *sub_1800C5BE0(v9, &v19);
  sub_18000F938(&v19);
  result = sub_1800C8CD8(a1, v11, a3, a4);
  if ( v10 )
    return sub_180010EC8(v10);
  return result;
}
