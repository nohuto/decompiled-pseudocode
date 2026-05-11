/*
 * XREFs of IntersectConvertDatarangeToFormat @ 0x14003AC04
 * Callers:
 *     PinDataFormatIntersection @ 0x14003A8F0 (PinDataFormatIntersection.c)
 * Callees:
 *     PinMatchChannelConfigToFormat @ 0x14003B07C (PinMatchChannelConfigToFormat.c)
 */

void __fastcall IntersectConvertDatarangeToFormat(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // r11
  int v16; // r8d
  int v17; // ecx
  int v18; // edx
  int v19; // edx

  *(_OWORD *)a3 = *(_OWORD *)a2;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a3 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a3 + 48) = *(_OWORD *)(a2 + 48);
  *(_DWORD *)(a3 + 4) &= ~2u;
  v6 = *(_QWORD *)(a2 + 32) - KSDATAFORMAT_SUBTYPE_DOLBY_AC3_SPDIF;
  if ( !v6 )
    v6 = *(_QWORD *)(a2 + 40) - *((_QWORD *)&KSDATAFORMAT_SUBTYPE_DOLBY_AC3_SPDIF + 1);
  if ( !v6 )
    goto LABEL_17;
  v7 = *(_QWORD *)(a2 + 32) - KSDATAFORMAT_SUBTYPE_DOLBY_MP3_SPDIF;
  if ( !v7 )
    v7 = *(_QWORD *)(a2 + 40) - *((_QWORD *)&KSDATAFORMAT_SUBTYPE_DOLBY_MP3_SPDIF + 1);
  if ( !v7 )
    goto LABEL_17;
  v8 = *(_QWORD *)(a2 + 32) - KSDATAFORMAT_SUBTYPE_WMA_SPDIF;
  if ( !v8 )
    v8 = *(_QWORD *)(a2 + 40) - *((_QWORD *)&KSDATAFORMAT_SUBTYPE_WMA_SPDIF + 1);
  if ( !v8 )
  {
LABEL_17:
    v16 = *(_DWORD *)(a2 + 100);
    *(_DWORD *)(a3 + 68) = v16;
    v17 = *(unsigned __int16 *)(a2 + 64);
    *(_WORD *)(a3 + 66) = v17;
    v18 = *(unsigned __int16 *)(a2 + 72);
    *(_WORD *)(a3 + 78) = v18;
    v19 = (v17 * v18) >> 3;
    *(_WORD *)(a3 + 76) = v19;
    *(_DWORD *)(a3 + 72) = v16 * (unsigned __int16)v19;
LABEL_18:
    *(_WORD *)(a3 + 64) = *(_WORD *)(a2 + 32);
    *(_WORD *)(a3 + 80) = 0;
    *(_DWORD *)a3 = 82;
    return;
  }
  v9 = *(_QWORD *)((char *)&KSDATAFORMAT_SUBTYPE_WAVEFORMATEX.Data1 + 2) - *(_QWORD *)(a2 + 34);
  if ( *(_QWORD *)((char *)&KSDATAFORMAT_SUBTYPE_WAVEFORMATEX.Data1 + 2) == *(_QWORD *)(a2 + 34) )
  {
    v10 = *(unsigned int *)(a2 + 42);
    v9 = *(unsigned int *)&KSDATAFORMAT_SUBTYPE_WAVEFORMATEX.Data4[2] - v10;
    if ( *(unsigned int *)&KSDATAFORMAT_SUBTYPE_WAVEFORMATEX.Data4[2] == v10 )
      v9 = *(unsigned __int16 *)&KSDATAFORMAT_SUBTYPE_WAVEFORMATEX.Data4[6]
         - (unsigned __int64)*(unsigned __int16 *)(a2 + 46);
  }
  if ( !v9 )
  {
    v11 = *(_DWORD *)(a2 + 100);
    *(_DWORD *)(a3 + 68) = v11;
    v12 = *(unsigned __int16 *)(a2 + 64);
    *(_WORD *)(a3 + 66) = v12;
    v13 = *(unsigned __int16 *)(a2 + 72);
    *(_WORD *)(a3 + 78) = v13;
    v14 = (v12 * v13) >> 3;
    *(_WORD *)(a3 + 76) = v14;
    *(_DWORD *)(a3 + 72) = v11 * (unsigned __int16)v14;
    if ( *(_DWORD *)(a2 + 72) > 0x10u || *(_DWORD *)(a2 + 64) > 2u )
    {
      *(_WORD *)(a3 + 64) = -2;
      *(_WORD *)(a3 + 80) = 22;
      *(_DWORD *)(a3 + 84) = PinMatchChannelConfigToFormat(*(unsigned int *)(a2 + 64), *(unsigned int *)(a1 + 144));
      *(GUID *)(a3 + 88) = KSDATAFORMAT_SUBTYPE_PCM;
      *(_WORD *)(a3 + 82) = *(_WORD *)(v15 + 104);
      *(_DWORD *)a3 = 104;
      return;
    }
    goto LABEL_18;
  }
}
