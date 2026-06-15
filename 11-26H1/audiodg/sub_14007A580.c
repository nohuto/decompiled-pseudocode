/*
 * XREFs of sub_14007A580 @ 0x14007A580
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400767A8 @ 0x1400767A8 (sub_1400767A8.c)
 *     sub_140077360 @ 0x140077360 (sub_140077360.c)
 */

__int64 __fastcall sub_14007A580(__int64 a1, int a2, unsigned int a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // r10
  _QWORD *v9[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v10[6]; // [rsp+40h] [rbp-30h] BYREF
  int v11; // [rsp+88h] [rbp+18h] BYREF
  unsigned int v12; // [rsp+90h] [rbp+20h] BYREF
  __int64 v13; // [rsp+98h] [rbp+28h] BYREF

  v13 = a4;
  v12 = a3;
  v11 = a2;
  v5 = 0LL;
  if ( a3 )
  {
    while ( 1 )
    {
      *(_QWORD *)(a4 + 8 * v5) = 0LL;
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v12 )
        break;
      a4 = v13;
    }
  }
  *a5 = 0;
  v9[0] = &a5;
  v9[1] = &v13;
  v6 = sub_140077360(v10, a1, (__int64)&v11, (__int64)&v12, (__int64)&v13, (__int64)&a5);
  return sub_1400767A8((unsigned int *)(v7 + 48), *(_QWORD *)(v7 + 40), (__int64)v6, v9);
}
