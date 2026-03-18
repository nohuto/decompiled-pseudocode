/*
 * XREFs of PspApplyMitigationOptions @ 0x140964120
 * Callers:
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ObReferenceProcessHandleTable @ 0x1409717D0 (ObReferenceProcessHandleTable.c)
 *     ExEnableHandleExceptions @ 0x140AFA4A8 (ExEnableHandleExceptions.c)
 *     KeSetCheckStackExtentsProcess @ 0x140B0121C (KeSetCheckStackExtentsProcess.c)
 *     PspSetRedirectionTrustPolicy @ 0x140B023AC (PspSetRedirectionTrustPolicy.c)
 *     PspDecodeMitigationExecuteOptions @ 0x140B05E94 (PspDecodeMitigationExecuteOptions.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x140B3EDE8 (PspSetNoChildProcessRestrictedPolicy.c)
 */

__m128i *__fastcall PspApplyMitigationOptions(__int64 a1, __int64 a2, __m128i *a3, __int128 *a4, int a5)
{
  __m128i v5; // xmm2
  unsigned __int64 v7; // xmm3_8
  __int128 v8; // xmm0
  unsigned __int64 v9; // xmm1_8
  char v10; // al
  unsigned __int64 v11; // rsi
  unsigned int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r13
  unsigned int v18; // r11d
  unsigned __int64 v19; // xmm0_8
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r12
  unsigned __int8 v22; // cl
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned __int64 v27; // r14
  __m128i *result; // rax
  unsigned __int64 v29; // xmm1_8
  __m128i v30; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v31; // [rsp+30h] [rbp-50h]
  __int64 v32; // [rsp+38h] [rbp-48h]
  __int128 v33; // [rsp+40h] [rbp-40h]
  unsigned __int64 v34; // [rsp+50h] [rbp-30h]
  __m128i *v35; // [rsp+58h] [rbp-28h]
  __m128i v36; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v37; // [rsp+70h] [rbp-10h]

  v5 = *a3;
  v35 = a3;
  v7 = a3[1].m128i_u64[0];
  v8 = *a4;
  v32 = a2;
  v9 = *((_QWORD *)a4 + 2);
  v30 = v5;
  v33 = v8;
  v31 = v7;
  v34 = v9;
  if ( *(_WORD *)(a1 + 1772) == 332 )
  {
    v36 = v5;
    v37 = v7;
    v10 = PspDecodeMitigationExecuteOptions(&v36);
    a2 = v32;
    *(_BYTE *)(a1 + 147) = v10;
  }
  v11 = v30.m128i_i64[0];
  v12 = 3;
  if ( (((unsigned __int64)v30.m128i_i64[0] >> 8) & 3) != 1 )
  {
    if ( (((unsigned __int64)v30.m128i_i64[0] >> 8) & 3) != 3 )
      goto LABEL_7;
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 8u);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x10u);
LABEL_7:
  if ( (v30.m128i_i8[2] & 3) != 0 )
  {
    if ( (v30.m128i_i8[2] & 3) != 2 )
      goto LABEL_12;
  }
  else if ( (a5 & 1) != 0 )
  {
    goto LABEL_12;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x40u);
LABEL_12:
  if ( (*(_DWORD *)(a1 + 1872) & 0x40) != 0 )
    goto LABEL_18;
  if ( (((unsigned __int64)v30.m128i_i64[0] >> 20) & 3) != 0 )
  {
    if ( (((unsigned __int64)v30.m128i_i64[0] >> 20) & 3) != 1 )
      goto LABEL_18;
  }
  else if ( (a5 & 2) == 0 )
  {
    goto LABEL_18;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x20u);
LABEL_18:
  if ( !a2 )
    goto LABEL_28;
  if ( (((unsigned __int64)v30.m128i_i64[0] >> 24) & 3) != 0 )
  {
    if ( (((unsigned __int64)v30.m128i_i64[0] >> 24) & 3) == 1 )
      goto LABEL_23;
  }
  else if ( (a5 & 4) != 0 )
  {
LABEL_23:
    v13 = ObReferenceProcessHandleTable(a1);
    if ( v13 )
    {
      LOBYTE(v14) = 1;
      ExEnableHandleExceptions(v13, v14);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 488));
    }
    a2 = v32;
    v12 = 3;
  }
  if ( _bittest((const signed __int32 *)(a2 + 1872), 0xCu) )
  {
    v11 = v30.m128i_i64[0] & 0xFFFFFFFFCFFFFFFFuLL | 0x10000000;
    v30.m128i_i64[0] = v11;
  }
