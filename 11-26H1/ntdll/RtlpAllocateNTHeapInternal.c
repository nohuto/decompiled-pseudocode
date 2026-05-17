/*
 * XREFs of RtlpAllocateNTHeapInternal @ 0x18001C810
 * Callers:
 *     RtlpHpTagAllocateHeap @ 0x180097930 (RtlpHpTagAllocateHeap.c)
 *     RtlAllocateHeapFast @ 0x18013FD70 (RtlAllocateHeapFast.c)
 *     RtlAllocateHeapFull @ 0x18013FEB0 (RtlAllocateHeapFull.c)
 * Callees:
 *     RtlpCallInterceptRoutine @ 0x18001C570 (RtlpCallInterceptRoutine.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18001CED0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpAllocateHeap @ 0x18001E7C0 (RtlpAllocateHeap.c)
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800257B0 (RtlpAnalyzeHeapFailure.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpHpStackTraceAddStack @ 0x1800C0100 (RtlpHpStackTraceAddStack.c)
 *     RtlpAllocateHeapRaiseException @ 0x180113150 (RtlpAllocateHeapRaiseException.c)
 *     RtlpLogHeapAllocateEvent @ 0x1801131DC (RtlpLogHeapAllocateEvent.c)
 */

unsigned __int64 __fastcall RtlpAllocateNTHeapInternal(_DWORD *Src, unsigned __int64 a2, int a3)
{
  int v3; // eax
  unsigned int v5; // esi
  unsigned int v6; // r15d
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r12
  int v9; // r13d
  __int64 v10; // r12
  unsigned __int64 v11; // r14
  __int64 *i; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 Heap; // rdi
  unsigned __int64 v17; // r8
  __int64 v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rax
  struct _TEB *v21; // r14
  unsigned int v22; // edx
  __int64 v23; // r8
  unsigned int v24; // eax
  unsigned int v25; // ecx
  int v26; // eax
  int v27; // ecx
  _DWORD *SharedData; // rcx
  __int64 v29; // rcx
  unsigned __int64 v31; // rcx
  unsigned __int16 v32; // r14
  unsigned __int64 v33; // r8
  char v34; // cl
  __int16 v35; // r9
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int16 v39; // r14
  __int16 v40; // cx
  _BYTE *v41; // rdx
  char v42; // r8
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  unsigned __int64 *v45; // [rsp+20h] [rbp-68h]
  __int64 v46; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v47; // [rsp+98h] [rbp+10h] BYREF
  char v48; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v49; // [rsp+A8h] [rbp+20h]

  v3 = Src[29];
  v5 = v3 | a3;
  v6 = 0;
  v7 = a2;
  LODWORD(v46) = 0;
  v8 = 0LL;
  v47 = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
  {
    LODWORD(v46) = 5;
    Heap = 0LL;
    goto LABEL_21;
  }
  v9 = Src[36];
  if ( v9 )
  {
    if ( (v5 & 0x3C000102) == 0 && (v3 & 0x1000000) == 0 )
    {
      v45 = &v47;
      if ( (int)RtlpCallInterceptRoutine(v9, (__int64)Src, 0LL, 1) < 0 )
      {
LABEL_44:
        Heap = 0LL;
        goto LABEL_21;
      }
      v31 = (v47 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      v7 += v31 + 16;
      v47 = v31 + 16;
    }
    else
    {
      v9 = 0;
    }
  }
  v10 = 1LL;
  if ( v7 )
    v10 = v7;
  v8 = (v10 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
  v11 = v8 >> 4;
  if ( (v5 & 0x7D810F61) != 0 )
  {
LABEL_45:
    v20 = 0LL;
  }
  else
  {
    if ( v7 <= RtlpLargestLfhBlock && ((unsigned __int8)(1 << ((v8 >> 4) & 7)) & *((_BYTE *)Src + (v8 >> 7) + 434)) != 0 )
    {
      v14 = *((_QWORD *)Src + 53);
      v15 = *((_QWORD *)Src + 51);
      LODWORD(v46) = 2;
      Heap = RtlpLowFragHeapAllocFromContext(v15, *(unsigned __int16 *)(v14 + 2 * v11), v7, v5, v45);
      if ( Heap )
      {
LABEL_13:
        if ( !v9 )
          goto LABEL_27;
        v32 = v47;
        v33 = Heap - 16;
        v34 = *(_BYTE *)(Heap - 16 + 15);
        v7 -= v47;
        v35 = v47;
        v36 = Heap + (unsigned __int16)v47;
        v49 = Heap - 16;
        Heap = v36;
        v48 = 0;
        if ( v34 == 4 )
        {
          if ( ((*((_BYTE *)Src + 116) | (unsigned __int8)v5) & 1) == 0 )
          {
            RtlEnterCriticalSection(*((_QWORD *)Src + 44));
            v33 = v49;
            v48 = 1;
          }
          if ( Src[31] )
          {
            *(_DWORD *)(v33 + 8) ^= Src[34];
            if ( HIBYTE(*(_DWORD *)(v33 + 8)) != ((unsigned __int8)*(_DWORD *)(v33 + 8) ^ (unsigned __int8)(BYTE1(*(_DWORD *)(v33 + 8)) ^ HIWORD(*(_DWORD *)(v33 + 8)))) )
            {
              RtlpAnalyzeHeapFailure(Src, v33);
              v33 = v49;
            }
          }
          v40 = *(_WORD *)(v33 + 8) + v32;
          *(_WORD *)(v33 + 8) = v40;
          *(_BYTE *)(v33 + 14) = v32 >> 4;
          if ( Src[31] )
          {
            *(_BYTE *)(v33 + 11) = HIBYTE(v40) ^ *(_BYTE *)(v33 + 10) ^ v40;
            *(_DWORD *)(v33 + 8) ^= Src[34];
          }
          *(_BYTE *)(Heap - 2) = v32 >> 4;
          *(_BYTE *)(Heap - 1) = 5;
          *(_WORD *)(Heap - 4) = v32 + v40;
          *(_DWORD *)(Heap - 8) = v9;
          if ( v48 )
            RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
        }
        else
        {
          if ( v34 == 5 )
          {
            LOWORD(v37) = *((_WORD *)Src + 70) ^ *(_WORD *)(v33 + 12);
          }
          else if ( (v34 & 0x40) != 0 )
          {
            LOWORD(v37) = *(_WORD *)(v33 + 16LL * (v34 & 0x3F) + 12);
          }
          else if ( (v34 & 0x3F) == 0x3F )
          {
            if ( v34 >= 0 )
            {
              if ( Src[31] )
              {
                LODWORD(v38) = *(_DWORD *)(v33 + 8);
                if ( ((unsigned int)v38 & Src[31]) != 0 )
                  LOWORD(v38) = *((_WORD *)Src + 68) ^ v38;
                v32 = v47;
              }
              else
              {
                LOWORD(v38) = *(_WORD *)(v33 + 8);
              }
            }
            else
            {
              v38 = (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned __int16)Src ^ *(_WORD *)(v33 + 8) ^ (v33 >> 4))
                  ? 0LL
                  : *(_QWORD *)(v33
                              - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)Src ^ *(_DWORD *)(v33 + 8) ^ (unsigned int)(v33 >> 4)) >> 12));
              LOWORD(v38) = *(_WORD *)(v38 + 36);
              v32 = v47;
            }
            v37 = *(_QWORD *)(v33 + 16LL * (unsigned __int16)v38);
          }
          else
          {
            LOWORD(v37) = v34 & 0x3F;
          }
          v39 = v32 >> 4;
          *(_BYTE *)(v36 - 2) = v39;
          *(_BYTE *)(v33 + 15) &= 0xC0u;
          *(_BYTE *)(v33 + 15) |= (unsigned __int8)v39 | 0x40;
          *(_BYTE *)(v36 - 1) = 5;
          *(_WORD *)(v36 - 4) = v37 + v35;
          *(_DWORD *)(v36 - 8) = v9;
        }
        if ( (int)RtlpCallInterceptRoutine(v9, (__int64)Src, Heap, 2) >= 0 )
          goto LABEL_27;
        RtlFreeHeap_0(Src, 0LL, Heap);
        goto LABEL_44;
      }
    }
    for ( i = (__int64 *)*((_QWORD *)Src + 39); ; i = (__int64 *)*i )
    {
      v13 = *((unsigned int *)i + 2);
      if ( v11 < v13 )
        break;
      if ( !*i )
      {
        v17 = (unsigned int)(v13 - 1);
        if ( v17 >= v13 || v11 != v17 )
          goto LABEL_45;
        break;
      }
    }
    v18 = v11 - *((unsigned int *)i + 6);
    v19 = 2 * v18;
    if ( !*((_DWORD *)i + 3) )
      v19 = v18;
    v20 = i[6] + 8 * v19;
  }
  Heap = RtlpAllocateHeap(Src, v20, (__int64)&v46);
  if ( Heap )
    goto LABEL_13;
