/*
 * XREFs of RtlpDeCommitFreeBlock @ 0x14061ECD8
 * Callers:
 *     RtlpFreeHeap @ 0x14061F730 (RtlpFreeHeap.c)
 * Callees:
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     RtlpHeapHandleError @ 0x140528FF8 (RtlpHeapHandleError.c)
 *     RtlpCoalesceFreeBlocks @ 0x14061E070 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateUCREntry @ 0x14061EB90 (RtlpCreateUCREntry.c)
 *     RtlpInsertFreeBlock @ 0x14061FFC8 (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x1406202F4 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x1406203C4 (RtlpRemoveUCRBlock.c)
 *     RtlpUpdateHeapRates @ 0x1406207A0 (RtlpUpdateHeapRates.c)
 *     ZwFreeVirtualMemory @ 0x140728380 (ZwFreeVirtualMemory.c)
 */

unsigned __int64 __fastcall RtlpDeCommitFreeBlock(ULONG_PTR a1, _WORD *a2, unsigned __int64 a3)
{
  char v3; // di
  bool v4; // zf
  __int64 v5; // r14
  __int64 v6; // rbx
  char v7; // r15
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  _WORD *v11; // r13
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // r12
  _WORD *v15; // r15
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  _QWORD *i; // rcx
  _QWORD *v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  ULONG_PTR v26; // rcx
  unsigned __int64 result; // rax
  char *v28; // r15
  __int64 v29; // rsi
  ULONG_PTR v30; // rsi
  bool v31; // cc
  ULONG_PTR v32; // rdx
  char *v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  ULONG_PTR v36; // rcx
  char *v37; // r15
  __int64 v38; // rsi
  ULONG_PTR v39; // rsi
  ULONG_PTR v40; // rdx
  __int64 v41; // r8
  PVOID BaseAddress; // [rsp+30h] [rbp-20h] BYREF
  __int64 v43; // [rsp+38h] [rbp-18h]
  __int64 v44; // [rsp+40h] [rbp-10h]
  unsigned __int64 v45; // [rsp+48h] [rbp-8h] BYREF
  ULONG_PTR RegionSize; // [rsp+90h] [rbp+40h] BYREF
  __int64 v47; // [rsp+A0h] [rbp+50h] BYREF

  v47 = a3;
  v3 = 0;
  v4 = RtlpBootStatHandleLock.QuantumTarget == *(_QWORD *)(a1 + 360);
  v5 = (__int64)a2;
  v6 = a1;
  RegionSize = 0LL;
  v45 = 0LL;
  v7 = 0;
  v43 = 0LL;
  if ( !v4 || a3 < *(_QWORD *)(a1 + 176) )
    return RtlpInsertFreeBlock(a1, a2, a3);
  v8 = a3 + *(_QWORD *)(a1 + 192);
  if ( v8 < *(_QWORD *)(a1 + 184) || v8 < *(_QWORD *)(a1 + 576) >> (*(_BYTE *)(a1 + 688) + 4) )
  {
    a2 = (_WORD *)v5;
    goto LABEL_77;
  }
  v11 = (_WORD *)RtlpCoalesceFreeBlocks(a1, v5, &v47);
  if ( *(_BYTE *)(v5 + 14) )
  {
    v9 = (unsigned __int64)*(unsigned __int8 *)(v5 + 14) << 16;
    v12 = (v5 & 0xFFFFFFFFFFFF0000uLL) - v9 + 0x10000;
  }
  else
  {
    v12 = v6;
  }
  v13 = v47;
  v14 = 2 * v47;
  if ( HIBYTE(v11[8 * v47 + 7]) == 3 )
  {
    v15 = &v11[8 * v47];
    RtlpRemoveUCRBlock(v9, v15 + 8, v10, 1LL);
    v16 = *((_QWORD *)v15 + 7);
    v43 = *((_QWORD *)v15 + 6);
    v44 = v16;
    --*(_DWORD *)(v12 + 84);
    *(_DWORD *)(v12 + 80) -= *((_QWORD *)v15 + 7) >> 12;
    *(_QWORD *)(v6 + 576) += *((_QWORD *)v15 + 7);
    --*(_DWORD *)(v6 + 604);
    v17 = *((_QWORD *)v15 + 7);
    if ( v17 >= 0xFF000 )
      *(_QWORD *)(v6 + 584) -= v17;
    v13 += (*((_QWORD *)v15 + 7) >> 4) + 64LL;
    v7 = 1;
    v47 = v13;
  }
  else
  {
    v44 = 0LL;
  }
  if ( *(_WORD *)(v6 + 140) != v11[6] )
  {
    v33 = (char *)(((unsigned __int64)v11 + 4159) & 0xFFFFFFFFFFFFF000uLL);
    BaseAddress = v33;
    if ( v33 == (char *)(v11 + 40) )
    {
      v33 += 4096;
      BaseAddress = v33;
    }
    v34 = 8 * v13;
    if ( !v7 )
      v34 -= 16LL;
    v35 = (unsigned __int64)&v11[v34] & 0xFFFFFFFFFFFFF000uLL;
    if ( v35 < (unsigned __int64)v33 )
    {
      if ( (int)RtlpBootStatHandleLock.CurrentRunTime >= 1 && v7 )
      {
        DbgPrint("(!TrailingUCR)");
        RtlpHeapHandleError();
      }
      goto LABEL_28;
    }
    v36 = v35 - (_QWORD)v33;
    RegionSize = v36;
    if ( HIBYTE(v11[4 * v14 + 7]) == 3 )
    {
      if ( !v36 )
        goto LABEL_60;
    }
    else if ( !v36 || v36 < *(_QWORD *)(v6 + 176) )
    {
LABEL_28:
      a3 = v13;
LABEL_29:
      a2 = v11;
LABEL_77:
      a1 = v6;
      return RtlpInsertFreeBlock(a1, a2, a3);
    }
    ++*(_DWORD *)(v6 + 612);
    if ( ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u) < 0 )
      goto LABEL_31;
LABEL_60:
    if ( !v7 )
    {
      v37 = (char *)BaseAddress + RegionSize;
      v38 = 8 * v13;
      *(_WORD *)((char *)BaseAddress + RegionSize + 12) = *(_WORD *)(v6 + 140);
      if ( &v11[v38] == (_WORD *)((char *)BaseAddress + RegionSize) )
      {
        if ( *(_DWORD *)(v6 + 124) )
        {
          v37[11] = v37[8] ^ v37[9] ^ v37[10];
          *((_DWORD *)v37 + 2) ^= *(_DWORD *)(v6 + 136);
        }
      }
      else
      {
        v37[15] = 0;
        v37[10] = 0;
        v39 = ((unsigned __int64)v11 + v38 * 2 - RegionSize - (_QWORD)BaseAddress) >> 4;
        v31 = (signed int)RtlpBootStatHandleLock.CurrentRunTime < 1;
        *((_WORD *)v37 + 4) = v39;
        if ( !v31 && (unsigned __int16)v39 <= 1u )
        {
          DbgPrint("(LONG)FreeEntry->Size > 1");
          RtlpHeapHandleError();
        }
        v37[11] = 0;
        v40 = *(_QWORD *)(v12 + 40);
        if ( v40 != v12 )
        {
          if ( ((unsigned __int64)&v37[-v12] >> 16) + 1 >= 0xFE )
            RtlpLogHeapFailure(3u, v40, (__int64)v37, (struct _KLOCK_ENTRIES *)v12, 0LL, 0LL);
          v3 = ((unsigned int)((_DWORD)v37 - v12) >> 16) + 1;
        }
        v41 = *((unsigned __int16 *)v37 + 4);
        v37[14] = v3;
        RtlpInsertFreeBlock(v6, v37, v41);
      }
    }
    RtlpCreateUCREntry(v6, v12, (__int64)BaseAddress - 48, RegionSize, (unsigned __int64)v11, (__int64 *)&v45);
    a3 = v45;
    goto LABEL_29;
  }
  BaseAddress = v11;
  for ( i = *(_QWORD **)(v12 + 96); (_QWORD *)(v12 + 96) != i; i = (_QWORD *)*i )
  {
    v19 = i - 2;
    if ( (_WORD *)(i[2] + i[3]) == v11 )
      goto LABEL_19;
  }
  v19 = 0LL;
