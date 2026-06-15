/*
 * XREFs of sub_14005E604 @ 0x14005E604
 * Callers:
 *     sub_14005E820 @ 0x14005E820 (sub_14005E820.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14003F88C @ 0x14003F88C (sub_14003F88C.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14004A760 @ 0x14004A760 (sub_14004A760.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_14005E604(__int64 a1, __int64 a2, GUID *a3)
{
  unsigned int v4; // ebx
  LSTATUS v5; // eax
  int v6; // eax
  HRESULT v7; // eax
  int v8; // edx
  int v9; // r9d
  __int64 v11; // [rsp+30h] [rbp-D0h] BYREF
  HKEY phkResult; // [rsp+38h] [rbp-C8h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B0h]
  WCHAR SubKey[264]; // [rsp+60h] [rbp-A0h] BYREF
  _UNKNOWN *retaddr; // [rsp+288h] [rbp+188h]

  if ( (unsigned int)sub_14004A760(
                       SubKey,
                       260LL,
                       L"%s\\%s",
                       L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\DspParameters\\",
                       a1) != -1 )
  {
    phkResult = 0LL;
    v5 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &phkResult);
    v4 = v5;
    if ( v5 < 0 )
    {
      sub_14000C2A8((int)retaddr, 64, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopumpdspmanager.cpp", v5);
LABEL_17:
      sub_14003F88C(&phkResult);
      return v4;
    }
    v11 = 0LL;
    v6 = MMDevAPI_4(SubKey, 257LL, &v11);
    v4 = v6;
    if ( v6 < 0 )
    {
      sub_14000C2A8((int)retaddr, 67, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopumpdspmanager.cpp", v6);
LABEL_7:
      sub_140003238(&v11);
      goto LABEL_17;
    }
    *(_OWORD *)pvar = 0LL;
    v14 = 0LL;
    v7 = sub_1400B6010(v11);
    v4 = v7;
    if ( v7 >= 0 )
    {
      if ( LOWORD(pvar[0]) != 31 )
      {
        v4 = -2147024809;
        v9 = -2147024809;
        v8 = 72;
        goto LABEL_11;
      }
      v7 = CLSIDFromString((LPCOLESTR)pvar[1], a3);
      v4 = v7;
      if ( v7 >= 0 )
      {
        PropVariantClear(pvar);
        sub_140003238(&v11);
        v4 = 0;
        goto LABEL_17;
      }
      v8 = 74;
    }
    else
    {
      v8 = 70;
    }
    v9 = v7;
LABEL_11:
    sub_14000C2A8((int)retaddr, v8, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopumpdspmanager.cpp", v9);
    PropVariantClear(pvar);
    goto LABEL_7;
  }
  v4 = -2147024774;
  sub_14000C2A8((int)retaddr, 61, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopumpdspmanager.cpp", -2147024774);
  return v4;
}
