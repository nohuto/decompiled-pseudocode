/*
 * XREFs of RtlpValidateHeapSegment @ 0x1800D9FA4
 * Callers:
 *     RtlpValidateHeap @ 0x1800605E8 (RtlpValidateHeap.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x180010BC0 (RtlpHeapRemoveListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180010D40 (RtlpDeCommitFreeBlock.c)
 *     RtlpCommitBlock @ 0x1800125B0 (RtlpCommitBlock.c)
 *     RtlpFindEntry @ 0x180015010 (RtlpFindEntry.c)
 *     RtlpGetExtraStuffPointer @ 0x18005FFD0 (RtlpGetExtraStuffPointer.c)
 *     RtlpCheckBusyBlockTail @ 0x18006127C (RtlpCheckBusyBlockTail.c)
 *     RtlpHeapAddListEntry @ 0x18006CAA0 (RtlpHeapAddListEntry.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x180163160 (RtlCompareMemoryUlong.c)
 */

char __fastcall RtlpValidateHeapSegment(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _QWORD *a5,
        unsigned __int64 *a6,
        __int64 a7,
        __int64 a8)
{
  _PEB_LDR_DATA *v8; // r10
  unsigned int v10; // esi
  unsigned int v11; // r13d
  __int64 v12; // r12
  unsigned __int64 v14; // rbx
  unsigned __int8 v15; // dl
  __int64 v16; // r15
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  bool v20; // zf
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  SIZE_T v24; // rsi
  __int64 *v25; // r14
  _QWORD *v26; // r15
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  int v32; // ecx
  unsigned int v33; // ecx
  unsigned __int64 v34; // r14
  _QWORD *v35; // rsi
  _QWORD *Entry; // r8
  int v37; // ecx
  int v38; // eax
  __int64 *v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  unsigned __int16 v42; // cx
  SIZE_T v43; // r14
  unsigned __int16 v44; // cx
  char v45; // al
  char v46; // al
  unsigned int v47; // [rsp+80h] [rbp+18h]
  _DWORD *v48; // [rsp+88h] [rbp+20h]

  v48 = a4;
  v8 = 0LL;
  v10 = 0;
  v47 = 0;
  v11 = 0;
  LOWORD(v12) = 0;
  v14 = a2;
  while ( v14 < *(_QWORD *)(a2 + 72) )
  {
    *a6 = v14;
    if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
    {
      *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v14 + 11) != (*(_BYTE *)(v14 + 8) ^ (unsigned __int8)(*(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10))) )
      {
        RtlpAnalyzeHeapFailure(a1, v14);
        a4 = v48;
        v8 = 0LL;
      }
    }
    if ( (_WORD)v12 != (*(_WORD *)(a1 + 140) ^ *(_WORD *)(v14 + 12)) )
    {
      if ( NtCurrentPeb()->Ldr == v8 )
        DbgPrint("HEAP: ");
      else
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      DbgPrint(
        "Heap entry %p has incorrect PreviousSize field (%04x instead of %04x)\n",
        (const void *)v14,
        *(unsigned __int16 *)(v14 + 12) ^ *(unsigned __int16 *)(a1 + 140),
        (unsigned __int16)v12);
LABEL_21:
      v20 = *(_DWORD *)(a1 + 124) == 0;
LABEL_22:
      if ( !v20 )
      {
        *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
        *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      return 0;
    }
    v12 = *(unsigned __int16 *)(v14 + 8);
    v15 = *(_BYTE *)(v14 + 10);
    v16 = 16 * v12;
    if ( (v15 & 1) != 0 )
    {
      v17 = a7;
      if ( a7 )
      {
        v42 = (v15 & 2) != 0 ? *(_WORD *)(RtlpGetExtraStuffPointer(v14) + 2) : *(unsigned __int8 *)(v14 + 11);
        if ( v42 )
        {
          if ( (v42 & 0x8000u) != 0 )
          {
            v44 = v42 & 0x7FFF;
            if ( v44 < 0x81u )
              *(_QWORD *)(a8 + 8LL * v44) += v12;
          }
          else if ( (v42 & 0x800) == 0 && v42 < *(_WORD *)(a1 + 224) )
          {
            *(_QWORD *)(v17 + 8LL * v42) += v12;
          }
        }
      }
      if ( (*(_BYTE *)(v14 + 10) & 4) != 0 )
      {
        v45 = RtlpCheckBusyBlockTail(a1, v14);
        v8 = 0LL;
        if ( !v45 )
        {
          v20 = *(_DWORD *)(a1 + 124) == 0;
          goto LABEL_22;
        }
        a4 = v48;
      }
      goto LABEL_10;
    }
    if ( ((v15 >> 2) & ((*(_BYTE *)(a1 + 112) & 0x40) != 0)) != 0 )
    {
      v24 = v16 - 32;
      if ( (v15 & 2) != 0 && v24 > 4 )
        v24 = v16 - 36;
      if ( (v15 & 8) == 0 )
      {
        v43 = RtlCompareMemoryUlong((PVOID)(v14 + 32), v24, 0xFEEEFEEE);
        if ( v43 != v24 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("Free Heap block %p modified at %p after it was freed\n", v14, v43 + v14 + 16);
          goto LABEL_21;
        }
        v10 = v47;
        a4 = v48;
        goto LABEL_26;
      }
      v25 = *(__int64 **)(v14 + 24);
      v26 = (_QWORD *)(v14 + 16);
      v27 = *(_QWORD *)(v14 + 16);
      v28 = *v25;
      v29 = *(_QWORD *)(v27 + 8);
      if ( *v25 != v14 + 16 || v28 != v29 )
      {
        RtlpLogHeapFailure(13, a1, v14 + 16, v29, v28, (__int64)v8);
        goto LABEL_104;
      }
      *(_QWORD *)(a1 + 192) -= v12;
      v30 = *(_QWORD *)(a1 + 312);
      if ( v30 )
      {
        while ( 1 )
        {
          v31 = *(unsigned int *)(v30 + 8);
          if ( *(unsigned __int16 *)(v14 + 8) < v31 )
          {
            v33 = *(unsigned __int16 *)(v14 + 8);
            goto LABEL_63;
          }
          if ( !*(_QWORD *)v30 )
            break;
          v30 = *(_QWORD *)v30;
        }
        v33 = v31 - 1;
LABEL_63:
        RtlpHeapRemoveListEntry(a1, v30, 1, (__int64 *)(v14 + 16), v33, *(unsigned __int16 *)(v14 + 8));
        v8 = 0LL;
      }
      *v25 = v27;
      *(_QWORD *)(v27 + 8) = v25;
      if ( (*(_BYTE *)(v14 + 10) & 8) == 0 || (v46 = RtlpCommitBlock(a1, v14), v8 = 0LL, v46) )
      {
        v34 = *(unsigned __int16 *)(v14 + 8);
        v35 = (_QWORD *)(a1 + 336);
        *(_BYTE *)(v14 + 10) = (_BYTE)v8;
        *(_BYTE *)(v14 + 15) = (_BYTE)v8;
        if ( *(_PEB_LDR_DATA **)(a1 + 312) == v8 )
        {
          Entry = (_QWORD *)*v35;
        }
        else
        {
          Entry = RtlpFindEntry(a1, (unsigned int)v34);
          v8 = 0LL;
        }
        if ( v35 != Entry )
        {
          v37 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v37 )
            {
              v38 = *((_DWORD *)Entry - 2);
              v37 = *(_DWORD *)(a1 + 124);
              if ( (v38 & v37) != 0 )
                v38 ^= *(_DWORD *)(a1 + 136);
            }
            else
            {
              LOWORD(v38) = *((_WORD *)Entry - 4);
            }
            if ( v34 <= (unsigned __int16)v38 )
              break;
            Entry = (_QWORD *)*Entry;
          }
          while ( v35 != Entry );
        }
        v39 = (__int64 *)Entry[1];
        if ( (_QWORD *)*v39 == Entry )
        {
          *v26 = Entry;
          *(_QWORD *)(v14 + 24) = v39;
          *v39 = (__int64)v26;
          Entry[1] = v26;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v39, (__int64)v8);
          v8 = 0LL;
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v14 + 8);
        v40 = *(_QWORD *)(a1 + 312);
        if ( v40 )
        {
          while ( 1 )
          {
            v41 = *(unsigned int *)(v40 + 8);
            if ( *(unsigned __int16 *)(v14 + 8) < v41 )
            {
              v32 = *(unsigned __int16 *)(v14 + 8);
              goto LABEL_58;
            }
            if ( !*(_QWORD *)v40 )
              break;
            v40 = *(_QWORD *)v40;
          }
          v32 = v41 - 1;
LABEL_58:
          RtlpHeapAddListEntry(a1, v40, 1, v14 + 16, v32, *(unsigned __int16 *)(v14 + 8));
          v8 = 0LL;
        }
        v10 = v47;
        a4 = v48;
        if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
        {
          *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
          *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
          goto LABEL_61;
        }
      }
      else
      {
        RtlpDeCommitFreeBlock(a1, v14, *(unsigned __int16 *)(v14 + 8), 1);
LABEL_104:
        v10 = v47;
        v8 = 0LL;
        a4 = v48;
      }
    }
    else
    {
LABEL_26:
      v22 = *(unsigned __int16 *)(v14 + 8);
      ++*a4;
      *a5 += v22;
      v8 = 0LL;
LABEL_10:
      v18 = *(unsigned __int8 *)(v14 + 14);
      if ( (_BYTE)v18 )
        v19 = (v14 & 0xFFFFFFFFFFFF0000uLL) - (v18 << 16) + 0x10000;
      else
        v19 = a1;
      if ( v19 != a2 )
      {
        if ( NtCurrentPeb()->Ldr == v8 )
          DbgPrint("HEAP: ");
        else
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        DbgPrint("Heap block at %p has incorrect segment offset (%x)\n", v14, *(unsigned __int8 *)(v14 + 14));
        goto LABEL_21;
      }
      if ( *(_BYTE *)(v14 + 15) == 3 )
      {
        v23 = *(_QWORD *)(v14 + 56);
        if ( !v23 )
        {
          if ( v14 + 16LL * *(unsigned __int16 *)(v14 + 8) != *(_QWORD *)(a2 + 72) )
          {
            if ( NtCurrentPeb()->Ldr == v8 )
              DbgPrint("HEAP: ");
            else
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            DbgPrint("Heap block at %p is not last block in segment (%p)\n", v14, *(_QWORD *)(a2 + 72));
            goto LABEL_21;
          }
          if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
          {
            *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
            *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
          }
          return 1;
        }
        ++v11;
        v10 += v23 >> 12;
        v47 = v10;
        if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
        {
          *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
          *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        v14 += v23 + 64;
        if ( v14 != *(_QWORD *)(a2 + 72) )
        {
          if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
          {
            *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
            if ( *(_BYTE *)(v14 + 11) != (*(_BYTE *)(v14 + 8) ^ (unsigned __int8)(*(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10))) )
            {
              RtlpAnalyzeHeapFailure(a1, v14);
              v8 = 0LL;
            }
          }
          if ( *(_WORD *)(a1 + 140) != *(_WORD *)(v14 + 12) )
          {
            if ( NtCurrentPeb()->Ldr == v8 )
              DbgPrint("HEAP: ");
            else
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            DbgPrint(
              "Heap block at %p has corrupted PreviousSize (%lx)\n",
              v14,
              *(unsigned __int16 *)(v14 + 12) ^ (unsigned int)*(unsigned __int16 *)(a1 + 140));
            goto LABEL_21;
          }
          if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
          {
            *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
            *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
          }
        }
        LOWORD(v12) = (_WORD)v8;
LABEL_61:
        a4 = v48;
      }
      else
      {
        if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
        {
          *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
          *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        v14 += v16;
      }
    }
  }
  if ( *(_DWORD *)(a2 + 80) != v10 )
  {
    if ( NtCurrentPeb()->Ldr == v8 )
      DbgPrint("HEAP: ");
    else
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    DbgPrint(
      "Heap Segment at %p contains invalid NumberOfUnCommittedPages (%x != %x)\n",
      a2,
      *(unsigned int *)(a2 + 80),
      v10);
    return 0;
  }
  if ( *(_DWORD *)(a2 + 84) != v11 )
  {
    if ( NtCurrentPeb()->Ldr == v8 )
      DbgPrint("HEAP: ");
    else
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    DbgPrint(
      "Heap Segment at %p contains invalid NumberOfUnCommittedRanges (%x != %x)\n",
      a2,
      *(unsigned int *)(a2 + 84),
      v11);
    return 0;
  }
  return 1;
}
