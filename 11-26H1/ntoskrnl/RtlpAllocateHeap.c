/*
 * XREFs of RtlpAllocateHeap @ 0x1405238C8
 * Callers:
 *     RtlpAllocateNTHeapInternal @ 0x140492188 (RtlpAllocateNTHeapInternal.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x140479020 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpFindEntry @ 0x14052421C (RtlpFindEntry.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     RtlpCreateSplitBlock @ 0x14061E464 (RtlpCreateSplitBlock.c)
 *     RtlpExtendHeap @ 0x14061F278 (RtlpExtendHeap.c)
 *     RtlpHpAllocVirtBlockCommitFirst @ 0x14061FC1C (RtlpHpAllocVirtBlockCommitFirst.c)
 *     RtlpAnalyzeHeapFailure @ 0x14062889C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x14062912C (RtlpHeapRemoveListEntry.c)
 *     RtlCompareMemoryUlong @ 0x1407359E0 (RtlCompareMemoryUlong.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlGetNtGlobalFlags @ 0x140B55F60 (RtlGetNtGlobalFlags.c)
 */

_DWORD *__fastcall RtlpAllocateHeap(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        _DWORD *a6)
{
  unsigned __int64 v6; // r14
  __int16 v7; // r12
  char v8; // di
  _DWORD *v10; // r15
  char v11; // bl
  unsigned __int64 v12; // r13
  __int64 v14; // r14
  unsigned __int64 v15; // r13
  __int64 Entry; // rax
  _QWORD *v17; // r12
  __int64 v18; // rbx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 *v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 *v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r12
  __int64 *v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 *v33; // rdx
  __int64 *v34; // rcx
  unsigned __int64 v35; // rdi
  char v36; // r12
  int v37; // r8d
  SIZE_T v38; // rdi
  SIZE_T v39; // rax
  __int64 v40; // rdi
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // r14
  __int64 v43; // rcx
  unsigned __int64 v44; // r14
  int v45; // r9d
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  __int64 v48; // rdi
  __int64 v49; // r8
  char v50; // bl
  _DWORD *v51; // rcx
  void *v52; // r8
  unsigned __int64 v53; // rdx
  _OWORD *v54; // rax
  unsigned __int64 v55; // r14
  unsigned __int64 Blink; // rax
  unsigned __int64 v57; // rcx
  signed __int64 v58; // r8
  unsigned __int64 v59; // rtt
  __int64 v60; // rax
  _QWORD *v61; // rdi
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // r8
  __int64 *v64; // rax
  char v65; // [rsp+40h] [rbp-128h]
  int v66; // [rsp+48h] [rbp-120h]
  __int64 v67; // [rsp+58h] [rbp-110h] BYREF
  _DWORD *v68; // [rsp+60h] [rbp-108h]
  __int64 *v69; // [rsp+68h] [rbp-100h]
  int v70; // [rsp+70h] [rbp-F8h]
  __int64 *v71; // [rsp+78h] [rbp-F0h]
  unsigned __int64 v72; // [rsp+80h] [rbp-E8h]
  SIZE_T v73; // [rsp+88h] [rbp-E0h]
  unsigned __int64 v74; // [rsp+90h] [rbp-D8h]
  __int64 *v75; // [rsp+98h] [rbp-D0h]
  int v76; // [rsp+A0h] [rbp-C8h]
  __int64 *v77; // [rsp+A8h] [rbp-C0h]
  __int64 v78; // [rsp+B0h] [rbp-B8h]
  __int64 v79; // [rsp+B8h] [rbp-B0h]
  unsigned __int64 v80; // [rsp+C0h] [rbp-A8h]
  __int64 v81; // [rsp+C8h] [rbp-A0h]
  _OWORD *v82; // [rsp+D0h] [rbp-98h]
  _OWORD *v83; // [rsp+D8h] [rbp-90h]
  unsigned __int64 v84; // [rsp+E0h] [rbp-88h]
  __int64 v85; // [rsp+E8h] [rbp-80h]
  unsigned __int64 v86; // [rsp+F0h] [rbp-78h]
  unsigned __int64 v87; // [rsp+F8h] [rbp-70h]
  __int64 v88; // [rsp+100h] [rbp-68h]
  unsigned __int64 v89; // [rsp+108h] [rbp-60h]
  struct _LIST_ENTRY *v90; // [rsp+110h] [rbp-58h]
  struct _LIST_ENTRY *v91; // [rsp+118h] [rbp-50h]
  __int64 v92; // [rsp+120h] [rbp-48h]
  __int64 v93; // [rsp+128h] [rbp-40h]
  char v94; // [rsp+178h] [rbp+10h]
  unsigned __int64 v96; // [rsp+188h] [rbp+20h] BYREF

  v94 = a2;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v66 = 1;
  a5 = 0;
  v10 = 0LL;
  v67 = 0LL;
  if ( (a2 & 0x3C010F60) != 0 || a3 >= 0x80000000 )
  {
    v66 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    v14 = a3;
    if ( !a3 )
      v14 = 1LL;
    v6 = *(_QWORD *)(a1 + 264) & (*(_QWORD *)(a1 + 256) + v14);
    if ( v6 < 0x20 )
      v6 = 32LL;
    v11 = (a2 >> 4) & 0xE0 | 1;
    v65 = v11;
    if ( (a2 & 0x3C000100) != 0 || (v15 = v6, *(_QWORD *)(a1 + 328)) )
    {
      v11 = (a2 >> 4) & 0xE0 | 3;
      v65 = v11;
      v15 = v6 + 16;
      v6 += 16LL;
    }
    v12 = v15 >> 4;
  }
  else
  {
    v11 = 1;
    v65 = 1;
    v12 = a4 >> 4;
    if ( a4 >> 4 < 2 )
    {
      v6 = a4 + 16;
      v12 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (RtlGetNtGlobalFlags() & 0x800) == 0 )
  {
    v11 |= 8u;
    v65 = v11;
  }
  if ( (v8 & 1) == 0 )
  {
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 352), 1u);
    v70 = 0;
    a5 = 1;
  }
  if ( v12 > *(unsigned int *)(a1 + 148) )
  {
    if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
    {
      v55 = v6 + 48;
      v96 = v55 + 8;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                           (v55 + 4103) & 0xFFFFFFFFFFFFF000uLL,
                           *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664),
                           a1,
                           (unsigned __int8 *)(a1 + 376)) )
      {
        Blink = (unsigned __int64)PspTlsContext.WaitBlock[1].WaitListEntry.Blink;
        v90 = PspTlsContext.WaitBlock[1].WaitListEntry.Blink;
        v91 = PspTlsContext.WaitBlock[1].WaitListEntry.Blink;
        do
        {
          v57 = Blink ^ (Blink >> 12);
          v58 = v57 ^ (v57 << 25) ^ ((v57 ^ (v57 << 25)) >> 27);
          v59 = Blink;
          Blink = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&PspTlsContext.WaitBlock[1].WaitListEntry.Blink,
                    v58,
                    Blink);
        }
        while ( v59 != Blink );
        v92 = 0x2545F4914F6CDD1DLL * v58;
        v93 = 0x2545F4914F6CDD1DLL * v58;
        v76 = 1332534557 * v58;
        v84 = (unsigned __int64)((1332534557 * (_DWORD)v58) & 0xF) << 12;
        v60 = RtlpHpAllocVirtBlockCommitFirst(v57, &v96, v84, &v67);
        v61 = (_QWORD *)v60;
        v85 = v60;
        if ( !v60 )
        {
          v10 = 0LL;
          v68 = 0LL;
          ++*(_DWORD *)(a1 + 632);
          goto LABEL_118;
        }
        v62 = v96;
        *(_WORD *)(v60 + 56) = v96 - v7;
        *(_BYTE *)(v60 + 58) = v11 | 2;
        *(_QWORD *)(v60 + 32) = v62;
        *(_QWORD *)(v60 + 40) = v67;
        *(_BYTE *)(v60 + 63) = 4;
        *(_QWORD *)(a1 + 592) += v62;
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v60 + 59) = *(_BYTE *)(v60 + 56) ^ *(_BYTE *)(v60 + 57) ^ *(_BYTE *)(v60 + 58);
          *(_DWORD *)(v60 + 56) ^= *(_DWORD *)(a1 + 136);
        }
        v63 = a1 + 272;
        v64 = *(__int64 **)(a1 + 280);
        if ( *v64 == a1 + 272 )
        {
          *v61 = v63;
          v61[1] = v64;
          *v64 = (__int64)v61;
          *(_QWORD *)(a1 + 280) = v61;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, v63, 0, *v64, 0LL);
        }
        v10 = v61 + 8;
