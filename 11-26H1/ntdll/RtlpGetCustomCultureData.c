/*
 * XREFs of RtlpGetCustomCultureData @ 0x180113878
 * Callers:
 *     RtlIsValidLocaleName @ 0x180001D40 (RtlIsValidLocaleName.c)
 *     RtlGetParentLocaleName @ 0x1800036A0 (RtlGetParentLocaleName.c)
 *     RtlGetNeutralFallback @ 0x180004170 (RtlGetNeutralFallback.c)
 *     RtlLocaleNameToLcid @ 0x1800045B0 (RtlLocaleNameToLcid.c)
 * Callees:
 *     RtlpOpenAndMapCustomCultureFile @ 0x180113900 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlpGetCustomCultureDataFromFile @ 0x180126750 (RtlpGetCustomCultureDataFromFile.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall RtlpGetCustomCultureData(__int64 a1, char a2, char a3, __int64 a4)
{
  int CustomCultureDataFromFile; // ebx
  int v8; // r8d
  int v9; // r9d
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  CustomCultureDataFromFile = RtlpOpenAndMapCustomCultureFile(a1, &v11, &v12);
  if ( CustomCultureDataFromFile >= 0 )
  {
    LOBYTE(v9) = a3;
    LOBYTE(v8) = a2;
    CustomCultureDataFromFile = RtlpGetCustomCultureDataFromFile(v11, v12, v8, v9, a4);
    NtUnmapViewOfSection(-1LL, v11);
  }
  return (unsigned int)CustomCultureDataFromFile;
}
