/*
 * XREFs of sub_140195A38 @ 0x140195A38
 * Callers:
 *     sub_140196430 @ 0x140196430 (sub_140196430.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14019595C @ 0x14019595C (sub_14019595C.c)
 *     sub_140195E44 @ 0x140195E44 (sub_140195E44.c)
 *     sub_140195E90 @ 0x140195E90 (sub_140195E90.c)
 */

__int64 __fastcall sub_140195A38(__int64 a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v3; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // esi
  _QWORD *v9; // rax
  int v11; // [rsp+50h] [rbp+30h] BYREF
  __int64 v12; // [rsp+58h] [rbp+38h] BYREF
  __int64 v13; // [rsp+60h] [rbp+40h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0LL;
  *a2 = 0LL;
  v11 = 0;
  v12 = 0LL;
  v6 = sub_1400143E0(64LL, 72LL, 1145266514LL, v2);
  v13 = v6;
  v7 = v6;
  if ( v6 )
  {
    v9 = (_QWORD *)(v6 + 8);
    v9[1] = v9;
    *v9 = v9;
    *(_DWORD *)v7 = 72;
    *(_OWORD *)(v7 + 24) = *(_OWORD *)(a1 + 160);
    *(_DWORD *)(v7 + 40) = 0;
    v8 = sub_14019595C(a1, &v12, &v11);
    if ( v8 < 0 )
    {
      v3 = v12;
    }
    else
    {
      v13 = 0LL;
      *(_DWORD *)(v7 + 44) = v11;
      *(_QWORD *)(v7 + 48) = v12;
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
    sub_140195E90(&v13);
  return (unsigned int)v8;
}
