/*
 * XREFs of RtlpInsertFreeBlock @ 0x14061FFC8
 * Callers:
 *     RtlpCreateSplitBlock @ 0x14061E464 (RtlpCreateSplitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x14061ECD8 (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x14061F278 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x14061F730 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x14061FCFC (RtlpInitializeHeapSegment.c)
 * Callees:
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     RtlpFindEntry @ 0x14052421C (RtlpFindEntry.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     RtlpHeapHandleError @ 0x140528FF8 (RtlpHeapHandleError.c)
 *     RtlpHeapAddListEntry @ 0x140629000 (RtlpHeapAddListEntry.c)
 */

void __fastcall RtlpInsertFreeBlock(__int64 a1, unsigned __int64 a2, _QWORD *Entry)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  char v9; // al
  unsigned __int16 v10; // r13
  char v11; // cl
  ULONG_PTR v12; // rdx
  unsigned __int64 v13; // rdi
  _DWORD *v14; // r8
  unsigned __int64 v15; // rdx
  _QWORD **v16; // rdi
  int v17; // ecx
  int v18; // eax
  unsigned __int16 v19; // ax
  __int64 *v20; // rax
  _QWORD *v21; // r15
  __int64 **v22; // rdx
  unsigned __int64 v23; // rcx
  int v24; // ecx
  int v25; // [rsp+38h] [rbp-30h]
  char v26; // [rsp+80h] [rbp+18h]

  if ( Entry )
  {
    v3 = a2;
    v5 = *(unsigned __int16 *)(a2 + 12);
    v4 = (unsigned __int64)Entry;
    LOWORD(v5) = *(_WORD *)(a1 + 140) ^ v5;
    if ( !(_WORD)v5
      && (int)RtlpBootStatHandleLock.CurrentRunTime >= 1
      && (*(_BYTE *)(v3 + 10) & 8) == 0
      && ((v3 + 4095) & 0xFFFFFFFFFFFFF000uLL) != v3 )
    {
      DbgPrint(
        "((FreeBlock->Flags & HEAP_ENTRY_DECOMMITTED) || (ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock))",
        v5,
        Entry,
        0LL);
      RtlpHeapHandleError();
    }
    v7 = *(unsigned __int8 *)(v3 + 14);
    if ( (_BYTE)v7 )
      v8 = (v3 & 0xFFFFFFFFFFFF0000uLL) - (v7 << 16) + 0x10000;
    else
      v8 = a1;
    v9 = *(_BYTE *)(v3 + 10);
    v26 = v9;
    while ( v4 )
    {
      if ( v4 <= 0xFF00 )
      {
        v10 = v4;
        v11 = v9;
      }
      else
      {
        v10 = -272;
        v11 = 0;
        if ( v4 != 65281 )
          v10 = -256;
      }
      *(_BYTE *)(v3 + 10) = v11;
      *(_WORD *)(v3 + 12) = *(_WORD *)(a1 + 140) ^ v5;
      v12 = *(_QWORD *)(v8 + 40);
      if ( v12 == v8 )
      {
        LOBYTE(v13) = 0;
      }
      else
      {
        v13 = ((v3 - v8) >> 16) + 1;
        if ( v13 >= 0xFE )
        {
          RtlpLogHeapFailure(3u, v12, v3, (struct _KLOCK_ENTRIES *)v8, 0LL, 0LL);
          v11 = *(_BYTE *)(v3 + 10);
        }
      }
      *(_BYTE *)(v3 + 14) = v13;
      *(_BYTE *)(v3 + 10) = v11 & 0xF0;
      *(_WORD *)(v3 + 8) = v10;
      *(_BYTE *)(v3 + 11) = 0;
      *(_BYTE *)(v3 + 15) = 0;
      if ( (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      {
        v14 = (_DWORD *)(v3 + 32);
        v15 = (16 * (unsigned __int64)v10 - 32) >> 2;
        if ( v15 )
        {
          if ( ((unsigned __int8)v14 & 4) != 0 )
          {
            --v15;
            *v14 = -17891602;
            v14 = (_DWORD *)(v3 + 36);
          }
          memset64(v14, 0xFEEEFEEEFEEEFEEEuLL, v15 >> 1);
          if ( (v15 & 1) != 0 )
            v14[v15 - 1] = -17891602;
        }
        *(_BYTE *)(v3 + 10) |= 4u;
      }
      v16 = (_QWORD **)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        Entry = RtlpFindEntry(a1, v10);
      else
        Entry = *v16;
      if ( v16 != Entry )
      {
        v17 = *(_DWORD *)(a1 + 124);
        do
        {
          if ( v17 )
          {
            v18 = *((_DWORD *)Entry - 2);
            v17 = *(_DWORD *)(a1 + 124);
            LOWORD(v25) = v18;
            if ( (v17 & v18) != 0 )
              v25 = *(_DWORD *)(a1 + 136) ^ v18;
            v19 = v25;
          }
          else
          {
            v19 = *((_WORD *)Entry - 4);
          }
          if ( v10 <= (unsigned __int64)v19 )
            break;
          Entry = (_QWORD *)*Entry;
        }
        while ( v16 != Entry );
      }
      v20 = (__int64 *)Entry[1];
      v21 = (_QWORD *)(v3 + 16);
      if ( (_QWORD *)*v20 == Entry )
      {
        *v21 = Entry;
        *(_QWORD *)(v3 + 24) = v20;
        *v20 = (__int64)v21;
        Entry[1] = v21;
      }
      else
      {
        RtlpLogHeapFailure(0xDu, 0LL, (__int64)Entry, 0LL, *v20, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v3 + 8);
      v22 = *(__int64 ***)(a1 + 312);
      if ( v22 )
      {
        while ( 1 )
        {
          v23 = *((unsigned int *)v22 + 2);
          if ( *(unsigned __int16 *)(v3 + 8) < v23 )
            break;
          if ( !*v22 )
          {
            v24 = v23 - 1;
            goto LABEL_49;
          }
          v22 = (__int64 **)*v22;
        }
        v24 = *(unsigned __int16 *)(v3 + 8);
LABEL_49:
        RtlpHeapAddListEntry(a1, (_DWORD)v22, (_DWORD)Entry, v3 + 16, v24, *(unsigned __int16 *)(v3 + 8));
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v3 + 11) = *(_BYTE *)(v3 + 8) ^ *(_BYTE *)(v3 + 9) ^ *(_BYTE *)(v3 + 10);
        *(_DWORD *)(v3 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      v9 = v26;
      v4 -= v10;
      v5 = v10;
      v3 += 16LL * v10;
      if ( v3 >= *(_QWORD *)(v8 + 72) )
        return;
    }
    *(_WORD *)(v3 + 12) = *(_WORD *)(a1 + 140) ^ v5;
    if ( !(_WORD)v5 && (int)RtlpBootStatHandleLock.CurrentRunTime >= 1 && ((v3 + 4095) & 0xFFFFFFFFFFFFF000uLL) != v3 )
    {
      DbgPrint("ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock", v5, Entry, 0LL);
      RtlpHeapHandleError();
    }
  }
}