LABEL_21:
  v21 = NtCurrentTeb();
  v22 = 341;
  v21->LastStatusValue = -1073741801;
  while ( 1 )
  {
    v23 = (v6 + v22) >> 1;
    v24 = RtlpRunTable[2 * v23];
    v25 = -1073741801 - v24;
    if ( v24 > 0xC0000017 )
    {
      v22 = v23 - 1;
      goto LABEL_33;
    }
    if ( v25 < (unsigned __int8)byte_18018DD84[8 * v23] )
      break;
    v6 = v23 + 1;
LABEL_33:
    if ( v6 > v22 )
    {
      DbgPrint("RTL: RtlNtStatusToDosError(0x%lx): No Valid Win32 Error Mapping\n", -1073741801);
      DbgPrint("RTL: Edit ntos\\rtl\\generr.c to correct the problem\n");
      DbgPrint("RTL: ERROR_MR_MID_NOT_FOUND is being returned\n");
      v27 = 317;
      goto LABEL_26;
    }
  }
  v26 = (unsigned __int16)word_18018DD86[4 * v23];
  if ( byte_18018DD85[8 * v23] == 1 )
    v27 = (unsigned __int16)RtlpStatusTable[v25 + v26];
  else
    v27 = (unsigned __int16)RtlpStatusTable[2 * v25 + v26] | ((unsigned __int16)RtlpStatusTable[2 * v25 + 1 + v26] << 16);
