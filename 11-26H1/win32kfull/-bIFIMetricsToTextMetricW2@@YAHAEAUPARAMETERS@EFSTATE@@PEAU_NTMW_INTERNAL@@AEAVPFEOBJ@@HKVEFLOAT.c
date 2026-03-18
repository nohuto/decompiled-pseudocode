/*
 * XREFs of ?bIFIMetricsToTextMetricW2@@YAHAEAUPARAMETERS@EFSTATE@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x140100E0C
 * Callers:
 *     cjCopyFontDataW @ 0x1401003B4 (cjCopyFontDataW.c)
 * Callees:
 *     bFToL @ 0x140111E60 (bFToL.c)
 */

__int64 __fastcall bIFIMetricsToTextMetricW2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        int a8)
{
  __int64 v12; // rdi
  int v13; // r11d
  _BOOL8 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // esi
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int16 v23; // ax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned int v32; // edx
  char v33; // al
  int v34; // edx
  int v35; // ecx
  int v36; // eax
  int v37; // ecx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v41; // [rsp+20h] [rbp-20h] BYREF
  _DWORD v42[2]; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v43[2]; // [rsp+30h] [rbp-10h] BYREF
  int v44; // [rsp+88h] [rbp+48h] BYREF
  int v45; // [rsp+90h] [rbp+50h] BYREF

  v12 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
  v13 = *(__int16 *)(v12 + 60) + *(__int16 *)(v12 + 62);
  v14 = *(_WORD *)(v12 + 56) != 0;
  if ( v13 == 0 || !v14 )
    return 0LL;
  if ( (*(_DWORD *)(v12 + 48) & 0x3000010) != 0 )
  {
    a5 = 0;
    bFToL(v14, &a5, 0LL);
    *(_DWORD *)(a2 + 8) = a5;
    v15 = (unsigned int)*(__int16 *)(v12 + 60);
    a5 = 0;
    bFToL(v15, &a5, v16);
    v17 = a5;
    *(_DWORD *)(a2 + 12) = a5;
    a5 = 0;
    bFToL(v18, &a5, v19);
    *(_DWORD *)(a2 + 20) = a5;
    v20 = (unsigned __int16)(*(_WORD *)(v12 + 64)
                           + *(_WORD *)(v12 + 68)
                           - *(_WORD *)(v12 + 66)
                           - *(_WORD *)(v12 + 62)
                           - *(_WORD *)(v12 + 60));
    a5 = 0;
    bFToL(v20, &a5, 0LL);
    *(_DWORD *)(a2 + 24) = a5;
    a5 = 0;
    bFToL(v21, &a5, 0LL);
    *(_DWORD *)(a2 + 28) = a5;
    a5 = 0;
    bFToL(v22, &a5, 0LL);
    *(_DWORD *)(a2 + 32) = a5;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = v13;
    v17 = *(__int16 *)(v12 + 60);
    *(_DWORD *)(a2 + 12) = v17;
    *(_DWORD *)(a2 + 20) = (__int16)(*(_WORD *)(v12 + 62) + *(_WORD *)(v12 + 60) - *(_WORD *)(v12 + 56));
    v23 = *(_WORD *)(v12 + 64)
        + *(_WORD *)(v12 + 68)
        - *(_WORD *)(v12 + 66)
        - *(_WORD *)(v12 + 62)
        - *(_WORD *)(v12 + 60);
    if ( v23 <= 0 )
      v23 = 0;
    *(_DWORD *)(a2 + 24) = v23;
    *(_DWORD *)(a2 + 28) = *(__int16 *)(v12 + 76);
    *(_DWORD *)(a2 + 32) = *(__int16 *)(v12 + 78);
  }
  v43[0] = a1;
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
  {
    v41 = 1065353216LL;
    if ( EXFORMOBJ::bXform((EXFORMOBJ *)v43, (const struct VECTORFL *)&v41, (struct VECTORFL *)&v41, 1uLL) )
    {
      EFLOAT::eqLength(&v44, &a5, &v41);
      v42[0] = 0;
      v42[1] = 1065353216;
      if ( (*(_DWORD *)(v43[0] + 32LL) & 2) != 0
        || EXFORMOBJ::bXform((EXFORMOBJ *)v43, (const struct VECTORFL *)v42, (struct VECTORFL *)v42, 1uLL) )
      {
        EFLOAT::eqLength(&v45, &a5, v42);
        a5 = 0;
        bFToL(v24, &a5, 0LL);
        *(_DWORD *)(a2 + 8) = a5;
        a5 = 0;
        bFToL(v25, &a5, v26);
        v17 = a5;
        *(_DWORD *)(a2 + 12) = a5;
        a5 = 0;
        bFToL(v27, &a5, v28);
        *(_DWORD *)(a2 + 28) = a5;
        a5 = 0;
        bFToL(v29, &a5, 0LL);
        *(_DWORD *)(a2 + 32) = a5;
        a5 = 0;
        bFToL(v30, &a5, 0LL);
        *(_DWORD *)(a2 + 20) = a5;
        a5 = 0;
        bFToL(v31, &a5, 0LL);
        *(_DWORD *)(a2 + 24) = a5;
        goto LABEL_12;
      }
    }
    return 0LL;
  }
LABEL_12:
  *(_DWORD *)(a2 + 44) = a7;
  *(_DWORD *)(a2 + 48) = a8;
  *(_DWORD *)(a2 + 16) = v13 - v17;
  *(_DWORD *)(a2 + 36) = *(unsigned __int16 *)(v12 + 46);
  *(_BYTE *)(a2 + 60) = -((*(_BYTE *)(v12 + 52) & 1) != 0);
  *(_BYTE *)(a2 + 61) = *(_BYTE *)(v12 + 52) & 2;
  *(_BYTE *)(a2 + 62) = *(_BYTE *)(v12 + 52) & 0x10;
  *(_WORD *)(a2 + 52) = *(_WORD *)(v12 + 112);
  *(_WORD *)(a2 + 54) = *(_WORD *)(v12 + 114);
  *(_WORD *)(a2 + 56) = *(_WORD *)(v12 + 116);
  *(_WORD *)(a2 + 58) = *(_WORD *)(v12 + 118);
  *(_BYTE *)(a2 + 64) = *(_BYTE *)(v12 + 44);
  v32 = *(_DWORD *)(v12 + 48);
  v33 = *(_BYTE *)(v12 + 45);
  *(_DWORD *)(a2 + 40) = 0;
  *(_DWORD *)(a2 + 68) = 0;
  *(_BYTE *)(a2 + 63) = (a4 != 0 ? 8 : 0) | v33 & 0xF0 | (v32 >> 1) & 2 | ((v32 & 1) != 0 ? 6 : 0) | ((v32 & 8) != 0 ? 0xA : 0) | ((v32 & 0x401000) == 0);
  v34 = *(_WORD *)(v12 + 52) & 1;
  if ( (*(_WORD *)(v12 + 52) & 0x20) != 0 || v34 )
  {
    v35 = 0;
    if ( v34 )
    {
      *(_DWORD *)(a2 + 68) = 1;
      v35 = 1;
    }
    if ( (*(_BYTE *)(v12 + 52) & 0x20) == 0 )
      goto LABEL_20;
    v35 |= 0x20u;
  }
  else
  {
    v35 = 64;
  }
  *(_DWORD *)(a2 + 68) = v35;
LABEL_20:
  if ( (*(_DWORD *)(v12 + 48) & 0x20000000) != 0 )
  {
    v35 |= 0x10000u;
    *(_DWORD *)(a2 + 68) = v35;
  }
  v36 = *(_DWORD *)(v12 + 48);
  if ( v36 < 0 )
  {
    if ( (v36 & 0x4000) != 0 )
    {
      v35 |= 0x80000u;
      *(_DWORD *)(a2 + 68) = v35;
    }
    if ( (*(_DWORD *)(v12 + 48) & 0x4000000) != 0 )
      v35 |= 0x20000u;
    else
      v35 |= 0x100000u;
    *(_DWORD *)(a2 + 68) = v35;
  }
  if ( (*(_DWORD *)(v12 + 48) & 0x40000) != 0 )
  {
    v37 = v35 | 0x200000;
    *(_DWORD *)(a2 + 68) = v37;
    if ( (*(_DWORD *)(v12 + 48) & 1) != 0 )
      *(_DWORD *)(a2 + 68) = v37 | 0x40000;
  }
  *(_DWORD *)(a2 + 72) = *(__int16 *)(v12 + 56);
  *(_DWORD *)(a2 + 76) = *(__int16 *)(v12 + 60) + *(__int16 *)(v12 + 62);
  *(_DWORD *)(a2 + 80) = *(__int16 *)(v12 + 76);
  *(_BYTE *)(a2 + 4) = *(_BYTE *)(v12 + 108);
  *(_BYTE *)(a2 + 5) = *(_BYTE *)(v12 + 109);
  *(_BYTE *)(a2 + 6) = *(_BYTE *)(v12 + 110);
  *(_BYTE *)(a2 + 7) = *(_BYTE *)(v12 + 111);
  v38 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
  if ( *(_DWORD *)(v38 + 4) > 4u && (v39 = *(int *)(v38 + 196), (_DWORD)v39) )
  {
    *(_OWORD *)(a2 + 84) = *(_OWORD *)(v39 + v12);
    *(_QWORD *)(a2 + 100) = *(_QWORD *)(v39 + v12 + 16);
  }
  else
  {
    *(_OWORD *)(a2 + 84) = 0LL;
    *(_QWORD *)(a2 + 100) = 0LL;
  }
  return 1LL;
}
