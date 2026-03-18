/*
 * XREFs of HvlGetSparseGpaPagesAccessState @ 0x1403E6FCC
 * Callers:
 *     VmpProcessAccessedBatch @ 0x1406C1788 (VmpProcessAccessedBatch.c)
 * Callees:
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     HvlpReleaseHypercallPage @ 0x14032B890 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032BB00 (HvcallInitiateHypercall.c)
 *     HvlpHvToNtStatus @ 0x1403E7DC0 (HvlpHvToNtStatus.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

__int64 __fastcall HvlGetSparseGpaPagesAccessState(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6)
{
  unsigned int v6; // r13d
  __int64 v8; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  PSLIST_ENTRY v10; // rax
  _QWORD *HypercallCachedPages; // rsi
  struct _KPRCB *v12; // rdi
  PSLIST_ENTRY v13; // rax
  _QWORD *p_Next; // r14
  _SLIST_ENTRY *v15; // r12
  void *v16; // rcx
  int v17; // rdi^4
  unsigned __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  size_t v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 result; // rax
  __int128 v29; // [rsp+28h] [rbp-50h] BYREF
  PSLIST_ENTRY v30; // [rsp+38h] [rbp-40h]
  _SLIST_ENTRY *v31; // [rsp+40h] [rbp-38h]
  __int128 v32; // [rsp+48h] [rbp-30h] BYREF
  PSLIST_ENTRY v33; // [rsp+58h] [rbp-20h]
  unsigned __int64 v34; // [rsp+60h] [rbp-18h]
  unsigned __int64 Next; // [rsp+C8h] [rbp+50h]

  v6 = 0;
  v33 = 0LL;
  LODWORD(v34) = 0;
  v30 = 0LL;
  v8 = 0LL;
  LODWORD(v31) = 0;
  v32 = 0LL;
  v29 = 0LL;
  if ( (HvlpFlags & 8) != 0
    && (CurrentPrcb = KeGetCurrentPrcb(),
        v10 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList),
        (HypercallCachedPages = &v10->Next) != 0LL) )
  {
    Next = (unsigned __int64)v10[1].Next;
    v34 = Next;
    LODWORD(v32) = 1;
    *((_QWORD *)&v32 + 1) = CurrentPrcb;
    v33 = v10;
  }
  else
  {
    LODWORD(v32) = 4;
    BYTE8(v32) = KeDisableInterrupts();
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = HypercallCachedPages[2];
    v34 = Next;
    HIDWORD(v32) = 1;
  }
  if ( (HvlpFlags & 8) != 0
    && (v12 = KeGetCurrentPrcb(),
        v13 = RtlpInterlockedPopEntrySList(&v12->HypercallPageList),
        (p_Next = &v13->Next) != 0LL) )
  {
    v15 = v13[1].Next;
    LODWORD(v29) = 1;
    *((_QWORD *)&v29 + 1) = v12;
    v30 = v13;
  }
  else
  {
    LODWORD(v29) = 4;
    BYTE8(v29) = KeDisableInterrupts();
    HIDWORD(v29) = 2;
    p_Next = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
    v15 = (_SLIST_ENTRY *)p_Next[2];
  }
  v16 = HypercallCachedPages + 2;
  *HypercallCachedPages = a1;
  v17 = 0;
  v18 = a3;
  HypercallCachedPages[1] = a2;
  v31 = v15;
  LODWORD(a1) = 202;
  while ( 1 )
  {
    v19 = 510LL;
    if ( v18 < 0x1FE )
      v19 = v18;
    memmove(v16, (const void *)(a4 + 8 * v8), 8 * v19);
    v17 ^= ((unsigned __int16)v19 ^ (unsigned __int16)v17) & 0xFFF;
    HIDWORD(a1) = v17;
    v20 = HvcallInitiateHypercall(a1, Next);
    if ( (_WORD)v20 )
      break;
    v21 = WORD2(v20) & 0xFFF;
    memmove((void *)(v8 + a6), p_Next, v21);
    v8 += v21;
    v16 = HypercallCachedPages + 2;
    v18 = a3 - v21;
    a3 -= v21;
    if ( !a3 )
      goto LABEL_12;
  }
  v8 += WORD2(v20) & 0xFFF;
  v6 = HvlpHvToNtStatus((unsigned __int16)v20);
LABEL_12:
  HvlpReleaseHypercallPage((unsigned int *)&v29, v22, v23, v24);
  HvlpReleaseHypercallPage((unsigned int *)&v32, v25, v26, v27);
  result = v6;
  *a5 = v8;
  return result;
}
