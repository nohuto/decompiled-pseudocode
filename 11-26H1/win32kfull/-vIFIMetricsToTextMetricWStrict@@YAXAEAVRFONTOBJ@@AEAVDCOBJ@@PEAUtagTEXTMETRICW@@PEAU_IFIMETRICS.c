/*
 * XREFs of ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x14010F068
 * Callers:
 *     ?GrepGetTextMetricsW@@YAHAEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z @ 0x14010DF4C (-GrepGetTextMetricsW@@YAHAEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z.c)
 *     cjIFIMetricsToOTMW @ 0x14010E0AC (cjIFIMetricsToOTMW.c)
 * Callees:
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z @ 0x14010EEB0 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z.c)
 *     bFToL @ 0x140111E60 (bFToL.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1401C57AC (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     GetAppCompatFlags @ 0x1401E7A80 (GetAppCompatFlags.c)
 */

void __fastcall vIFIMetricsToTextMetricWStrict(
        struct RFONTOBJ *this,
        struct DCOBJ *a2,
        struct tagTEXTMETRICW *a3,
        struct _IFIMETRICS *a4)
{
  char v8; // bl
  char v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // r11d
  LONG v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // r11d
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // r11d
  LONG v30; // ecx
  char v31; // al
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned int v34; // eax
  __int64 v35; // rax
  BYTE v36; // bl
  char v37; // r15
  char v38; // si
  __int64 v39; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int16 v40; // [rsp+34h] [rbp-2Ch]
  char v41; // [rsp+36h] [rbp-2Ah]
  LONG v42; // [rsp+44h] [rbp-1Ch]
  LONG v43; // [rsp+48h] [rbp-18h]
  LONG v44; // [rsp+4Ch] [rbp-14h]
  LONG v45; // [rsp+50h] [rbp-10h]
  LONG v46; // [rsp+54h] [rbp-Ch]
  LONG v47; // [rsp+58h] [rbp-8h]
  unsigned int v48; // [rsp+A8h] [rbp+48h] BYREF
  int v49; // [rsp+B0h] [rbp+50h]

