/*
 * XREFs of VfDriverLoadSucceeded @ 0x1404B3520
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1406EDB90 (MiDriverLoadSucceeded.c)
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 *     ViXdvDriverLoadImage @ 0x140B7A9D0 (ViXdvDriverLoadImage.c)
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
