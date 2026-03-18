/*
 * XREFs of ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1400BEFAC
 * Callers:
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVUDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x1400BD4C0 (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVUDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRIC.c)
 *     ?GrepGetCharWidthW@@YAHAEAVUDCOBJ@@IIPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1400BDFAC (-GrepGetCharWidthW@@YAHAEAVUDCOBJ@@IIPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVUDCOBJ@@@Z @ 0x1400BEDC0 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVUDCOBJ@@@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1400BF550 (-bTextExtent@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 * Callees:
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x140178EF8 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall RFONTOBJ::lOverhang(RFONTOBJ *this)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  int v3; // r8d
  __int64 v4; // rdi
  int v5; // r9d
  __int64 v7; // rax
  BOOL v8; // ecx
  int v9; // ecx
  unsigned int v10; // edx
  __int64 v11; // rax
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

  v1 = *(_QWORD *)this;
  v2 = 0;
  v3 = *(_DWORD *)(*(_QWORD *)this + 12LL);
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL);
  v5 = *(_DWORD *)(v4 + 48);
  if ( (v5 & 6) == 0 || *(_DWORD *)(v1 + 92) )
    return v2;
  if ( (v3 & 0x4000) != 0 )
    v2 = (*(_DWORD *)(v1 + 348) - 1) / 2;
  if ( (v3 & 0x2000) == 0 )
    return v2;
  if ( (v5 & 4) == 0 )
    return ++v2;
  v19 = 0LL;
  v21 = 0LL;
  v16 = &v19;
  v20 = 0LL;
  v22 = 8;
  RFONTOBJ::vSetNotionalToDevice(this, (struct EXFORMOBJ *)&v16);
  v7 = *(_QWORD *)(v4 + 120);
  v18 = v7;
  v8 = v7;
  if ( !(_DWORD)v7 )
  {
    v8 = HIDWORD(v7) == 0;
    LODWORD(v18) = v8;
    HIDWORD(v7) = HIDWORD(v18);
  }
  v15[0] = (float)v8;
  v15[1] = (float)SHIDWORD(v7);
  if ( (v16[4] & 2) != 0
    || EXFORMOBJ::bXform((EXFORMOBJ *)&v16, (const struct VECTORFL *)v15, (struct VECTORFL *)v15, 1uLL) )
  {
    v14 = 0;
    EFLOAT::eqLength(&v14, v17, v15);
    v9 = 0;
    v10 = (unsigned __int8)(v14 >> 23);
    if ( v10 <= 0x9E )
    {
      v11 = v14 & 0x7FFFFF | 0x800000LL;
      v12 = v10 < 0x76 ? v11 >> (118 - (unsigned __int8)v10) : v11 << ((unsigned __int8)v10 - 118);
      v13 = (v12 + 0x80000000LL) >> 32;
      v9 = -(int)v13;
      if ( v14 >= 0 )
        v9 = v13;
    }
    if ( !v9 )
      v9 = 1;
    v2 += v9;
    return v2;
  }
  return 1LL;
}
