/*
 * XREFs of ?DevmodeAutoRotateCompatible@@YA_NPEBU_devicemodeW@@0@Z @ 0x1401A03C4
 * Callers:
 *     ?DrvUpdateDisplayModeInPdev@@YAHAEAVPDEVOBJ@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401F55B0 (-DrvUpdateDisplayModeInPdev@@YAHAEAVPDEVOBJ@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DevmodeAutoRotateCompatible(const struct _devicemodeW *a1, const struct _devicemodeW *a2)
{
  DWORD dmFields; // ebx
  unsigned int v3; // r8d
  DWORD v4; // edi
  int v5; // r10d
  DWORD dmDisplayOrientation; // eax
  char v8; // r11
  DWORD v9; // eax
  char v10; // cl
  DWORD dmPelsWidth; // eax
  DWORD dmPelsHeight; // eax
  int v13; // ebx
  char result; // al

  dmFields = a1->dmFields;
  v3 = 0;
  v4 = a2->dmFields;
  v5 = v4 & dmFields;
  if ( (v4 & LOBYTE(a1->dmFields) & 0x80u) == 0 )
    goto LABEL_53;
  v3 = 1;
  if ( (v5 & 0x80000) == 0 )
    goto LABEL_53;
  v3 = 2;
  if ( (v5 & 0x100000) == 0 )
    goto LABEL_53;
  dmDisplayOrientation = a1->dmDisplayOrientation;
  v3 = 3;
  v8 = dmDisplayOrientation == 1 || dmDisplayOrientation == 3;
  v9 = a2->dmDisplayOrientation;
  v10 = v9 == 1 || v9 == 3;
  dmPelsWidth = a1->dmPelsWidth;
  if ( v8 == v10 )
  {
    if ( dmPelsWidth != a2->dmPelsWidth )
      goto LABEL_53;
    dmPelsHeight = a2->dmPelsHeight;
  }
  else
  {
    if ( dmPelsWidth != a2->dmPelsHeight )
      goto LABEL_53;
    dmPelsHeight = a2->dmPelsWidth;
  }
  if ( a1->dmPelsHeight == dmPelsHeight )
  {
    v3 = 4;
    if ( (v5 & 0x20000000) == 0 || a1->dmDisplayFixedOutput == a2->dmDisplayFixedOutput )
    {
      v3 = 5;
      v13 = dmFields & 0x20;
      if ( !v13 || (v4 & 0x20) == 0 || a1->dmPosition.x == a2->dmPosition.x )
      {
        v3 = 6;
        if ( !v13 || (v4 & 0x20) == 0 || a1->dmPosition.y == a2->dmPosition.y )
        {
          v3 = 7;
          if ( (v5 & 0x800) == 0 || a1->dmColor == a2->dmColor )
          {
            v3 = 8;
            if ( (v5 & 0x1000) == 0 || a1->dmDuplex == a2->dmDuplex )
            {
              v3 = 9;
              if ( (v5 & 0x2000) == 0 || a1->dmYResolution == a2->dmYResolution )
              {
                v3 = 10;
                if ( (v5 & 0x4000) == 0 || a1->dmTTOption == a2->dmTTOption )
                {
                  v3 = 11;
                  if ( (v5 & 0x8000) == 0 || a1->dmCollate == a2->dmCollate )
                  {
                    v3 = 12;
                    if ( (v5 & 0x20000) == 0 || a1->dmLogPixels == a2->dmLogPixels )
                    {
                      v3 = 13;
                      if ( (v5 & 0x40000) == 0 || a1->dmBitsPerPel == a2->dmBitsPerPel )
                      {
                        v3 = 14;
                        if ( (v5 & 0x200000) == 0 || a1->dmDisplayFlags == a2->dmDisplayFlags )
                        {
                          v3 = 15;
                          if ( (v5 & 0x400000) == 0 || a1->dmDisplayFrequency == a2->dmDisplayFrequency )
                          {
                            v3 = 16;
                            if ( (v5 & 0x800000) == 0 || a1->dmICMMethod == a2->dmICMMethod )
                            {
                              v3 = 17;
                              if ( (v5 & 0x1000000) == 0 || a1->dmICMIntent == a2->dmICMIntent )
                              {
                                v3 = 18;
                                if ( (v5 & 0x8000000) == 0 || a1->dmPanningWidth == a2->dmPanningWidth )
                                {
                                  v3 = 19;
                                  if ( (v5 & 0x10000000) == 0 || a1->dmPanningHeight == a2->dmPanningHeight )
                                    return 1;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_53:
  WdLogSingleEntry1(4LL, v3);
  result = 0;
  WdLogGlobalForLineNumber = 20092;
  return result;
}
