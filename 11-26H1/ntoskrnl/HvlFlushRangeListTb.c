/*
 * XREFs of HvlFlushRangeListTb @ 0x14032D130
 * Callers:
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     KeFlushSingleCurrentTb @ 0x1405F35E0 (KeFlushSingleCurrentTb.c)
 *     KeFlushSingleTb @ 0x1405F3764 (KeFlushSingleTb.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14021E1C0 (RtlGetSystemTimePrecise.c)
 *     HvlpFlushRangeListTbEx @ 0x1402F443C (HvlpFlushRangeListTbEx.c)
 *     VslFastFlushSecureRangeList @ 0x1402F5A94 (VslFastFlushSecureRangeList.c)
 *     EtwTraceTimedEvent @ 0x14032D7A0 (EtwTraceTimedEvent.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvlpCopyFlushVaList @ 0x14032DF20 (HvlpCopyFlushVaList.c)
 *     EtwpGetPerfCounter @ 0x14032F3E0 (EtwpGetPerfCounter.c)
 *     EtwpGetHostPerfCounter @ 0x1404688A4 (EtwpGetHostPerfCounter.c)
 *     VslSlowFlushSecureRangeList @ 0x14049C100 (VslSlowFlushSecureRangeList.c)
 *     HvlpSecureFlushLargeRangeList @ 0x14049C20C (HvlpSecureFlushLargeRangeList.c)
 *     VslFlushSecureAddressSpace @ 0x14049C31C (VslFlushSecureAddressSpace.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1407370C0 (HvcallpExtendedFastHypercall.c)
 */

