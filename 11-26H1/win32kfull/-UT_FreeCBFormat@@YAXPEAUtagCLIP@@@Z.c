/*
 * XREFs of ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1401B22B4
 * Callers:
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x1401B1E8C (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 *     xxxEmptyClipboard @ 0x1401B2154 (xxxEmptyClipboard.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CE9BC (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CEB64 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CED08 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CEEEC (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?UT_GetFormatType@@YAHPEAUtagCLIP@@@Z @ 0x1401B2340 (-UT_GetFormatType@@YAHPEAUtagCLIP@@@Z.c)
 *     GreDeleteServerMetaFile @ 0x140325B80 (GreDeleteServerMetaFile.c)
 */

void __fastcall UT_FreeCBFormat(struct tagCLIP *a1)
{
  int FormatType; // eax
  __int64 v2; // rcx
  __int64 v3; // r8
  int v4; // eax
  int v5; // eax
  __int64 v6; // rax

  if ( *((_QWORD *)a1 + 1) )
  {
    FormatType = UT_GetFormatType(a1);
    if ( !FormatType )
    {
      if ( !*(_DWORD *)(v2 + 16) )
        return;
      goto LABEL_13;
    }
    v4 = FormatType - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( !v5 )
      {
        if ( (unsigned __int64)(v3 - 1) <= 1 )
          return;
LABEL_13:
        v6 = HMValidateHandleNoSecure(v3, 6);
        if ( v6 )
          HMUnlockDestroyObject(v6);
        return;
      }
      if ( v5 == 1 && (unsigned __int64)(v3 - 3) > 1 )
        GreDeleteServerMetaFile(v3);
    }
    else if ( v3 != 2 )
    {
      GreDeleteObject(v3);
    }
  }
}
