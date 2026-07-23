/*
 * XREFs of RtlpGetCustomCultureData @ 0x180113110
 * Callers:
 *     RtlIsValidLocaleName @ 0x18004D470 (RtlIsValidLocaleName.c)
 *     RtlGetParentLocaleName @ 0x18004EDD0 (RtlGetParentLocaleName.c)
 *     RtlGetNeutralFallback @ 0x18004F8A0 (RtlGetNeutralFallback.c)
 *     RtlLocaleNameToLcid @ 0x18004FCE0 (RtlLocaleNameToLcid.c)
 * Callees:
 *     RtlpOpenAndMapCustomCultureFile @ 0x180113198 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlpGetCustomCultureDataFromFile @ 0x1801264C0 (RtlpGetCustomCultureDataFromFile.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall RtlpGetCustomCultureData(__int64 a1, char a2, char a3, __int64 a4)
{
  int CustomCultureDataFromFile; // ebx
  int v8; // r8d
  int v9; // r9d
  PVOID BaseAddress; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h] BYREF

  v12 = 0LL;
  BaseAddress = 0LL;
  CustomCultureDataFromFile = RtlpOpenAndMapCustomCultureFile(a1, &BaseAddress, &v12);
  if ( CustomCultureDataFromFile >= 0 )
  {
    LOBYTE(v9) = a3;
    LOBYTE(v8) = a2;
    CustomCultureDataFromFile = RtlpGetCustomCultureDataFromFile((_DWORD)BaseAddress, v12, v8, v9, a4);
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  }
  return (unsigned int)CustomCultureDataFromFile;
}