__int64 __fastcall HvlFlushRangeListTb(
        __int64 a1,
        unsigned __int64 a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        __int64 *a7)
{
  __int64 *v7; // r13
  int v8; // r15d
  __int64 v9; // r10
  __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // r14d
  unsigned int v14; // esi
  __int64 v15; // rdi
  __int64 v16; // r8
  unsigned __int64 v17; // xmm1_8
  char v18; // al
  __int64 v19; // rdi
  unsigned __int64 v20; // r8
  __int64 v22; // r8
  char v23; // r14
  int v24; // edi
  unsigned int v25; // eax
  bool j; // zf
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  char v29; // al
  unsigned int v30; // r15d
  ULONG v31; // eax
  __int64 v32; // r8
  __int64 v33; // rax
  int v34; // esi
  unsigned __int64 v35; // xmm1_8
  unsigned int v36; // r8d
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // r10
  __int64 v42; // r8
  unsigned int v43; // eax
  _BYTE *i; // r9
  unsigned __int64 v45; // r8
  _BYTE v46[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD *v48; // [rsp+50h] [rbp-B0h]
  __int128 v49; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v50; // [rsp+68h] [rbp-98h]
  __int128 v51; // [rsp+70h] [rbp-90h] BYREF
  __int128 v52; // [rsp+80h] [rbp-80h]
  __int128 v53; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v54; // [rsp+A0h] [rbp-60h]
  _QWORD v55[11]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v56[48]; // [rsp+100h] [rbp+0h] BYREF

  v7 = a7;
  v8 = a4;
  v9 = a1;
  if ( a2 && (HvlpFlags & 0x80u) != 0 && (unsigned __int16)KiActiveGroups > 1u )
  {
    HvlpFlushRangeListTbEx(a1, a2, a3, a4, a5, a6, (__int64)a7);
    return a5;
  }
  v10 = 0LL;
  v11 = 0LL;
  v49 = 0uLL;
  v50 = 0LL;
  if ( a5 )
  {
    v12 = 4;
    if ( a3 )
      v12 = 0;
    a1 = v12 | 2;
    if ( v9 )
      a1 = v12;
    if ( a2 )
    {
      v20 = *(_QWORD *)(a2 + 8);
      if ( !HvlpVirtualProcessorsIdentityMapped )
      {
        a2 = 0LL;
        for ( i = &unk_140FC71C3; ; i += 4 )
        {
          if ( (v20 & 1) != 0 )
            a2 |= 1LL << *(i - 2);
          v45 = v20 >> 1;
          if ( !v45 )
            break;
          if ( (v45 & 1) != 0 )
            a2 |= 1LL << *i;
          v20 = v45 >> 1;
          if ( !v20 )
            break;
        }
        v20 = a2;
      }
      v50 = v20;
    }
    else
    {
      a1 = (unsigned int)a1 | 1;
    }
    v11 = (unsigned int)a1;
    *((_QWORD *)&v49 + 1) = (unsigned int)a1;
    *(_QWORD *)&v49 = v9;
  }
  if ( (HvlpFlags & 0x2000) != 0 )
  {
    v13 = a6;
    v14 = 0;
    if ( a6 )
    {
      a2 = (unsigned __int64)a7;
      v42 = a6;
      do
      {
        a1 = *(_QWORD *)a2;
        a2 += 8LL;
        v43 = v14 + (a1 & 0x3FF);
        if ( (a1 & 0xC00) == 0 )
          v43 = v14;
        v14 = v43 + 1;
        --v42;
      }
      while ( v42 );
    }
  }
  else
  {
    v13 = a6;
    v14 = a6;
  }
  if ( v14 <= 0xB && (HvlEnlightenments & 0x80u) != 0 )
  {
    if ( v8 )
    {
      if ( v13 + 1 > 0xC )
        goto LABEL_16;
      v46[0] = 0;
      VslFastFlushSecureRangeList(v8, a7, v13, v46);
      if ( v46[0] )
        return a5;
    }
    if ( !a5 )
      return a5;
    v30 = 8 * v14 + 24;
    LODWORD(v47) = 3;
    HIDWORD(v47) = v14 & 0xFFF;
    v53 = v49;
    v54 = v50;
    v31 = (HvlpFlags >> 13) & 1;
    if ( !v31 )
      *((_QWORD *)&v53 + 1) = v11 | 8;
    if ( (_BYTE)v31 )
    {
      v36 = 0;
      if ( v13 )
      {
        v37 = v13;
        do
        {
          v38 = *v7;
          if ( (((unsigned __int64)*v7 >> 10) & 3) != 0 && (v38 & 0x3FF) != 0 )
          {
            v40 = v38 & 0xFFFFFFFFFFFFF000uLL;
            v41 = 4096LL << (9 * ((unsigned __int8)((unsigned __int64)*v7 >> 10) & 3u));
            a2 = (*v7 & 0x3FF) + 1;
            do
            {
              a1 = v36++;
              v55[a1] = v40;
              v40 += v41;
              --a2;
            }
            while ( a2 );
          }
          else
          {
            v39 = v36;
            a2 = v38 & 0xFFFFFFFFFFFFF3FFuLL;
            ++v36;
            v55[v39] = a2;
          }
          ++v7;
          --v37;
        }
        while ( v37 );
      }
    }
    else if ( v13 )
    {
      v32 = v13;
      a2 = (unsigned __int64)v55;
      do
      {
        v33 = *(_QWORD *)(a2 + (char *)a7 - (char *)v55);
        a2 += 8LL;
        a1 = v33 & 0x800 | (v33 + (v33 & 0xC00));
        *(_QWORD *)(a2 - 8) = a1;
        --v32;
      }
      while ( v32 );
    }
    v34 = v47 | 0x10000;
    LODWORD(v47) = v47 | 0x10000;
    v51 = 0LL;
    v52 = 0LL;
    if ( (BYTE4(xmmword_140FC0C10) & 0x10) == 0 )
    {
      v23 = 0;
      goto LABEL_42;
    }
    v22 = qword_140FC9C80;
    v23 = 1;
    v24 = 0;
    if ( qword_140FC9C80 )
    {
      v25 = *(_DWORD *)(qword_140FC9C80 + 4520);
      for ( j = !_BitScanForward((unsigned int *)&a2, v25); !j; j = !_BitScanForward((unsigned int *)&a2, v25) )
      {
        v25 &= v25 - 1;
        a1 = (unsigned int)a2;
        v27 = qword_140FC9C80 + 32 * a2 + 4556;
        if ( v27 && (*(_DWORD *)(v27 + 20) & 0x10) != 0 )
        {
          a1 = *(unsigned __int8 *)(qword_140FC9C80 + 2 * a1 + 4505);
          v24 |= 1 << a1;
        }
      }
      if ( (v24 & 2) == 0 )
        goto LABEL_36;
    }
    else
    {
      LOBYTE(v24) = 30;
    }
    *(_QWORD *)&v51 = EtwpGetPerfCounter(a1, a2, qword_140FC9C80);
LABEL_36:
    if ( (v24 & 4) != 0 )
      *((LARGE_INTEGER *)&v51 + 1) = RtlGetSystemTimePrecise();
    else
      *((_QWORD *)&v51 + 1) = 0LL;
    if ( (v24 & 8) != 0 )
    {
      v28 = __rdtsc();
      a2 = (unsigned __int64)HIDWORD(v28) << 32;
      *(_QWORD *)&v52 = v28;
    }
    else
    {
      *(_QWORD *)&v52 = 0LL;
    }
    if ( (v24 & 0x10) != 0 )
      *((_QWORD *)&v52 + 1) = EtwpGetHostPerfCounter(a1, a2, v22);
    else
      *((_QWORD *)&v52 + 1) = 0LL;
LABEL_42:
    HvcallpExtendedFastHypercall(v47, &v53, v30);
    if ( v23 )
    {
      HIBYTE(v47) = 0;
      LODWORD(v47) = (unsigned __int16)v34;
      BYTE4(v47) = BYTE2(v34) & 1;
      *(_WORD *)((char *)&v47 + 5) = v34 < 0;
      EtwTraceTimedEvent(3954, -1610612720, (unsigned int)&v47, 8, 5246466, (__int64)&v51);
    }
    return a5;
  }
LABEL_16:
  *(_QWORD *)&v52 = 0LL;
  DWORD2(v52) = 0;
  v51 = 0LL;
  v48 = (_OWORD *)HvlpAcquireHypercallPage(&v51, 1LL, v56, 24LL);
  v15 = (__int64)v48;
  if ( v14 > 0x1FD || (v51 & 2) != 0 )
  {
    if ( v8 == 2 && (v51 & 2) == 0 )
    {
      HvlpReleaseHypercallPage(&v51);
      v15 = HvlpAcquireHypercallPage(&v51, 9LL, v56, 24LL);
      v48 = (_OWORD *)v15;
    }
    if ( a5 )
    {
      v10 = 2LL;
      v35 = v50;
      *(_OWORD *)v15 = v49;
      *(_QWORD *)(v15 + 16) = v35;
    }
    v18 = 1;
  }
  else
  {
    v16 = HvlpFlags >> 13;
    LOBYTE(v16) = (HvlpFlags & 0x2000) != 0;
    HvlpCopyFlushVaList(v13, a7, v16, (char *)v48 + 24);
    if ( a5 )
    {
      LODWORD(v47) = 3;
      v17 = v50;
      *v48 = v49;
      HIDWORD(v47) = v14 & 0xFFF;
      v10 = v47;
      *(_QWORD *)(v15 + 16) = v17;
      if ( (HvlpFlags & 0x2000) == 0 )
        *(_QWORD *)(v15 + 8) |= 8uLL;
    }
    v18 = 0;
  }
  v19 = *((_QWORD *)&v52 + 1);
  if ( !v8 )
    goto LABEL_23;
  v46[0] = 0;
  if ( v18 )
  {
    if ( v8 != 2 )
    {
      VslFlushSecureAddressSpace();
LABEL_23:
      if ( a5 )
        HvcallInitiateHypercall(v10, v19, 0LL);
      goto LABEL_51;
    }
    v29 = HvlpSecureFlushLargeRangeList(2LL, v13, a7);
  }
  else
  {
    VslSlowFlushSecureRangeList(DWORD2(v52), (_DWORD)v48, v8, v14, 24, (__int64)v46);
    v29 = v46[0];
  }
  if ( !v29 )
    goto LABEL_23;
LABEL_51:
  HvlpReleaseHypercallPage(&v51);
  return a5;
}