  IFIOBJR::IFIOBJR((IFIOBJR *)&v39, a4, this, a2);
  v8 = 0;
  v9 = 8;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x802) == 0x802 )
  {
    a3->tmHeight = (*(_DWORD *)(*(_QWORD *)this + 316LL) + 8) >> 4;
    a3->tmAscent = (*(_DWORD *)(*(_QWORD *)this + 308LL) + 8) >> 4;
    a3->tmOverhang = RFONTOBJ::lOverhang(this);
  }
  else
  {
    v48 = 0;
    bFToL(2050LL, &v48, 0LL);
    a3->tmHeight = v48;
    v48 = 0;
    bFToL(v12, &v48, 0LL);
    a3->tmAscent = v48;
    RFONTOBJ::lOverhang(this);
    v13 = *(_QWORD *)this;
    v48 = 0;
    bFToL(v13, &v48, 0LL);
    v11 = v48;
    a3->tmOverhang = v48;
  }
  v14 = v39;
  if ( (*(_DWORD *)(v39 + 48) & 0x3000010) != 0 )
  {
    v18 = *(_QWORD *)this;
    v48 = 0;
    v19 = *(unsigned int *)(v18 + 376);
    if ( (_DWORD)v19 == 0x80000000 )
    {
      v49 = *(_DWORD *)(v18 + 216);
      bFToL(v19, &v48, 0LL);
      v22 = a3->tmHeight - v48;
    }
    else
    {
      bFToL(v19, &v48, 0LL);
      v22 = v48;
    }
    a3->tmInternalLeading = v22;
    v23 = *(_QWORD *)this;
    v48 = 0;
    if ( *(_DWORD *)(v23 + 372) == v21 )
    {
      v20 = *(unsigned __int16 *)(v14 + 68);
      LOWORD(v20) = *(_WORD *)(v14 + 64) + v20 - *(_WORD *)(v14 + 66) - *(_WORD *)(v14 + 62) - *(_WORD *)(v14 + 60);
      v49 = *(_DWORD *)(v23 + 216);
      if ( (__int16)v20 <= 0 )
        LOWORD(v20) = 0;
    }
    bFToL(v20, &v48, 0LL);
    a3->tmExternalLeading = v48;
    v24 = *(_QWORD *)this;
    v48 = 0;
    v25 = *(unsigned int *)(v24 + 380);
    if ( (_DWORD)v25 == v26 )
      v49 = *(_DWORD *)(v24 + 212);
    bFToL(v25, &v48, 0LL);
    a3->tmMaxCharWidth = v48;
    v27 = *(_QWORD *)this;
    v48 = 0;
    v28 = *(unsigned int *)(v27 + 384);
    if ( (_DWORD)v28 == v29 )
      v49 = *(_DWORD *)(v27 + 212);
    bFToL(v28, &v48, 0LL);
    v11 = v48;
    a3->tmAveCharWidth = v48;
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x802) == 0x802 )
  {
    a3->tmMaxCharWidth = v42;
    a3->tmAveCharWidth = v43;
    a3->tmInternalLeading = v44;
    a3->tmExternalLeading = v45;
  }
  else
  {
    v48 = 0;
    bFToL(2050LL, &v48, 0LL);
    a3->tmMaxCharWidth = v48;
    v48 = 0;
    bFToL(v15, &v48, 0LL);
    a3->tmAveCharWidth = v48;
    v48 = 0;
    bFToL(v16, &v48, 0LL);
    a3->tmInternalLeading = v48;
    v48 = 0;
    bFToL(v17, &v48, 0LL);
    v11 = v48;
    a3->tmExternalLeading = v48;
  }
  LOBYTE(v10) = -1;
  v30 = a3->tmHeight - a3->tmAscent;
  a3->tmWeight = v40;
  v31 = v41 & 1;
  a3->tmDescent = v30;
  a3->tmItalic = -(v31 != 0);
  a3->tmUnderlined = *(_BYTE *)(v14 + 52) & 2;
  a3->tmStruckOut = *(_BYTE *)(v14 + 52) & 0x10;
  LOBYTE(v30) = *(_DWORD *)(*(_QWORD *)a2 + 1752LL) & 0x80;
  a3->tmUnderlined = -((*(_DWORD *)(*(_QWORD *)a2 + 1752LL) & 0x20) != 0);
  a3->tmStruckOut = -((_BYTE)v30 != 0);
  a3->tmFirstChar = *(_WORD *)(v14 + 112);
  a3->tmLastChar = *(_WORD *)(v14 + 114);
  a3->tmDefaultChar = *(_WORD *)(v14 + 116);
  a3->tmBreakChar = *(_WORD *)(v14 + 118);
  v32 = *(_QWORD *)(*(_QWORD *)a2 + 976LL);
  a3->tmCharSet = *(_BYTE *)(v32 + 6);
  v33 = *(_QWORD *)(W32GetSessionState(v32, v10, v11) + 96);
  v34 = *(_DWORD *)(v14 + 48);
  if ( (v34 & 1) != 0 )
  {
    v35 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    if ( (*(_DWORD *)(v35 + 40) & 1) != 0
      || (*(_DWORD *)(v35 + 2168) & 0x2000) != 0
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) != 1
      || *(_DWORD *)(v33 + 20340) && (int)GetAppCompatFlags(0LL) < 0 )
    {
      v9 = 0;
    }
    v36 = *(_BYTE *)(v14 + 45) & 0xF0 | ((*(_DWORD *)(v14 + 48) & 1) != 0 ? 6 : 0) | ((*(_DWORD *)(v14 + 48) & 0x401000) == 0) | v9 | (*(_DWORD *)(v14 + 48) >> 1) & 2;
  }
  else
  {
    v37 = *(_BYTE *)(v14 + 45) & 0xF0 | (v34 >> 1) & 2 | ((v34 & 0x401000) == 0);
    v38 = *(_DWORD *)(*(_QWORD *)this + 92LL) != 0 ? 8 : 0;
    if ( (a4->flInfo & 8) != 0 && (!*(_DWORD *)(v33 + 20340) || (int)GetAppCompatFlags(0LL) >= 0) )
      v8 = 10;
    v36 = v38 | v37 | v8;
  }
  a3->tmPitchAndFamily = v36;
  a3->tmDigitizedAspectX = v46;
  a3->tmDigitizedAspectY = v47;
}
