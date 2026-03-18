/*
 * XREFs of ?bInitGdiInfo@@YAHPEAU_devicemodeW@@PEAU_GDIINFO@@@Z @ 0x14015BF90
 * Callers:
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x14015BE70 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 * Callees:
 *     Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline @ 0x1401CFF84 (Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall bInitGdiInfo(struct _devicemodeW *a1, struct _GDIINFO *a2)
{
  __int64 v4; // rsi
  DWORD v5; // r14d
  DWORD dmPelsHeight; // ebp
  int IsEnabledDeviceUsageNoInline; // eax
  DWORD dmPelsWidth; // ecx
  ULONG dmLogPixels; // eax
  __int64 result; // rax
  __int16 *v11; // rdx

  v4 = 0LL;
  v5 = 0;
  dmPelsHeight = 0;
  memset(a2, 0, sizeof(struct _GDIINFO));
  IsEnabledDeviceUsageNoInline = Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline();
  dmPelsWidth = a1->dmPelsWidth;
  if ( !IsEnabledDeviceUsageNoInline )
  {
    if ( !dmPelsWidth && !a1->dmPelsHeight && !a1->dmBitsPerPel && !a1->dmDisplayFrequency )
      goto LABEL_7;
    v11 = (__int16 *)&unk_140271462;
    do
    {
      if ( dmPelsWidth == *(v11 - 1)
        && a1->dmPelsHeight == *v11
        && a1->dmBitsPerPel == 32
        && a1->dmDisplayFrequency == 60 )
      {
        break;
      }
      v4 = (unsigned int)(v4 + 1);
      v11 += 2;
    }
    while ( (unsigned int)v4 < 0x12 );
    if ( (_DWORD)v4 != 18 )
      goto LABEL_7;
    return 0LL;
  }
  if ( dmPelsWidth || a1->dmPelsHeight || a1->dmBitsPerPel )
  {
    if ( a1->dmBitsPerPel == 32 && a1->dmDisplayFrequency == 60 )
    {
      dmPelsHeight = a1->dmPelsHeight;
      v5 = a1->dmPelsWidth;
      goto LABEL_7;
    }
    return 0LL;
  }
  if ( a1->dmDisplayFrequency )
    return 0LL;
  dmPelsHeight = 768;
  v5 = 1024;
LABEL_7:
  a2->ulVersion = 0x4000;
  a2->ulTechnology = 1;
  if ( !(unsigned int)Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline() )
  {
    v5 = *((__int16 *)&unk_140271460 + 2 * v4);
    dmPelsHeight = *((__int16 *)&unk_140271460 + 2 * v4 + 1);
    a2->ulPanningHorzRes = v5;
    a2->ulPanningVertRes = dmPelsHeight;
  }
  a2->ulHorzRes = v5;
  a2->ulVertRes = dmPelsHeight;
  dmLogPixels = a1->dmLogPixels;
  a2->ciDevice.Red.Y = 0;
  a2->ciDevice.Green.Y = 0;
  a2->ciDevice.Blue.Y = 0;
  a2->ciDevice.AlignmentWhite.Y = 0;
  a2->ulNumColors = -1;
  a2->ulLogPixelsX = dmLogPixels;
  a2->ulLogPixelsY = dmLogPixels;
  a2->ulDACRed = 8;
  a2->ulDACGreen = 8;
  a2->ulDACBlue = 8;
  a2->ulAspectX = 36;
  a2->ulAspectY = 36;
  a2->cBitsPixel = 32;
  a2->cPlanes = 1;
  a2->denStyleStep = 3;
  result = 1LL;
  a2->ulHTPatternSize = 3;
  a2->ulVRefresh = 60;
  a2->ulBltAlignment = 1;
  a2->flTextCaps = 0x2000;
  a2->ulAspectXY = 51;
  a2->xStyleStep = 1;
  a2->yStyleStep = 1;
  a2->ciDevice.Red.x = 6700;
  a2->ciDevice.Red.y = 3300;
  a2->ciDevice.Green.x = 2100;
  a2->ciDevice.Green.y = 7100;
  a2->ciDevice.Blue.x = 1400;
  a2->ciDevice.Blue.y = 800;
  a2->ciDevice.AlignmentWhite.x = 3127;
  a2->ciDevice.AlignmentWhite.y = 3290;
  a2->ciDevice.RedGamma = 20000;
  a2->ciDevice.GreenGamma = 20000;
  a2->ciDevice.BlueGamma = 20000;
  a2->ulPrimaryOrder = 4;
  a2->flHTFlags = 4;
  a2->ulHTOutputFormat = 7;
  return result;
}
