/*
 * XREFs of ?SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z @ 0x1402CE768
 * Callers:
 *     ?DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@REAUtagBITMAPINFOHEADER@@K@Z @ 0x1402CE528 (-DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@REAUtagBITMAPINFOHEADER@@K@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CEB64 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CED08 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SizeOfDibColorTable(struct tagBITMAPINFOHEADER *a1)
{
  DWORD biCompression; // r8d
  WORD biBitCount; // ax
  unsigned int v3; // edx
  DWORD biClrUsed; // eax
  WORD v5; // ax
  unsigned int v6; // eax

  biCompression = a1->biCompression;
  if ( biCompression == 3 )
  {
    biBitCount = a1->biBitCount;
    if ( biBitCount == 16 || biBitCount == 32 )
      return 12;
    else
      return 0;
  }
  else
  {
    v3 = 0;
    if ( biCompression )
    {
      if ( biCompression == 2 )
      {
        return 64;
      }
      else
      {
        v6 = 0;
        if ( biCompression == 1 )
          return 1024;
        return v6;
      }
    }
    else
    {
      biClrUsed = a1->biClrUsed;
      if ( biClrUsed )
      {
        return 4 * biClrUsed;
      }
      else
      {
        v5 = a1->biBitCount;
        if ( v5 <= 8u )
          return 4 * (unsigned int)(1LL << v5);
      }
    }
  }
  return v3;
}
