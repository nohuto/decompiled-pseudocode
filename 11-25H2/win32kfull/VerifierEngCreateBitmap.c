/*
 * XREFs of VerifierEngCreateBitmap @ 0x140332040
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x140331D44 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HBITMAP __fastcall VerifierEngCreateBitmap(SIZEL sizl, __int64 lWidth, ULONG iFormat, FLONG fl, PVOID pvBits)
{
  LONG v7; // ebp

  v7 = lWidth;
  if ( (unsigned int)VerifierRandomFailure(sizl.cx, lWidth) )
    return 0LL;
  else
    return EngCreateBitmap(sizl, v7, iFormat, fl, pvBits);
}
