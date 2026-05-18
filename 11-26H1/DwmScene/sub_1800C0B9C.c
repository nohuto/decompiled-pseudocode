/*
 * XREFs of sub_1800C0B9C @ 0x1800C0B9C
 * Callers:
 *     sub_1800C0910 @ 0x1800C0910 (sub_1800C0910.c)
 * Callees:
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_1800425BC @ 0x1800425BC (sub_1800425BC.c)
 *     sub_1800BEF90 @ 0x1800BEF90 (sub_1800BEF90.c)
 *     sub_1800BF0A0 @ 0x1800BF0A0 (sub_1800BF0A0.c)
 *     sub_1800BF1A8 @ 0x1800BF1A8 (sub_1800BF1A8.c)
 *     sub_1800C0664 @ 0x1800C0664 (sub_1800C0664.c)
 *     sub_1800C18B8 @ 0x1800C18B8 (sub_1800C18B8.c)
 *     sub_1800C195C @ 0x1800C195C (sub_1800C195C.c)
 */

__int64 __fastcall sub_1800C0B9C(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // r15
  signed int v4; // esi
  __int64 v5; // rcx
  unsigned int v6; // r10d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  char *v10; // rdx
  unsigned int v11; // r10d
  __int64 *v12; // rbx
  __int64 *v13; // rax
  __int64 *i; // rax
  __int64 v15; // rcx
  __int64 j; // r14
  char v17; // r8
  unsigned int v18; // esi
  __int64 v19; // rbx
  __int64 v20; // r11
  __int64 v21; // r10
  unsigned __int64 v22; // rdx
  __int64 v23; // rbx
  unsigned __int64 v24; // rdx
  __int64 v25; // rbx
  char v26[16]; // [rsp+20h] [rbp-39h] BYREF
  char v27; // [rsp+30h] [rbp-29h] BYREF
  char v28; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v29[4]; // [rsp+50h] [rbp-9h] BYREF
  int v30; // [rsp+74h] [rbp+1Bh]
  __int64 v31; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v32; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 v33; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v34; // [rsp+D8h] [rbp+7Fh] BYREF

  result = *(unsigned int *)(a1 + 1640);
  if ( !(_DWORD)result )
    return result;
  v3 = (__int64 *)(a1 + 1648);
  v4 = (*(_DWORD *)(a1 + 1644) - (int)result + 21) % 0x14u;
  do
  {
    LODWORD(v31) = *(_DWORD *)(56LL * v4 + a1 + 536);
    v5 = sub_1800425BC(v3, v29, &v31)[2];
    if ( !*(_BYTE *)(v5 + 25) && v6 >= *(_DWORD *)(v5 + 32) )
    {
      v7 = sub_1800BF0A0(v3, (__int64)v26, &v31);
      result = (__int64)sub_1800C0664(a1, &v32, *(_DWORD *)(*(_QWORD *)v7 + 44LL));
      v9 = v32;
      if ( v32 <= 0 )
        break;
      v10 = &v27;
      goto LABEL_29;
    }
    result = (__int64)sub_1800425BC(v3, v29, &v31);
    v8 = *v3;
    v12 = *(__int64 **)(result + 16);
    if ( v12 == *(__int64 **)*v3 )
      break;
    if ( *((_BYTE *)v12 + 25) )
    {
      v12 = (__int64 *)v12[2];
    }
    else
    {
      v13 = (__int64 *)*v12;
      if ( *(_BYTE *)(*v12 + 25) )
      {
        for ( i = (__int64 *)v12[1]; !*((_BYTE *)i + 25) && v12 == (__int64 *)*i; i = (__int64 *)i[1] )
          v12 = i;
        if ( !*((_BYTE *)v12 + 25) )
          v12 = i;
      }
      else
      {
        do
        {
          v12 = v13;
          v13 = (__int64 *)v13[2];
        }
        while ( !*((_BYTE *)v13 + 25) );
      }
    }
    v15 = *(_QWORD *)(v8 + 8);
    result = 0LL;
    v30 = 0;
    for ( j = v8; !*(_BYTE *)(v15 + 25); v15 = *(_QWORD *)v15 )
    {
      if ( v11 >= *(_DWORD *)(v15 + 32) )
      {
        v17 = 0;
      }
      else
      {
        v17 = 1;
        j = v15;
      }
      result = v15 + 16;
      if ( !v17 )
        v15 += 16LL;
    }
    if ( j == v8 )
      break;
    sub_1800C0664(a1, &v33, *((_DWORD *)v12 + 11));
    result = (__int64)sub_1800C0664(a1, &v34, *(_DWORD *)(j + 44));
    if ( v33 <= 0 )
      break;
    result = v34;
    if ( v34 <= 0 )
      break;
    v10 = &v28;
    v9 = v33
       + (v34 - v33) / (unsigned int)(*(_DWORD *)(j + 32) - *((_DWORD *)v12 + 8)) * ((int)v31 - *((_DWORD *)v12 + 8));
LABEL_29:
    *(_QWORD *)(*(_QWORD *)sub_1800BEF90((__int64 *)(a1 + 1680), (__int64)v10, &v31) + 40LL) = v9;
    --*(_DWORD *)(a1 + 1640);
    v18 = v4 + 1;
    v8 = v18 / 0x14;
    result = (unsigned int)(20 * v8);
    v4 = v18 - result;
  }
  while ( *(_DWORD *)(a1 + 1640) );
  if ( *(_QWORD *)(a1 + 1656) > 0x14uLL )
  {
    v19 = **(_QWORD **)(a1 + 1648);
    v31 = v19;
    do
      sub_18001D6F4(&v31, v8);
    while ( v21 != 1 );
    result = sub_1800C195C(v20, &v31, v19, v31);
  }
  v22 = *(_QWORD *)(a1 + 1672);
  if ( v22 > 0x14 )
  {
    v31 = **(_QWORD **)(a1 + 1664);
    v23 = v31;
    sub_1800BF1A8(&v31, v22 - 20);
    result = sub_1800C18B8(a1 + 1664, &v31, v23, v31);
  }
  v24 = *(_QWORD *)(a1 + 1688);
  if ( v24 > 0x14 )
  {
    v31 = **(_QWORD **)(a1 + 1680);
    v25 = v31;
    sub_1800BF1A8(&v31, v24 - 20);
    return sub_1800C18B8(a1 + 1680, &v31, v25, v31);
  }
  return result;
}
