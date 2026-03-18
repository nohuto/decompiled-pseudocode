/*
 * XREFs of ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z @ 0x14010EEB0
 * Callers:
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x14010D384 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     cjIFIMetricsToOTMW @ 0x14010E0AC (cjIFIMetricsToOTMW.c)
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x14010F068 (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x140174084 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?GrepFontIsLinked@@YAHAEAVDCOBJ@@@Z @ 0x1402366CC (-GrepFontIsLinked@@YAHAEAVDCOBJ@@@Z.c)
 *     ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x14031C35C (-vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x14033A374 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?ulLogPixelsX@PDEVOBJ@@QEBAKXZ @ 0x14010F6B4 (-ulLogPixelsX@PDEVOBJ@@QEBAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEBAKXZ @ 0x14010F700 (-ulLogPixelsY@PDEVOBJ@@QEBAKXZ.c)
 */

IFIOBJR *__fastcall IFIOBJR::IFIOBJR(
        IFIOBJR *this,
        const struct _IFIMETRICS *a2,
        struct RFONTOBJ *a3,
        struct XDCOBJ *a4)
{
  int *v5; // rcx
  int v6; // r10d
  int v7; // r11d
  int v8; // edi
  __int16 v9; // ax
  int v10; // r10d
  int v11; // eax
  __int64 v13; // rax
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = a2;
  v5 = (int *)((char *)a2 + a2->dpFontSim);
  v6 = *(_DWORD *)(*(_QWORD *)a3 + 12LL) & 0x6000;
  switch ( v6 )
  {
    case 0:
      *((_BYTE *)this + 19) = a2->panose.bWeight;
      *((_WORD *)this + 10) = a2->usWinWeight;
      *((_WORD *)this + 11) = a2->fsSelection;
      *((_WORD *)this + 12) = a2->fwdAveCharWidth;
      *((_WORD *)this + 13) = a2->fwdMaxCharInc;
      *(POINTL *)((char *)this + 28) = a2->ptlCaret;
      goto LABEL_3;
    case 8192:
      if ( (a2->fsSelection & 1) == 0 )
      {
        v13 = *v5;
        goto LABEL_16;
      }
      break;
    case 16384:
      if ( (a2->fsSelection & 0x20) == 0 )
      {
        v13 = v5[1];
        goto LABEL_16;
      }
      break;
    case 24576:
      break;
    default:
      goto LABEL_3;
  }
  v13 = v5[2];
LABEL_16:
  *((_OWORD *)this + 1) = *(_OWORD *)((char *)v5 + v13);
  *((_DWORD *)this + 8) = *(int *)((char *)v5 + v13 + 16);
LABEL_3:
  v7 = *((__int16 *)this + 12);
  v8 = *((__int16 *)this + 13);
  *((_DWORD *)this + 10) = v7;
  *((_DWORD *)this + 9) = v8;
  v9 = a2->fwdMacAscender + a2->fwdMacLineGap - a2->fwdMacDescender - a2->fwdWinDescender - a2->fwdWinAscender;
  if ( v9 <= 0 )
    v9 = 0;
  *((_DWORD *)this + 12) = v9;
  v10 = (__int16)(a2->fwdWinAscender + a2->fwdWinDescender - a2->fwdUnitsPerEm);
  *((_DWORD *)this + 11) = v10;
  if ( (a2->flInfo & 0x3000010) == 0 )
  {
    v14 = *(_DWORD *)(*(_QWORD *)a3 + 656LL);
    if ( v14 > 1 )
    {
      *((_DWORD *)this + 10) = v14 * v7;
      *((_DWORD *)this + 9) = v14 * v8;
    }
    v15 = *(_DWORD *)(*(_QWORD *)a3 + 660LL);
    if ( v15 > 1 )
    {
      *((_DWORD *)this + 12) = v15 * v9;
      *((_DWORD *)this + 11) = v15 * v10;
    }
  }
  if ( (a2->flInfo & 1) != 0 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)a4 + 48LL);
    *((_DWORD *)this + 13) = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v16);
    v11 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v16);
  }
  else
  {
    *((_DWORD *)this + 13) = a2->ptlAspect.y * *(_DWORD *)(*(_QWORD *)a3 + 660LL);
    v11 = a2->ptlAspect.x * *(_DWORD *)(*(_QWORD *)a3 + 656LL);
  }
  *((_DWORD *)this + 14) = v11;
  return this;
}