LABEL_19:
  if ( (int)RtlpBootStatHandleLock.CurrentRunTime >= 1 && !v19 )
  {
    DbgPrint("(UCRBlock != NULL)");
    RtlpHeapHandleError();
  }
  v20 = 8 * v13;
  if ( !v7 )
    v20 -= 16LL;
  RegionSize = ((unsigned __int64)&v11[v20] & 0xFFFFFFFFFFFFF000uLL) - (_QWORD)v11;
  if ( !RegionSize )
  {
    if ( (int)RtlpBootStatHandleLock.CurrentRunTime >= 1 )
    {
      if ( v7 )
      {
        DbgPrint("(!TrailingUCR)");
        RtlpHeapHandleError();
      }
    }
    goto LABEL_28;
  }
  if ( ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u) < 0 )
  {
LABEL_31:
    RtlpUpdateHeapRates(v6, 3LL);
    if ( v7 )
    {
      RtlpCreateUCREntry(v24, v12, v43 - 48, v44, (unsigned __int64)v11, &v47);
      v13 = v47;
    }
    goto LABEL_28;
  }
  ++*(_DWORD *)(v6 + 612);
  v25 = v19[5];
  if ( v25 >= 0xFF000 )
    *(_QWORD *)(v6 + 584) -= v25;
  RtlpRemoveUCRBlock(v21, v19, v22, v23);
  v19[5] += RegionSize;
  RtlpInsertUCRBlock(v6, v19);
  *(_DWORD *)(v12 + 80) += RegionSize >> 12;
  v26 = RegionSize;
  *(_QWORD *)(v6 + 576) -= RegionSize;
  result = v19[5];
  if ( result >= 0xFF000 )
    *(_QWORD *)(v6 + 584) += result;
  if ( !v7 )
  {
    result = *(unsigned __int16 *)(v6 + 140);
    v28 = (char *)BaseAddress + v26;
    v29 = 8 * v13;
    *(_WORD *)((char *)BaseAddress + v26 + 12) = result;
    if ( &v11[v29] != (_WORD *)((char *)BaseAddress + RegionSize) )
    {
      v28[15] = 0;
      v28[10] = 0;
      v30 = (v29 * 2 - RegionSize) >> 4;
      v31 = (signed int)RtlpBootStatHandleLock.CurrentRunTime < 1;
      *((_WORD *)v28 + 4) = v30;
      if ( !v31 && (unsigned __int16)v30 <= 1u )
      {
        DbgPrint("((LONG)FreeEntry->Size > 1)");
        RtlpHeapHandleError();
      }
      v28[11] = 0;
      v32 = *(_QWORD *)(v12 + 40);
      if ( v32 != v12 )
      {
        if ( ((unsigned __int64)&v28[-v12] >> 16) + 1 >= 0xFE )
          RtlpLogHeapFailure(3u, v32, (__int64)v28, (struct _KLOCK_ENTRIES *)v12, 0LL, 0LL);
        v3 = ((unsigned int)((_DWORD)v28 - v12) >> 16) + 1;
      }
      a3 = *((unsigned __int16 *)v28 + 4);
      a2 = v28;
      v28[14] = v3;
      goto LABEL_77;
    }
    if ( *(_DWORD *)(v6 + 124) )
    {
      v28[11] = v28[8] ^ v28[9] ^ v28[10];
      result = *(unsigned int *)(v6 + 136);
      *((_DWORD *)v28 + 2) ^= result;
    }
  }
  return result;
}
