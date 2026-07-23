/*
 * XREFs of EtwpWriteToPrivateBuffers @ 0x18005AE40
 * Callers:
 *     EtwEventWrite @ 0x18005A490 (EtwEventWrite.c)
 *     EtwEventWriteTransfer @ 0x18005A770 (EtwEventWriteTransfer.c)
 *     EtwpEventWriteFull @ 0x18005AAB0 (EtwpEventWriteFull.c)
 *     EtwEventWriteString @ 0x18008D980 (EtwEventWriteString.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x180059D10 (RtlQueryPerformanceCounter.c)
 *     EtwpCheckForEnoughStackSpace @ 0x18005BB44 (EtwpCheckForEnoughStackSpace.c)
 *     RtlWalkFrameChain @ 0x18005BC30 (RtlWalkFrameChain.c)
 *     EtwpDemuxUmTraceHandle @ 0x18005C840 (EtwpDemuxUmTraceHandle.c)
 *     EtwpSwitchBuffer @ 0x18005CAB0 (EtwpSwitchBuffer.c)
 *     RtlGetSystemTimePrecise @ 0x18005CC80 (RtlGetSystemTimePrecise.c)
 *     RtlResetStackOverflow @ 0x18013AD18 (RtlResetStackOverflow.c)
 *     NtQueryInformationToken @ 0x18015F260 (NtQueryInformationToken.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpWriteToPrivateBuffers(
        __int64 a1,
        _OWORD *a2,
        __int16 a3,
        unsigned __int16 a4,
        __int16 a5,
        _GUID *a6,
        _OWORD *a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10)
{
  _OWORD *v10; // r15
  __int64 v11; // rdi
  unsigned int v12; // esi
  unsigned int i; // r14d
  _DWORD *v14; // r13
  LARGE_INTEGER v15; // rbx
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rdx
  unsigned __int8 v19; // al
  __int64 v20; // r15
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // esi
  unsigned int v24; // r14d
  int v25; // ecx
  __int64 v26; // r11
  unsigned int v27; // edx
  unsigned __int16 v28; // di
  unsigned int v29; // r9d
  char v30; // al
  _QWORD *v31; // r8
  unsigned int Reserved; // r15d
  unsigned int v33; // r13d
  _DWORD *v34; // r9
  unsigned int v35; // edx
  unsigned int v36; // ecx
  _QWORD *v37; // rax
  __int64 v38; // rsi
  unsigned __int32 v39; // edi
  __int64 v40; // r15
  void *v41; // rcx
  unsigned int v42; // r12d
  unsigned __int8 *v43; // r14
  __int64 v44; // r15
  struct _TEB *v45; // rcx
  LARGE_INTEGER SystemTimePrecise; // rax
  __int64 v47; // rdi
  _GUID ActivityId; // xmm0
  _WORD *v49; // r14
  unsigned int v50; // r15d
  void *v51; // rcx
  __int64 v52; // r13
  int v53; // edx
  int v54; // eax
  unsigned __int16 *v56; // r13
  unsigned __int16 v57; // dx
  unsigned __int16 v58; // r15
  __int64 v59; // rsi
  __int64 v60; // rdx
  unsigned __int16 v61; // cx
  unsigned __int16 *v62; // rsi
  void *v63; // rsp
  __int16 v64; // bx
  size_t v65; // rsi
  _WORD *v66; // rsi
  _DWORD *v67; // rdx
  void *v68; // rsi
  __int16 v69; // [rsp+0h] [rbp-810h] BYREF
  int v70; // [rsp+2h] [rbp-80Eh]
  __int16 v71; // [rsp+6h] [rbp-80Ah]
  __int64 v72; // [rsp+8h] [rbp-808h]
  PVOID v73; // [rsp+10h] [rbp-800h] BYREF
  char v74; // [rsp+810h] [rbp+0h]
  unsigned __int16 v75; // [rsp+814h] [rbp+4h]
  __int16 v76; // [rsp+818h] [rbp+8h]
  int v77; // [rsp+81Ch] [rbp+Ch]
  int v78; // [rsp+820h] [rbp+10h]
  ULONG ReturnLength; // [rsp+824h] [rbp+14h] BYREF
  unsigned int v80; // [rsp+828h] [rbp+18h] BYREF
  int v81; // [rsp+82Ch] [rbp+1Ch]
  int v82; // [rsp+830h] [rbp+20h]
  unsigned int v83; // [rsp+834h] [rbp+24h]
  __int16 v84; // [rsp+838h] [rbp+28h]
  int v85; // [rsp+83Ch] [rbp+2Ch]
  _DWORD *v86; // [rsp+840h] [rbp+30h]
  _WORD *v87; // [rsp+848h] [rbp+38h]
  void *v88; // [rsp+850h] [rbp+40h]
  void *v89; // [rsp+858h] [rbp+48h]
  __int64 v90; // [rsp+860h] [rbp+50h]
  __int64 v91; // [rsp+868h] [rbp+58h]
  __int64 v92; // [rsp+870h] [rbp+60h]
  __int64 v93; // [rsp+878h] [rbp+68h]
  __int64 v94; // [rsp+880h] [rbp+70h]
  LARGE_INTEGER PerformanceCounter; // [rsp+890h] [rbp+80h] BYREF
  int v96; // [rsp+898h] [rbp+88h]
  int v97; // [rsp+89Ch] [rbp+8Ch]
  void *Src; // [rsp+8A0h] [rbp+90h]
  _OWORD *v99; // [rsp+8A8h] [rbp+98h]
  __int16 *v100; // [rsp+8B0h] [rbp+A0h]
  __int64 v101; // [rsp+8B8h] [rbp+A8h]
  _QWORD *v102; // [rsp+8C0h] [rbp+B0h]
  _BYTE TokenInformation[16]; // [rsp+8D0h] [rbp+C0h] BYREF
  char v104[80]; // [rsp+8E0h] [rbp+D0h] BYREF

  v10 = a2;
  v11 = a1;
  v92 = a1;
  v84 = a5;
  v99 = a7;
  v88 = a7;
  v93 = a1;
  v91 = a9;
  v101 = a9;
  v94 = a10;
  v12 = 0;
  v89 = 0LL;
  v90 = 0LL;
  v75 = 0;
  v81 = 0;
  v76 = 0;
  Src = 0LL;
  *(_DWORD *)(a10 + 128) = 0;
  if ( a8 <= 0x80 )
  {
    if ( (*(_BYTE *)(a1 + 232) & 4) != 0 && (unsigned __int8)EtwpCheckForEnoughStackSpace() )
    {
      v63 = alloca(2064LL);
      v89 = &v69;
      v100 = &v69;
      v64 = 8 * RtlWalkFrameChain(&v73, 0x100u, 0);
      if ( v64 )
      {
        v90 = (unsigned __int16)(v64 + 23) & 0xFFF8;
        memset_thunk_772440563353939046(
          (char *)&v69 + (unsigned __int16)(v64 + 16),
          0,
          v90 - (unsigned __int16)(v64 + 16));
        v72 = 0LL;
        v69 = (v64 + 23) & 0xFFF8;
        v70 = 6;
        v71 = v64;
      }
      else
      {
        v89 = 0LL;
      }
    }
    for ( i = 0; ; ++i )
    {
      v83 = i;
      if ( i >= 4 )
        return v12;
      v14 = 0LL;
      v86 = 0LL;
      v87 = 0LL;
      v77 = 80;
      v74 = 0;
      LOBYTE(v76) = 0;
      LOWORD(v85) = 0;
      v15.QuadPart = 0LL;
      PerformanceCounter.QuadPart = 0LL;
      ReturnLength = 0;
      memset_thunk_772440563353939046(TokenInformation, 0, 0x58uLL);
      v75 = 0;
      v82 = 0;
      v88 = 0LL;
      v16 = v11 + 24 * (i + 5LL);
      v17 = a4;
      if ( !_bittest(&v17, i) )
      {
        v18 = *((_QWORD *)v10 + 1);
        if ( *(_BYTE *)(v16 + 20) )
        {
          v19 = *(_BYTE *)(v16 + 21);
          if ( (*((_BYTE *)v10 + 4) <= v19 || !v19)
            && ((*(_BYTE *)(v16 + 16) & 0x40) != 0 && !v18
             || (v18 & *(_QWORD *)(v16 + 8)) != 0 && (v18 & *(_QWORD *)v16) == *(_QWORD *)v16) )
          {
            break;
          }
        }
      }
LABEL_54:
      v11 = v92;
    }
    v20 = *(unsigned __int8 *)(v16 + 22);
    v97 = v20;
    v21 = v20;
    v80 = v20;
    if ( EtwpLoggerArray )
    {
      if ( (unsigned int)v20 < 0x40 )
        goto LABEL_14;
      v12 = EtwpDemuxUmTraceHandle((unsigned int)v20, &v80);
      v78 = v12;
      if ( !v12 )
      {
        v21 = v80;
LABEL_14:
        v22 = 16LL * v21;
        _InterlockedIncrement((volatile signed __int32 *)(v22 + EtwpLoggerArray + 8));
        if ( (*(_QWORD *)(v22 + EtwpLoggerArray) & 1) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v22 + EtwpLoggerArray + 8));
          v12 = 4201;
          v78 = 4201;
        }
        else
        {
          v14 = *(_DWORD **)(v22 + EtwpLoggerArray);
          v86 = v14;
          v12 = 0;
          v78 = 0;
        }
      }
    }
    else
    {
      v12 = 4201;
      v78 = 4201;
    }
    if ( !v12 )
    {
      v23 = 104;
      if ( !v99 )
        v23 = 80;
      v24 = v23;
      if ( (*(_BYTE *)(v16 + 16) & 1) != 0
        && NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 1u, TokenInformation, 0x58u, &ReturnLength) >= 0 )
      {
        ReturnLength -= 16;
        v85 = ((_WORD)ReturnLength + 15) & 0xFFF8;
        v74 = 1;
        v24 = v23 + v85;
      }
      v25 = *(_DWORD *)(v16 + 16);
      if ( (v25 & 4) != 0 && v89 )
      {
        LOBYTE(v76) = 1;
        v24 += (unsigned __int16)v90;
      }
      v96 = v25 & 2;
      if ( (v25 & 2) != 0 )
        v24 += 16;
      v26 = v94;
      v93 = v94 + 32LL * *(unsigned int *)(v94 + 128);
      v27 = 0;
      v28 = 0;
      while ( 1 )
      {
        if ( v27 >= a8 )
        {
          v12 = v78;
          goto LABEL_32;
        }
        v29 = v24;
        v30 = (*(_WORD *)(v92 + 86) & 0x4000) != 0 ? *(_BYTE *)(v101 + 16LL * v27 + 12) : 0;
        if ( v30 )
        {
          if ( v30 == 1 )
          {
            v28 += *(_WORD *)(16LL * v27 + v91 + 8);
            v75 = v28;
            ++v82;
          }
          else if ( v30 == 2 )
          {
            Src = *(void **)(v91 + 16LL * v27);
            v81 = *(unsigned __int16 *)(v91 + 16LL * v27 + 8);
            v24 += (v81 + 15) & 0xFFFFFFF8;
          }
        }
        else
        {
          v24 += *(_DWORD *)(16LL * v27 + v91 + 8);
        }
        if ( v24 < v29 )
          break;
        ++v27;
      }
      v12 = 534;
      v78 = 534;
LABEL_32:
      if ( v82 )
        v24 += (v28 + 15) & 0xFFFFFFF8;
      if ( v12 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(16 * v20 + EtwpLoggerArray + 8));
        return v12;
      }
      v31 = (_QWORD *)v93;
      *(_DWORD *)(v93 + 24) = v24;
      Reserved = NtCurrentTeb()->CurrentIdealProcessor.Reserved;
      if ( v24 <= v14[49] )
      {
        v33 = (v24 + 7) & 0xFFFFFFF8;
        v34 = v86;
        v35 = v86[48];
        v80 = v35;
        v36 = v86[47];
        if ( Reserved >= v36 )
        {
          Reserved %= v36;
          v35 = v80;
        }
        v37 = &v86[2 * Reserved + 140];
        v102 = v37;
        while ( 1 )
        {
          v38 = *v37;
          if ( *v37 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v38 + 12));
            if ( *(_DWORD *)(v38 + 44) == 1 && *(_DWORD *)(v38 + 8) <= v35 )
            {
              v39 = _InterlockedExchangeAdd((volatile signed __int32 *)(v38 + 8), v33);
              if ( v39 + v33 <= v35 )
              {
                v40 = v38;
                v14 = v86;
                if ( v86[4] == 2 )
                {
                  SystemTimePrecise = RtlGetSystemTimePrecise();
                }
                else
                {
                  if ( v86[4] != 3 )
                  {
                    RtlQueryPerformanceCounter(&PerformanceCounter);
                    v15 = PerformanceCounter;
LABEL_57:
                    v47 = v38 + v39;
                    v31 = (_QWORD *)v93;
                    v26 = v94;
                    goto LABEL_58;
                  }
                  SystemTimePrecise.QuadPart = __rdtsc();
                }
                v15 = SystemTimePrecise;
                goto LABEL_57;
              }
              if ( v39 <= v35 )
                *(_DWORD *)(v38 + 4) = v39;
            }
          }
          if ( (unsigned __int8)EtwpSwitchBuffer(v34, v38, Reserved) != 1 )
          {
            v31 = (_QWORD *)v93;
            v14 = v86;
            v26 = v94;
            break;
          }
          v37 = v102;
          v35 = v80;
          v34 = v86;
        }
      }
      _InterlockedIncrement(v14 + 92);
      if ( (v14[77] & 0x10000) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v14 + 62)
                                                        + 12LL
                                                        * *(unsigned __int16 *)(*((_QWORD *)v14 + 67) + 4LL * Reserved)
                                                        + 4));
      v47 = 0LL;
      v40 = 0LL;
LABEL_58:
      if ( !v47 )
      {
        if ( v24 > 0xFFF8 )
        {
          v12 = 534;
        }
        else
        {
          v12 = 8;
          if ( v24 > v14[49] )
            v12 = 234;
        }
        _InterlockedDecrement((volatile signed __int32 *)(16LL * (unsigned __int8)v97 + EtwpLoggerArray + 8));
        return v12;
      }
      *v31 = v14;
      v31[1] = v47;
      v31[2] = v40;
      ++*(_DWORD *)(v26 + 128);
      *(_DWORD *)v47 = v24 | 0xC0130000;
      *(_WORD *)(v47 + 4) = a5;
      *(_WORD *)(v47 + 6) = a3;
      *(_OWORD *)(v47 + 24) = *(_OWORD *)(v92 + 32);
      *(_OWORD *)(v47 + 40) = *a2;
      if ( a6 )
        ActivityId = *a6;
      else
        ActivityId = NtCurrentTeb()->ActivityId;
      *(_GUID *)(v47 + 64) = ActivityId;
      if ( a7 )
      {
        v49 = (_WORD *)(v47 + 80);
        v87 = (_WORD *)(v47 + 80);
        *(_WORD *)(v47 + 80) = 24;
        *(_DWORD *)(v47 + 82) = 1;
        *(_WORD *)(v47 + 86) = 16;
        *(_OWORD *)(v47 + 88) = *a7;
        *(_WORD *)(v47 + 4) = v84 | 1;
        v50 = 104;
        v77 = 104;
      }
      else
      {
        v49 = 0LL;
        v50 = v77;
      }
      if ( v74 == 1 )
      {
        v66 = (_WORD *)(v47 + v50);
        *v66 = v85;
        v66[1] = 2;
        v66[3] = ReturnLength;
        v66[2] = 0;
        memmove(v66 + 4, v104, ReturnLength);
        *(_WORD *)(v47 + 4) |= 1u;
        v50 += (unsigned __int16)v85;
        v77 = v50;
        if ( v49 )
          v49[2] |= 1u;
        v49 = v66;
        v87 = v66;
      }
      if ( v96 )
      {
        v67 = (_DWORD *)(v47 + v50);
        *v67 = 196624;
        v67[1] = 0x40000;
        v67[2] = NtCurrentPeb()->SessionId;
        *(_WORD *)(v47 + 4) |= 1u;
        v50 += 16;
        v77 = v50;
        if ( v49 )
          v49[2] |= 1u;
        v49 = v67;
        v87 = v67;
      }
      if ( (_BYTE)v76 == 1 )
      {
        v68 = (void *)(v47 + v50);
        memmove(v68, v89, (unsigned __int16)v90);
        *(_WORD *)(v47 + 4) |= 1u;
        v50 += (unsigned __int16)v90;
        v77 = v50;
        if ( v49 )
          v49[2] |= 1u;
        v49 = v68;
        v87 = v68;
      }
      v51 = Src;
      if ( Src )
      {
        v56 = (unsigned __int16 *)(v47 + v50);
        v57 = v81;
        v58 = (v81 + 15) & 0xFFF8;
        *v56 = v58;
        *(_DWORD *)(v56 + 1) = 12;
        v56[3] = v57;
        v59 = v57;
        memmove(v56 + 4, v51, v57);
        memset_thunk_772440563353939046((char *)v56 + v59 + 8, 0, (unsigned __int16)(v58 - v81 - 8));
        *(_WORD *)(v47 + 4) |= 1u;
        v50 = *v56 + v77;
        v77 = v50;
        if ( v87 )
          v87[2] |= 1u;
        v49 = v56;
        v14 = v86;
      }
      if ( v82 )
      {
        v60 = v75;
        v61 = (v75 + 15) & 0xFFF8;
        v62 = (unsigned __int16 *)(v47 + v50);
        *v62 = v61;
        *(_DWORD *)(v62 + 1) = 11;
        v62[3] = v60;
        v88 = v62 + 4;
        memset_thunk_772440563353939046((char *)v62 + v60 + 8, 0, (unsigned __int16)(v61 - v60 - 8));
        *(_WORD *)(v47 + 4) |= 1u;
        v77 = *v62 + v50;
        if ( v49 )
          v49[2] |= 1u;
      }
      if ( a8 )
      {
        v43 = (unsigned __int8 *)(v91 + 12);
        v44 = a8;
        v52 = v92;
        v42 = v77;
        do
        {
          v53 = *((_DWORD *)v43 - 1);
          if ( (*(_WORD *)(v52 + 86) & 0x4000) != 0 && (v54 = *v43, (_BYTE)v54) )
          {
            if ( v54 == 1 )
            {
              v65 = *((unsigned int *)v43 - 1);
              memmove(v88, *(const void **)(v43 - 12), v65);
              v88 = (char *)v88 + v65;
            }
            else if ( v54 == 3 && v53 == 8 )
            {
              v15 = **(LARGE_INTEGER **)(v43 - 12);
            }
          }
          else
          {
            v41 = (void *)(v47 + v42);
            v42 += v53;
            memmove(v41, *(const void **)(v43 - 12), *((unsigned int *)v43 - 1));
          }
          v43 += 16;
          --v44;
        }
        while ( v44 );
        v14 = v86;
      }
      *(LARGE_INTEGER *)(v47 + 16) = v15;
      if ( v14[4] == 3 )
        *(LARGE_INTEGER *)(v47 + 56) = v15;
      else
        *(_QWORD *)(v47 + 56) = __rdtsc();
      v45 = NtCurrentTeb();
      *(_DWORD *)(v47 + 8) = v45->ClientId.UniqueThread;
      *(_DWORD *)(v47 + 12) = v45->ClientId.UniqueProcess;
      v12 = v78;
      i = v83;
    }
    v10 = a2;
    goto LABEL_54;
  }
  return 87LL;
}
