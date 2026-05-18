/*
 * XREFs of sub_180061970 @ 0x180061970
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180033B20 @ 0x180033B20 (sub_180033B20.c)
 *     sub_180060250 @ 0x180060250 (sub_180060250.c)
 *     sub_180067B18 @ 0x180067B18 (sub_180067B18.c)
 *     sub_180067CF0 @ 0x180067CF0 (sub_180067CF0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180061970(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h] BYREF
  __int64 v14; // [rsp+48h] [rbp-10h]

  v4 = sub_180012C40(&v12, a2);
  sub_180033B20(a1, &v10, v5, v4);
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 440) & 0x2000000) != 0 )
    {
      v7 = sub_180060250(&v13, &v10);
      LOBYTE(v8) = 1;
      sub_180067B18(a1, v7, v8);
      if ( v14 )
        sub_180010EC8(v14);
    }
  }
  LOBYTE(v6) = 1;
  result = sub_180067CF0(a1, a2, v6);
  if ( v11 )
    return sub_180010EC8(v11);
  return result;
}
