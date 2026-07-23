/*
 * XREFs of RtlpFreeHeap @ 0x14061F730
 * Callers:
 *     RtlpFreeNTHeapInternal @ 0x140354CB0 (RtlpFreeNTHeapInternal.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     RtlpFindEntry @ 0x14052421C (RtlpFindEntry.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     RtlpCoalesceFreeBlocks @ 0x14061E070 (RtlpCoalesceFreeBlocks.c)
 *     RtlpDeCommitFreeBlock @ 0x14061ECD8 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x14061FFC8 (RtlpInsertFreeBlock.c)
 *     RtlpAnalyzeHeapFailure @ 0x14062889C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapAddListEntry @ 0x140629000 (RtlpHeapAddListEntry.c)
 *     ZwFreeVirtualMemory @ 0x140728380 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall RtlpFreeHeap(ULONG_PTR a1, int a2, __int64 a3)
{
  char v5; // r15
  int v7; // edx
  int v8; // r14d
  __int64 **v9; // rcx
  char v10; // al
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // rcx
  struct _KLOCK_ENTRIES *v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rsi
  unsigned __int16 v18; // r8
  bool v19; // zf
  unsigned __int64 v20; // r14
  _QWORD **v21; // rdi
  _QWORD *Entry; // r8
  int v23; // ecx
  unsigned __int16 v24; // ax
  _QWORD *v25; // rdi
  __int64 *v26; // rax
  __int64 **v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r8
  _DWORD *v30; // r8
  unsigned __int64 v31; // rdx
  _QWORD **v32; // rdi
  _QWORD *v33; // r8
  int v34; // ecx
  unsigned __int16 v35; // ax
  __int64 *v36; // rax
  PVOID BaseAddress; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 v38; // [rsp+40h] [rbp-68h]
  unsigned __int64 v39; // [rsp+48h] [rbp-60h]
  unsigned __int64 v40; // [rsp+50h] [rbp-58h]
  __int64 v41; // [rsp+58h] [rbp-50h]
  int v42; // [rsp+68h] [rbp-40h]
  int v43; // [rsp+78h] [rbp-30h]
  ULONG_PTR RegionSize; // [rsp+C8h] [rbp+20h] BYREF

  RegionSize = 0LL;
  v5 = 0;
  BaseAddress = 0LL;
  if ( a1 == a3 )
  {
    RtlpLogHeapFailure(9u, a1, a3, 0LL, 0LL, 0LL);
    return 0LL;
  }
  v7 = *(_DWORD *)(a1 + 116) | a2;
  v8 = v7 & 0x3C010F60;
  if ( (v7 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(a3 + 11) != (*(_BYTE *)(a3 + 8) ^ (unsigned __int8)(*(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10))) )
        RtlpAnalyzeHeapFailure(a1, a3);
    }
  }
  else
  {
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 352), 1u);
    v5 = 1;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(a3 + 11) != (*(_BYTE *)(a3 + 8) ^ (unsigned __int8)(*(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10))) )
        RtlpAnalyzeHeapFailure(a1, a3);
    }
    v9 = *(__int64 ***)(a1 + 312);
    do
    {
      if ( *(unsigned __int16 *)(a3 + 8) < (unsigned __int64)*((unsigned int *)v9 + 2) )
        break;
      v9 = (__int64 **)*v9;
    }
    while ( v9 );
  }
  v10 = *(_BYTE *)(a3 + 10);
  if ( (v10 & 8) != 0 )
    *(_BYTE *)(a3 + 10) = v10 & 0xF7;
  if ( *(_BYTE *)(a3 + 15) == 4 )
  {
    v11 = a3 - 48;
    v12 = *(_QWORD *)(a3 - 48 + 32);
    BaseAddress = (PVOID)((a3 - 48) & 0xFFFFFFFFFFFF0000uLL);
    *(_QWORD *)(a1 + 592) -= v12;
    v13 = *(_QWORD *)(a3 - 48);
    v14 = *(__int64 **)(a3 - 48 + 8);
    v15 = *(struct _KLOCK_ENTRIES **)(v13 + 8);
    v16 = *v14;
    if ( (struct _KLOCK_ENTRIES *)*v14 == v15 && v16 == v11 )
    {
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
    }
    else
    {
      RtlpLogHeapFailure(0xDu, 0LL, v11, v15, v16, 0LL);
    }
    if ( v5 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
      v5 = 0;
    }
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    goto LABEL_83;
  }
  RegionSize = *(unsigned __int16 *)(a3 + 8);
  v17 = RtlpCoalesceFreeBlocks(a1, a3, &RegionSize);
  v18 = RegionSize;
  if ( RegionSize < *(_QWORD *)(a1 + 176) || RegionSize + *(_QWORD *)(a1 + 192) < *(_QWORD *)(a1 + 184) )
  {
    if ( RegionSize > 0xFF00 )
    {
      RtlpInsertFreeBlock(a1, v17, RegionSize);
      goto LABEL_83;
    }
    v19 = v8 == 0;
    v20 = (unsigned __int16)RegionSize;
    if ( v19 )
    {
      *(_BYTE *)(v17 + 10) = 0;
      *(_BYTE *)(v17 + 15) = 0;
      v21 = (_QWORD **)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        Entry = RtlpFindEntry(a1, v18);
      else
        Entry = *v21;
      while ( v21 != Entry )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v23 = *((_DWORD *)Entry - 2);
          v42 = v23;
          if ( (v23 & *(_DWORD *)(a1 + 124)) != 0 )
            v42 = *(_DWORD *)(a1 + 136) ^ v23;
          v24 = v42;
        }
        else
        {
          v24 = *((_WORD *)Entry - 4);
        }
        if ( v20 <= v24 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v25 = (_QWORD *)(v17 + 16);
      v26 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v26 == Entry )
      {
        *v25 = Entry;
        *(_QWORD *)(v17 + 24) = v26;
        *v26 = (__int64)v25;
        Entry[1] = v25;
      }
      else
      {
        RtlpLogHeapFailure(0xDu, 0LL, (__int64)Entry, 0LL, *v26, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v17 + 8);
      v27 = *(__int64 ***)(a1 + 312);
      if ( !v27 )
        goto LABEL_79;
      v38 = 0LL;
      v28 = *(unsigned __int16 *)(v17 + 8);
      while ( 1 )
      {
        v29 = *((unsigned int *)v27 + 2);
        if ( v28 < v29 )
          break;
        if ( !*v27 )
        {
          v28 = (unsigned int)(v29 - 1);
          break;
        }
        v27 = (__int64 **)*v27;
      }
      v38 = v28;
LABEL_78:
      RtlpHeapAddListEntry(a1, (_DWORD)v27, v29, (_DWORD)v25, v28, *(unsigned __int16 *)(v17 + 8));
LABEL_79:
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v17 + 11) = *(_BYTE *)(v17 + 8) ^ *(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10);
        *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      goto LABEL_83;
    }
    *(_BYTE *)(v17 + 10) &= 0xF0u;
    *(_BYTE *)(v17 + 15) = 0;
    if ( (*(_DWORD *)(a1 + 112) & 0x40) == 0 )
    {
LABEL_58:
      v32 = (_QWORD **)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        v33 = RtlpFindEntry(a1, v20);
      else
        v33 = *v32;
      while ( v32 != v33 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v34 = *((_DWORD *)v33 - 2);
          v43 = v34;
          if ( (v34 & *(_DWORD *)(a1 + 124)) != 0 )
            v43 = *(_DWORD *)(a1 + 136) ^ v34;
          v35 = v43;
        }
        else
        {
          v35 = *((_WORD *)v33 - 4);
        }
        if ( v20 <= v35 )
          break;
        v33 = (_QWORD *)*v33;
      }
      v25 = (_QWORD *)(v17 + 16);
      v36 = (__int64 *)v33[1];
      if ( (_QWORD *)*v36 == v33 )
      {
        *v25 = v33;
        *(_QWORD *)(v17 + 24) = v36;
        *v36 = (__int64)v25;
        v33[1] = v25;
      }
      else
      {
        RtlpLogHeapFailure(0xDu, 0LL, (__int64)v33, 0LL, *v36, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v17 + 8);
      v27 = *(__int64 ***)(a1 + 312);
      if ( !v27 )
        goto LABEL_79;
      v40 = 0LL;
      v28 = *(unsigned __int16 *)(v17 + 8);
      while ( 1 )
      {
        v29 = *((unsigned int *)v27 + 2);
        if ( v28 < v29 )
          break;
        if ( !*v27 )
        {
          v28 = (unsigned int)(v29 - 1);
          break;
        }
        v27 = (__int64 **)*v27;
      }
      v40 = v28;
      goto LABEL_78;
    }
    v30 = (_DWORD *)(v17 + 32);
    v41 = v17 + 32;
    v31 = (16 * v20 - 32) >> 2;
    v39 = v31;
    if ( v31 )
    {
      if ( ((unsigned __int8)v30 & 4) == 0 )
        goto LABEL_55;
      *v30 = -17891602;
      v39 = --v31;
      if ( v31 )
      {
        v30 = (_DWORD *)(v17 + 36);
        v41 = v17 + 36;
LABEL_55:
        memset64(v30, 0xFEEEFEEEFEEEFEEEuLL, v31 >> 1);
        if ( (v31 & 1) != 0 )
          v30[v31 - 1] = -17891602;
      }
    }
    *(_BYTE *)(v17 + 10) |= 4u;
    goto LABEL_58;
  }
  RtlpDeCommitFreeBlock(a1, (_WORD *)v17, RegionSize);
LABEL_83:
  if ( v5 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
  return 1LL;
}
