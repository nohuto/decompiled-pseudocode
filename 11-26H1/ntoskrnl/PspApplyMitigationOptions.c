/*
 * XREFs of PspApplyMitigationOptions @ 0x140B4F59C
 * Callers:
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ObReferenceProcessHandleTable @ 0x1409BB940 (ObReferenceProcessHandleTable.c)
 *     ExEnableHandleExceptions @ 0x140AFC710 (ExEnableHandleExceptions.c)
 *     KeSetCheckStackExtentsProcess @ 0x140B02F4C (KeSetCheckStackExtentsProcess.c)
 *     PspSetRedirectionTrustPolicy @ 0x140B040DC (PspSetRedirectionTrustPolicy.c)
 *     PspDecodeMitigationExecuteOptions @ 0x140B07F24 (PspDecodeMitigationExecuteOptions.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x140B40E18 (PspSetNoChildProcessRestrictedPolicy.c)
 */

__m128i *__fastcall PspApplyMitigationOptions(__int64 a1, __int64 a2, __m128i *a3, __int128 *a4, int a5)
{
  __m128i v5; // xmm2
  unsigned __int64 v7; // xmm3_8
  __int128 v8; // xmm0
  unsigned __int64 v9; // xmm1_8
  char v10; // al
  unsigned __int64 v11; // rsi
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r13
  unsigned int v19; // r11d
  unsigned __int64 v20; // xmm0_8
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r12
  unsigned __int8 v23; // cl
  __int64 v24; // r8
  int v25; // eax
  int v26; // edx
  __int64 v27; // r8
  unsigned __int64 v28; // r14
  __m128i *result; // rax
  unsigned __int64 v30; // xmm1_8
  __m128i v31; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v32; // [rsp+30h] [rbp-50h]
  __int64 v33; // [rsp+38h] [rbp-48h]
  __int128 v34; // [rsp+40h] [rbp-40h]
  unsigned __int64 v35; // [rsp+50h] [rbp-30h]
  __m128i *v36; // [rsp+58h] [rbp-28h]
  __m128i v37; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v38; // [rsp+70h] [rbp-10h]

  v5 = *a3;
  v36 = a3;
  v7 = a3[1].m128i_u64[0];
  v8 = *a4;
  v33 = a2;
  v9 = *((_QWORD *)a4 + 2);
  v31 = v5;
  v34 = v8;
  v32 = v7;
  v35 = v9;
  if ( *(_WORD *)(a1 + 1772) == 332 )
  {
    v37 = v5;
    v38 = v7;
    v10 = PspDecodeMitigationExecuteOptions(&v37);
    a2 = v33;
    *(_BYTE *)(a1 + 147) = v10;
  }
  v11 = v31.m128i_i64[0];
  v12 = 3LL;
  if ( (((unsigned __int64)v31.m128i_i64[0] >> 8) & 3) != 1 )
  {
    if ( (((unsigned __int64)v31.m128i_i64[0] >> 8) & 3) != 3 )
      goto LABEL_7;
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 8u);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x10u);
LABEL_7:
  if ( (v31.m128i_i8[2] & 3) != 0 )
  {
    if ( (v31.m128i_i8[2] & 3) != 2 )
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
  if ( (((unsigned __int64)v31.m128i_i64[0] >> 20) & 3) != 0 )
  {
    if ( (((unsigned __int64)v31.m128i_i64[0] >> 20) & 3) != 1 )
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
  if ( (((unsigned __int64)v31.m128i_i64[0] >> 24) & 3) != 0 )
  {
    if ( (((unsigned __int64)v31.m128i_i64[0] >> 24) & 3) == 1 )
      goto LABEL_23;
  }
  else if ( (a5 & 4) != 0 )
  {
LABEL_23:
    v13 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)a1);
    if ( v13 )
    {
      ExEnableHandleExceptions(v13, 1, v14, v15);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 488));
    }
    a2 = v33;
    v12 = 3LL;
  }
  if ( _bittest((const signed __int32 *)(a2 + 1872), 0xCu) )
  {
    v11 = v31.m128i_i64[0] & 0xFFFFFFFFCFFFFFFFuLL | 0x10000000;
    v31.m128i_i64[0] = v11;
  }
