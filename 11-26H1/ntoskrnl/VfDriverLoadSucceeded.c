/*
 * XREFs of VfDriverLoadSucceeded @ 0x1404F4E4C
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140A78E84 (MiDriverLoadSucceeded.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 *     ViXdvDriverLoadImage @ 0x140C285C4 (ViXdvDriverLoadImage.c)
 */

void __fastcall VfDriverLoadSucceeded(__int64 a1)
{
  unsigned __int8 Image; // al

  if ( VfDifRunningWithoutReboot
    && a1
    && !VfXdvEnabled
    && RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 88), &XdvName, 1u) )
  {
    Image = ViXdvDriverLoadImage(a1);
    VfXdvEnabled = Image;
    if ( Image )
    {
      ViDriverXDVBase = *(_QWORD *)(a1 + 48);
      ViDriverXDVImageSize = *(_DWORD *)(a1 + 64);
    }
  }
}
