/*
 * XREFs of ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1401EF344
 * Callers:
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x140111CEC (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 *     xxxEmptyClipboard @ 0x1401EF1DC (xxxEmptyClipboard.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B3E88 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B4028 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B41CC (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B43B0 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?UT_GetFormatType@@YAHPEAUtagCLIP@@@Z @ 0x1401EF3D0 (-UT_GetFormatType@@YAHPEAUtagCLIP@@@Z.c)
 *     GreDeleteServerMetaFile @ 0x1402622C8 (GreDeleteServerMetaFile.c)
 */

void __fastcall UT_FreeCBFormat(struct tagCLIP *a1)
{
  int FormatType; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax

  if ( *((_QWORD *)a1 + 1) )
  {
    FormatType = UT_GetFormatType(a1);
    if ( !FormatType )
    {
      if ( !*(_DWORD *)(v3 + 16) )
        return;
      goto LABEL_13;
    }
    v5 = FormatType - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( !v6 )
      {
        if ( (unsigned __int64)(v4 - 1) <= 1 )
          return;
LABEL_13:
        LOBYTE(v2) = 6;
        v7 = HMValidateHandleNoSecure(v4, v2);
        if ( v7 )
          HMUnlockDestroyObject(v7);
        return;
      }
      if ( v6 == 1 && (unsigned __int64)(v4 - 3) > 1 )
        GreDeleteServerMetaFile(v4);
    }
    else if ( v4 != 2 )
    {
      GreDeleteObject(v4);
    }
  }
}
