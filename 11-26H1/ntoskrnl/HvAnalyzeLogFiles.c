/*
 * XREFs of HvAnalyzeLogFiles @ 0x140ADCF88
 * Callers:
 *     HvRecoverFlushProtocolStateFromFiles @ 0x1408632D4 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvLoadHive @ 0x140AC4740 (HvLoadHive.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvpCompareLogSequenceNumbers @ 0x140868E4C (HvpCompareLogSequenceNumbers.c)
 *     HvpLogIneligibleLogHeader @ 0x140868E80 (HvpLogIneligibleLogHeader.c)
 *     HvpIsReadErrorTransient @ 0x140ADD404 (HvpIsReadErrorTransient.c)
 *     HvpLogUnreadableLog @ 0x140ADD478 (HvpLogUnreadableLog.c)
 *     HvpIsLogFileBaseBlockValid @ 0x140ADD528 (HvpIsLogFileBaseBlockValid.c)
 *     HvpLogInvalidLogHeader @ 0x140ADD594 (HvpLogInvalidLogHeader.c)
 *     HvpDetermineResultingLoggingState @ 0x140ADD728 (HvpDetermineResultingLoggingState.c)
 *     HvpDetermineLogFileApplicationOrder @ 0x140ADD7F0 (HvpDetermineLogFileApplicationOrder.c)
 *     HvpAnalyzeSingleLogFile @ 0x140ADDA48 (HvpAnalyzeSingleLogFile.c)
 */

