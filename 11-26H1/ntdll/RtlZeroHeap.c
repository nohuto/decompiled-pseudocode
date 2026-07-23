/*
 * XREFs of RtlZeroHeap @ 0x180146460
 * Callers:
 *     RtlDebugZeroHeap @ 0x180146DB8 (RtlDebugZeroHeap.c)
 * Callees:
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x180010BC0 (RtlpHeapRemoveListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180010D40 (RtlpDeCommitFreeBlock.c)
 *     RtlpCommitBlock @ 0x1800125B0 (RtlpCommitBlock.c)
 *     RtlpFindEntry @ 0x180015010 (RtlpFindEntry.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpHeapAddListEntry @ 0x18006CAA0 (RtlpHeapAddListEntry.c)
 *     RtlpHeapExceptionFilter @ 0x1801004C8 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     RtlDebugZeroHeap @ 0x180146DB8 (RtlDebugZeroHeap.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlZeroHeap(PVOID HeapHandle, ULONG Flags)
{
  _BYTE *v3; // r14
  ULONG v5; // edx
  char *v6; // rcx
  char *v7; // rax
  unsigned __int64 v8; // rbx
  _DWORD *v9; // r12
  unsigned __int8 v10; // cl
  _QWORD *v11; // r13
  __int64 v12; // r14
  __int64 *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r14
  _QWORD **v20; // rdi
  _QWORD *Entry; // r8
  int v22; // eax
  __int64 *v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  size_t v27; // r8
  _DWORD *v28; // r9
  size_t v29; // r8
  char v30; // [rsp+30h] [rbp-78h]
  __int64 *v31; // [rsp+48h] [rbp-60h]
  char *v32; // [rsp+C0h] [rbp+18h]

  v3 = 0LL;
  v30 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return 0;
  v5 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v5 & 0x61000000) != 0 && (v5 & 0x10000000) == 0 )
    return RtlDebugZeroHeap((int)HeapHandle);
  if ( (v5 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    v30 = 1;
  }
  v6 = (char *)HeapHandle + 288;
  v7 = (char *)*((_QWORD *)HeapHandle + 36);
LABEL_8:
  v32 = v7;
  if ( v7 != v6 )
  {
    v8 = *((_QWORD *)v7 + 5);
    v9 = (char *)HeapHandle + 124;
    while ( 1 )
    {
      if ( v8 >= *((_QWORD *)v7 + 6) )
      {
        v7 = *(char **)v7;
        v6 = (char *)HeapHandle + 288;
        goto LABEL_8;
      }
      if ( v3 )
      {
        if ( !*v9 )
          goto LABEL_17;
        v3[11] = v3[8] ^ v3[9] ^ v3[10];
        *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
      }
      if ( *v9 )
      {
        *(_DWORD *)(v8 + 8) ^= *((_DWORD *)HeapHandle + 34);
        if ( *(_BYTE *)(v8 + 11) != (*(_BYTE *)(v8 + 8) ^ (unsigned __int8)(*(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10))) )
          RtlpAnalyzeHeapFailure((unsigned __int64)HeapHandle, v8);
      }
LABEL_17:
      v3 = (_BYTE *)v8;
      v10 = *(_BYTE *)(v8 + 10);
      if ( (v10 & 1) != 0 )
        goto LABEL_64;
      if ( (v10 & 8) == 0 )
      {
        v27 = 16LL * *(unsigned __int16 *)(v8 + 8) - 32;
        v28 = (_DWORD *)(v8 + 32);
        if ( ((v10 >> 2) & ((*((_BYTE *)HeapHandle + 112) & 0x40) != 0)) != 0 )
        {
          v29 = v27 >> 2;
          if ( v29 )
          {
            if ( ((unsigned __int8)v28 & 4) != 0 )
            {
              *v28 = -17891602;
              if ( --v29 )
              {
                v28 = (_DWORD *)(v8 + 36);
                goto LABEL_61;
              }
            }
            else
            {
LABEL_61:
              memset64(v28, 0xFEEEFEEEFEEEFEEEuLL, v29 >> 1);
              if ( (v29 & 1) != 0 )
                v28[v29 - 1] = -17891602;
            }
          }
        }
        else
        {
          memset_thunk_772440563353939046((void *)(v8 + 32), 0, v27);
        }
LABEL_64:
        if ( *(_BYTE *)(v8 + 15) == 3 )
          v8 += *(_QWORD *)(v8 + 56) + 64LL;
        else
          v8 += 16LL * *(unsigned __int16 *)(v8 + 8);
        goto LABEL_55;
      }
      v11 = (_QWORD *)(v8 + 16);
      v12 = *(_QWORD *)(v8 + 16);
      v13 = *(__int64 **)(v8 + 24);
      v31 = v13;
      v14 = *(_QWORD *)(v12 + 8);
      v15 = *v13;
      if ( *v13 == v14 && (_QWORD *)v15 == v11 )
      {
        *((_QWORD *)HeapHandle + 24) -= *(unsigned __int16 *)(v8 + 8);
        v16 = *((_QWORD *)HeapHandle + 39);
        if ( v16 )
        {
          v17 = *(unsigned __int16 *)(v8 + 8);
          while ( 1 )
          {
            v18 = *(unsigned int *)(v16 + 8);
            if ( v17 < v18 )
              break;
            if ( !*(_QWORD *)v16 )
            {
              LODWORD(v17) = v18 - 1;
              break;
            }
            v16 = *(_QWORD *)v16;
          }
          RtlpHeapRemoveListEntry((__int64)HeapHandle, v16, 1, (__int64 *)(v8 + 16), v17, *(unsigned __int16 *)(v8 + 8));
          v13 = v31;
        }
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        if ( (*(_BYTE *)(v8 + 10) & 8) == 0 || RtlpCommitBlock((__int64)HeapHandle, v8) )
        {
          v19 = *(unsigned __int16 *)(v8 + 8);
          *(_BYTE *)(v8 + 10) = 0;
          *(_BYTE *)(v8 + 15) = 0;
          v20 = (_QWORD **)((char *)HeapHandle + 336);
          if ( *((_QWORD *)HeapHandle + 39) )
            Entry = RtlpFindEntry((__int64)HeapHandle, (unsigned int)v19);
          else
            Entry = *v20;
          while ( v20 != Entry )
          {
            if ( *v9 )
            {
              v22 = *((_DWORD *)Entry - 2);
              if ( (v22 & *v9) != 0 )
                v22 ^= *((_DWORD *)HeapHandle + 34);
            }
            else
            {
              LOWORD(v22) = *((_WORD *)Entry - 4);
            }
            if ( v19 <= (unsigned __int16)v22 )
              break;
            Entry = (_QWORD *)*Entry;
          }
          v23 = (__int64 *)Entry[1];
          if ( (_QWORD *)*v23 == Entry )
          {
            *v11 = Entry;
            *(_QWORD *)(v8 + 24) = v23;
            *v23 = (__int64)v11;
            Entry[1] = v11;
          }
          else
          {
            RtlpLogHeapFailure(13, 0LL, (__int64)Entry, 0LL, *v23, 0LL);
          }
          *((_QWORD *)HeapHandle + 24) += *(unsigned __int16 *)(v8 + 8);
          v24 = *((_QWORD *)HeapHandle + 39);
          if ( v24 )
          {
            v25 = *(unsigned __int16 *)(v8 + 8);
            while ( 1 )
            {
              v26 = *(unsigned int *)(v24 + 8);
              if ( v25 < v26 )
                break;
              if ( !*(_QWORD *)v24 )
              {
                LODWORD(v25) = v26 - 1;
                break;
              }
              v24 = *(_QWORD *)v24;
            }
            RtlpHeapAddListEntry((__int64)HeapHandle, v24, 1, v8 + 16, v25, *(unsigned __int16 *)(v8 + 8));
          }
          if ( *v9 )
          {
            *(_BYTE *)(v8 + 11) = *(_BYTE *)(v8 + 8) ^ *(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10);
            *(_DWORD *)(v8 + 8) ^= *((_DWORD *)HeapHandle + 34);
          }
        }
        else
        {
          RtlpDeCommitFreeBlock((unsigned __int64)HeapHandle, v8, *(unsigned __int16 *)(v8 + 8), 1);
        }
      }
      else
      {
        RtlpLogHeapFailure(13, (__int64)HeapHandle, v8 + 16, v14, v15, 0LL);
      }
      v3 = 0LL;
LABEL_55:
      v7 = v32;
    }
  }
  if ( v3 && *((_DWORD *)HeapHandle + 31) )
  {
    v3[11] = v3[8] ^ v3[9] ^ v3[10];
    *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v30 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return 0;
}
