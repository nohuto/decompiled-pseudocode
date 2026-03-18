/*
 * XREFs of ?ModeFromDetailedTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_DETAILED_TIMING@2@PEAU_VideoModeDescriptor@@@Z @ 0x1400640C0
 * Callers:
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x140043738 (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonDescParser::EDID_MODES::ModeFromDetailedTimingBlock(
        MonDescParser::EDID_MODES *this,
        struct MonDescParser::EDID_PARSER_DETAILED_TIMING *a2,
        struct _VideoModeDescriptor *a3)
{
  ULONG v4; // r8d
  USHORT v5; // bx
  USHORT v6; // di
  USHORT v7; // bp
  USHORT v8; // r11
  BOOLEAN v9; // r15
  unsigned __int8 v10; // al
  UCHAR v11; // al
  unsigned __int16 v12; // bp
  unsigned __int16 v13; // r11
  signed int PixelClockRate; // esi
  int v15; // r11d
  signed int v16; // ecx
  int i; // r8d
  signed int v18; // ecx
  unsigned int v19; // r14d
  ULONG v20; // eax
  int v21; // r8d
  int SyncSignalType; // ecx
  int v23; // ecx
  int v24; // ecx

  a3->VideoStandardType = 0;
  a3->Origin = *((_BYTE *)this + 8);
  a3->TimingType = 4;
  v4 = 10000 * (**(unsigned __int8 **)a2 + (*(unsigned __int8 *)(*(_QWORD *)a2 + 1LL) << 8));
  a3->PixelClockRate = v4;
  v5 = *(unsigned __int8 *)(*(_QWORD *)a2 + 2LL) + (*(_BYTE *)(*(_QWORD *)a2 + 4LL) >> 4 << 8);
  a3->HorizontalActivePixels = v5;
  v6 = *(unsigned __int8 *)(*(_QWORD *)a2 + 5LL) + (*(_BYTE *)(*(_QWORD *)a2 + 7LL) >> 4 << 8);
  a3->VerticalActivePixels = v6;
  if ( v4 && v5 >= 0x64u && v6 >= 0x64u )
  {
    v7 = *(unsigned __int8 *)(*(_QWORD *)a2 + 3LL) + ((*(_BYTE *)(*(_QWORD *)a2 + 4LL) & 0xF) << 8);
    a3->HorizontalBlankingPixels = v7;
    v8 = *(unsigned __int8 *)(*(_QWORD *)a2 + 6LL) + ((*(_BYTE *)(*(_QWORD *)a2 + 7LL) & 0xF) << 8);
    a3->VerticalBlankingPixels = v8;
    a3->HorizontalSyncOffset = *(unsigned __int8 *)(*(_QWORD *)a2 + 8LL) + (*(_BYTE *)(*(_QWORD *)a2 + 11LL) >> 6 << 8);
    a3->VerticalSyncOffset = (*(_BYTE *)(*(_QWORD *)a2 + 10LL) >> 4)
                           + 16 * ((*(_BYTE *)(*(_QWORD *)a2 + 11LL) >> 2) & 3);
    a3->HorizontalSyncPulseWidth = *(unsigned __int8 *)(*(_QWORD *)a2 + 9LL)
                                 + (((*(_BYTE *)(*(_QWORD *)a2 + 11LL) >> 4) & 3) << 8);
    a3->VerticalSyncPulseWidth = (*(_BYTE *)(*(_QWORD *)a2 + 10LL) & 0xF) + 16 * (*(_BYTE *)(*(_QWORD *)a2 + 11LL) & 3);
    a3->HorizontalImageSize = *(unsigned __int8 *)(*(_QWORD *)a2 + 12LL) + (*(_BYTE *)(*(_QWORD *)a2 + 14LL) >> 4 << 8);
    a3->VerticalImageSize = *(unsigned __int8 *)(*(_QWORD *)a2 + 13LL) + ((*(_BYTE *)(*(_QWORD *)a2 + 14LL) & 0xF) << 8);
    a3->HorizontalBorder = *(unsigned __int8 *)(*(_QWORD *)a2 + 15LL);
    a3->VerticalBorder = *(unsigned __int8 *)(*(_QWORD *)a2 + 16LL);
    v9 = *(_BYTE *)(*(_QWORD *)a2 + 17LL) >> 7;
    a3->IsInterlaced = v9;
    v10 = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 1) + 2 * ((*(_BYTE *)(*(_QWORD *)a2 + 17LL) >> 5) & 3);
    v11 = v10 < 2u ? 0 : v10 - 1;
    a3->StereoModeType = v11;
    v12 = v5 + v7;
    v13 = v6 + v8;
    a3->SyncSignalType = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) >> 3) & 3;
    if ( v12 )
    {
      if ( v13 )
      {
        PixelClockRate = a3->PixelClockRate;
        v15 = v12 * v13;
        v16 = -a3->PixelClockRate;
        if ( (int)a3->PixelClockRate > 0 )
          v16 = a3->PixelClockRate;
        for ( i = v15; i; i %= v16 )
        {
          v16 %= i;
          if ( !v16 )
            goto LABEL_16;
        }
        i = v16;
LABEL_16:
        v18 = a3->PixelClockRate;
        v19 = PixelClockRate / i;
        a3->VerticalRefreshRateNumerator = PixelClockRate / i;
        v20 = v15 / i;
        v21 = v12;
        a3->VerticalRefreshRateDenominator = v20;
        if ( PixelClockRate < 0 )
          v18 = -PixelClockRate;
        while ( v21 )
        {
          v18 %= v21;
          if ( !v18 )
            goto LABEL_22;
          v21 %= v18;
        }
        v21 = v18;
LABEL_22:
        SyncSignalType = a3->SyncSignalType;
        *(_DWORD *)&a3->IsSerrationRequired = 33686018;
        a3->HorizontalPolarityType = 2;
        a3->HorizontalRefreshRateNumerator = PixelClockRate / v21;
        a3->HorizontalRefreshRateDenominator = v12 / v21;
        if ( SyncSignalType && (v23 = SyncSignalType - 1) != 0 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            if ( v24 == 1 )
            {
              a3->HorizontalPolarityType = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 2) == 0;
              a3->VerticalPolarityType = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 4) == 0;
            }
          }
          else
          {
            a3->IsSyncOnRGB = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 2) == 0;
            a3->CompositePolarityType = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 4) == 0;
          }
        }
        else
        {
          a3->IsSyncOnRGB = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 2) == 0;
          a3->IsSerrationRequired = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 4) == 0;
        }
        if ( v5 != 1920 )
          return 0LL;
        if ( v6 != 540 )
          return 0LL;
        if ( !v9 )
          return 0LL;
        a3->VerticalActivePixels = 1080;
        if ( v19 / v20 != 30 )
          return 0LL;
        if ( v19 <= 0x7FFFFFFF )
        {
          a3->VerticalRefreshRateNumerator = 2 * v19;
          return 0LL;
        }
        if ( v20 >= 2 )
        {
          a3->VerticalRefreshRateDenominator = v20 >> 1;
          return 0LL;
        }
      }
    }
  }
  return 3223126025LL;
}
