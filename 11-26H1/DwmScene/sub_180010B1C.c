/*
 * XREFs of sub_180010B1C @ 0x180010B1C
 * Callers:
 *     sub_18000E8A4 @ 0x18000E8A4 (sub_18000E8A4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000E6C8 @ 0x18000E6C8 (sub_18000E6C8.c)
 *     sub_18000F5EC @ 0x18000F5EC (sub_18000F5EC.c)
 *     sub_1800102A4 @ 0x1800102A4 (sub_1800102A4.c)
 *     sub_1800102C4 @ 0x1800102C4 (sub_1800102C4.c)
 *     sub_18001086C @ 0x18001086C (sub_18001086C.c)
 *     sub_1800108BC @ 0x1800108BC (sub_1800108BC.c)
 */

__int64 __fastcall sub_180010B1C(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  HANDLE v6; // rax
  __int64 v7; // r8
  int v8; // r9d
  int v9; // eax
  __int64 v10; // rdx
  int v11; // edi
  HANDLE v12; // rax
  __int64 v13; // r8
  int v14; // r9d
  int v15; // eax
  __int64 v17; // [rsp+28h] [rbp-E0h] BYREF
  HANDLE v18; // [rsp+30h] [rbp-D8h] BYREF
  HANDLE v19[2]; // [rsp+38h] [rbp-D0h] BYREF
  WCHAR Name[264]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 retaddr; // [rsp+270h] [rbp+168h]

  v4 = 0;
  *a3 = 0LL;
  sub_1800108BC((__int64)Name);
  sub_18001086C((__int64)Name, v5, (__int64)L"_p0");
  v6 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v19[0] = v6;
  if ( v6 )
  {
    v17 = 0LL;
    v9 = sub_18000F5EC(v6, (int *)&v17 + 1);
    v11 = v9;
    if ( v9 >= 0 )
    {
      sub_18001086C((__int64)Name, v10, (__int64)L"h");
      v12 = OpenSemaphoreW(0x1F0003u, 0, Name);
      v18 = v12;
      if ( !v12 )
      {
        v4 = sub_1800102A4(retaddr, 217, v13, v14);
        sub_18000E6C8(&v18);
        goto LABEL_12;
      }
      v15 = sub_18000F5EC(v12, (int *)&v17);
      v11 = v15;
      if ( v15 >= 0 )
      {
        sub_18000E6C8(&v18);
        *a3 = SHIDWORD(v17) | (unsigned __int64)((__int64)(int)v17 << 31);
        goto LABEL_12;
      }
      sub_1800102C4(retaddr, 219LL, (__int64)"wil", (unsigned int)v15);
      sub_18000E6C8(&v18);
    }
    else
    {
      sub_1800102C4(retaddr, 211LL, (__int64)"wil", (unsigned int)v9);
    }
    v4 = v11;
  }
  else if ( GetLastError() != 2 )
  {
    v4 = sub_1800102A4(retaddr, 205, v7, v8);
  }
LABEL_12:
  sub_18000E6C8(v19);
  return v4;
}
