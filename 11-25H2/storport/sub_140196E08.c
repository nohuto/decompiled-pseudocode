/*
 * XREFs of sub_140196E08 @ 0x140196E08
 * Callers:
 *     sub_1401973B0 @ 0x1401973B0 (sub_1401973B0.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14009E340 @ 0x14009E340 (sub_14009E340.c)
 *     sub_140195E44 @ 0x140195E44 (sub_140195E44.c)
 *     sub_140197110 @ 0x140197110 (sub_140197110.c)
 */

__int64 __fastcall sub_140196E08(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r9
  PVOID v3; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // esi
  _QWORD *v9; // rax
  int v11; // [rsp+50h] [rbp+30h] BYREF
  PVOID v12; // [rsp+58h] [rbp+38h] BYREF
  PVOID v13; // [rsp+60h] [rbp+40h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0LL;
  *a2 = 0LL;
  v11 = 0;
  v12 = 0LL;
  v6 = (_QWORD *)sub_1400143E0(64LL, 72LL, 1145266514LL, v2);
  v13 = v6;
  v7 = v6;
  if ( v6 )
  {
    v9 = v6 + 1;
    v9[1] = v9;
    *v9 = v9;
    *(_DWORD *)v7 = 72;
    *(_OWORD *)(v7 + 3) = *(_OWORD *)(a1 + 160);
    *((_DWORD *)v7 + 10) = 0;
    v8 = sub_140197110(a1, &v12, &v11);
    if ( v8 < 0 )
    {
      v3 = v12;
    }
    else
    {
      v13 = 0LL;
      *((_DWORD *)v7 + 11) = v11;
      v7[6] = v12;
      *a2 = v7;
      v7 = 0LL;
      v12 = 0LL;
    }
  }
  else
  {
    v8 = -1073741670;
  }
  if ( v3 )
    sub_140195E44(&v12);
  if ( v7 )
    sub_14009E340(&v13);
  return (unsigned int)v8;
}
