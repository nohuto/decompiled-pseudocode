/*
 * XREFs of HvlMapGpaPages @ 0x140489414
 * Callers:
 *     VmpFillSlat @ 0x1406C4B94 (VmpFillSlat.c)
 *     VmpInvalidateSingleGpaRange @ 0x1406C4FB4 (VmpInvalidateSingleGpaRange.c)
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall HvlMapGpaPages(__int64 a1, __int64 a2, int a3, unsigned __int64 a4, __int64 a5, __int64 *a6)
{
  unsigned int v7; // r14d
  unsigned __int64 v8; // r12
  struct _KPRCB *CurrentPrcb; // rdi
  PSLIST_ENTRY v11; // rax
  _QWORD *HypercallCachedPages; // rsi
  unsigned __int64 Next; // r15
  int v14; // rdi^4
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int16 v20; // bx
  __int128 v22; // [rsp+28h] [rbp-30h] BYREF
  PSLIST_ENTRY v23; // [rsp+38h] [rbp-20h]
  unsigned __int64 v24; // [rsp+40h] [rbp-18h]
  int v27; // [rsp+B0h] [rbp+58h]
  int v29; // [rsp+C8h] [rbp+70h]

  v23 = 0LL;
  v7 = 0;
  LODWORD(v24) = 0;
  v8 = a4;
  *a6 = 0LL;
  v29 = (a3 >> 31) & 9;
  v22 = 0LL;
  if ( (HvlpFlags & 8) != 0
    && (CurrentPrcb = KeGetCurrentPrcb(),
        v11 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList),
        (HypercallCachedPages = &v11->Next) != 0LL) )
  {
    Next = (unsigned __int64)v11[1].Next;
    LODWORD(v22) = 1;
    *((_QWORD *)&v22 + 1) = CurrentPrcb;
    v23 = v11;
  }
  else
  {
    LODWORD(v22) = 4;
    BYTE8(v22) = KeDisableInterrupts();
    HIDWORD(v22) = 1;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = HypercallCachedPages[2];
  }
  v24 = Next;
  v14 = 0;
  HypercallCachedPages[1] = 0LL;
  *((_DWORD *)HypercallCachedPages + 5) = 0;
  *((_DWORD *)HypercallCachedPages + 4) = a3;
  v27 = a3 & 0x30000;
  v15 = *a6;
  *HypercallCachedPages = a1;
  LODWORD(a1) = 75;
  while ( 1 )
  {
    if ( v8 >= 0x1FD )
      v8 = 509LL;
    if ( !v27 )
    {
      v15 = *a6;
      memmove(HypercallCachedPages + 3, (const void *)(a5 + 8 * *a6), 8 * v8);
    }
    HypercallCachedPages[1] = a2 + (v15 << v29);
    v14 ^= ((unsigned __int16)v8 ^ (unsigned __int16)v14) & 0xFFF;
    HIDWORD(a1) = v14;
    v16 = HvcallInitiateHypercall(a1, Next);
    v20 = v16;
    if ( (_WORD)v16 )
      break;
    *a6 += WORD2(v16) & 0xFFF;
    v8 = a4 - *a6;
    if ( !v8 )
      break;
    v15 = *a6;
  }
  HvlpReleaseHypercallPage((unsigned int *)&v22, v17, v18, v19);
  if ( v20 )
    return (unsigned int)HvlpHvToNtStatus(v20);
  return v7;
}
