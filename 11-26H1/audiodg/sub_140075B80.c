/*
 * XREFs of sub_140075B80 @ 0x140075B80
 * Callers:
 *     sub_140046D40 @ 0x140046D40 (sub_140046D40.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14001EB30 @ 0x14001EB30 (sub_14001EB30.c)
 *     sub_14003F88C @ 0x14003F88C (sub_14003F88C.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140059F90 @ 0x140059F90 (sub_140059F90.c)
 */

__int64 __fastcall sub_140075B80(HKEY hKey, unsigned int *a2, _QWORD *a3)
{
  int v3; // r9d
  int v6; // r10d
  int v7; // r11d
  int v8; // ebx
  int v9; // edi
  int v10; // esi
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // eax
  HKEY v14; // rcx
  int v15; // eax
  int phkResult; // [rsp+20h] [rbp-298h]
  int v18; // [rsp+28h] [rbp-290h]
  int v19; // [rsp+30h] [rbp-288h]
  int v20; // [rsp+38h] [rbp-280h]
  int v21; // [rsp+40h] [rbp-278h]
  int v22; // [rsp+48h] [rbp-270h]
  int v23; // [rsp+50h] [rbp-268h]
  int v24; // [rsp+58h] [rbp-260h]
  int v25; // [rsp+60h] [rbp-258h]
  int v26; // [rsp+68h] [rbp-250h]
  HKEY v27[2]; // [rsp+70h] [rbp-248h] BYREF
  WCHAR SubKey[256]; // [rsp+80h] [rbp-238h] BYREF
  __int64 retaddr; // [rsp+2B8h] [rbp+0h]

  v3 = *((unsigned __int8 *)a2 + 12);
  v26 = *((unsigned __int8 *)a2 + 15);
  v6 = *((unsigned __int8 *)a2 + 10);
  v7 = *((unsigned __int8 *)a2 + 9);
  v8 = *((unsigned __int8 *)a2 + 8);
  v9 = *((unsigned __int16 *)a2 + 3);
  v10 = *((unsigned __int16 *)a2 + 2);
  v25 = *((unsigned __int8 *)a2 + 14);
  *a3 = 0LL;
  v24 = *((unsigned __int8 *)a2 + 13);
  v23 = v3;
  v22 = *((unsigned __int8 *)a2 + 11);
  v21 = v6;
  v20 = v7;
  v19 = v8;
  v18 = v9;
  phkResult = v10;
  v11 = sub_14001EB30(
          SubKey,
          256LL,
          (__int64)L"EffectPackRegistration\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\FxProperties",
          *a2,
          phkResult,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v27[0] = 0LL;
    v13 = RegOpenKeyExW(hKey, SubKey, 0, 0x20019u, v27);
    if ( v13 )
    {
      v12 = sub_140059F90(
              retaddr,
              70LL,
              (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
              v13);
    }
    else
    {
      v14 = v27[0];
      v27[0] = 0LL;
      v15 = MMDevAPI_33(v14, a3);
      v12 = v15;
      if ( v15 >= 0 )
        v12 = 0;
      else
        sub_14000C2A8(retaddr, 72, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp", v15);
    }
    sub_14003F88C(v27);
  }
  else
  {
    sub_14000C2A8(retaddr, 67, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp", v11);
  }
  return v12;
}
