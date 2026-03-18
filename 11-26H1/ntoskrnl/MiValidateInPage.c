/*
 * XREFs of MiValidateInPage @ 0x14038C154
 * Callers:
 *     MiWaitForInPageComplete @ 0x14038E1F0 (MiWaitForInPageComplete.c)
 *     MiFaultGetFileExtents @ 0x14050CBDC (MiFaultGetFileExtents.c)
 * Callees:
 *     MiValidateEntireInPage @ 0x14038A798 (MiValidateEntireInPage.c)
 *     MiValidateInPagePrepare @ 0x14038C1C0 (MiValidateInPagePrepare.c)
 *     MiValidateInPageEntries @ 0x14038C410 (MiValidateInPageEntries.c)
 *     MiZeroTrailingImageBytes @ 0x1406F7900 (MiZeroTrailingImageBytes.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall MiValidateInPage(__int64 a1)
{
  char v2; // al
  __int64 result; // rax
  _BYTE v4[64]; // [rsp+20h] [rbp-58h] BYREF
  int v5; // [rsp+60h] [rbp-18h]

  memset_0(v4, 0, 0x48uLL);
  MiValidateInPagePrepare(a1, v4);
  v2 = v5;
  if ( (v5 & 0x100) != 0 )
  {
    MiZeroTrailingImageBytes(v4);
    v2 = v5;
  }
  if ( (v2 & 0x40) == 0 )
    return MiValidateInPageEntries(v4);
  result = MiValidateEntireInPage((__int64)v4);
  if ( (int)result >= 0 )
    return MiValidateInPageEntries(v4);
  return result;
}