LABEL_117:
        v68 = v10;
        goto LABEL_118;
      }
    }
LABEL_116:
    v10 = 0LL;
    goto LABEL_117;
  }
  v87 = a1 + 336;
  Entry = RtlpFindEntry(a1, v12);
  v17 = (_QWORD *)Entry;
  v88 = Entry;
  if ( a1 + 336 == Entry )
  {
LABEL_40:
    v27 = RtlpExtendHeap(a1);
    v18 = v27;
    v71 = (__int64 *)v27;
    if ( v27 )
    {
      v28 = v27 + 16;
      v29 = *(_QWORD *)(v27 + 16);
      v30 = *(__int64 **)(v27 + 24);
      v71 = v30;
      v31 = *(_QWORD *)(v29 + 8);
      v32 = *v30;
      if ( *v30 != v31 || v32 != v28 )
      {
        RtlpLogHeapFailure(13, a1, v28, v31, v32, 0LL);
        goto LABEL_118;
      }
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v18 + 8);
      v33 = *(__int64 **)(a1 + 312);
      if ( v33 )
      {
        v69 = 0LL;
        v34 = (__int64 *)*(unsigned __int16 *)(v18 + 8);
        while ( 1 )
        {
          v35 = *((unsigned int *)v33 + 2);
          if ( (unsigned __int64)v34 < v35 )
            break;
          if ( !*v33 )
          {
            v34 = (__int64 *)(unsigned int)(v35 - 1);
            break;
          }
          v33 = (__int64 *)*v33;
        }
        v77 = v33;
        v69 = v34;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v33, v28, v28, (_DWORD)v34, *(unsigned __int16 *)(v18 + 8));
        v30 = v71;
      }
      *v30 = v29;
      *(_QWORD *)(v29 + 8) = v30;
