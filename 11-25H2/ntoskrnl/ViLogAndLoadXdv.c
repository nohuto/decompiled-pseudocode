/*
 * XREFs of ViLogAndLoadXdv @ 0x140B73B60
 * Callers:
 *     VfInitBootDriversLoaded @ 0x140C29F60 (VfInitBootDriversLoaded.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 *     ViXdvDriverLoadImage @ 0x140B7A9D0 (ViXdvDriverLoadImage.c)
 */

char ViLogAndLoadXdv()
{
  PVOID *i; // rbx
  PVOID *v1; // rax

  for ( i = (PVOID *)PsLoadedModuleList; ; i = (PVOID *)*i )
  {
    v1 = &PsLoadedModuleList;
    if ( i == &PsLoadedModuleList )
      break;
    LOBYTE(v1) = RtlEqualUnicodeString((PCUNICODE_STRING)(i + 11), &XdvName, 1u);
    if ( (_BYTE)v1 == 1 )
    {
      if ( i )
      {
        ViDriverXDVBase = (__int64)i[6];
        ViDriverXDVImageSize = *((_DWORD *)i + 16);
        LOBYTE(v1) = ViXdvDriverLoadImage(i);
        VfXdvEnabled = (unsigned __int8)v1;
      }
      return (char)v1;
    }
  }
  return (char)v1;
}
