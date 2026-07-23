/*
 * XREFs of RtlpReAllocateHeap @ 0x18000C7B0
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180005FB0 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlTryEnterCriticalSection @ 0x18000C670 (RtlTryEnterCriticalSection.c)
 *     RtlDebugReAllocateHeap @ 0x18000D850 (RtlDebugReAllocateHeap.c)
 *     RtlpUpdateTagEntry @ 0x18000DDC8 (RtlpUpdateTagEntry.c)
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x180012A14 (RtlpBreakPointHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpGrowBlockInPlace @ 0x180013260 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180013960 (RtlpCreateSplitBlock.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpGetExtraStuffPointer @ 0x18005FFD0 (RtlpGetExtraStuffPointer.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18006D540 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpLogHeapReallocateEvent @ 0x18008225C (RtlpLogHeapReallocateEvent.c)
 *     RtlpUpdateHeapRates @ 0x1800C9380 (RtlpUpdateHeapRates.c)
 *     RtlpHeapExceptionFilter @ 0x1801004C8 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

char *__fastcall RtlpReAllocateHeap(__int64 a1, int a2, char *a3, SIZE_T a4)
{
  char *v5; // r15
  __int64 v8; // r14
  char *v9; // r13
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  char v15; // cl
  unsigned __int64 v16; // rcx
  SIZE_T v17; // rdi
  ULONG v18; // esi
  PVOID Heap_0; // r14
  size_t v20; // r8
  _DWORD *SharedData; // rcx
  __int64 v22; // rcx
  ULONG v24; // esi
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  char *v27; // rdx
  __int64 **v28; // rcx
  int v29; // eax
  __int64 v30; // rdi
  unsigned __int64 v31; // r8
  int v32; // ecx
  int v33; // eax
  unsigned __int16 v34; // cx
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // rcx
  struct _TEB *v37; // rdi
  unsigned __int64 v38; // rcx
  _WORD *v39; // rcx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r9
  char updated; // al
  __int64 v43; // rdx
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  char v47; // cl
  char *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  char *v52; // r13
  unsigned int v53; // edx
  char v54; // cl
  size_t v55; // r8
  SIZE_T v56; // rcx
  __int64 v57; // r9
  unsigned __int64 v58; // r8
  __int64 v59; // r10
  _OWORD *ExtraStuffPointer; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // edi
  bool v64; // zf
  __int64 v65; // rax
  __int64 v66; // rdx
  char *v67; // rax
  int v68; // ecx
  char *v69; // r11
  __int16 v70; // ax
  char *v71; // rdi
  int v72; // eax
  int v73; // edi
  struct _TEB *v74; // rdi
  __int64 v75; // rcx
  struct _TEB *v76; // rdi
  struct _TEB *v77; // rdi
  int v78; // [rsp+28h] [rbp-100h]
  char v79; // [rsp+40h] [rbp-E8h]
  char *v81; // [rsp+50h] [rbp-D8h]
  int v82[2]; // [rsp+58h] [rbp-D0h]
  int v83[2]; // [rsp+58h] [rbp-D0h]
  unsigned __int64 v84; // [rsp+78h] [rbp-B0h]
  int v85; // [rsp+78h] [rbp-B0h]
  SIZE_T v86; // [rsp+80h] [rbp-A8h]
  _OWORD *v87; // [rsp+90h] [rbp-98h]
  char *v88; // [rsp+98h] [rbp-90h]
  unsigned __int64 v89; // [rsp+A0h] [rbp-88h]
  unsigned __int64 v90; // [rsp+B8h] [rbp-70h] BYREF
  char *v91; // [rsp+C0h] [rbp-68h] BYREF
  SIZE_T v92; // [rsp+C8h] [rbp-60h]
  unsigned __int64 v93; // [rsp+D0h] [rbp-58h]
  char *v94; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v95; // [rsp+E0h] [rbp-48h]
  __int64 v96; // [rsp+E8h] [rbp-40h]

  v5 = a3;
  v8 = 0LL;
  v9 = 0LL;
  v79 = 0;
  v91 = 0LL;
  v90 = 0LL;
  v94 = 0LL;
  if ( !a3 )
  {
    v77 = NtCurrentTeb();
    v77->LastStatusValue = 0;
    v77->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0);
    return 0LL;
  }
  _m_prefetchw(a3 - 16);
  if ( *(a3 - 1) == 5 )
    v10 = (unsigned __int64)&a3[-16 * (unsigned __int8)*(a3 - 2) - 16];
  else
    v10 = (unsigned __int64)(a3 - 16);
  if ( *(_BYTE *)(a1 + 418) == 2 && *(_QWORD *)(a1 + 408) && *(char *)(v10 + 15) < 0 )
  {
    if ( (a2 & 0x10) == 0 )
    {
      v11 = v10 >> 4;
      v12 = *(_DWORD *)(v10 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)(v10 >> 4) ^ (unsigned int)a1;
      if ( (_WORD)v12 )
        v13 = 0LL;
      else
        v13 = *(_QWORD *)(v10 - (v12 >> 12));
      v14 = *(unsigned __int16 *)(v13 + 36);
      v15 = *(_BYTE *)(v10 + 15);
      if ( v15 == 5 )
      {
        v16 = *(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v10 + 12);
      }
      else if ( (v15 & 0x40) != 0 )
      {
        v16 = *(unsigned __int16 *)(v10 + 16LL * (*(_BYTE *)(v10 + 15) & 0x3F) + 12);
      }
      else if ( (v15 & 0x3F) == 0x3F )
      {
        if ( v15 >= 0 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v29 = *(_DWORD *)(v10 + 8);
            if ( (v29 & *(_DWORD *)(a1 + 124)) != 0 )
            {
              v16 = *(_QWORD *)(v10 + 16LL * (unsigned __int16)(*(_WORD *)(a1 + 136) ^ v29));
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
          if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(v11 ^ *(_WORD *)(v10 + 8) ^ a1)) )
            v8 = *(_QWORD *)(v10
                           - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)v11 ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)a1) >> 12));
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
      Heap_0 = RtlAllocateHeap_0((PVOID)a1, v18, a4);
      if ( Heap_0 )
      {
        v20 = v17;
        if ( a4 < v17 )
          v20 = a4;
        memmove(Heap_0, v5, v20);
        RtlFreeHeap_0((PVOID)a1, v18, v5);
      }
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v22 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v22 = 2147353472LL;
      if ( *(_BYTE *)v22 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( Heap_0 )
          RtlpLogHeapReallocateEvent(a1, (_DWORD)Heap_0, (_DWORD)v5, v17, a4, 2);
      }
      return (char *)Heap_0;
    }
    return 0LL;
  }
  if ( v10 == a1 )
  {
    RtlpLogHeapFailure(9, a1, v10, 0, 0LL, 0LL);
    return 0LL;
  }
  v24 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v24 & 0x61000000) != 0 && (v24 & 0x10000000) == 0 )
    return (char *)RtlDebugReAllocateHeap(a1);
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
  {
    v76 = NtCurrentTeb();
    v76->LastStatusValue = -1073741801;
    v76->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741801);
    return 0LL;
  }
  v25 = a4;
  if ( !a4 )
    v25 = 1LL;
  v26 = *(_QWORD *)(a1 + 264) & (*(_QWORD *)(a1 + 256) + v25);
  if ( v26 < 0x20 )
    v26 = 32LL;
  v89 = v26;
  LODWORD(v86) = 0;
  if ( (v24 & 1) != 0 )
  {
LABEL_33:
    v9 = v5 - 16;
    _m_prefetchw(v5 - 16);
    if ( *(v5 - 1) == 5 )
      v9 -= 16 * (unsigned __int8)*(v5 - 2);
    v27 = v9;
    v81 = v9;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_DWORD *)v9 + 2) ^= *(_DWORD *)(a1 + 136);
      if ( HIBYTE(*((_DWORD *)v9 + 2)) != ((unsigned __int8)*((_DWORD *)v9 + 2) ^ (unsigned __int8)(BYTE1(*((_DWORD *)v9 + 2)) ^ HIWORD(*((_DWORD *)v9 + 2)))) )
        RtlpAnalyzeHeapFailure(a1, v9);
      v27 = v9;
    }
    v28 = *(__int64 ***)(a1 + 312);
    do
    {
      if ( *((unsigned __int16 *)v9 + 4) < (unsigned __int64)*((unsigned int *)v28 + 2) )
        break;
      v28 = (__int64 **)*v28;
    }
    while ( v28 );
    v30 = a1;
    if ( (v24 & 0x3C000100) != 0 || *(_QWORD *)(a1 + 328) || (v27[10] & 2) != 0 )
    {
      v31 = v89 + 16;
      v89 += 16LL;
    }
    else
    {
      v31 = v89;
    }
    v32 = (unsigned __int8)v27[15];
    if ( (v32 & 0xFFFFFF3F) == 0 )
    {
      v37 = NtCurrentTeb();
      v37->LastStatusValue = -1073741811;
      v37->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
LABEL_173:
      v73 = v86;
      goto LABEL_177;
    }
    if ( (_BYTE)v32 == 4 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v33 = *((_DWORD *)v9 + 2);
        v34 = v33;
        if ( (v33 & *(_DWORD *)(a1 + 124)) != 0 )
          v33 ^= *(_DWORD *)(a1 + 136);
      }
      else
      {
        v34 = *((_WORD *)v9 + 4);
        LOWORD(v33) = v34;
      }
      v86 = *((_QWORD *)v27 - 2) - (unsigned __int16)v33;
      v84 = (v86 + v34) >> 4;
      v95 = v84;
      v31 = (v31 + 4151) & 0xFFFFFFFFFFFFF000uLL;
      v89 = v31;
      v35 = v84;
      goto LABEL_65;
    }
    v35 = *((unsigned __int16 *)v9 + 4);
    v84 = v35;
    v95 = v35;
    if ( (_BYTE)v32 == 5 )
    {
      v38 = *((unsigned __int16 *)v27 + 6) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v32 & 0x40) != 0 )
    {
      v38 = *(unsigned __int16 *)&v27[16 * (v32 & 0x3F) + 12];
    }
    else if ( (v32 & 0x3F) == 0x3F )
    {
      if ( (v32 & 0x80u) == 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          LODWORD(v46) = *((_DWORD *)v9 + 2);
          if ( ((unsigned int)v46 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v38 = *(_QWORD *)&v27[16 * (unsigned __int16)(*(_WORD *)(a1 + 136) ^ v46)];
            goto LABEL_74;
          }
        }
        else
        {
          LOWORD(v46) = v35;
        }
      }
      else
      {
        if ( *((_WORD *)v9 + 4) ^ (unsigned __int16)(RtlpLFHKey ^ a1 ^ ((unsigned __int64)v27 >> 4)) )
          v46 = 0LL;
        else
          v46 = *(_QWORD *)&v27[-((unsigned __int64)(*((_DWORD *)v9 + 2) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ (unsigned int)((unsigned __int64)v27 >> 4)) >> 12)];
        LOWORD(v46) = *(_WORD *)(v46 + 36);
      }
      v38 = *(_QWORD *)&v27[16 * (unsigned __int16)v46];
    }
    else
    {
      v38 = v32 & 0x3F;
    }
LABEL_74:
    v86 = 16 * v35 - v38;
    if ( v35 < *(unsigned __int16 *)(a1 + 432)
      && ((unsigned __int8)(1 << (v35 & 7)) & *(_BYTE *)((v35 >> 3) + a1 + 434)) == 0 )
    {
      v39 = (_WORD *)(*(_QWORD *)(a1 + 424) + 2 * v35);
      if ( *v39 > 1u )
        --*v39;
    }
LABEL_65:
    v36 = v31 >> 4;
    *(_QWORD *)v82 = v31 >> 4;
    if ( v31 >> 4 > v35 )
    {
      if ( v27[15] != 4 )
      {
        if ( (unsigned __int8)RtlpGrowBlockInPlace(a1, v31 >> 4) )
          goto LABEL_173;
        v27 = v9;
      }
      if ( (v24 & 0x10) != 0 )
      {
        v5 = 0LL;
      }
      else
      {
        v24 &= 0xC003FFFF;
        v47 = v27[10];
        if ( (v47 & 2) != 0 )
        {
          v24 = v24 & 0xFFFFF1FF | (16 * (v47 & 0xE0 | 0x10));
          if ( v27[15] == 4 )
            v67 = v27 - 32;
          else
            v67 = &v27[16 * *((unsigned __int16 *)v27 + 4) - 16];
          v68 = *((unsigned __int16 *)v67 + 1);
          if ( (__int16)v68 > 0 )
            v24 |= v68 << 18;
        }
        else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
        {
          v72 = (unsigned __int8)v27[11];
          if ( (_BYTE)v72 )
            v24 |= v72 << 18;
        }
        if ( *(_DWORD *)(a1 + 124) )
        {
          v27[11] = v27[8] ^ v27[9] ^ v27[10];
          *((_DWORD *)v27 + 2) ^= *(_DWORD *)(a1 + 136);
        }
        v9 = 0LL;
        v48 = (char *)RtlAllocateHeap_0((PVOID)a1, v24, a4);
        v88 = v48;
        if ( v48 )
        {
          v52 = v48 - 16;
          *(_QWORD *)v83 = v48 - 16;
          _m_prefetchw(v48 - 16);
          if ( *(v48 - 1) == 5 )
          {
            v52 -= 16 * (unsigned __int8)v52[14];
            *(_QWORD *)v83 = v52;
          }
          if ( *(_DWORD *)(a1 + 124) )
          {
            *((_DWORD *)v52 + 2) ^= *(_DWORD *)(a1 + 136);
            v53 = *((_DWORD *)v52 + 2);
            v54 = v53 ^ BYTE1(v53) ^ BYTE2(v53);
            v49 = HIBYTE(v53);
            if ( (_BYTE)v49 != v54 )
              RtlpAnalyzeHeapFailure(a1, v52);
          }
          if ( (v52[10] & 2) != 0 )
          {
            ExtraStuffPointer = (_OWORD *)RtlpGetExtraStuffPointer(v52, v49, v50, v51);
            v87 = ExtraStuffPointer;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v63 = *((_DWORD *)v81 + 2) ^ *(_DWORD *)(a1 + 136);
              *((_DWORD *)v81 + 2) = v63;
              v64 = HIBYTE(v63) == (unsigned __int8)(v63 ^ BYTE1(v63) ^ BYTE2(v63));
              v30 = a1;
              if ( !v64 )
                RtlpAnalyzeHeapFailure(a1, v81);
              ExtraStuffPointer = v87;
            }
            if ( (v81[10] & 2) != 0 )
            {
              v65 = RtlpGetExtraStuffPointer(v81, ExtraStuffPointer, v61, v62);
              *(_QWORD *)(v66 + 8) = *(_QWORD *)(v65 + 8);
            }
            else
            {
              *ExtraStuffPointer = 0LL;
            }
            if ( *(_DWORD *)(v30 + 124) )
            {
              v81[11] = v81[8] ^ v81[9] ^ v81[10];
              *((_DWORD *)v81 + 2) ^= *(_DWORD *)(v30 + 136);
            }
            v52 = *(char **)v83;
          }
          if ( *(_DWORD *)(v30 + 124) )
          {
            v52[11] = v52[8] ^ v52[9] ^ v52[10];
            *((_DWORD *)v52 + 2) ^= *(_DWORD *)(v30 + 136);
          }
          v9 = 0LL;
          if ( v79 )
          {
            RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(v30 + 352));
            v79 = 0;
            v24 &= ~1u;
          }
          v55 = v86;
          if ( a4 < v86 )
            v55 = a4;
          memmove(v88, v5, v55);
          RtlFreeHeap_0((PVOID)a1, v24, v5);
          v48 = v88;
        }
        LODWORD(v8) = (_DWORD)v5;
        v94 = v5;
        v5 = v48;
      }
      goto LABEL_173;
    }
    v40 = v36 + 1;
    v41 = v31 >> 4;
    if ( v36 + 1 == v35 )
    {
      LODWORD(v36) = v36 + 1;
      *(_QWORD *)v82 = v40;
      v31 += 16LL;
      v89 = v31;
      v41 = v40;
    }
    if ( v27[15] == 4 )
    {
      *((_WORD *)v9 + 4) = v31 - a4;
    }
    else if ( (v27[10] & 2) != 0 )
    {
      v69 = &v27[16 * v41 - 16];
      *(_OWORD *)v69 = *(_OWORD *)&v27[16 * *((unsigned __int16 *)v9 + 4) - 16];
      if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      {
        *((_WORD *)v69 + 1) = RtlpUpdateTagEntry(a1, *((unsigned __int16 *)v69 + 1), v35, v36, 4);
        v27 = v9;
      }
    }
    else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      updated = RtlpUpdateTagEntry(a1, (unsigned __int8)v27[11], *((unsigned __int16 *)v9 + 4), v36, 4);
      v27 = v9;
      v9[11] = updated;
    }
    if ( a4 <= v86 )
    {
LABEL_85:
      if ( (*(_BYTE *)(v30 + 112) & 0x20) != 0 )
        *(__m128i *)&v9[a4 + 16] = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
      v43 = *(_QWORD *)v82;
      v44 = v84;
      if ( *(_QWORD *)v82 != v84 )
      {
        if ( v9[15] == 4 )
        {
          if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
          {
            v70 = RtlpUpdateTagEntry(v30, *((unsigned __int16 *)v9 - 15), v84, v82[0], 5);
            v71 = v9 - 48;
            *((_WORD *)v9 - 15) = v70;
            v44 = v84;
          }
          else
          {
            v71 = v9 - 48;
          }
          v91 = &v71[v89];
          v90 = 16 * v44 - v89;
          v85 = RtlpSecMemFreeVirtualMemory(v89, &v91, &v90, 0x4000LL);
          if ( v85 >= 0 )
          {
            *((_QWORD *)v71 + 4) -= v90;
            v43 = *(_QWORD *)v82;
          }
          else
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v91, v90, v85);
            RtlpBreakPointHeap();
            v43 = *(_QWORD *)v82;
          }
        }
        else
        {
          v59 = *((unsigned __int16 *)v9 + 4) - (unsigned __int64)LOWORD(v82[0]);
          *((_WORD *)v9 + 4) = v82[0];
          LOWORD(v78) = v82[0];
          RtlpCreateSplitBlock(v30, (*(_DWORD *)(v30 + 112) & 0x40) != 0, v78, v59);
          v43 = *(_QWORD *)v82;
        }
      }
      if ( v9[15] != 4 )
      {
        v45 = v89 - a4;
        if ( v89 - a4 >= 0x3F )
        {
          *(_QWORD *)&v9[16 * v43] = v45;
          v9[15] = 63;
        }
        else
        {
          v9[15] = v45;
        }
      }
      goto LABEL_173;
    }
    if ( (v24 & 8) != 0 )
    {
      memset_thunk_772440563353939046(&v5[v86], 0, a4 - v86);
      goto LABEL_85;
    }
    if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
      goto LABEL_85;
    v56 = v86 & 3;
    v92 = v56;
    if ( (v86 & 3) != 0 )
    {
      v56 = 4 - v56;
      v92 = v56;
    }
    if ( a4 <= v56 + v86 )
      goto LABEL_85;
    if ( ((a4 - v56 - v86) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
      goto LABEL_85;
    v57 = (__int64)&v27[v56 + 16 + v86];
    v96 = v57;
    v58 = ((a4 - v56 - v86) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
    v93 = v58;
    if ( !v58 )
      goto LABEL_85;
    if ( (v57 & 4) != 0 )
    {
      *(_DWORD *)v57 = -1163005939;
      v93 = --v58;
      if ( !v58 )
        goto LABEL_85;
      v57 += 4LL;
      v96 = v57;
    }
    memset64((void *)v57, 0xBAADF00DBAADF00DuLL, v58 >> 1);
    v30 = a1;
    if ( (v58 & 1) != 0 )
      *(_DWORD *)(v57 + 4 * v58 - 4) = -1163005939;
    goto LABEL_85;
  }
  if ( RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
  {
    ++*(_DWORD *)(a1 + 616);
LABEL_32:
    v79 = 1;
    v24 ^= 1u;
    goto LABEL_33;
  }
  if ( !byte_1801CA908 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
    RtlpUpdateHeapRates(a1, 1LL);
    goto LABEL_32;
  }
  v74 = NtCurrentTeb();
  v74->LastStatusValue = -1073741420;
  v74->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741420);
  v73 = 0;
LABEL_177:
  if ( v9 && *(_DWORD *)(a1 + 124) )
  {
    v9[11] = v9[8] ^ v9[9] ^ v9[10];
    *((_DWORD *)v9 + 2) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v79 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  if ( RtlGetCurrentServiceSessionId() )
    v75 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v75 = 2147353472LL;
  if ( *(_BYTE *)v75 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v5 && (v24 & 0x800000) == 0 )
    RtlpLogHeapReallocateEvent(a1, (_DWORD)v5, v8, v73, a4, 3);
  return v5;
}
