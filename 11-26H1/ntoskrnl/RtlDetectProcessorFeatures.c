/*
 * XREFs of RtlDetectProcessorFeatures @ 0x140C048AC
 * Callers:
 *     KiSetProcessorSignature @ 0x1405F9644 (KiSetProcessorSignature.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlGetProcessorSignature @ 0x140C050BC (RtlGetProcessorSignature.c)
 *     RtlpGetSpecificProcessorFlags @ 0x140C052A4 (RtlpGetSpecificProcessorFlags.c)
 */

__int64 __fastcall RtlDetectProcessorFeatures(int a1, unsigned __int64 *a2, unsigned __int64 *a3, _DWORD *a4)
{
  unsigned int ProcessorSignature; // edi
  __int64 v10; // r9
  __int64 v16; // r8
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r12
  int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // r15
  unsigned int v22; // edx
  __int64 v23; // xmm6_8
  __int128 v24; // xmm7
  unsigned int v25; // eax
  unsigned int v26; // eax
  int v32; // edx
  int v33; // ebx
  int v34; // ecx
  int v35; // edx
  __int64 i; // rsi
  unsigned int *v37; // r15
  unsigned int v38; // edx
  unsigned __int64 v39; // rdx
  __int64 v40; // rbx
  unsigned int v41; // edx
  unsigned int v42; // eax
  unsigned int v43; // eax
  BOOL v44; // edx
  int v45; // edx
  __int64 result; // rax
  unsigned int v47; // [rsp+30h] [rbp-E8h]
  unsigned int v48; // [rsp+30h] [rbp-E8h]
  unsigned int v49; // [rsp+34h] [rbp-E4h]
  int v50; // [rsp+38h] [rbp-E0h]
  int v51; // [rsp+3Ch] [rbp-DCh] BYREF
  __int128 v52; // [rsp+40h] [rbp-D8h]
  _BYTE v53[24]; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int v54; // [rsp+68h] [rbp-B0h]
  unsigned int *v55; // [rsp+70h] [rbp-A8h]
  unsigned int v56; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v57; // [rsp+80h] [rbp-98h]
  unsigned __int64 v58; // [rsp+88h] [rbp-90h]
  __int64 v59; // [rsp+90h] [rbp-88h]
  __int128 v60; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-68h]

  *(_OWORD *)&v53[4] = 0LL;
  v51 = 0;
  *(_DWORD *)v53 = a1;
  ProcessorSignature = RtlGetProcessorSignature(&v53[4], &v53[8], &v53[12], &v53[16]);
  v56 = ProcessorSignature;
  *(_DWORD *)&v53[20] = ProcessorSignature;
  _RAX = 0x80000000LL;
  __asm { cpuid }
  v10 = (unsigned int)_RAX;
  LODWORD(v55) = _RAX;
  _RAX = 0LL;
  __asm { cpuid }
  v16 = (unsigned int)_RAX;
  v54 = _RAX;
  *(_QWORD *)&v52 = __PAIR64__(_RBX, _RAX);
  *((_QWORD *)&v52 + 1) = __PAIR64__(_RDX, _RCX);
  v17 = 0LL;
  v57 = 0LL;
  v18 = 0LL;
  v58 = 0LL;
  v19 = 0;
  v50 = 0;
  v20 = 0LL;
  v49 = 0;
  v21 = 0LL;
  v22 = v53[4];
  v47 = v53[4];
  v23 = *(_QWORD *)&v53[16];
  v24 = *(_OWORD *)v53;
  do
  {
    v25 = dword_140007FF0[10 * v21];
    if ( (v25 & 2) == 0 )
    {
      v26 = HIBYTE(v25);
      if ( !v26 || _bittest((const int *)&v26, v22) )
      {
        _RAX = (unsigned int)KiCpuFeatureTable[10 * v21];
        if ( (_DWORD)_RAX != v19 || dword_140007FE4[10 * v21] != (_DWORD)v20 )
        {
          v50 = KiCpuFeatureTable[10 * v21];
          v49 = dword_140007FE4[10 * v21];
          if ( ((unsigned int)_RAX < 0x80000000 || (unsigned int)_RAX > (unsigned int)v10)
            && (unsigned int)_RAX > (unsigned int)v16 )
          {
            v52 = 0LL;
          }
          else
          {
            __asm { cpuid }
            *(_QWORD *)&v52 = __PAIR64__(_RBX, _RAX);
            *((_QWORD *)&v52 + 1) = __PAIR64__(_RDX, _RCX);
          }
        }
        v32 = 0;
        v51 = 0;
        if ( (*(_DWORD *)&v53[4 * dword_140007FEC[10 * v21] - 16] & dword_140007FE8[10 * v21]) != 0
          || (v33 = dword_140007FF0[10 * v21], (v33 & 8) != 0)
          && (v17 & qword_140007FF8[5 * v21]) == qword_140007FF8[5 * v21]
          || (v33 & 0x10) != 0 && (v18 & qword_140007FF8[5 * v21]) == qword_140007FF8[5 * v21] )
        {
          v32 = 1;
          v51 = 1;
        }
        if ( qword_140008000[5 * v21] )
        {
          v60 = v24;
          v61 = v23;
          guard_dispatch_icall_no_overrides((__int64)&v60, (__int64)&v51);
          v32 = v51;
          v16 = v54;
          v10 = (unsigned int)v55;
        }
        v34 = dword_140007FF0[10 * v21];
        if ( !v32 )
        {
          if ( (v34 & 1) != 0 )
            KeBugCheckEx(
              0x5Du,
              0xFFFFFFFFuLL,
              (unsigned int)KiCpuFeatureTable[10 * v21],
              (unsigned int)dword_140007FE8[10 * v21],
              dword_140007FEC[10 * v21]);
          if ( (v34 & 4) != 0 && *(_DWORD *)v53 )
          {
            if ( (v34 & 8) != 0 )
            {
              LOBYTE(v32) = ((__int64)NormalizationListLock.Header.WaitListHead.Flink & qword_140007FF8[5 * v21]) == qword_140007FF8[5 * v21];
            }
            else if ( (v34 & 0x10) != 0
                   && ((__int64)NormalizationListLock.Header.WaitListHead.Blink & qword_140007FF8[5 * v21]) == qword_140007FF8[5 * v21] )
            {
LABEL_90:
              KeBugCheckEx(
                0x5Du,
                0xFFFFFFFEuLL,
                (unsigned int)KiCpuFeatureTable[10 * v21],
                (unsigned int)dword_140007FE8[10 * v21],
                dword_140007FEC[10 * v21]);
            }
            if ( v32 )
              goto LABEL_90;
          }
          goto LABEL_41;
        }
        if ( (v34 & 8) != 0 )
        {
          v17 |= qword_140007FF8[5 * v21];
          v57 = v17;
        }
        else if ( (v34 & 0x10) != 0 )
        {
          v18 |= qword_140007FF8[5 * v21];
          v58 = v18;
        }
        if ( (v34 & 4) != 0 && *(_DWORD *)v53 )
        {
          v35 = 0;
          if ( (v34 & 8) != 0 )
          {
            LOBYTE(v35) = ((__int64)NormalizationListLock.Header.WaitListHead.Flink & qword_140007FF8[5 * v21]) == qword_140007FF8[5 * v21];
            goto LABEL_40;
          }
          if ( (v34 & 0x10) == 0
            || ((__int64)NormalizationListLock.Header.WaitListHead.Blink & qword_140007FF8[5 * v21]) != qword_140007FF8[5 * v21] )
          {
LABEL_40:
            if ( !v35 )
              KeBugCheckEx(
                0x5Du,
                0xFFFFFFFDuLL,
                (unsigned int)KiCpuFeatureTable[10 * v21],
                (unsigned int)dword_140007FE8[10 * v21],
                dword_140007FEC[10 * v21]);
          }
        }
LABEL_41:
        v20 = v49;
        v19 = v50;
        v22 = v47;
      }
    }
    v21 = (unsigned int)(v21 + 1);
  }
  while ( (unsigned int)v21 < 0x40 );
  for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
  {
    v20 = 3 * i;
    v37 = (unsigned int *)(0x140000000LL + 24 * i + 55376);
    v55 = v37;
    v38 = *(_DWORD *)(0x140000004LL + 24 * i + 55376);
    if ( (v38 & 2) == 0 )
    {
      v20 = HIBYTE(v38);
      if ( !(_DWORD)v20 || _bittest((const int *)&v20, v53[4]) )
      {
        if ( (v38 & 8) != 0 )
        {
          v39 = v17;
        }
        else
        {
          if ( (v38 & 0x10) == 0 )
            continue;
          v39 = v18;
        }
        v20 = *(_QWORD *)(0x140000010LL + 24 * i + 55376);
        if ( (v39 & v20) == v20 )
        {
          v20 = __readmsr(*(_DWORD *)(0x140000000LL + 24 * i + 55376));
          v59 = v20;
          v40 = *(_QWORD *)(0x140000008LL + 24 * i + 55376);
          if ( *(_QWORD *)v40 )
          {
            v41 = v53[4];
            v48 = v53[4];
            while ( 1 )
            {
              v42 = *(_DWORD *)(v40 + 8);
              if ( (v42 & 2) == 0 )
              {
                v43 = HIBYTE(v42);
                if ( !v43 || _bittest((const int *)&v43, v41) )
                  break;
              }
LABEL_82:
              v40 += 32LL;
              if ( !*(_QWORD *)v40 )
                goto LABEL_84;
              v20 = v59;
            }
            v44 = (v20 & *(_QWORD *)v40) != 0;
            v51 = v44;
            if ( *(_QWORD *)(v40 + 24) )
            {
              v60 = v24;
              v61 = v23;
              guard_dispatch_icall_no_overrides((__int64)&v60, (__int64)&v51);
              v44 = v51;
            }
            v20 = *(unsigned int *)(v40 + 8);
            if ( !v44 )
            {
              if ( (v20 & 1) != 0 )
                KeBugCheckEx(0x5Du, 0xFFFFFFFCuLL, *v37, *(_QWORD *)v40, HIDWORD(*(_QWORD *)v40));
              if ( (v20 & 4) != 0 && *(_DWORD *)v53 )
              {
                if ( (v20 & 8) != 0 )
                {
                  v20 = *(_QWORD *)(v40 + 16);
                  LOBYTE(v44) = ((__int64)NormalizationListLock.Header.WaitListHead.Flink & v20) == v20;
                }
                else if ( (v20 & 0x10) != 0 )
                {
                  v20 = *(_QWORD *)(v40 + 16);
                  if ( ((__int64)NormalizationListLock.Header.WaitListHead.Blink & v20) == v20 )
LABEL_93:
                    KeBugCheckEx(0x5Du, 0xFFFFFFFBuLL, *v37, *(_QWORD *)v40, HIDWORD(*(_QWORD *)v40));
                }
                if ( v44 )
                  goto LABEL_93;
              }
              goto LABEL_81;
            }
            v16 = v20 & 8;
            if ( (v20 & 8) != 0 )
            {
              v17 |= *(_QWORD *)(v40 + 16);
              v57 = v17;
            }
            else if ( (v20 & 0x10) != 0 )
            {
              v18 |= *(_QWORD *)(v40 + 16);
              v58 = v18;
            }
            if ( (v20 & 4) != 0 && *(_DWORD *)v53 )
            {
              v45 = 0;
              if ( (v20 & 8) != 0 )
              {
                v20 = *(_QWORD *)(v40 + 16);
                LOBYTE(v45) = ((__int64)NormalizationListLock.Header.WaitListHead.Flink & v20) == v20;
LABEL_80:
                if ( !v45 )
                  KeBugCheckEx(0x5Du, 0xFFFFFFFAuLL, *v37, *(_QWORD *)v40, HIDWORD(*(_QWORD *)v40));
              }
              else
              {
                if ( (v20 & 0x10) == 0 )
                  goto LABEL_80;
                v20 = *(_QWORD *)(v40 + 16);
                if ( ((__int64)NormalizationListLock.Header.WaitListHead.Blink & v20) != v20 )
                  goto LABEL_80;
              }
            }
LABEL_81:
            v41 = v48;
            goto LABEL_82;
          }
        }
      }
    }
LABEL_84:
    ;
  }
  *a2 = v17;
  result = (__int64)a3;
  *a3 = v18;
  if ( a4 )
  {
    LOBYTE(v20) = v53[4];
    result = RtlpGetSpecificProcessorFlags(v20, ProcessorSignature, v16, v10);
    *a4 = result;
  }
  if ( !a1 )
  {
    NormalizationListLock.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v17;
    NormalizationListLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v18;
  }
  return result;
}
