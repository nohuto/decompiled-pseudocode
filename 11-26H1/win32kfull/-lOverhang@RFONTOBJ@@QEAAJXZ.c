/*
 * XREFs of ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1401C57AC
 * Callers:
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x14010F068 (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1401C4E90 (-bTextExtent@RFONTOBJ@@QEAAHAEAVDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?GrepGetCharWidthW@@YAHAEAVDCOBJ@@IIPEAGKPEAX@Z @ 0x1401C524C (-GrepGetCharWidthW@@YAHAEAVDCOBJ@@IIPEAGKPEAX@Z.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVDCOBJ@@@Z @ 0x1401C55B8 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVDCOBJ@@@Z.c)
 * Callees:
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x140107BA4 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall RFONTOBJ::lOverhang(RFONTOBJ *this)
{
  _DWORD *v1; // rdx
  unsigned int v2; // ebx
  __int64 v4; // rdi
  int v5; // r8d
  int v7; // ecx
  __int64 v8; // rax
  BOOL v9; // ecx
  __int64 v10; // rcx
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // [rsp+20h] [rbp-60h] BYREF
  float v15[2]; // [rsp+28h] [rbp-58h] BYREF
  __int64 *v16; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v17[16]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v18; // [rsp+48h] [rbp-38h]
  __int64 v19; // [rsp+50h] [rbp-30h] BYREF
  __int128 v20; // [rsp+58h] [rbp-28h]
  __int64 v21; // [rsp+68h] [rbp-18h]
  int v22; // [rsp+70h] [rbp-10h]

  v1 = *(_DWORD **)this;
  v2 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL);
  v5 = *(_DWORD *)(v4 + 48);
  if ( (v5 & 6) == 0 || v1[23] )
    return v2;
  v7 = v1[3];
  if ( (v7 & 0x4000) != 0 )
    v2 = (v1[87] - 1) / 2;
  if ( (v7 & 0x2000) == 0 )
    return v2;
  if ( (v5 & 4) == 0 )
    return ++v2;
  v19 = 0LL;
  v21 = 0LL;
  v16 = &v19;
  v22 = 8;
  v20 = 0LL;
  RFONTOBJ::vSetNotionalToDevice(this, (struct EXFORMOBJ *)&v16);
  v8 = *(_QWORD *)(v4 + 120);
  v18 = v8;
  v9 = v8;
  if ( !(_DWORD)v8 )
  {
    v9 = HIDWORD(v8) == 0;
    LODWORD(v18) = v9;
    HIDWORD(v8) = HIDWORD(v18);
  }
  v15[0] = (float)v9;
  v15[1] = (float)SHIDWORD(v8);
  if ( (v16[4] & 2) != 0
    || EXFORMOBJ::bXform((EXFORMOBJ *)&v16, (const struct VECTORFL *)v15, (struct VECTORFL *)v15, 1uLL) )
  {
    v14 = 0;
    EFLOAT::eqLength(&v14, v17, v15);
    LODWORD(v10) = 0;
    v11 = (unsigned __int8)(v14 >> 23);
    if ( v11 <= 0x9E )
    {
      v12 = v14 & 0x7FFFFF | 0x800000LL;
      v13 = v11 < 0x76 ? v12 >> (118 - (unsigned __int8)v11) : v12 << ((unsigned __int8)v11 - 118);
      v10 = (v13 + 0x80000000LL) >> 32;
      if ( v14 < 0 )
        LODWORD(v10) = -(int)v10;
    }
    if ( !(_DWORD)v10 )
      LODWORD(v10) = 1;
    v2 += v10;
    return v2;
  }
  return 1LL;
}
