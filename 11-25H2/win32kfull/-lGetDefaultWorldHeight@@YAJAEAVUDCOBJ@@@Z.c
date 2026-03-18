/*
 * XREFs of ?lGetDefaultWorldHeight@@YAJAEAVUDCOBJ@@@Z @ 0x1400BADDC
 * Callers:
 *     ?bGetNtoW_Win31@@YAHPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@KH@Z @ 0x1400BA6C0 (-bGetNtoW_Win31@@YAHPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@KH@Z.c)
 *     ?vGetNtoW@@YAXPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@@Z @ 0x1400BB204 (-vGetNtoW@@YAXPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@@Z.c)
 * Callees:
 *     bFToL @ 0x1400A4410 (bFToL.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x1400BCD48 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 *     ?vSqrt@EFLOAT@@QEAAXXZ @ 0x1400BFE30 (-vSqrt@EFLOAT@@QEAAXXZ.c)
 */

__int64 __fastcall lGetDefaultWorldHeight(struct UDCOBJ *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  double v4; // xmm0_8
  int v5; // ebx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  struct LFONT *v7; // [rsp+28h] [rbp-10h]
  float v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  if ( !v2 )
    return 24LL;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v6, *(struct HLFONT__ **)(v2 + 1432), 0LL);
  if ( !v6 )
  {
    if ( v7 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v7);
    return 24LL;
  }
  v5 = *(_DWORD *)(v6 + 252);
  if ( v7 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v7);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 340LL) & 0x802) != 0x802 )
  {
    v8 = (float)(*(float *)(*(_QWORD *)a1 + 332LL) * *(float *)(*(_QWORD *)a1 + 332LL))
       + (float)(*(float *)(*(_QWORD *)a1 + 328LL) * *(float *)(*(_QWORD *)a1 + 328LL));
    EFLOAT::vSqrt((EFLOAT *)&v8);
    *(_QWORD *)&v4 = LODWORD(FLOAT_1_0);
    v9 = 0;
    *(float *)&v4 = (float)(1.0 / v8) * (float)(16 * v5);
    bFToL(v4, &v9, 0);
    v5 = v9;
  }
  result = (unsigned int)-v5;
  if ( !v5 )
    return 24LL;
  return result;
}