LABEL_28:
  if ( ((v11 >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x3000u);
  v16 = v34;
  if ( !_bittest((const signed __int32 *)(a1 + 1872), 0xCu) && (((unsigned __int64)v34 >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x2000u);
  if ( a2 && (*(_DWORD *)(a2 + 2008) & 2) != 0 )
    v17 = v32 & 0xFFFFFFFFCFFFFFFFuLL | 0x10000000;
  else
    v17 = v32;
  if ( ((v17 >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2008), 6u);
  v18 = v35;
  if ( (*(_DWORD *)(a1 + 2008) & 2) == 0 && ((v35 >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2008), 4u);
  if ( ((v11 >> 36) & 3) != 1 )
  {
    if ( ((v11 >> 36) & 3) != 3 )
      goto LABEL_46;
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x200u);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x900u);
LABEL_46:
  v19 = 1024;
  v20 = _mm_srli_si128(_mm_loadu_si128(&v31), 8).m128i_u64[0];
  v21 = v20;
  if ( (HIBYTE(v20) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x400u);
  v22 = *((_QWORD *)&v34 + 1);
  if ( (*(_DWORD *)(a1 + 1872) & 0x100) != 0 )
  {
    v21 = v20 & 0xFFFFFFFFFCCCFFFFuLL | 0x2220000;
    v31.m128i_i64[1] = v21;
    v22 = *((_QWORD *)&v34 + 1) & 0xFFFFFFFFFCCCFFFFuLL | 0x2220000;
  }
  else if ( ((v16 >> 36) & 3) == 1 )
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
    v31.m128i_i64[0] = v11;
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
  v31.m128i_i64[0] = v11;
LABEL_64:
  _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 1u);
  if ( (a5 & 0x10) == 0 )
  {
    KeSetCheckStackExtentsProcess(a1, 1);
    a2 = v33;
  }
LABEL_66:
  if ( ((unsigned int)v12 & (unsigned int)(v21 >> 8)) == 1 && (*(_DWORD *)(a1 + 1872) & 1) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 4u);
  if ( ((unsigned int)v12 & (v11 >> 44)) == 1 )
  {
    if ( *(_BYTE *)(a1 + 1528) < 8u )
      *(_BYTE *)(a1 + 1528) = 8;
    if ( *(_BYTE *)(a1 + 1529) < 8u )
      *(_BYTE *)(a1 + 1529) = 8;
  }
  else
  {
    if ( ((unsigned int)v12 & (v11 >> 44)) != 3 )
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
    if ( ((unsigned int)v12 & (v16 >> 44)) == 1 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x1000000u);
    }
    else if ( ((unsigned int)v12 & (v16 >> 44)) == 3 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x2000000u);
    }
  }
  v23 = v11;
  if ( (((unsigned __int8)v11 >> 4) & (unsigned __int8)v12) == 0 && (*(_DWORD *)(a1 + 1872) & 1) != 0 )
  {
    v11 = v11 & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    v31.m128i_i64[0] = v11;
    v23 = v11;
  }
  if ( ((unsigned __int8)v12 & (v23 >> 4)) != 1 && ((unsigned int)v12 & (unsigned int)(v16 >> 4)) == 1 )
  {
    v11 |= 0x30uLL;
    v31.m128i_i64[0] = v11;
  }
  if ( (a5 & 0xC000) == 0x4000 )
  {
    v11 = v11 & 0xFFFCFFFFFFFFFFFFuLL | 0x1000000000000LL;
LABEL_96:
    v31.m128i_i64[0] = v11;
    goto LABEL_97;
  }
  if ( (a5 & 0xC000) == 0xC000 && ((unsigned __int8)v12 & BYTE6(v11)) != 1 )
  {
    v11 |= 0x3000000000000uLL;
    goto LABEL_96;
  }
LABEL_97:
  if ( (unsigned __int16)(v12 & HIWORD(v11)) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x10000u);
  }
  else if ( (unsigned __int16)(v12 & HIWORD(v11)) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x20000u);
  }
  if ( (*(_DWORD *)(a1 + 1872) & 0x30000) == 0 && (unsigned __int16)(v12 & HIWORD(v16)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x20000u);
  if ( a2 && (*(_DWORD *)(a2 + 1872) & 0x80000) != 0 )
  {
    v11 = v11 & 0xFFCFFFFFFFFFFFFFuLL | 0x10000000000000LL;
    v31.m128i_i64[0] = v11;
  }
  if ( ((unsigned __int16)v12 & (v11 >> 52)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x80000u);
  if ( (*(_DWORD *)(a1 + 1872) & 0x80000) == 0 && ((unsigned __int16)v12 & (v16 >> 52)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x100000u);
  if ( a2 && (*(_DWORD *)(a2 + 1872) & 0x200000) != 0 )
  {
    v11 = v11 & 0xFCFFFFFFFFFFFFFFuLL | 0x100000000000000LL;
    v31.m128i_i64[0] = v11;
  }
  if ( (unsigned __int8)(v12 & HIBYTE(v11)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x200000u);
  if ( (*(_DWORD *)(a1 + 1872) & 0x200000) == 0 && (unsigned __int8)(v12 & HIBYTE(v16)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x400000u);
  if ( a2 && (*(_DWORD *)(a2 + 1872) & 0x40000) != 0 )
  {
    v11 = v11 & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
    v31.m128i_i64[0] = v11;
  }
  if ( ((unsigned __int8)v12 & (v11 >> 60)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x40000u);
  v24 = 0x8000000LL;
  if ( a2 )
  {
    v25 = *(_DWORD *)(a2 + 1872);
    if ( (v25 & 0x4000000) != 0 )
    {
      v21 = v21 & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    }
    else
    {
      if ( (v25 & 0x8000000) == 0 )
        goto LABEL_131;
      v21 |= 0x30uLL;
    }
    v31.m128i_i64[1] = v21;
  }
LABEL_131:
  if ( ((unsigned int)v12 & (unsigned int)(v21 >> 4)) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0xC000000u);
  }
  else if ( ((unsigned int)v12 & (unsigned int)(v21 >> 4)) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x8000000u);
  }
  if ( (*(_DWORD *)(a1 + 1872) & 0xC000000) == 0 && ((unsigned int)v12 & (unsigned int)(v22 >> 4)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x8000000u);
  if ( ((unsigned int)v12 & (unsigned int)(v21 >> 28)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 1u);
  if ( (*(_DWORD *)(a1 + 1876) & 1) == 0 && ((unsigned int)v12 & (unsigned int)(v22 >> 28)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 2u);
  if ( ((unsigned int)v12 & HIDWORD(v21)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 4u);
  if ( (unsigned __int16)(v12 & HIWORD(v21)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x40000000u);
  if ( ((unsigned __int16)v12 & (v21 >> 52)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x2000u);
  if ( (*(_DWORD *)(a1 + 1876) & 4) == 0 && ((unsigned int)v12 & HIDWORD(v22)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 8u);
  if ( ((unsigned int)v12 & (v21 >> 40)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), v19);
  if ( (v19 & *(_DWORD *)(a1 + 1876)) == 0 && ((unsigned int)v12 & (v22 >> 40)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x800u);
  if ( ((unsigned int)v12 & (unsigned int)(v21 >> 16)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x10u);
  if ( (*(_DWORD *)(a1 + 1876) & 0x10) == 0 && ((unsigned int)v12 & (unsigned int)(v22 >> 16)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x20u);
  if ( *(_WORD *)(a1 + 1772) == 332 )
  {
    if ( ((unsigned int)v12 & (unsigned int)(v21 >> 20)) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x40u);
    if ( (*(_DWORD *)(a1 + 1876) & 0x40) == 0 && ((unsigned int)v12 & (unsigned int)(v22 >> 20)) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x80u);
    if ( ((unsigned int)v12 & (unsigned int)(v21 >> 24)) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x100u);
    if ( (*(_DWORD *)(a1 + 1876) & 0x100) == 0 && ((unsigned int)v12 & (unsigned int)(v22 >> 24)) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x200u);
  }
  if ( (unsigned __int8)(v12 & (v21 >> 36)) == 1 )
  {
    v26 = 1;
    goto LABEL_177;
  }
  if ( (unsigned __int8)(v12 & (v21 >> 36)) == 3 )
  {
    v26 = 2;
LABEL_177:
    PspSetNoChildProcessRestrictedPolicy(a1, v26, 0x8000000LL, (struct _KLOCK_ENTRIES *)v12);
    v12 = 3LL;
  }
  if ( ((unsigned __int8)v12 & (unsigned __int8)(v21 >> 36)) != 1 && ((unsigned int)v12 & (v22 >> 36)) == 1 )
  {
    PspSetNoChildProcessRestrictedPolicy(a1, v12, v24, (struct _KLOCK_ENTRIES *)v12);
    v12 = 3LL;
  }
  v27 = 0x10000000LL;
  if ( v33 && (*(_DWORD *)(v33 + 1872) & 0x30000000) == 0x10000000 )
  {
    v21 = v21 & 0xFFFFCFFFFFFFFFFFuLL | 0x100000000000LL;
    v31.m128i_i64[1] = v21;
  }
  if ( ((unsigned int)v12 & (v21 >> 44)) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x10000000u);
  }
  else if ( ((unsigned int)v12 & (v21 >> 44)) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1872), 0x30000000u);
  }
  switch ( (unsigned __int8)v12 & (v21 >> 60) )
  {
    case 0uLL:
      if ( (a5 & 0x10000) == 0 || (a5 & 0x100000) != 0 || (a5 & 0x200000) != 0 )
        break;
      if ( (a5 & 0x20000) != 0 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x100000u);
      v31.m128i_i64[1] = v21 & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
LABEL_198:
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x4000u);
      break;
    case 1uLL:
      goto LABEL_198;
    case 3uLL:
      v31.m128i_i64[1] = v21 & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x4000u);
      _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x100000u);
      break;
  }
  if ( ((unsigned __int8)v12 & (v22 >> 60)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x8000u);
  if ( (*(_DWORD *)(a1 + 1876) & 0x4000) == 0 )
  {
    v28 = v17 & 0xFFFFFFFFFFFFFFFCuLL | 2;
    goto LABEL_209;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x20000u);
  if ( ((unsigned __int8)v12 & (unsigned __int8)v17) != 0 )
  {
    if ( ((unsigned __int8)v12 & (unsigned __int8)v17) == (_BYTE)v12 )
      goto LABEL_207;
  }
  else if ( (a5 & 0x40000) != 0 )
  {
LABEL_207:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x80000000);
  }
  v28 = v17 & 0xFFFFFFFFFFFFFFFCuLL | 1;
LABEL_209:
  v32 = v28;
  if ( (unsigned __int8)(v12 & v18) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x40000u);
  if ( ((unsigned int)v12 & (unsigned int)(v28 >> 4)) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x200000u);
  }
  else if ( ((unsigned int)v12 & (unsigned int)(v28 >> 4)) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x200000u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x400000u);
  }
  if ( ((unsigned int)v12 & (unsigned int)(v18 >> 4)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x800000u);
  if ( ((unsigned int)v12 & (unsigned int)(v28 >> 12)) == 0 )
  {
    v28 = v28 & 0xFFFFFFFFFFFFCFFFuLL | 0x1000;
    v32 = v28;
    goto LABEL_221;
  }
  if ( ((unsigned int)v12 & (unsigned int)(v28 >> 12)) == 1 )
LABEL_221:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x8000000u);
  if ( ((unsigned int)v12 & (unsigned int)(v18 >> 12)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x10000000u);
  if ( ((unsigned int)v12 & (unsigned int)(v28 >> 16)) != 0 )
  {
    if ( ((unsigned int)v12 & (unsigned int)(v28 >> 16)) != 1 )
      goto LABEL_229;
  }
  else if ( (a5 & 0x80000) != 0 )
  {
    goto LABEL_229;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1876), 0x40000000u);
LABEL_229:
  if ( (unsigned __int8)(v12 & (v28 >> 20)) == 1 )
  {
    PspSetRedirectionTrustPolicy(a1, 1, 0x10000000LL, (struct _KLOCK_ENTRIES *)v12);
    v12 = 3LL;
  }
  if ( ((unsigned __int8)v12 & (unsigned __int8)(v28 >> 20)) != 1
    && ((unsigned int)v12 & (unsigned int)(v18 >> 20)) == 1 )
  {
    PspSetRedirectionTrustPolicy(a1, 2, v27, (struct _KLOCK_ENTRIES *)v12);
    LODWORD(v12) = 3;
  }
  if ( ((unsigned int)v12 & (unsigned int)(v28 >> 24)) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2008), 1u);
  result = v36;
  v30 = v32;
  *v36 = v31;
  result[1].m128i_i64[0] = v30;
  return result;
}
