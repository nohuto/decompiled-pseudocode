/*
 * XREFs of sub_1800D39C8 @ 0x1800D39C8
 * Callers:
 *     sub_1800D3DAC @ 0x1800D3DAC (sub_1800D3DAC.c)
 * Callees:
 *     sub_18001CBA0 @ 0x18001CBA0 (sub_18001CBA0.c)
 *     sub_18001CD08 @ 0x18001CD08 (sub_18001CD08.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_1800287AC @ 0x1800287AC (sub_1800287AC.c)
 */

__int64 __fastcall sub_1800D39C8(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r10
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // r10
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a2;
  v4 = a2[1];
  v5 = *a2;
  v14 = *a2;
  v6 = 0LL;
  while ( v5 != v4 )
  {
    ++v6;
    sub_18001D6F4(&v14, (__int64)a2);
    v5 = v14;
  }
  v7 = *a1;
  v14 = v2;
  if ( v2 == *(_QWORD *)v7 && *(_BYTE *)(v4 + 25) )
  {
    sub_18001CBA0((__int64)a1, (__int64)a1, *(__int64 **)(v7 + 8));
    *(_QWORD *)(v7 + 8) = v7;
    *(_QWORD *)v7 = v7;
    *(_QWORD *)(v7 + 16) = v7;
    a1[1] = 0LL;
  }
  else
  {
    while ( v2 != v4 )
    {
      sub_18001D6F4(&v14, (__int64)a2);
      v15 = v9;
      sub_18001D6F4(&v15, v10);
      v12 = sub_1800287AC(a1, v11);
      sub_18001CD08(v13, v12);
      v2 = v14;
    }
  }
  return v6;
}