LABEL_26:
  v21->LastErrorValue = v27;
  if ( (v5 & 4) != 0 )
  {
    v44 = v7;
    if ( v8 )
      v44 = v8;
    RtlpAllocateHeapRaiseException(v44);
  }
LABEL_27:
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v29 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v29 = 2147353472LL;
  if ( *(_BYTE *)v29
    && (NtCurrentPeb()->TracingFlags & 1) != 0
    && (Src[29] & 0x1000000) == 0
    && ((v5 & 0x61000000) == 0 || (v5 & 0x10000000) != 0)
    && (_DWORD)v46 != 5 )
  {
    if ( !Heap )
      goto LABEL_92;
    v41 = (_BYTE *)(Heap - 16);
    _m_prefetchw((const void *)(Heap - 16));
    v42 = *(_BYTE *)(Heap - 16 + 15);
    v43 = Heap - 16;
    if ( v42 == 5 )
      v43 -= 16LL * (unsigned __int8)v41[14];
    if ( *(char *)(v43 + 15) < 0 )
      goto LABEL_92;
    _m_prefetchw(v41);
    if ( v42 == 5 )
      v41 -= 16 * (unsigned __int8)v41[14];
    if ( ((v41[10] ^ (unsigned __int8)(*((_BYTE *)Src + 138) & (Src[31] >> 17))) & 8) == 0 )
LABEL_92:
      RtlpLogHeapAllocateEvent(Src, Heap, v7);
  }
  if ( (dword_1801C7858 & 1) != 0
    && (dword_1801C7858 & 2) != 0
    && NtCurrentPeb()->ProcessHeap
    && Src != (_DWORD *)qword_1801CB148[2 * (unsigned int)dword_18017C068[BYTE1(RtlpHpEnvHandle)]]
    && Heap
    && (v5 & 0x10000000) == 0 )
  {
    RtlpHpStackTraceAddStack(Src, Heap);
  }
  return Heap;
}
