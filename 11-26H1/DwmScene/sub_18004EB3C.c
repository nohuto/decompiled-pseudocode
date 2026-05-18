/*
 * XREFs of sub_18004EB3C @ 0x18004EB3C
 * Callers:
 *     sub_180034E70 @ 0x180034E70 (sub_180034E70.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001CBF8 @ 0x18001CBF8 (sub_18001CBF8.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_18004C110 @ 0x18004C110 (sub_18004C110.c)
 *     sub_18004C184 @ 0x18004C184 (sub_18004C184.c)
 *     sub_18004F130 @ 0x18004F130 (sub_18004F130.c)
 *     sub_18004F21C @ 0x18004F21C (sub_18004F21C.c)
 *     sub_18005DEB0 @ 0x18005DEB0 (sub_18005DEB0.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18004EB3C(__int64 a1)
{
  __int64 v1; // r15
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 *v6; // rbx
  __int64 **v7; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // rbx
  _QWORD *v12; // rbx
  _QWORD *v13; // rbx
  __int64 result; // rax
  __int64 k; // rbx
  __int64 m; // rbx
  __int64 v17[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1 + 18560;
  v3 = **(_QWORD **)(a1 + 18560);
  v18 = v3;
  while ( !*(_BYTE *)(v3 + 25) )
  {
    sub_18005DEB0(*(_QWORD *)(v3 + 64));
    sub_18001D6F4(&v18, v4);
    v3 = v18;
  }
  v5 = a1 + 18592;
  v6 = **(__int64 ***)(a1 + 18592);
  while ( !*((_BYTE *)v6 + 25) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6[8] + 8LL))(v6[8]);
    v7 = (__int64 **)v6[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v6 = i;
      v6 = i;
    }
    else
    {
      v6 = (__int64 *)v6[2];
      for ( j = *v7; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v6 = j;
    }
  }
  v10 = *(_QWORD *)(a1 + 18576);
  sub_18004C110(a1 + 18576, a1 + 18576, *(char **)(v10 + 8));
  *(_QWORD *)(v10 + 8) = v10;
  *(_QWORD *)v10 = v10;
  *(_QWORD *)(v10 + 16) = v10;
  *(_QWORD *)(a1 + 18584) = 0LL;
  sub_18004F130(v1);
  v11 = *(_QWORD **)v5;
  sub_18004C184(a1 + 18592, a1 + 18592, *(char **)(*(_QWORD *)v5 + 8LL));
  v11[1] = v11;
  *v11 = v11;
  v11[2] = v11;
  *(_QWORD *)(a1 + 18600) = 0LL;
  v12 = *(_QWORD **)(a1 + 16);
  sub_18001CBF8(a1 + 16, a1 + 16, v12[1]);
  v12[1] = v12;
  *v12 = v12;
  v12[2] = v12;
  *(_QWORD *)(a1 + 24) = 0LL;
  v13 = *(_QWORD **)(a1 + 2088);
  sub_18001CBF8(a1 + 2088, a1 + 2088, v13[1]);
  v13[1] = v13;
  *v13 = v13;
  v13[2] = v13;
  *(_OWORD *)v17 = 0LL;
  *(_QWORD *)(a1 + 2096) = 0LL;
  sub_180011F5C((_QWORD *)(a1 + 18648), v17);
  if ( v17[1] )
    sub_180010EC8(v17[1]);
  *(_OWORD *)v17 = 0LL;
  result = (__int64)sub_180011F5C((_QWORD *)(a1 + 18632), v17);
  if ( v17[1] )
    result = sub_180010EC8(v17[1]);
  for ( k = a1 + 32; k != a1 + 2080; k += 32LL )
  {
    *(_QWORD *)(k + 16) = 0LL;
    *(_BYTE *)sub_1800148EC(k) = 0;
    result = sub_18004F21C(k);
  }
  for ( m = a1 + 2104; m != a1 + 18488; m += 32LL )
  {
    *(_QWORD *)(m + 16) = 0LL;
    *(_BYTE *)sub_1800148EC(m) = 0;
    result = sub_18004F21C(m);
  }
  return result;
}
