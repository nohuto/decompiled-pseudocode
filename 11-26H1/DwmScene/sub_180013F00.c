/*
 * XREFs of sub_180013F00 @ 0x180013F00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_180013E60 @ 0x180013E60 (sub_180013E60.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_18003BF34 @ 0x18003BF34 (sub_18003BF34.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180013F00(__int64 a1, int *a2, int *a3)
{
  int v7; // [rsp+20h] [rbp-40h] BYREF
  int v8; // [rsp+24h] [rbp-3Ch]
  int v9; // [rsp+28h] [rbp-38h]
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  int v11; // [rsp+38h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+48h] [rbp-18h]
  _BYTE v14[16]; // [rsp+50h] [rbp-10h] BYREF

  if ( *(_DWORD *)(a1 + 48) && *(_DWORD *)(a1 + 48) != 4 )
  {
    sub_18001367C(*(_QWORD *)(a1 + 16), &v12);
    sub_180029C50(v12 + 16, v14);
    if ( *(_DWORD *)(a1 + 48) == 2 || *(_DWORD *)(a1 + 48) == 3 )
    {
      v7 = *a2;
      v8 = a2[1];
      v9 = a2[2];
      sub_180013E60(*(_QWORD *)(a1 + 16), &v7);
    }
    if ( *(_DWORD *)(a1 + 48) == 1 || *(_DWORD *)(a1 + 48) == 3 )
    {
      v10 = 0x3F80000000000000LL;
      v11 = 0;
      v7 = *a3;
      v8 = a3[1];
      v9 = a3[2];
      sub_18003BF34(*(_QWORD *)(a1 + 16), &v7, &v10);
    }
    sub_180011E54((__int64)v14);
    if ( v13 )
      sub_180010EC8(v13);
  }
  return 0LL;
}
