/*
 * XREFs of HsaIommuFindDevice @ 0x1405ACA68
 * Callers:
 *     HsaCreateDevice @ 0x1405ABBA0 (HsaCreateDevice.c)
 *     HsaFindDevice @ 0x1405ABF40 (HsaFindDevice.c)
 * Callees:
 *     HsaQueryAcpiDeviceMapping @ 0x1405ACF90 (HsaQueryAcpiDeviceMapping.c)
 */

bool __fastcall HsaIommuFindDevice(__int64 a1, __int128 *a2, char a3)
{
  int v4; // r8d
  char v5; // di
  int v7; // r8d
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v4 = *(_DWORD *)a2;
  v5 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v7 = v4 - 1;
  if ( v7 )
  {
    if ( v7 != 1 || (int)HsaQueryAcpiDeviceMapping(a1, a2, &v9) < 0 )
      return v5;
    a2 = &v9;
  }
  if ( *(_DWORD *)(a1 + 160) == *((unsigned __int16 *)a2 + 4) )
    return (a3 & 8) != 0
        || ((*(char *)(((unsigned __int64)*((unsigned __int16 *)a2 + 6) >> 3) + *(_QWORD *)(a1 + 192)) >> (*((_WORD *)a2 + 6) & 7)) & 1) != 0;
  return v5;
}
