/*
 * XREFs of sub_1800D3370 @ 0x1800D3370
 * Callers:
 *     sub_1800D31E0 @ 0x1800D31E0 (sub_1800D31E0.c)
 *     sub_1800D3370 @ 0x1800D3370 (sub_1800D3370.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18001E58C @ 0x18001E58C (sub_18001E58C.c)
 *     sub_1800D3370 @ 0x1800D3370 (sub_1800D3370.c)
 *     sub_1800D4270 @ 0x1800D4270 (sub_1800D4270.c)
 *     sub_1800D4380 @ 0x1800D4380 (sub_1800D4380.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D3370(__int64 a1, int *a2)
{
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ebx
  _QWORD v13[4]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v14[32]; // [rsp+48h] [rbp-30h] BYREF

  v4 = *a2;
  sub_18001E58C((__int64)v14, (__int64)L"Value");
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 2;
        if ( v7 )
        {
          if ( v7 == 1 && (v8 = sub_1800141BC((__int64)v14), (unsigned __int8)sub_1800D4380(a2, v8)) )
          {
            v9 = sub_180013440(v13, (__int64)v14);
            v10 = sub_1800D4270(a2, v9);
            v11 = sub_1800D3370(a1, v10);
          }
          else
          {
            v11 = 0;
          }
        }
        else
        {
          v11 = 3;
        }
      }
      else
      {
        v11 = 1;
      }
    }
    else
    {
      v11 = 2;
    }
  }
  else
  {
    v11 = 4;
  }
  sub_180014244((__int64)v14);
  return v11;
}
