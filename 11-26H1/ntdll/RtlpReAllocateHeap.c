/*
 * XREFs of RtlpReAllocateHeap @ 0x1800216E0
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18001AED0 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlpGetExtraStuffPointer @ 0x1800148A0 (RtlpGetExtraStuffPointer.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180019AA0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlTryEnterCriticalSection @ 0x1800215A0 (RtlTryEnterCriticalSection.c)
 *     RtlDebugReAllocateHeap @ 0x180022780 (RtlDebugReAllocateHeap.c)
 *     RtlpUpdateTagEntry @ 0x180022CF8 (RtlpUpdateTagEntry.c)
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800257B0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x180027944 (RtlpBreakPointHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpGrowBlockInPlace @ 0x180028190 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180028890 (RtlpCreateSplitBlock.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18007F200 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpLogHeapReallocateEvent @ 0x1800B26EC (RtlpLogHeapReallocateEvent.c)
 *     RtlpUpdateHeapRates @ 0x1800CBC10 (RtlpUpdateHeapRates.c)
 *     RtlpHeapExceptionFilter @ 0x180100D78 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpReAllocateHeap(unsigned __int16 *Src, int a2, char *a3, unsigned __int64 a4)
{
  char *v5; // r15
  __int64 v8; // r14
  __int64 v9; // r13
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  char v15; // cl
  unsigned __int64 v16; // rcx
  size_t v17; // rdi
  unsigned int v18; // esi
  void *Heap_0; // r14
  size_t v20; // r8
  _DWORD *SharedData; // rcx
  __int64 v22; // rcx
  unsigned int v24; // esi
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 **v28; // rcx
  int v29; // eax
  unsigned __int16 *v30; // rdi
  unsigned __int64 v31; // r8
  int v32; // ecx
  int v33; // eax
  unsigned __int16 v34; // cx
  __int64 v35; // r9
  unsigned __int64 v36; // r10
  unsigned __int64 v37; // rcx
  struct _TEB *v38; // rdi
  unsigned __int64 v39; // rcx
  _WORD *v40; // rcx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // r9
  char updated; // al
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  char v46; // cl
  __int64 v47; // rax
  __int64 v48; // r13
  size_t v49; // r8
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // r8
  int v52; // r9d
  __int64 v53; // r10
  unsigned __int8 v54; // al
  int v55; // r11d
  _OWORD *ExtraStuffPointer; // rdx
  int v57; // edi
  bool v58; // zf
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned __int64 v61; // rax
  int v62; // ecx
  unsigned __int64 v63; // r11
  __int16 v64; // ax
  __int64 v65; // rdi
  int v66; // eax
  int v67; // edi
  struct _TEB *v68; // rdi
  unsigned __int16 *v69; // rcx
  __int64 v70; // rcx
  struct _TEB *v71; // rdi
  struct _TEB *v72; // rdi
  char v73; // [rsp+40h] [rbp-E8h]
  __int64 v75; // [rsp+50h] [rbp-D8h]
  unsigned __int64 v76; // [rsp+58h] [rbp-D0h]
  __int64 v77; // [rsp+58h] [rbp-D0h]
  unsigned __int64 v78; // [rsp+78h] [rbp-B0h]
  int v79; // [rsp+78h] [rbp-B0h]
  unsigned __int64 v80; // [rsp+80h] [rbp-A8h]
  _OWORD *v81; // [rsp+90h] [rbp-98h]
  void *v82; // [rsp+98h] [rbp-90h]
  unsigned __int64 v83; // [rsp+A0h] [rbp-88h]
  unsigned __int64 v84; // [rsp+B8h] [rbp-70h] BYREF
  const void *v85; // [rsp+C0h] [rbp-68h] BYREF
  unsigned __int64 v86; // [rsp+C8h] [rbp-60h]
  unsigned __int64 v87; // [rsp+D0h] [rbp-58h]
  char *v88; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v89; // [rsp+E0h] [rbp-48h]
  __int64 v90; // [rsp+E8h] [rbp-40h]

  v5 = a3;
  v8 = 0LL;
  v9 = 0LL;
  v73 = 0;
  v85 = 0LL;
  v84 = 0LL;
  v88 = 0LL;
  if ( !a3 )
  {
    v72 = NtCurrentTeb();
    v72->LastStatusValue = 0;
    v72->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0);
    return 0LL;
  }
  _m_prefetchw(a3 - 16);
  if ( *(a3 - 1) == 5 )
    v10 = (unsigned __int64)&a3[-16 * (unsigned __int8)*(a3 - 2) - 16];
  else
    v10 = (unsigned __int64)(a3 - 16);
  if ( *((_BYTE *)Src + 418) == 2 && *((_QWORD *)Src + 51) && *(char *)(v10 + 15) < 0 )
  {
    if ( (a2 & 0x10) == 0 )
    {
      v11 = v10 >> 4;
      v12 = *(_DWORD *)(v10 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)(v10 >> 4) ^ (unsigned int)Src;
      if ( (_WORD)v12 )
        v13 = 0LL;
      else
        v13 = *(_QWORD *)(v10 - (v12 >> 12));
      v14 = *(unsigned __int16 *)(v13 + 36);
      v15 = *(_BYTE *)(v10 + 15);
      if ( v15 == 5 )
      {
        v16 = Src[70] ^ (unsigned __int64)*(unsigned __int16 *)(v10 + 12);
      }
      else if ( (v15 & 0x40) != 0 )
      {
        v16 = *(unsigned __int16 *)(v10 + 16LL * (*(_BYTE *)(v10 + 15) & 0x3F) + 12);
      }
      else if ( (v15 & 0x3F) == 0x3F )
      {
        if ( v15 >= 0 )
        {
          if ( *((_DWORD *)Src + 31) )
          {
            v29 = *(_DWORD *)(v10 + 8);
            if ( (v29 & *((_DWORD *)Src + 31)) != 0 )
            {
              v16 = *(_QWORD *)(v10 + 16LL * (unsigned __int16)(Src[68] ^ v29));
              goto LABEL_14;
            }
          }
          else
          {
            LOWORD(v29) = *(_WORD *)(v10 + 8);
          }
        }
        else
        {
          if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(v11 ^ *(_WORD *)(v10 + 8) ^ (unsigned __int16)Src)) )
            v8 = *(_QWORD *)(v10
                           - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)v11 ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)Src) >> 12));
          LOWORD(v29) = *(_WORD *)(v8 + 36);
        }
        v16 = *(_QWORD *)(v10 + 16LL * (unsigned __int16)v29);
      }
      else
      {
        v16 = *(_BYTE *)(v10 + 15) & 0x3F;
      }
LABEL_14:
      v17 = 16 * v14 - v16;
      v18 = a2 & 0xC003FFFF;
      Heap_0 = (void *)RtlAllocateHeap_0(Src, v18, a4);
      if ( Heap_0 )
      {
        v20 = v17;
        if ( a4 < v17 )
          v20 = a4;
        memmove(Heap_0, v5, v20);
        RtlFreeHeap_0(Src, v18, v5);
      }
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v22 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v22 = 2147353472LL;
      if ( *(_BYTE *)v22 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( Heap_0 )
          RtlpLogHeapReallocateEvent((_DWORD)Src, (_DWORD)Heap_0, (_DWORD)v5, v17, a4, 2);
      }
      return (__int64)Heap_0;
    }
    return 0LL;
  }
  if ( (unsigned __int16 *)v10 == Src )
  {
    RtlpLogHeapFailure(9, (_DWORD)Src, v10, 0, 0LL, 0LL);
    return 0LL;
  }
  v24 = *((_DWORD *)Src + 29) | a2;
  if ( (v24 & 0x61000000) != 0 && (v24 & 0x10000000) == 0 )
    return RtlDebugReAllocateHeap(Src);
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
  {
    v71 = NtCurrentTeb();
    v71->LastStatusValue = -1073741801;
    v71->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0xC0000017);
    return 0LL;
  }
  v25 = a4;
  if ( !a4 )
    v25 = 1LL;
  v26 = *((_QWORD *)Src + 33) & (*((_QWORD *)Src + 32) + v25);
  if ( v26 < 0x20 )
    v26 = 32LL;
  v83 = v26;
  LODWORD(v80) = 0;
  if ( (v24 & 1) != 0 )
  {
LABEL_33:
    v9 = (__int64)(v5 - 16);
    _m_prefetchw(v5 - 16);
    if ( *(v5 - 1) == 5 )
      v9 -= 16LL * (unsigned __int8)*(v5 - 2);
    v27 = v9;
    v75 = v9;
    if ( *((_DWORD *)Src + 31) )
    {
      *(_DWORD *)(v9 + 8) ^= *((_DWORD *)Src + 34);
      if ( HIBYTE(*(_DWORD *)(v9 + 8)) != ((unsigned __int8)*(_DWORD *)(v9 + 8) ^ (unsigned __int8)(BYTE1(*(_DWORD *)(v9 + 8)) ^ HIWORD(*(_DWORD *)(v9 + 8)))) )
        RtlpAnalyzeHeapFailure(Src, v9);
      v27 = v9;
    }
    v28 = (__int64 **)*((_QWORD *)Src + 39);
    do
    {
      if ( *(unsigned __int16 *)(v9 + 8) < (unsigned __int64)*((unsigned int *)v28 + 2) )
        break;
      v28 = (__int64 **)*v28;
    }
    while ( v28 );
    v30 = Src;
    if ( (v24 & 0x3C000100) != 0 || *((_QWORD *)Src + 41) || (*(_BYTE *)(v27 + 10) & 2) != 0 )
    {
      v31 = v83 + 16;
      v83 += 16LL;
    }
    else
    {
      v31 = v83;
    }
    v32 = *(unsigned __int8 *)(v27 + 15);
    if ( (v32 & 0xFFFFFF3F) == 0 )
    {
      v38 = NtCurrentTeb();
      v38->LastStatusValue = -1073741811;
      v38->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0xC000000D);
LABEL_176:
      v67 = v80;
      goto LABEL_180;
    }
    if ( (_BYTE)v32 == 4 )
    {
      if ( *((_DWORD *)Src + 31) )
      {
        v33 = *(_DWORD *)(v9 + 8);
        v34 = v33;
        if ( (v33 & *((_DWORD *)Src + 31)) != 0 )
          v33 ^= *((_DWORD *)Src + 34);
      }
      else
      {
        v34 = *(_WORD *)(v9 + 8);
        LOWORD(v33) = v34;
      }
      v35 = *(_QWORD *)(v27 - 16) - (unsigned __int16)v33;
      v80 = v35;
      v78 = (v35 + (unsigned __int64)v34) >> 4;
      v89 = v78;
      v31 = (v31 + 4151) & 0xFFFFFFFFFFFFF000uLL;
      v83 = v31;
      v36 = v78;
      goto LABEL_65;
    }
    v36 = *(unsigned __int16 *)(v9 + 8);
    v78 = v36;
    v89 = v36;
    if ( (_BYTE)v32 == 5 )
    {
      v39 = *(unsigned __int16 *)(v27 + 12) ^ (unsigned __int64)Src[70];
    }
    else if ( (v32 & 0x40) != 0 )
    {
      v39 = *(unsigned __int16 *)(v27 + 16LL * (v32 & 0x3F) + 12);
    }
    else if ( (v32 & 0x3F) == 0x3F )
    {
      if ( (v32 & 0x80u) == 0 )
      {
        if ( *((_DWORD *)Src + 31) )
        {
          LODWORD(v45) = *(_DWORD *)(v9 + 8);
          if ( ((unsigned int)v45 & *((_DWORD *)Src + 31)) != 0 )
          {
            v39 = *(_QWORD *)(v27 + 16LL * (unsigned __int16)(Src[68] ^ v45));
            goto LABEL_74;
          }
        }
        else
        {
          LOWORD(v45) = v36;
        }
      }
      else
      {
        if ( *(_WORD *)(v9 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ (unsigned __int16)Src ^ (v27 >> 4)) )
          v45 = 0LL;
        else
          v45 = *(_QWORD *)(v27
                          - ((unsigned __int64)(*(_DWORD *)(v9 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)Src ^ (unsigned int)(v27 >> 4)) >> 12));
        LOWORD(v45) = *(_WORD *)(v45 + 36);
      }
      v39 = *(_QWORD *)(v27 + 16LL * (unsigned __int16)v45);
    }
    else
    {
      v39 = v32 & 0x3F;
    }
LABEL_74:
    v35 = 16 * v36 - v39;
    v80 = v35;
    if ( v36 < Src[216] )
    {
      v35 = (unsigned int)(1 << (v36 & 7));
      if ( ((unsigned __int8)v35 & *((_BYTE *)Src + (v36 >> 3) + 434)) == 0 )
      {
        v40 = (_WORD *)(*((_QWORD *)Src + 53) + 2 * v36);
        if ( *v40 > 1u )
          --*v40;
      }
    }
LABEL_65:
    v37 = v31 >> 4;
    v76 = v31 >> 4;
    if ( v31 >> 4 > v36 )
    {
      if ( *(_BYTE *)(v27 + 15) != 4 )
      {
        if ( (unsigned __int8)RtlpGrowBlockInPlace((_DWORD)Src, v24, v27, a4, v31 >> 4) )
          goto LABEL_176;
        v27 = v9;
      }
      if ( (v24 & 0x10) != 0 )
      {
        v5 = 0LL;
      }
      else
      {
        v24 &= 0xC003FFFF;
        v46 = *(_BYTE *)(v27 + 10);
        if ( (v46 & 2) != 0 )
        {
          v24 = v24 & 0xFFFFF1FF | (16 * (v46 & 0xE0 | 0x10));
          if ( *(_BYTE *)(v27 + 15) == 4 )
            v61 = v27 - 32;
          else
            v61 = v27 + 16LL * *(unsigned __int16 *)(v27 + 8) - 16;
          v62 = *(unsigned __int16 *)(v61 + 2);
          if ( (__int16)v62 > 0 )
            v24 |= v62 << 18;
        }
        else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
        {
          v66 = *(unsigned __int8 *)(v27 + 11);
          if ( (_BYTE)v66 )
            v24 |= v66 << 18;
        }
        if ( *((_DWORD *)Src + 31) )
        {
          *(_BYTE *)(v27 + 11) = *(_BYTE *)(v27 + 8) ^ *(_BYTE *)(v27 + 9) ^ *(_BYTE *)(v27 + 10);
          *(_DWORD *)(v27 + 8) ^= *((_DWORD *)Src + 34);
        }
        v9 = 0LL;
        v47 = RtlAllocateHeap_0(Src, v24, a4);
        v82 = (void *)v47;
        if ( v47 )
        {
          v48 = v47 - 16;
          v77 = v47 - 16;
          _m_prefetchw((const void *)(v47 - 16));
          if ( *(_BYTE *)(v47 - 16 + 15) == 5 )
          {
            v48 -= 16LL * *(unsigned __int8 *)(v48 + 14);
            v77 = v48;
          }
          if ( *((_DWORD *)Src + 31) )
          {
            *(_DWORD *)(v48 + 8) ^= *((_DWORD *)Src + 34);
            if ( HIBYTE(*(_DWORD *)(v48 + 8)) != ((unsigned __int8)*(_DWORD *)(v48 + 8) ^ (unsigned __int8)(BYTE1(*(_DWORD *)(v48 + 8)) ^ HIWORD(*(_DWORD *)(v48 + 8)))) )
              RtlpAnalyzeHeapFailure(Src, v48);
          }
          if ( (*(_BYTE *)(v48 + 10) & 2) != 0 )
          {
            ExtraStuffPointer = (_OWORD *)RtlpGetExtraStuffPointer(v48);
            v81 = ExtraStuffPointer;
            if ( *((_DWORD *)Src + 31) )
            {
              v57 = *(_DWORD *)(v75 + 8) ^ *((_DWORD *)Src + 34);
              *(_DWORD *)(v75 + 8) = v57;
              v58 = HIBYTE(v57) == (unsigned __int8)(v57 ^ BYTE1(v57) ^ BYTE2(v57));
              v30 = Src;
              if ( !v58 )
                RtlpAnalyzeHeapFailure(Src, v75);
              ExtraStuffPointer = v81;
            }
            if ( (*(_BYTE *)(v75 + 10) & 2) != 0 )
            {
              v59 = RtlpGetExtraStuffPointer(v75);
              *(_QWORD *)(v60 + 8) = *(_QWORD *)(v59 + 8);
            }
            else
            {
              *ExtraStuffPointer = 0LL;
            }
            if ( *((_DWORD *)v30 + 31) )
            {
              *(_BYTE *)(v75 + 11) = *(_BYTE *)(v75 + 8) ^ *(_BYTE *)(v75 + 9) ^ *(_BYTE *)(v75 + 10);
              *(_DWORD *)(v75 + 8) ^= *((_DWORD *)v30 + 34);
            }
            v48 = v77;
          }
          if ( *((_DWORD *)v30 + 31) )
          {
            *(_BYTE *)(v48 + 11) = *(_BYTE *)(v48 + 8) ^ *(_BYTE *)(v48 + 9) ^ *(_BYTE *)(v48 + 10);
            *(_DWORD *)(v48 + 8) ^= *((_DWORD *)v30 + 34);
          }
          v9 = 0LL;
          if ( v73 )
          {
            RtlLeaveCriticalSection(*((_QWORD *)v30 + 44));
            v73 = 0;
            v24 &= ~1u;
          }
          v49 = v80;
          if ( a4 < v80 )
            v49 = a4;
          memmove(v82, v5, v49);
          RtlFreeHeap_0(Src, v24, v5);
          v47 = (__int64)v82;
        }
        LODWORD(v8) = (_DWORD)v5;
        v88 = v5;
        v5 = (char *)v47;
      }
      goto LABEL_176;
    }
    v41 = v37 + 1;
    v42 = v31 >> 4;
    if ( v37 + 1 == v36 )
    {
      LODWORD(v37) = v37 + 1;
      v76 = v41;
      v31 += 16LL;
      v83 = v31;
      v42 = v41;
    }
    if ( *(_BYTE *)(v27 + 15) == 4 )
    {
      *(_WORD *)(v9 + 8) = v31 - a4;
    }
    else if ( (*(_BYTE *)(v27 + 10) & 2) != 0 )
    {
      v63 = v27 + 16 * v42 - 16;
      *(_OWORD *)v63 = *(_OWORD *)(v27 + 16LL * *(unsigned __int16 *)(v9 + 8) - 16);
      if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      {
        *(_WORD *)(v63 + 2) = RtlpUpdateTagEntry((_DWORD)Src, *(unsigned __int16 *)(v63 + 2), v36, v37, 4);
        v27 = v9;
      }
    }
    else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      updated = RtlpUpdateTagEntry((_DWORD)Src, *(unsigned __int8 *)(v27 + 11), *(unsigned __int16 *)(v9 + 8), v37, 4);
      v27 = v9;
      *(_BYTE *)(v9 + 11) = updated;
    }
    v35 = v80;
    if ( a4 <= v80 )
    {
LABEL_85:
      if ( (v30[56] & 0x20) != 0 )
        *(__m128i *)(v9 + a4 + 16) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
      v27 = v76;
      v31 = v78;
      if ( v76 != v78 )
      {
        v52 = *(unsigned __int8 *)(v9 + 10);
        LOBYTE(v52) = v52 & 0xFE;
        if ( *(_BYTE *)(v9 + 15) == 4 )
        {
          if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
          {
            v64 = RtlpUpdateTagEntry((_DWORD)v30, *(unsigned __int16 *)(v9 - 48 + 18), v78, v76, 5);
            v65 = v9 - 48;
            *(_WORD *)(v9 - 48 + 18) = v64;
            v31 = v78;
          }
          else
          {
            v65 = v9 - 48;
          }
          v85 = (const void *)(v65 + v83);
          v84 = 16 * v31 - v83;
          v79 = RtlpSecMemFreeVirtualMemory(v83, &v85, &v84, 0x4000LL);
          if ( v79 >= 0 )
          {
            *(_QWORD *)(v65 + 32) -= v84;
            v27 = v76;
          }
          else
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v85, v84, v79);
            RtlpBreakPointHeap();
            v27 = v76;
          }
        }
        else
        {
          v53 = *(unsigned __int16 *)(v9 + 8) - (unsigned __int64)(unsigned __int16)v76;
          *(_WORD *)(v9 + 8) = v76;
          v54 = *(_BYTE *)(v9 + 14);
          if ( v54 )
            v55 = (v9 & 0xFFFF0000) - (v54 << 16) + 0x10000;
          else
            v55 = (int)v30;
          RtlpCreateSplitBlock(
            (_DWORD)v30,
            v55,
            v9 + 16 * v76,
            v52,
            (*((_DWORD *)v30 + 28) & 0x40) != 0,
            (_WORD)v76,
            v53);
          v27 = v76;
        }
      }
      if ( *(_BYTE *)(v9 + 15) != 4 )
      {
        v44 = v83 - a4;
        if ( v83 - a4 >= 0x3F )
        {
          v27 *= 2LL;
          *(_QWORD *)(v9 + 8 * v27) = v44;
          *(_BYTE *)(v9 + 15) = 63;
        }
        else
        {
          *(_BYTE *)(v9 + 15) = v44;
        }
      }
      goto LABEL_176;
    }
    if ( (v24 & 8) != 0 )
    {
      memset_thunk_772440563353939046(&v5[v80], 0, a4 - v80);
      goto LABEL_85;
    }
    if ( (Src[56] & 0x40) == 0 )
      goto LABEL_85;
    v50 = v80 & 3;
    v86 = v50;
    if ( (v80 & 3) != 0 )
    {
      v50 = 4 - v50;
      v86 = v50;
    }
    if ( a4 <= v50 + v80 )
      goto LABEL_85;
    if ( ((a4 - v50 - v80) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
      goto LABEL_85;
    v35 = v50 + v80 + v27 + 16;
    v90 = v35;
    v51 = ((a4 - v50 - v80) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
    v87 = v51;
    if ( !v51 )
      goto LABEL_85;
    if ( (v35 & 4) != 0 )
    {
      *(_DWORD *)v35 = -1163005939;
      v87 = --v51;
      if ( !v51 )
        goto LABEL_85;
      v35 += 4LL;
      v90 = v35;
    }
    memset64((void *)v35, 0xBAADF00DBAADF00DuLL, v51 >> 1);
    v30 = Src;
    if ( (v51 & 1) != 0 )
      *(_DWORD *)(v35 + 4 * v51 - 4) = -1163005939;
    goto LABEL_85;
  }
  if ( (unsigned int)RtlTryEnterCriticalSection(*((_QWORD *)Src + 44)) )
  {
    ++*((_DWORD *)Src + 154);
LABEL_32:
    v73 = 1;
    v24 ^= 1u;
    goto LABEL_33;
  }
  if ( !byte_1801CB8C8 )
  {
    RtlEnterCriticalSection(*((_QWORD *)Src + 44));
    RtlpUpdateHeapRates(Src, 1LL);
    goto LABEL_32;
  }
  v68 = NtCurrentTeb();
  v68->LastStatusValue = -1073741420;
  v68->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0xC0000194);
  v67 = 0;
LABEL_180:
  v69 = Src;
  if ( v9 && *((_DWORD *)Src + 31) )
  {
    *(_BYTE *)(v9 + 11) = *(_BYTE *)(v9 + 8) ^ *(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10);
    *(_DWORD *)(v9 + 8) ^= *((_DWORD *)Src + 34);
  }
  if ( v73 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v69, v27, v31, v35) )
    v70 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v70 = 2147353472LL;
  if ( *(_BYTE *)v70 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v5 && (v24 & 0x800000) == 0 )
    RtlpLogHeapReallocateEvent((_DWORD)Src, (_DWORD)v5, v8, v67, a4, 3);
  return (__int64)v5;
}
