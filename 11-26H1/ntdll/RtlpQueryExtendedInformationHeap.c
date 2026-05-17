/*
 * XREFs of RtlpQueryExtendedInformationHeap @ 0x180072680
 * Callers:
 *     RtlpQueryExtendedHeapInformation @ 0x180092520 (RtlpQueryExtendedHeapInformation.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x1800724E8 (RtlpEstimateAllocatedSize.c)
 *     RtlpWalkHeap @ 0x180073110 (RtlpWalkHeap.c)
 *     RtlpEnsureSegHeapLockedForWalk @ 0x1800744A4 (RtlpEnsureSegHeapLockedForWalk.c)
 *     RtlpHpHeapWalk @ 0x1800744FC (RtlpHpHeapWalk.c)
 *     RtlpHpHeapReportCounters @ 0x18007498C (RtlpHpHeapReportCounters.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x180074A54 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpQueryMemoryUsageHeap @ 0x180074AB4 (RtlpQueryMemoryUsageHeap.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryExtendedInformationHeap(__int64 a1, __int64 a2)
{
  unsigned int v4; // r15d
  int v5; // edi
  __int64 v6; // r13
  __int64 (__fastcall *v7)(__int64 *, __int64); // rbx
  char v8; // r14
  _QWORD *v9; // r12
  __int64 result; // rax
  unsigned int NumberOfHeaps; // ecx
  __int64 v12; // rax
  __int64 *v13; // rax
  int v14; // ecx
  __int64 v15; // rax
  __int64 *v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  bool v19; // r12
  __int16 v20; // bx
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  __int64 *v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rbx
  _QWORD *v29; // r11
  _QWORD *v30; // r8
  unsigned __int64 v31; // rax
  _QWORD *v32; // rdx
  unsigned __int64 v33; // r10
  _QWORD *v34; // rcx
  _QWORD *v35; // r10
  _QWORD *v36; // r9
  unsigned __int64 v37; // r11
  unsigned __int64 v38; // r11
  int v39; // ebx
  unsigned __int64 v40; // rcx
  bool v41; // zf
  int v42; // ebx
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 Metadata; // rdi
  bool v47; // zf
  int v48; // eax
  __int64 v49; // rbx
  unsigned __int64 v50; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v51; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v52; // [rsp+30h] [rbp-D0h]
  __int64 (__fastcall *v53)(__int64 *, __int64); // [rsp+38h] [rbp-C8h]
  __int128 v54; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v55; // [rsp+50h] [rbp-B0h]
  __int128 v56; // [rsp+60h] [rbp-A0h]
  __int64 v57; // [rsp+70h] [rbp-90h] BYREF
  __int64 v58; // [rsp+78h] [rbp-88h]
  __int128 v59; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v60; // [rsp+90h] [rbp-70h] BYREF
  __int64 v61; // [rsp+98h] [rbp-68h] BYREF
  __int128 v62; // [rsp+A0h] [rbp-60h]
  __int128 v63; // [rsp+B0h] [rbp-50h]
  __int128 v64; // [rsp+C0h] [rbp-40h]
  __int128 v65; // [rsp+D0h] [rbp-30h]
  __int128 v66; // [rsp+E0h] [rbp-20h]
  __int128 v67; // [rsp+F0h] [rbp-10h]
  __int128 v68; // [rsp+100h] [rbp+0h]
  __int128 v69; // [rsp+110h] [rbp+10h]
  __int64 v70; // [rsp+120h] [rbp+20h]
  _DWORD v71[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v72; // [rsp+138h] [rbp+38h]
  unsigned __int64 v73; // [rsp+140h] [rbp+40h]
  int v74; // [rsp+148h] [rbp+48h]
  __int64 v75; // [rsp+150h] [rbp+50h]
  __int64 v76; // [rsp+158h] [rbp+58h]
  int v77; // [rsp+16Ch] [rbp+6Ch]
  __int64 v78; // [rsp+170h] [rbp+70h]
  __int64 v79; // [rsp+178h] [rbp+78h]
  int v80; // [rsp+180h] [rbp+80h]

  v71[1] = 0;
  memset_thunk_772440563353939046(v71, 0, 0x54uLL);
  v4 = *(_DWORD *)a2;
  v5 = 0;
  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(__int64 (__fastcall **)(__int64 *, __int64))(a2 + 8);
  v53 = v7;
  v52 = 0LL;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v8 = 1;
    v70 = a1;
    v9 = (_QWORD *)a1;
  }
  else
  {
    v8 = 0;
    v70 = 0LL;
    v9 = 0LL;
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return 3221225474LL;
  }
  if ( v4 == 0x80000000 )
  {
    memset_thunk_772440563353939046(&v57, 0, 0xB0uLL);
    LODWORD(v57) = v4;
    v58 = 176LL;
    if ( v8 )
    {
      RtlpHpHeapReportCounters(v9, &v57);
    }
    else
    {
      DWORD2(v59) = *(unsigned __int16 *)(a1 + 208);
      DWORD1(v59) = 1;
      v60 = a1;
      NumberOfHeaps = NtCurrentPeb()->NumberOfHeaps;
      v61 = *(_QWORD *)(a1 + 568);
      v12 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
      HIDWORD(v59) = NumberOfHeaps - 1;
      *(_QWORD *)&v62 = v12;
      *(_QWORD *)&v64 = RtlpEstimateAllocatedSize(a1);
      *((_QWORD *)&v64 + 1) = 16LL * *(_QWORD *)(a1 + 192);
      DWORD2(v63) = *(_DWORD *)(a1 + 604);
      DWORD2(v65) = *(_DWORD *)(a1 + 592);
      *(_QWORD *)&v63 = *(_QWORD *)(a1 + 584);
      DWORD2(v62) = *(_DWORD *)(a1 + 600);
      HIDWORD(v65) = *(_DWORD *)(a1 + 608);
      LODWORD(v66) = HIDWORD(v65);
      v13 = *(__int64 **)(a1 + 312);
      *((_QWORD *)&v66 + 1) = 0LL;
      if ( v13 )
      {
        v14 = *((_DWORD *)v13 + 4);
        LODWORD(v65) = v14;
        v15 = *v13;
        if ( v15 )
          LODWORD(v65) = *(_DWORD *)(v15 + 16) + v14;
      }
      v16 = *(__int64 **)(a1 + 352);
      v17 = *(_DWORD *)(a1 + 620);
      DWORD1(v65) = v17;
      if ( v16 )
      {
        v18 = *v16;
        if ( v18 != -1 )
          v5 = *(_DWORD *)(v18 + 36);
        DWORD1(v65) = v5 + v17;
      }
    }
    return v7(&v57, v6);
  }
  memset_thunk_772440563353939046((char *)&v59 + 12, 0, 0x94uLL);
  v57 = 2LL;
  v58 = 64LL;
  *(_QWORD *)&v59 = a1;
  if ( v8 )
  {
    v60 = v9[16] << 12;
    v60 += v9[11] << 12;
    v61 = v9[17] << 12;
    v61 += v9[12] << 12;
    DWORD2(v59) = 0;
  }
  else
  {
    DWORD2(v59) = *(unsigned __int8 *)(a1 + 418);
    result = RtlpQueryMemoryUsageHeap(a1, &v60, &v61);
    if ( (int)result < 0 )
      return result;
  }
  result = v7(&v57, v6);
  if ( (int)result >= 0 && v4 >= 3 )
  {
    v50 = 0LL;
    v54 = 0LL;
    v51 = 0LL;
    v19 = v4 > 3;
    v55 = 0LL;
    v56 = 0LL;
    do
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(a1 + 16) == -571548178 )
        {
          RtlpEnsureSegHeapLockedForWalk(a1);
          result = RtlpHpHeapWalk(a1, &v54, v19);
        }
        else
        {
          result = RtlpWalkHeap(a1, &v54, v19);
        }
        if ( (_DWORD)result == -2147483622 )
          return 0LL;
        if ( (int)result < 0 )
          return result;
        v20 = WORD1(v55);
        if ( (BYTE2(v55) & 2) != 0 )
          break;
        if ( (WORD1(v55) & 0x4000) != 0 )
        {
          memset_thunk_772440563353939046(&v57, 0, 0xB0uLL);
          LODWORD(v57) = 3;
          v58 = 56LL;
          v45 = 0LL;
          Metadata = 0LL;
          if ( v8 )
          {
            *(_QWORD *)&v59 = v54;
            Metadata = RtlpHpLargeAllocGetMetadata(v70, v54);
            *((_QWORD *)&v59 + 1) = (*(_QWORD *)(Metadata + 32) & 0xFFFFFFFFFFFFF000uLL) + 4096;
            v60 = *(_QWORD *)(Metadata + 32) & 0xFFFFFFFFFFFFF000uLL;
          }
          else
          {
            v49 = v54 - 16;
            _m_prefetchw((const void *)(v54 - 16));
            if ( *(_BYTE *)(v49 + 15) == 5 )
              v49 -= 16LL * *(unsigned __int8 *)(v49 + 14);
            v45 = v49 - 48;
            *(_QWORD *)&v59 = v45 & 0xFFFFFFFFFFFF0000uLL;
            *((_QWORD *)&v59 + 1) = *(_QWORD *)(v45 + 40);
            v60 = *(_QWORD *)(v45 + 32);
          }
          result = v53(&v57, v6);
          if ( (int)result < 0 )
            return result;
          HIDWORD(v57) = 0;
          memset_thunk_772440563353939046((char *)&v59 + 8, 0, 0x98uLL);
          v58 = 56LL;
          LODWORD(v57) = 4;
          if ( v8 )
          {
            *(_QWORD *)&v59 = v54;
            *((_QWORD *)&v59 + 1) = *(_QWORD *)(Metadata + 32) & 0xFFFFFFFFFFFFF000uLL;
            v47 = (*(_DWORD *)(v70 + 20) & 0x40000000) == 0;
          }
          else
          {
            v47 = (*(_DWORD *)(a1 + 112) & 0x40000) == 0;
            *(_QWORD *)&v59 = v45;
            *((_QWORD *)&v59 + 1) = *(_QWORD *)(v45 + 32);
          }
          v48 = 64;
          LODWORD(v60) = 1;
          if ( v47 )
            v48 = 4;
          HIDWORD(v60) = v48;
          result = v53(&v57, v6);
          if ( (int)result < 0 )
            return result;
          v20 = WORD1(v55);
          v21 = v54;
LABEL_33:
          if ( (v20 & 0xF0) != 0 )
          {
            memset_thunk_772440563353939046(v71, 0, 0x58uLL);
            v75 = *((_QWORD *)&v54 + 1);
            v26 = 2;
            v71[0] = 5;
            v72 = 88LL;
            v73 = v21;
            v74 = 2;
            if ( (v20 & 2) != 0 )
              v27 = (unsigned __int8)v55;
            else
              v27 = *(_QWORD *)((char *)&v56 + 4);
            v76 = v27;
            if ( (v20 & 0x4000) != 0 )
            {
              v26 = 6;
              v74 = 6;
            }
            if ( (v20 & 1) != 0 )
              v74 = v26 | 1;
            v25 = (__int64 *)v71;
            v79 = *((_QWORD *)&v55 + 1);
            v80 = v56;
            v77 = 1;
            v78 = 32LL;
            goto LABEL_43;
          }
          v57 = 5LL;
          v62 = 0LL;
          v60 = *((_QWORD *)&v54 + 1);
          v63 = 0LL;
          v64 = 0LL;
          v65 = 0LL;
          v66 = 0LL;
          v67 = 0LL;
          v68 = 0LL;
          v69 = 0LL;
          v58 = 56LL;
          v59 = v21;
          if ( (v20 & 2) != 0 )
            v22 = (unsigned __int8)v55;
          else
            v22 = *(_QWORD *)((char *)&v56 + 4);
          v61 = v22;
          v23 = DWORD2(v59);
          if ( (v20 & 1) != 0 )
            v23 = 1;
          DWORD2(v59) = v23;
          if ( (v20 & 0x4000) != 0 )
          {
            v24 = v23 | 4;
            goto LABEL_41;
          }
          if ( v20 < 0 )
          {
            v24 = v23 | 8;
LABEL_41:
            DWORD2(v59) = v24;
          }
LABEL_42:
          v25 = &v57;
LABEL_43:
          result = v53(v25, v6);
          if ( (int)result < 0 )
            return result;
        }
        else if ( (WORD1(v55) & 0x1000) != 0 )
        {
          if ( v4 >= 4 )
          {
            HIDWORD(v57) = 0;
            memset_thunk_772440563353939046(&v61, 0, 0x88uLL);
            v58 = 56LL;
            LODWORD(v57) = 4;
            v59 = v54;
            v60 = 0x100000002LL;
            goto LABEL_42;
          }
        }
        else
        {
          v21 = v54;
          if ( v8 || (unsigned __int64)v54 >= v50 && (unsigned __int64)v54 <= v51 )
          {
LABEL_32:
            if ( v4 >= 4 )
              goto LABEL_33;
          }
          else
          {
            v34 = *(_QWORD **)(v52 + 96);
            v35 = 0LL;
            v36 = 0LL;
            while ( v34 != (_QWORD *)(v52 + 96) )
            {
              v37 = v34[2];
              v50 = v37;
              if ( (unsigned __int64)v54 < v37 )
                goto LABEL_114;
              v51 = v37 + v34[3];
              if ( (unsigned __int64)v54 < v51 )
                goto LABEL_81;
              if ( (unsigned __int64)v54 < v37 )
              {
LABEL_114:
                if ( !v36 || v36[4] > v37 )
                  v36 = v34 - 2;
              }
              else if ( !v35 || v35[4] < v37 )
              {
                v35 = v34 - 2;
              }
              v34 = (_QWORD *)*v34;
            }
            if ( v35 )
            {
              v38 = v35[4] + v35[5];
            }
            else
            {
              v38 = v52;
              if ( v52 + 24 == *(_QWORD *)(*(_QWORD *)(v52 + 40) + 288LL) )
                v38 = *(_QWORD *)(v52 + 40);
            }
            v50 = v38;
            if ( v36 )
              v51 = v36[4];
            else
              v51 = v38 + ((unsigned __int64)*(unsigned int *)(v52 + 56) << 12);
LABEL_81:
            v39 = 64;
            if ( (*(_DWORD *)(*(_QWORD *)(v52 + 40) + 112LL) & 0x40000) == 0 )
              v39 = 4;
            if ( v4 >= 4 )
            {
              HIDWORD(v57) = 0;
              memset_thunk_772440563353939046(&v61, 0, 0x88uLL);
              *(_QWORD *)&v59 = v50;
              *((_QWORD *)&v59 + 1) = v51 - v50;
              LODWORD(v57) = 4;
              v58 = 56LL;
              LODWORD(v60) = 1;
              HIDWORD(v60) = v39;
              result = v53(&v57, v6);
              if ( (int)result < 0 )
                return result;
              v20 = WORD1(v55);
              v21 = v54;
              goto LABEL_32;
            }
          }
        }
      }
      if ( v8 || SWORD1(v55) < 0 )
      {
        v28 = v54;
      }
      else
      {
        v28 = v54;
        v52 = v54;
        if ( (_QWORD)v54 + 24LL == *(_QWORD *)(a1 + 288) )
          v28 = a1;
      }
      HIDWORD(v57) = 0;
      memset_thunk_772440563353939046(&v61, 0, 0x88uLL);
      *((_QWORD *)&v59 + 1) = DWORD2(v55) + (unsigned __int64)HIDWORD(v55);
      v60 = DWORD2(v55);
      LODWORD(v57) = 3;
      v58 = 56LL;
      *(_QWORD *)&v59 = v28;
      result = v53(&v57, v6);
      if ( (int)result < 0 )
        return result;
      if ( v8 )
      {
        v40 = v54 + DWORD2(v55);
        v50 = v54;
        v41 = (*(_DWORD *)(v70 + 20) & 0x40000000) == 0;
LABEL_88:
        v51 = v40;
        goto LABEL_89;
      }
      if ( SWORD1(v55) < 0 )
      {
        v40 = v54 + DWORD2(v55);
        v50 = v54;
        v41 = (*(_DWORD *)(a1 + 112) & 0x40000) == 0;
        goto LABEL_88;
      }
      v29 = 0LL;
      v30 = 0LL;
      v31 = v52;
      v32 = *(_QWORD **)(v52 + 96);
      while ( v32 != (_QWORD *)(v52 + 96) )
      {
        v33 = v32[2];
        if ( v31 < v33 )
        {
          if ( !v30 || v30[4] > v33 )
            v30 = v32 - 2;
          goto LABEL_67;
        }
        v31 = v52;
        if ( v52 < v33 + v32[3] )
        {
          _mm_lfence();
          v50 = v32[2];
          v51 = v50 + v32[3];
          v41 = (*(_DWORD *)(*(_QWORD *)(v52 + 40) + 112LL) & 0x40000) == 0;
          goto LABEL_89;
        }
        if ( v29 && v29[4] >= v33 )
        {
LABEL_67:
          v32 = (_QWORD *)*v32;
        }
        else
        {
          v29 = v32 - 2;
          v32 = (_QWORD *)*v32;
        }
      }
      if ( v29 )
      {
        v43 = v29[4] + v29[5];
      }
      else
      {
        v43 = v52;
        if ( v52 + 24 == *(_QWORD *)(*(_QWORD *)(v52 + 40) + 288LL) )
          v43 = *(_QWORD *)(v52 + 40);
      }
      v50 = v43;
      if ( v30 )
      {
        v51 = v30[4];
        v44 = *(_QWORD *)(v52 + 40);
      }
      else
      {
        v44 = *(_QWORD *)(v52 + 40);
        v51 = v43 + ((unsigned __int64)*(unsigned int *)(v52 + 56) << 12);
      }
      v41 = (*(_DWORD *)(v44 + 112) & 0x40000) == 0;
LABEL_89:
      v42 = 64;
      if ( v41 )
        v42 = 4;
      HIDWORD(v57) = 0;
      memset_thunk_772440563353939046(&v61, 0, 0x88uLL);
      LODWORD(v57) = 4;
      *(_QWORD *)&v59 = v50;
      *((_QWORD *)&v59 + 1) = v51 - v50;
      v58 = 56LL;
      LODWORD(v60) = 1;
      HIDWORD(v60) = v42;
      result = v53(&v57, v6);
    }
    while ( (int)result >= 0 );
  }
  return result;
}
