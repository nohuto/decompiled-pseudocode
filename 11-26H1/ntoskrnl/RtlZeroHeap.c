/*
 * XREFs of RtlZeroHeap @ 0x14080B8A0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     RtlpFindEntry @ 0x14052421C (RtlpFindEntry.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x140628784 (RtlpHeapExceptionFilter.c)
 *     RtlpAnalyzeHeapFailure @ 0x14062889C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapAddListEntry @ 0x140629000 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x14062912C (RtlpHeapRemoveListEntry.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS __cdecl RtlZeroHeap(PVOID HeapHandle, ULONG Flags)
{
  _BYTE *v3; // rsi
  char *v5; // rcx
  char *v6; // rax
  unsigned __int64 v7; // rbx
  _DWORD *v8; // r12
  __int64 v9; // r8
  unsigned __int8 v10; // cl
  _QWORD *v11; // rsi
  __int64 v12; // r13
  __int64 *v13; // rcx
  struct _KLOCK_ENTRIES *v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r13
  _QWORD **v20; // rdi
  _QWORD *Entry; // r8
  int v22; // ecx
  unsigned __int16 v23; // ax
  __int64 *v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdi
  size_t v28; // r8
  _DWORD *v29; // r9
  size_t v30; // r8
  char v31; // [rsp+30h] [rbp-78h]
  __int64 *v32; // [rsp+48h] [rbp-60h]
  int v33; // [rsp+70h] [rbp-38h]
  char *v34; // [rsp+C0h] [rbp+18h]

  v3 = 0LL;
  v31 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return 0;
  if ( ((*((_BYTE *)HeapHandle + 116) | (unsigned __int8)Flags) & 1) == 0 )
  {
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)HeapHandle + 44), 1u);
    v31 = 1;
  }
  v5 = (char *)HeapHandle + 288;
  v6 = (char *)*((_QWORD *)HeapHandle + 36);
LABEL_6:
  v34 = v6;
  if ( v6 != v5 )
  {
    v7 = *((_QWORD *)v6 + 5);
    v8 = (char *)HeapHandle + 124;
    while ( 1 )
    {
      if ( v7 >= *((_QWORD *)v6 + 6) )
      {
        v6 = *(char **)v6;
        v5 = (char *)HeapHandle + 288;
        goto LABEL_6;
      }
      if ( v3 )
      {
        if ( !*v8 )
          goto LABEL_15;
        v3[11] = v3[8] ^ v3[9] ^ v3[10];
        *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
      }
      if ( *v8 )
      {
        *(_DWORD *)(v7 + 8) ^= *((_DWORD *)HeapHandle + 34);
        if ( *(_BYTE *)(v7 + 11) != (*(_BYTE *)(v7 + 8) ^ (unsigned __int8)(*(_BYTE *)(v7 + 9) ^ *(_BYTE *)(v7 + 10))) )
          RtlpAnalyzeHeapFailure((ULONG_PTR)HeapHandle, v7);
      }
LABEL_15:
      v3 = (_BYTE *)v7;
      v9 = 16LL * *(unsigned __int16 *)(v7 + 8);
      v10 = *(_BYTE *)(v7 + 10);
      if ( (v10 & 1) != 0 )
        goto LABEL_60;
      if ( (v10 & 8) == 0 )
      {
        v28 = v9 - 32;
        v29 = (_DWORD *)(v7 + 32);
        if ( ((v10 >> 2) & ((*((_BYTE *)HeapHandle + 112) & 0x40) != 0)) != 0 )
        {
          v30 = v28 >> 2;
          if ( v30 )
          {
            if ( ((unsigned __int8)v29 & 4) != 0 )
            {
              *v29 = -17891602;
              if ( --v30 )
              {
                v29 = (_DWORD *)(v7 + 36);
                goto LABEL_57;
              }
            }
            else
            {
LABEL_57:
              memset64(v29, 0xFEEEFEEEFEEEFEEEuLL, v30 >> 1);
              if ( (v30 & 1) != 0 )
                v29[v30 - 1] = -17891602;
            }
          }
        }
        else
        {
          memset_0((void *)(v7 + 32), 0, v28);
        }
LABEL_60:
        if ( *(_BYTE *)(v7 + 15) == 3 )
          v7 += *(_QWORD *)(v7 + 56) + 64LL;
        else
          v7 += 16LL * *(unsigned __int16 *)(v7 + 8);
        goto LABEL_51;
      }
      v11 = (_QWORD *)(v7 + 16);
      v12 = *(_QWORD *)(v7 + 16);
      v13 = *(__int64 **)(v7 + 24);
      v32 = v13;
      v14 = *(struct _KLOCK_ENTRIES **)(v12 + 8);
      v15 = *v13;
      if ( (struct _KLOCK_ENTRIES *)*v13 == v14 && (_QWORD *)v15 == v11 )
      {
        *((_QWORD *)HeapHandle + 24) -= *(unsigned __int16 *)(v7 + 8);
        v16 = *((_QWORD *)HeapHandle + 39);
        if ( v16 )
        {
          v17 = *(unsigned __int16 *)(v7 + 8);
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
          RtlpHeapRemoveListEntry(
            (ULONG_PTR)HeapHandle,
            v16,
            v9,
            (__int64 *)(v7 + 16),
            v17,
            *(unsigned __int16 *)(v7 + 8));
          v13 = v32;
        }
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        v19 = *(unsigned __int16 *)(v7 + 8);
        *(_BYTE *)(v7 + 10) = 0;
        *(_BYTE *)(v7 + 15) = 0;
        v20 = (_QWORD **)((char *)HeapHandle + 336);
        if ( *((_QWORD *)HeapHandle + 39) )
          Entry = RtlpFindEntry((__int64)HeapHandle, (unsigned int)v19);
        else
          Entry = *v20;
        while ( v20 != Entry )
        {
          if ( *v8 )
          {
            v22 = *((_DWORD *)Entry - 2);
            LOWORD(v33) = v22;
            if ( (v22 & *v8) != 0 )
              v33 = *((_DWORD *)HeapHandle + 34) ^ v22;
            v23 = v33;
          }
          else
          {
            v23 = *((_WORD *)Entry - 4);
          }
          if ( v19 <= v23 )
            break;
          Entry = (_QWORD *)*Entry;
        }
        v24 = (__int64 *)Entry[1];
        if ( (_QWORD *)*v24 == Entry )
        {
          *v11 = Entry;
          *(_QWORD *)(v7 + 24) = v24;
          *v24 = (__int64)v11;
          Entry[1] = v11;
        }
        else
        {
          RtlpLogHeapFailure(0xDu, 0LL, (__int64)Entry, 0LL, *v24, 0LL);
        }
        *((_QWORD *)HeapHandle + 24) += *(unsigned __int16 *)(v7 + 8);
        v25 = *((_QWORD *)HeapHandle + 39);
        if ( v25 )
        {
          v26 = *(unsigned __int16 *)(v7 + 8);
          while ( 1 )
          {
            v27 = *(unsigned int *)(v25 + 8);
            if ( v26 < v27 )
              break;
            if ( !*(_QWORD *)v25 )
            {
              LODWORD(v26) = v27 - 1;
              break;
            }
            v25 = *(_QWORD *)v25;
          }
          RtlpHeapAddListEntry((__int64)HeapHandle, v25, (__int64)Entry, v7 + 16, v26, *(unsigned __int16 *)(v7 + 8));
        }
        if ( *v8 )
        {
          *(_BYTE *)(v7 + 11) = *(_BYTE *)(v7 + 8) ^ *(_BYTE *)(v7 + 9) ^ *(_BYTE *)(v7 + 10);
          *(_DWORD *)(v7 + 8) ^= *((_DWORD *)HeapHandle + 34);
        }
      }
      else
      {
        RtlpLogHeapFailure(0xDu, (ULONG_PTR)HeapHandle, v7 + 16, v14, v15, 0LL);
      }
      v3 = 0LL;
LABEL_51:
      v6 = v34;
    }
  }
  if ( v3 && *((_DWORD *)HeapHandle + 31) )
  {
    v3[11] = v3[8] ^ v3[9] ^ v3[10];
    *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v31 )
    ExReleaseResourceLite(*((PERESOURCE *)HeapHandle + 44));
  return 0;
}
