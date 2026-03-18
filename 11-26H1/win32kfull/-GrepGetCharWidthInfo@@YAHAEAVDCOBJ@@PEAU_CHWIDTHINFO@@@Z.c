/*
 * XREFs of ?GrepGetCharWidthInfo@@YAHAEAVDCOBJ@@PEAU_CHWIDTHINFO@@@Z @ 0x14024A92C
 * Callers:
 *     NtGdiGetCharWidthInfo @ 0x14027FCD0 (NtGdiGetCharWidthInfo.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400C5C18 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     bFToL @ 0x140111E60 (bFToL.c)
 */

__int64 __fastcall GrepGetCharWidthInfo(struct DCOBJ *a1, struct _CHWIDTHINFO *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r11
  int v7; // eax
  float v8; // xmm1_4
  double v9; // xmm0_8
  __int64 v10; // r11
  int v11; // eax
  double v12; // xmm0_8
  __int64 v13; // r11
  int v14; // eax
  double v15; // xmm0_8
  int v16; // [rsp+50h] [rbp+30h] BYREF
  __int64 v17; // [rsp+58h] [rbp+38h] BYREF

  v2 = 0;
  v17 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v17, a1, 0, 2u) )
    GreAcquireSemaphore<5,RFONT *>(v17);
  v5 = v17;
  if ( v17 && *(_QWORD *)(*(_QWORD *)(v17 + 96) + 3072LL) )
  {
    v7 = *(_DWORD *)(v17 + 704);
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 340LL) & 0x802) == 0x802 )
    {
      *(_DWORD *)a2 = v7;
      *((_DWORD *)a2 + 1) = *(_DWORD *)(v5 + 708);
      *((_DWORD *)a2 + 2) = *(_DWORD *)(v5 + 712);
    }
    else
    {
      v8 = *(float *)(v17 + 688);
      v16 = 0;
      *(_QWORD *)&v9 = COERCE_UNSIGNED_INT((float)(16 * v7));
      *(float *)&v9 = *(float *)&v9 * v8;
      bFToL(v9, &v16, 0);
      *(_DWORD *)a2 = v16;
      v11 = 16 * *(_DWORD *)(v10 + 708);
      v16 = 0;
      *(_QWORD *)&v12 = COERCE_UNSIGNED_INT((float)v11);
      *(float *)&v12 = *(float *)&v12 * v8;
      bFToL(v12, &v16, 0);
      *((_DWORD *)a2 + 1) = v16;
      v14 = 16 * *(_DWORD *)(v13 + 712);
      v16 = 0;
      *(_QWORD *)&v15 = COERCE_UNSIGNED_INT((float)v14);
      *(float *)&v15 = *(float *)&v15 * v8;
      bFToL(v15, &v16, 0);
      *((_DWORD *)a2 + 2) = v16;
    }
    v2 = 1;
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
  return v2;
}