LABEL_50:
      v36 = *(_BYTE *)(v18 + 10);
      v37 = v66;
      if ( !v66 && (v36 & 4) != 0 )
      {
        v73 = 0LL;
        v38 = 16LL * *(unsigned __int16 *)(v18 + 8) - 32;
        v73 = v38;
        if ( (v36 & 2) != 0 && v38 > 4 )
        {
          v38 -= 4LL;
          v73 = v38;
        }
        v39 = RtlCompareMemoryUlong((PVOID)(v18 + 32), v38, 0xFEEEFEEE);
        if ( v39 != v38 )
        {
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v18,
            (const void *)(v18 + v39 + 32));
          if ( (_BYTE)KdDebuggerEnabled )
            __debugbreak();
        }
        v37 = 0;
      }
      v78 = v18;
      if ( (*(_BYTE *)(v18 + 10) & 1) != 0 )
      {
        RtlpLogHeapFailure(3, a1, v18, 0, 0LL, 0LL);
        goto LABEL_118;
      }
      *(_BYTE *)(v18 + 10) = v65;
      v40 = *(unsigned __int16 *)(v18 + 8) - v12;
      v79 = v40;
      *(_WORD *)(v18 + 8) = v12;
      v41 = a3;
      v42 = v6 - a3;
      v89 = v42;
      v43 = 16 * v12;
      if ( v42 >= 0x3F )
      {
        *(_QWORD *)(v43 + v18) = v42;
        *(_BYTE *)(v18 + 15) = 63;
      }
      else
      {
        *(_BYTE *)(v18 + 15) = v42;
      }
      *(_BYTE *)(v18 + 11) = 0;
      if ( v40 )
      {
        if ( v40 == 1 )
        {
          ++*(_WORD *)(v18 + 8);
          v44 = v42 + 16;
          v86 = v44;
          if ( v44 >= 0x3F )
          {
            *(_QWORD *)(v43 + v18 + 16) = v44;
            *(_BYTE *)(v18 + 15) = 63;
          }
          else
          {
            *(_BYTE *)(v18 + 15) = v44;
          }
        }
        else
        {
          v45 = v37 ^ 1;
          v46 = *(unsigned __int8 *)(v18 + 14);
          if ( (_BYTE)v46 )
            v47 = (v18 & 0xFFFFFFFFFFFF0000uLL) + ((1 - v46) << 16);
          else
            v47 = a1;
          v80 = v47;
          LOBYTE(v45) = v36;
          if ( !(unsigned __int8)RtlpCreateSplitBlock(a1, v47, (int)v43 + (int)v18, v45, v37 ^ 1u, v12, v40) )
            goto LABEL_118;
          v41 = a3;
        }
      }
      v10 = (_DWORD *)(v18 + 16);
      v68 = (_DWORD *)(v18 + 16);
      v48 = 16LL * *(unsigned __int16 *)(v18 + 8);
      v67 = v48;
      v49 = v48;
      if ( (*(_BYTE *)(v18 + 15) & 0x3F) == 0x3F )
      {
        v49 = v48 - 8;
        v48 = v49;
        v67 = v49;
      }
      if ( v66 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v18 + 11) = *(_BYTE *)(v18 + 8) ^ *(_BYTE *)(v18 + 9) ^ *(_BYTE *)(v18 + 10);
          *(_DWORD *)(v18 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        v50 = a5;
        if ( a5 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
          a5 = 0;
          v50 = 0;
        }
        if ( (v94 & 8) != 0 )
          memset_0(v10, 0, v48 - 8);
        goto LABEL_119;
      }
      if ( (v94 & 8) != 0 )
      {
        memset_0((void *)(v18 + 16), 0, v49 - 8);
        v51 = (_DWORD *)(a1 + 112);
LABEL_93:
        if ( (*v51 & 0x20) != 0 )
        {
          *(__m128i *)((char *)v10 + a3) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
          *(_BYTE *)(v18 + 10) |= 4u;
        }
        *(_BYTE *)(v18 + 11) = 0;
        if ( (*(_BYTE *)(v18 + 10) & 2) != 0 )
        {
          if ( *(_BYTE *)(v18 + 15) == 4 )
            v54 = (_OWORD *)(v18 - 32);
          else
            v54 = (_OWORD *)(v18 + 16LL * *(unsigned __int16 *)(v18 + 8) - 16);
          v82 = v54;
          v83 = v54;
          *v54 = 0LL;
        }
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v18 + 11) = *(_BYTE *)(v18 + 8) ^ *(_BYTE *)(v18 + 9) ^ *(_BYTE *)(v18 + 10);
          *(_DWORD *)(v18 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        goto LABEL_118;
      }
      v51 = (_DWORD *)(a1 + 112);
      if ( (*(_DWORD *)(a1 + 112) & 0x40) == 0 )
        goto LABEL_93;
      v52 = (void *)(v18 + 16);
      v81 = v18 + 16;
      v53 = (v41 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
      v74 = v53;
      if ( !v53 )
        goto LABEL_93;
      if ( ((unsigned __int8)v10 & 4) != 0 )
      {
        *v10 = -1163005939;
        v74 = --v53;
        if ( !v53 )
          goto LABEL_93;
        v52 = (void *)(v18 + 20);
        v81 = v18 + 20;
      }
      memset64(v52, 0xBAADF00DBAADF00DuLL, v53 >> 1);
      v51 = (_DWORD *)(a1 + 112);
      if ( (v53 & 1) != 0 )
        *((_DWORD *)v52 + v53 - 1) = -1163005939;
      goto LABEL_93;
    }
    goto LABEL_116;
  }
  v18 = Entry - 16;
  v71 = (__int64 *)(Entry - 16);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(Entry - 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(Entry - 5) != (*(_BYTE *)(Entry - 8) ^ (unsigned __int8)(*(_BYTE *)(Entry - 7) ^ *(_BYTE *)(Entry - 6))) )
      RtlpAnalyzeHeapFailure(a1, v18);
  }
  v19 = *((unsigned __int16 *)v17 - 4);
  if ( v19 < v12 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_BYTE *)v17 - 5) = *((_BYTE *)v17 - 8) ^ *((_BYTE *)v17 - 7) ^ *((_BYTE *)v17 - 6);
      *((_DWORD *)v17 - 2) ^= *(_DWORD *)(a1 + 136);
    }
    goto LABEL_40;
  }
  v20 = *v17;
  v67 = v20;
  v21 = (__int64 *)v17[1];
  v69 = v21;
  v22 = *(_QWORD *)(v20 + 8);
  v23 = *v21;
  if ( *v21 == v22 && (_QWORD *)v23 == v17 )
  {
    *(_QWORD *)(a1 + 192) -= v19;
    v24 = *(__int64 **)(a1 + 312);
    if ( v24 )
    {
      v72 = 0LL;
      v25 = *((unsigned __int16 *)v17 - 4);
      while ( 1 )
      {
        v26 = *((unsigned int *)v24 + 2);
        if ( v25 < v26 )
          break;
        if ( !*v24 )
        {
          v25 = (unsigned int)(v26 - 1);
          break;
        }
        v24 = (__int64 *)*v24;
      }
      v75 = v24;
      v72 = v25;
      RtlpHeapRemoveListEntry(a1, (_DWORD)v24, (_DWORD)v21, (_DWORD)v17, v25, *(unsigned __int16 *)(v18 + 8));
      v20 = v67;
      v21 = v69;
    }
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
    goto LABEL_50;
  }
  RtlpLogHeapFailure(13, a1, (_DWORD)v17, v22, v23, 0LL);
LABEL_118:
  v50 = a5;
LABEL_119:
  if ( v50 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
  return v10;
}
