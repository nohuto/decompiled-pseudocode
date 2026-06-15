/*
 * XREFs of sub_140076414 @ 0x140076414
 * Callers:
 *     sub_140078A54 @ 0x140078A54 (sub_140078A54.c)
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_14001A788 @ 0x14001A788 (sub_14001A788.c)
 *     sub_140076EBC @ 0x140076EBC (sub_140076EBC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140076414(__int64 a1, _QWORD *a2)
{
  char *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  int AgileReference; // edi
  __int64 *v7; // rax
  __int64 *v8; // rdi
  char v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 *v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  *a2 = 0LL;
  v3 = (char *)sub_140076EBC(&v11);
  v4 = 0LL;
  if ( &v10 != v3 )
  {
    v4 = *(_QWORD *)v3;
    *(_QWORD *)v3 = 0LL;
  }
  v5 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    sub_1400B6010(v5);
  }
  if ( !v4 )
  {
    AgileReference = -2147024882;
    goto LABEL_12;
  }
  v12 = (__int64 *)(v4 + 48);
  v7 = sub_14001A788(&v12);
  v8 = v7;
  if ( a1 )
  {
    sub_1400125D4(v7);
    AgileReference = RoGetAgileReference(0LL, &unk_1400CBB00, a1, v8);
    if ( AgileReference < 0 )
      goto LABEL_12;
  }
  else
  {
    v13 = 0LL;
    v12 = (__int64 *)*v7;
    *v7 = 0LL;
    sub_1400125D4((__int64 *)&v12);
    sub_1400125D4(&v13);
  }
  AgileReference = sub_1400B6010(v4);
LABEL_12:
  if ( v4 )
    sub_1400B6010(v4);
  return (unsigned int)AgileReference;
}
