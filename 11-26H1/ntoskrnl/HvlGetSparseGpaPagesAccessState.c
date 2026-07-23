/*
 * XREFs of HvlGetSparseGpaPagesAccessState @ 0x1402F3EAC
 * Callers:
 *     VmpProcessAccessedBatch @ 0x1406C5368 (VmpProcessAccessedBatch.c)
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     memmove @ 0x140742080 (memmove.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *p_Next; // rsi
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v16; // rdi
  PSLIST_ENTRY v17; // rax
  _QWORD *v18; // r14
  _SLIST_ENTRY *v19; // r12
  void *v20; // rcx
  int v21; // rdi^4
  unsigned __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  size_t v25; // rbx
  __int64 result; // rax
  __int128 v27; // [rsp+28h] [rbp-50h] BYREF
  PSLIST_ENTRY v28; // [rsp+38h] [rbp-40h]
  _SLIST_ENTRY *v29; // [rsp+40h] [rbp-38h]
  __int128 v30; // [rsp+48h] [rbp-30h] BYREF
  PSLIST_ENTRY v31; // [rsp+58h] [rbp-20h]
  _SLIST_ENTRY *v32; // [rsp+60h] [rbp-18h]
  __int64 v33; // [rsp+C0h] [rbp+48h]
  _SLIST_ENTRY *v34; // [rsp+C8h] [rbp+50h]
  unsigned __int64 v35; // [rsp+D0h] [rbp+58h]

  v35 = a3;
  v33 = a1;
  v6 = 0;
  v31 = 0LL;
  LODWORD(v32) = 0;
  v28 = 0LL;
  v8 = 0LL;
  LODWORD(v29) = 0;
  v30 = 0LL;
  v27 = 0LL;
  if ( (HvlpFlags & 8) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    p_Next = &v10->Next;
    if ( v10 )
    {
      Next = v10[1].Next;
      v34 = Next;
      v32 = Next;
      LODWORD(v30) = 1;
      *((_QWORD *)&v30 + 1) = CurrentPrcb;
      v31 = v10;
      goto LABEL_4;
    }
    LODWORD(v30) = 4;
    BYTE8(v30) = KeDisableInterrupts(v12, v11, v13);
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    v34 = (_SLIST_ENTRY *)p_Next[2];
    v32 = v34;
  }
  else
  {
    LODWORD(v30) = 4;
    BYTE8(v30) = KeDisableInterrupts(a1, a2, a3);
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (_SLIST_ENTRY *)p_Next[2];
    v34 = Next;
    v32 = Next;
  }
  HIDWORD(v30) = 1;
LABEL_4:
  if ( (HvlpFlags & 8) != 0
    && (v16 = KeGetCurrentPrcb(), v17 = RtlpInterlockedPopEntrySList(&v16->HypercallPageList), (v18 = &v17->Next) != 0LL) )
  {
    v19 = v17[1].Next;
    LODWORD(v27) = 1;
    *((_QWORD *)&v27 + 1) = v16;
    v28 = v17;
  }
  else
  {
    LODWORD(v27) = 4;
    BYTE8(v27) = KeDisableInterrupts(Next, v11, v13);
    HIDWORD(v27) = 2;
    v18 = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
    v19 = (_SLIST_ENTRY *)v18[2];
  }
  v20 = p_Next + 2;
  *p_Next = v33;
  v21 = 0;
  v22 = v35;
  p_Next[1] = a2;
  v29 = v19;
  LODWORD(v33) = 202;
  while ( 1 )
  {
    v23 = 510LL;
    if ( v22 < 0x1FE )
      v23 = v22;
    memmove(v20, (const void *)(a4 + 8 * v8), 8 * v23);
    v21 ^= ((unsigned __int16)v23 ^ (unsigned __int16)v21) & 0xFFF;
    HIDWORD(v33) = v21;
    v24 = HvcallInitiateHypercall(v33, v34, v19);
    if ( (_WORD)v24 )
      break;
    v25 = WORD2(v24) & 0xFFF;
    memmove((void *)(v8 + a6), v18, v25);
    v8 += v25;
    v20 = p_Next + 2;
    v22 = v35 - v25;
    v35 -= v25;
    if ( !v35 )
      goto LABEL_12;
  }
  v8 += WORD2(v24) & 0xFFF;
  v6 = HvlpHvToNtStatus((unsigned __int16)v24);
LABEL_12:
  HvlpReleaseHypercallPage(&v27);
  HvlpReleaseHypercallPage(&v30);
  result = v6;
  *a5 = v8;
  return result;
}