LABEL_28:
  if ( ((v11 >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x3000u);
  v15 = v33;
  if ( !_bittest((const signed __int32 *)(a1 + 1872), 0xCu) && (((unsigned __int64)v33 >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x2000u);
  if ( a2 && (*(_DWORD *)(a2 + 2008) & 2) != 0 )
    v16 = v31 & 0xFFFFFFFFCFFFFFFFuLL | 0x10000000;
  else
    v16 = v31;
  if ( ((v16 >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2008), 6u);
  v17 = v34;
  if ( (*(_DWORD *)(a1 + 2008) & 2) == 0 && ((v34 >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2008), 4u);
  if ( ((v11 >> 36) & 3) != 1 )
  {
    if ( ((v11 >> 36) & 3) != 3 )
      goto LABEL_46;
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x200u);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x900u);
LABEL_46:
  v18 = 1024;
  v19 = _mm_srli_si128(_mm_loadu_si128(&v30), 8).m128i_u64[0];
  v20 = v19;
  if ( (HIBYTE(v19) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x400u);
  v21 = *((_QWORD *)&v33 + 1);
  if ( (*(_DWORD *)(a1 + 1872) & 0x100) != 0 )
  {
    v20 = v19 & 0xFFFFFFFFFCCCFFFFuLL | 0x2220000;
    v30.m128i_i64[1] = v20;
    v21 = *((_QWORD *)&v33 + 1) & 0xFFFFFFFFFCCCFFFFuLL | 0x2220000;
  }
  else if ( ((v15 >> 36) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x800u);
  }
  if ( (BYTE4(v11) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x80u);
  if ( ((v11 >> 40) & 3) == 0 )
  {
    if ( (a5 & 8) == 0 )
      goto LABEL_66;
    v11 = v11 & 0xFFFFFCFFFFFFFFFFuLL | 0x10000000000LL;
    v30.m128i_i64[0] = v11;
    if ( (a5 & 0x20) == 0 || PspDisableControlFlowGuardExportSuppression )
      goto LABEL_64;
LABEL_62:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 2u);
    v11 |= 0x30000000000uLL;
    goto LABEL_63;
  }
  if ( ((v11 >> 40) & 3) == 1 )
    goto LABEL_64;
  if ( ((v11 >> 40) & 3) != 3 )
    goto LABEL_66;
  if ( !PspDisableControlFlowGuardExportSuppression )
    goto LABEL_62;
  v11 = v11 & 0xFFFFFCFFFFFFFFFFuLL | 0x10000000000LL;
LABEL_63:
  v30.m128i_i64[0] = v11;
LABEL_64:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 1u);
  if ( (a5 & 0x10) == 0 )
  {
    KeSetCheckStackExtentsProcess(a1, 1LL);
    a2 = v32;
  }
LABEL_66:
  if ( (v12 & (unsigned int)(v20 >> 8)) == 1 && (*(_DWORD *)(a1 + 1872) & 1) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 4u);
  if ( (v12 & (v11 >> 44)) == 1 )
  {
    if ( *(_BYTE *)(a1 + 1528) < 8u )
      *(_BYTE *)(a1 + 1528) = 8;
    if ( *(_BYTE *)(a1 + 1529) < 8u )
      *(_BYTE *)(a1 + 1529) = 8;
  }
  else
  {
    if ( (v12 & (v11 >> 44)) != 3 )
      goto LABEL_80;
    if ( *(_BYTE *)(a1 + 1528) < 6u )
      *(_BYTE *)(a1 + 1528) = 6;
    if ( *(_BYTE *)(a1 + 1529) < 6u )
      *(_BYTE *)(a1 + 1529) = 6;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x800000u);
LABEL_80:
  if ( (*(_DWORD *)(a1 + 1872) & 0x800000) == 0 )
  {
    if ( (v12 & (v15 >> 44)) == 1 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x1000000u);
    }
    else if ( (v12 & (v15 >> 44)) == 3 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x2000000u);
    }
  }
  v22 = v11;
  if ( (((unsigned __int8)v11 >> 4) & (unsigned __int8)v12) == 0 && (*(_DWORD *)(a1 + 1872) & 1) != 0 )
  {
    v11 = v11 & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    v30.m128i_i64[0] = v11;
    v22 = v11;
  }
  if ( ((unsigned __int8)v12 & (v22 >> 4)) != 1 && (v12 & (unsigned int)(v15 >> 4)) == 1 )
  {
    v11 |= 0x30uLL;
    v30.m128i_i64[0] = v11;
  }
  if ( (a5 & 0xC000) == 0x4000 )
  {
    v11 = v11 & 0xFFFCFFFFFFFFFFFFuLL | 0x1000000000000LL;
LABEL_96:
    v30.m128i_i64[0] = v11;
    goto LABEL_97;
  }
  if ( (a5 & 0xC000) == 0xC000 && ((unsigned __int8)v12 & BYTE6(v11)) != 1 )
  {
    v11 |= 0x3000000000000uLL;
    goto LABEL_96;
  }
LABEL_97:
  if ( (v12 & HIWORD(v11)) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x10000u);
  }
  else if ( (v12 & HIWORD(v11)) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x20000u);
  }
  if ( (*(_DWORD *)(a1 + 1872) & 0x30000) == 0 && (v12 & HIWORD(v15)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x20000u);
  if ( a2 && (*(_DWORD *)(a2 + 1872) & 0x80000) != 0 )
  {
    v11 = v11 & 0xFFCFFFFFFFFFFFFFuLL | 0x10000000000000LL;
    v30.m128i_i64[0] = v11;
  }
  if ( ((unsigned __int16)v12 & (v11 >> 52)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x80000u);
  if ( (*(_DWORD *)(a1 + 1872) & 0x80000) == 0 && ((unsigned __int16)v12 & (v15 >> 52)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x100000u);
  if ( a2 && (*(_DWORD *)(a2 + 1872) & 0x200000) != 0 )
  {
    v11 = v11 & 0xFCFFFFFFFFFFFFFFuLL | 0x100000000000000LL;
    v30.m128i_i64[0] = v11;
  }
  if ( (v12 & HIBYTE(v11)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x200000u);
  if ( (*(_DWORD *)(a1 + 1872) & 0x200000) == 0 && (v12 & HIBYTE(v15)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x400000u);
  if ( a2 && (*(_DWORD *)(a2 + 1872) & 0x40000) != 0 )
  {
    v11 = v11 & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
    v30.m128i_i64[0] = v11;
  }
  if ( ((unsigned __int8)v12 & (v11 >> 60)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x40000u);
  v23 = 0x8000000LL;
  if ( a2 )
  {
    v24 = *(_DWORD *)(a2 + 1872);
    if ( (v24 & 0x4000000) != 0 )
    {
      v20 = v20 & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    }
    else
    {
      if ( (v24 & 0x8000000) == 0 )
        goto LABEL_131;
      v20 |= 0x30uLL;
    }
    v30.m128i_i64[1] = v20;
  }
LABEL_131:
  if ( (v12 & (unsigned int)(v20 >> 4)) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0xC000000u);
  }
  else if ( (v12 & (unsigned int)(v20 >> 4)) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x8000000u);
  }
  if ( (*(_DWORD *)(a1 + 1872) & 0xC000000) == 0 && (v12 & (unsigned int)(v21 >> 4)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x8000000u);
  if ( (v12 & (unsigned int)(v20 >> 28)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 1u);
  if ( (*(_DWORD *)(a1 + 1876) & 1) == 0 && (v12 & (unsigned int)(v21 >> 28)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 2u);
  if ( (v12 & HIDWORD(v20)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 4u);
  if ( (v12 & HIWORD(v20)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x40000000u);
  if ( ((unsigned __int16)v12 & (v20 >> 52)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x2000u);
  if ( (*(_DWORD *)(a1 + 1876) & 4) == 0 && (v12 & HIDWORD(v21)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 8u);
  if ( (v12 & (v20 >> 40)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), v18);
  if ( (v18 & *(_DWORD *)(a1 + 1876)) == 0 && (v12 & (v21 >> 40)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x800u);
  if ( (v12 & (unsigned int)(v20 >> 16)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x10u);
  if ( (*(_DWORD *)(a1 + 1876) & 0x10) == 0 && (v12 & (unsigned int)(v21 >> 16)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x20u);
  if ( *(_WORD *)(a1 + 1772) == 332 )
  {
    if ( (v12 & (unsigned int)(v20 >> 20)) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x40u);
    if ( (*(_DWORD *)(a1 + 1876) & 0x40) == 0 && (v12 & (unsigned int)(v21 >> 20)) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x80u);
    if ( (v12 & (unsigned int)(v20 >> 24)) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x100u);
    if ( (*(_DWORD *)(a1 + 1876) & 0x100) == 0 && (v12 & (unsigned int)(v21 >> 24)) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x200u);
  }
  if ( (v12 & (unsigned __int8)(v20 >> 36)) == 1 )
  {
    v25 = 1LL;
    goto LABEL_177;
  }
  if ( (v12 & (unsigned __int8)(v20 >> 36)) == 3 )
  {
    v25 = 2LL;
LABEL_177:
    PspSetNoChildProcessRestrictedPolicy(a1, v25, 0x8000000LL);
    v12 = 3;
  }
  if ( ((unsigned __int8)v12 & (unsigned __int8)(v20 >> 36)) != 1 && (v12 & (v21 >> 36)) == 1 )
  {
    PspSetNoChildProcessRestrictedPolicy(a1, v12, v23);
    v12 = 3;
  }
  v26 = 0x10000000LL;
  if ( v32 && (*(_DWORD *)(v32 + 1872) & 0x30000000) == 0x10000000 )
  {
    v20 = v20 & 0xFFFFCFFFFFFFFFFFuLL | 0x100000000000LL;
    v30.m128i_i64[1] = v20;
  }
  if ( (v12 & (v20 >> 44)) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x10000000u);
  }
  else if ( (v12 & (v20 >> 44)) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x30000000u);
  }
  switch ( (unsigned __int8)v12 & (v20 >> 60) )
  {
    case 0uLL:
      if ( (a5 & 0x10000) == 0 || (a5 & 0x100000) != 0 || (a5 & 0x200000) != 0 )
        break;
      if ( (a5 & 0x20000) != 0 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x100000u);
      v30.m128i_i64[1] = v20 & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
LABEL_198:
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x4000u);
      break;
    case 1uLL:
      goto LABEL_198;
    case 3uLL:
      v30.m128i_i64[1] = v20 & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x4000u);
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x100000u);
      break;
  }
  if ( ((unsigned __int8)v12 & (v21 >> 60)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x8000u);
  if ( (*(_DWORD *)(a1 + 1876) & 0x4000) == 0 )
  {
    v27 = v16 & 0xFFFFFFFFFFFFFFFCuLL | 2;
    goto LABEL_209;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x20000u);
  if ( ((unsigned __int8)v12 & (unsigned __int8)v16) != 0 )
  {
    if ( ((unsigned __int8)v12 & (unsigned __int8)v16) == (_BYTE)v12 )
      goto LABEL_207;
  }
  else if ( (a5 & 0x40000) != 0 )
  {
LABEL_207:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x80000000);
  }
  v27 = v16 & 0xFFFFFFFFFFFFFFFCuLL | 1;
LABEL_209:
  v31 = v27;
  if ( (v12 & (unsigned __int8)v17) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x40000u);
  if ( (v12 & (unsigned int)(v27 >> 4)) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x200000u);
  }
  else if ( (v12 & (unsigned int)(v27 >> 4)) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x200000u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x400000u);
  }
  if ( (v12 & (unsigned int)(v17 >> 4)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x800000u);
  if ( (v12 & (unsigned int)(v27 >> 12)) == 0 )
  {
    v27 = v27 & 0xFFFFFFFFFFFFCFFFuLL | 0x1000;
    v31 = v27;
    goto LABEL_221;
  }
  if ( (v12 & (unsigned int)(v27 >> 12)) == 1 )
LABEL_221:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x8000000u);
  if ( (v12 & (unsigned int)(v17 >> 12)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x10000000u);
  if ( (v12 & (unsigned int)(v27 >> 16)) != 0 )
  {
    if ( (v12 & (unsigned int)(v27 >> 16)) != 1 )
      goto LABEL_229;
  }
  else if ( (a5 & 0x80000) != 0 )
  {
    goto LABEL_229;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x40000000u);
LABEL_229:
  if ( (v12 & (unsigned __int8)(v27 >> 20)) == 1 )
  {
    PspSetRedirectionTrustPolicy(a1, 1LL, 0x10000000LL);
    v12 = 3;
  }
  if ( ((unsigned __int8)v12 & (unsigned __int8)(v27 >> 20)) != 1 && (v12 & (unsigned int)(v17 >> 20)) == 1 )
  {
    PspSetRedirectionTrustPolicy(a1, 2LL, v26);
    v12 = 3;
  }
  if ( (v12 & (unsigned int)(v27 >> 24)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2008), 1u);
  result = v35;
  v29 = v31;
  *v35 = v30;
  result[1].m128i_i64[0] = v29;
  return result;
}
