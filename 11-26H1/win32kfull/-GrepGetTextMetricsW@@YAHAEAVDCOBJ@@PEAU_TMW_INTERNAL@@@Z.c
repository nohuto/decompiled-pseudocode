/*
 * XREFs of ?GrepGetTextMetricsW@@YAHAEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z @ 0x14010DF4C
 * Callers:
 *     GreGetTextMetricsW @ 0x140122B58 (GreGetTextMetricsW.c)
 *     NtGdiGetTextMetricsW @ 0x1402811C0 (NtGdiGetTextMetricsW.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400C5C18 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x14010F068 (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 */

__int64 __fastcall GrepGetTextMetricsW(struct DCOBJ *a1, struct tagTEXTMETRICW *a2)
{
  unsigned int v2; // esi
  __int64 v5; // rcx
  int v6; // edx
  struct _IFIMETRICS *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v10 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v10, a1, 0, 2u) )
    GreAcquireSemaphore<5,RFONT *>(v10);
  if ( v10 )
  {
    v5 = *(_QWORD *)(v10 + 696);
    if ( v5 )
    {
      *(_OWORD *)&a2->tmHeight = *(_OWORD *)v5;
      *(_OWORD *)&a2->tmExternalLeading = *(_OWORD *)(v5 + 16);
      *(_OWORD *)&a2->tmOverhang = *(_OWORD *)(v5 + 32);
      *(_OWORD *)&a2->tmDefaultChar = *(_OWORD *)(v5 + 48);
      a2[1].tmAscent = *(_DWORD *)(v5 + 64);
      v6 = *(_DWORD *)(*(_QWORD *)a1 + 1752LL);
      a2->tmUnderlined = -((v6 & 0x20) != 0);
      a2->tmStruckOut = -((v6 & 0x80u) != 0);
      a2->tmCharSet = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 6LL);
    }
    else
    {
      v8 = *(struct _IFIMETRICS **)(*(_QWORD *)(v10 + 120) + 32LL);
      vIFIMetricsToTextMetricWStrict((struct RFONTOBJ *)&v10, a1, a2, v8);
      LOBYTE(a2[1].tmAscent) = v8->chFirstChar;
      BYTE1(a2[1].tmAscent) = v8->chLastChar;
      BYTE2(a2[1].tmAscent) = v8->chDefaultChar;
      HIBYTE(a2[1].tmAscent) = v8->chBreakChar;
      v9 = Win32AllocPoolZInit(68LL, 2003661895LL);
      if ( v9 )
      {
        *(_QWORD *)(v10 + 696) = v9;
        *(_OWORD *)v9 = *(_OWORD *)&a2->tmHeight;
        *(_OWORD *)(v9 + 16) = *(_OWORD *)&a2->tmExternalLeading;
        *(_OWORD *)(v9 + 32) = *(_OWORD *)&a2->tmOverhang;
        *(_OWORD *)(v9 + 48) = *(_OWORD *)&a2->tmDefaultChar;
        *(_DWORD *)(v9 + 64) = a2[1].tmAscent;
      }
    }
    v2 = 1;
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
  return v2;
}
