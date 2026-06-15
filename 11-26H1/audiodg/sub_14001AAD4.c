/*
 * XREFs of sub_14001AAD4 @ 0x14001AAD4
 * Callers:
 *     sub_14001AA24 @ 0x14001AA24 (sub_14001AA24.c)
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_14001A788 @ 0x14001A788 (sub_14001A788.c)
 *     sub_14001ABE8 @ 0x14001ABE8 (sub_14001ABE8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14001AAD4(__int64 a1, _QWORD *a2)
{
  char *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  int AgileReference; // edi
  __int64 *v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rcx
  char v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 *v13; // [rsp+60h] [rbp+18h] BYREF

  *a2 = 0LL;
  v3 = (char *)sub_14001ABE8(&v12);
  v4 = 0LL;
  if ( &v11 != v3 )
  {
    v4 = *(_QWORD *)v3;
    *(_QWORD *)v3 = 0LL;
  }
  v5 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    sub_1400B6010(v5);
  }
  if ( !v4 )
  {
    AgileReference = -2147024882;
    goto LABEL_7;
  }
  v13 = (__int64 *)(v4 + 48);
  v8 = sub_14001A788(&v13);
  v9 = v8;
  if ( a1 )
  {
    sub_1400125D4(v8);
    AgileReference = RoGetAgileReference(0LL, &unk_1400C6B08, a1, v9);
    if ( AgileReference < 0 )
      goto LABEL_7;
  }
  else
  {
    v10 = *v8;
    *v8 = 0LL;
    if ( v10 )
      sub_1400B6010(v10);
  }
  AgileReference = sub_1400B6010(v4);
LABEL_7:
  if ( v4 )
    sub_1400B6010(v4);
  return (unsigned int)AgileReference;
}
