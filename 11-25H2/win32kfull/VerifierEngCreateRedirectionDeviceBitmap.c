/*
 * XREFs of VerifierEngCreateRedirectionDeviceBitmap @ 0x140332290
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x140331D44 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HBITMAP __fastcall VerifierEngCreateRedirectionDeviceBitmap(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  if ( (unsigned int)VerifierRandomFailure((int)dhsurf, *(_QWORD *)&sizl) )
    return 0LL;
  else
    return EngCreateRedirectionDeviceBitmap(dhsurf, sizl, iFormatCompat);
}
