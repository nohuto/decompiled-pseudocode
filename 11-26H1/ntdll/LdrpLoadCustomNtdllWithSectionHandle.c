/*
 * XREFs of LdrpLoadCustomNtdllWithSectionHandle @ 0x18015C08C
 * Callers:
 *     LdrpLoadPatchedNtdll @ 0x1800CB24C (LdrpLoadPatchedNtdll.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     LdrpProtectAndRelocateImage @ 0x1800D5034 (LdrpProtectAndRelocateImage.c)
 *     NpMapViewOfSection @ 0x18015EA00 (NpMapViewOfSection.c)
 *     NpUnmapViewOfSection @ 0x18015EA20 (NpUnmapViewOfSection.c)
 */

__int64 __fastcall LdrpLoadCustomNtdllWithSectionHandle(__int64 a1, PVOID *a2)
{
  int v3; // ebx
  PVOID v4; // rdx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+68h] [rbp+10h] BYREF
  __int64 v7; // [rsp+70h] [rbp+18h] BYREF

  v7 = 0LL;
  *a2 = 0LL;
  v3 = NpMapViewOfSection(a1, -1LL, a2, 0LL, 0LL, 0LL, &v7, 1, 0, 128);
  if ( v3 == 1073741827 )
    v3 = LdrpProtectAndRelocateImage(*a2);
  if ( v3 >= 0 )
  {
    v4 = *a2;
    OutHeaders = 0LL;
    RtlImageNtHeaderEx(1u, v4, 0LL, &OutHeaders);
    if ( OutHeaders )
      return (unsigned int)v3;
    v3 = -1073741701;
  }
  if ( *a2 )
  {
    NpUnmapViewOfSection(-1LL);
    *a2 = 0LL;
  }
  return (unsigned int)v3;
}