__int64 __fastcall HvAnalyzeLogFiles(
        __int64 a1,
        ULONG a2,
        char a3,
        unsigned int *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int *v7; // rdi
  __int64 v8; // rdx
  __int64 i; // rbx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rdx
  int v13; // edi
  unsigned int *v14; // rsi
  __int128 *v15; // rbx
  unsigned int v16; // r14d
  __int64 v17; // r12
  __int64 v18; // r15
  __int64 v19; // r14
  __int64 v20; // r13
  unsigned int v21; // edx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 result; // rax
  __int64 v25; // r10
  unsigned int *v26; // r12
  int v27; // edi
  __int64 j; // rbx
  __int128 v29; // xmm1
  int v30; // eax
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  unsigned int v34; // eax
  __int64 v35; // rdx
  _OWORD *v36; // rcx
  _OWORD *v37; // rax
  __int128 v38; // xmm1
  char v40; // [rsp+31h] [rbp-CFh] BYREF
  char Size; // [rsp+32h] [rbp-CEh] BYREF
  char v42; // [rsp+33h] [rbp-CDh] BYREF
  ULONG Reserved; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v44; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int *v45; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v46; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+60h] [rbp-A0h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+70h] [rbp-90h] BYREF
  __int128 v50; // [rsp+80h] [rbp-80h]
  __int128 v51; // [rsp+90h] [rbp-70h]
  __int128 v52; // [rsp+A0h] [rbp-60h]
  __int128 v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+C0h] [rbp-40h]
  int v55; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+D0h] [rbp-30h] BYREF
  char *v57; // [rsp+F0h] [rbp-10h]
  __int64 v58; // [rsp+F8h] [rbp-8h]
  char *p_Size; // [rsp+100h] [rbp+0h]
  __int64 v60; // [rsp+108h] [rbp+8h]
  char *v61; // [rsp+110h] [rbp+10h]
  __int64 v62; // [rsp+118h] [rbp+18h]
  ULONG *p_Reserved; // [rsp+120h] [rbp+20h]
  __int64 v64; // [rsp+128h] [rbp+28h]
  unsigned int **v65; // [rsp+130h] [rbp+30h]
  __int64 v66; // [rsp+138h] [rbp+38h]

  v7 = a4;
  Reserved = a2;
  v48 = a1;
  v45 = a4;
  v47 = a6;
  v44 = a7;
  memset_0((char *)&v49.Ptr + 4, 0, 0x58uLL);
  v46 = 0LL;
  LODWORD(v49.Ptr) = a5;
  for ( i = 0LL; (unsigned int)i < a5; i = (unsigned int)(i + 1) )
  {
    v10 = guard_dispatch_icall_no_overrides(*(_QWORD *)&v7[6 * i + 4], 0LL);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v7 = v45;
    }
    else
    {
      if ( (unsigned __int8)HvpIsReadErrorTransient((unsigned int)v10) )
        return 3221225805LL;
      v12 = v11;
      v7 = v45;
      HvpLogUnreadableLog(v45[6 * i], v12);
      *((_QWORD *)&v46 + i) = 0LL;
    }
  }
  v13 = 0;
  if ( !a5 )
  {
LABEL_12:
    v21 = dword_140E09EE8;
    if ( (unsigned int)dword_140E09EE8 > 5 )
    {
      v22 = *(_QWORD *)&qword_140E09EF8;
      v23 = qword_140E09F00;
      if ( (qword_140E09EF8 & 8) != 0 && (qword_140E09F00 & 8) == qword_140E09F00 )
      {
        v44 = 0x1000000LL;
        *(_QWORD *)&v51 = &v44;
        *((_QWORD *)&v51 + 1) = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E09EE8,
          (unsigned __int8 *)byte_1400584D1,
          0LL,
          0LL,
          3u,
          &v49);
        v23 = qword_140E09F00;
        v22 = *(_QWORD *)&qword_140E09EF8;
        v21 = dword_140E09EE8;
      }
      if ( v21 > 5 && (v22 & 0x400000000008LL) != 0 && (v23 & 0x400000000008LL) == v23 )
      {
        v44 = 1LL;
        *(_QWORD *)&v51 = &v44;
        *((_QWORD *)&v51 + 1) = 8LL;
        *(_QWORD *)&v52 = &v47;
        v47 = 0x1000000LL;
        *((_QWORD *)&v52 + 1) = 8LL;
        tlgWriteAgg((__int64)&dword_140E09EE8, (unsigned __int8 *)&byte_140058505, v22, 4u, &v49);
      }
    }
    return 3221225804LL;
  }
  v14 = v45;
  v15 = &v46;
  v16 = Reserved;
  v17 = a5;
  v18 = v48;
  do
  {
    if ( !*(_QWORD *)v15 )
      goto LABEL_10;
    if ( !(unsigned __int8)HvpIsLogFileBaseBlockValid(*(_QWORD *)v15, v18) )
    {
      HvpLogInvalidLogHeader(v18, *v14, v25);
LABEL_26:
      *(_QWORD *)v15 = 0LL;
      goto LABEL_10;
    }
    if ( !a3 && (int)HvpCompareLogSequenceNumbers(*(_DWORD *)(v25 + 4), v16) < 0 )
    {
      HvpLogIneligibleLogHeader();
      goto LABEL_26;
    }
    ++v13;
LABEL_10:
    v14 += 6;
    v15 = (__int128 *)((char *)v15 + 8);
    --v17;
  }
  while ( v17 );
  v19 = v47;
  v20 = v44;
  if ( !v13 )
    goto LABEL_12;
  if ( v44 )
  {
    if ( v13 == 1 )
      v34 = (_QWORD)v46 == 0LL;
    else
      v34 = (unsigned int)HvpCompareLogSequenceNumbers(*(_DWORD *)(v46 + 4), *(_DWORD *)(*((_QWORD *)&v46 + 1) + 8LL)) >> 31;
    v35 = 4LL;
    v36 = (_OWORD *)*((_QWORD *)&v46 + v34);
    v37 = (_OWORD *)v44;
    do
    {
      *v37 = *v36;
      v37[1] = v36[1];
      v37[2] = v36[2];
      v37[3] = v36[3];
      v37[4] = v36[4];
      v37[5] = v36[5];
      v37[6] = v36[6];
      v37 += 8;
      v38 = v36[7];
      v36 += 8;
      *(v37 - 1) = v38;
      --v35;
    }
    while ( v35 );
    memset_0((void *)(v20 + 512), 0, 0xE00uLL);
    *(_DWORD *)(v20 + 28) = 0;
  }
  v26 = v45;
  v27 = 0;
  for ( j = 0LL; (unsigned int)j < a5; j = (unsigned int)(j + 1) )
  {
    v8 = *((_QWORD *)&v46 + j);
    if ( v8 )
    {
      result = HvpAnalyzeSingleLogFile(&v26[6 * j], v8, (char *)&v49.Ptr + 24 * j + 4);
      *((_QWORD *)&v46 + j) = 0LL;
      if ( (_DWORD)result != -2147483614 )
      {
        if ( (int)result < 0 )
          return result;
        ++v27;
      }
    }
  }
  if ( !v27 )
  {
    if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 0x400000000008LL) )
    {
      *((_QWORD *)&v51 + 1) = 8LL;
      *(_QWORD *)&v51 = &v44;
      v44 = 0x1000000LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09EE8,
        (unsigned __int8 *)byte_1400582A3,
        0LL,
        0LL,
        3u,
        &v49);
    }
    return 3221225804LL;
  }
  if ( (unsigned int)dword_140E09EE8 > 5 && (qword_140E09EF8 & 8) != 0 && (qword_140E09F00 & 8) == qword_140E09F00 )
  {
    v40 = v27;
    v57 = &v40;
    Size = v49.Size;
    v58 = 1LL;
    p_Size = &Size;
    v42 = v51;
    v61 = &v42;
    Reserved = v49.Reserved;
    p_Reserved = &Reserved;
    LODWORD(v45) = DWORD1(v51);
    v65 = &v45;
    v60 = 1LL;
    v62 = 1LL;
    v64 = 4LL;
    v66 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09EE8, (unsigned __int8 *)byte_1400582D5, 0LL, 0LL, 7u, &v56);
  }
  LOBYTE(v8) = a3;
  HvpDetermineLogFileApplicationOrder(&v49, v8);
  HvpDetermineResultingLoggingState(&v49);
  v29 = v50;
  v30 = v55;
  *(struct _EVENT_DATA_DESCRIPTOR *)v19 = v49;
  v31 = v51;
  *(_OWORD *)(v19 + 16) = v29;
  v32 = v52;
  *(_OWORD *)(v19 + 32) = v31;
  v33 = v53;
  *(_OWORD *)(v19 + 48) = v32;
  *(_QWORD *)&v32 = v54;
  *(_OWORD *)(v19 + 64) = v33;
  *(_QWORD *)(v19 + 80) = v32;
  *(_DWORD *)(v19 + 88) = v30;
  return 0LL;
}
