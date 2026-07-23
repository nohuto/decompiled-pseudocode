/*
 * XREFs of HvlMapSparseGpaPages @ 0x140488880
 * Callers:
 *     VmpProcessInvalidateList @ 0x140512570 (VmpProcessInvalidateList.c)
 *     VmpFillSlat @ 0x1406C4B94 (VmpFillSlat.c)
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall HvlMapSparseGpaPages(__int64 a1, int a2, unsigned __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v6; // esi
  char v7; // al
  struct _KPRCB *CurrentPrcb; // rbx
  _QWORD *HypercallCachedPages; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r15
  int v16; // rdi^4
  void *v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int16 v21; // bx
  bool v23; // al
  __int128 v24; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v25; // [rsp+30h] [rbp-10h]
  unsigned __int64 v26; // [rsp+38h] [rbp-8h]
  void *v27; // [rsp+80h] [rbp+40h]
  __int64 v29; // [rsp+A0h] [rbp+60h]

  v6 = 0;
  v25 = 0LL;
  LODWORD(v26) = 0;
  v7 = HvlpFlags;
  *a5 = 0LL;
  v24 = 0LL;
  if ( (v7 & 8) == 0 )
  {
    LODWORD(v24) = 4;
    v23 = KeDisableInterrupts();
    goto LABEL_13;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  HypercallCachedPages = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
  if ( !HypercallCachedPages )
  {
    LODWORD(v24) = 4;
    v23 = KeDisableInterrupts();
    v13 = a4;
LABEL_13:
    BYTE8(v24) = v23;
    HIDWORD(v24) = 1;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    goto LABEL_4;
  }
  v13 = a4;
  LODWORD(v24) = 1;
  *((_QWORD *)&v24 + 1) = CurrentPrcb;
  v25 = HypercallCachedPages;
LABEL_4:
  v14 = HypercallCachedPages[2];
  v26 = v14;
  *((_DWORD *)HypercallCachedPages + 3) = 0;
  *HypercallCachedPages = a1;
  v15 = a3;
  *((_DWORD *)HypercallCachedPages + 2) = a2;
  v16 = 0;
  v17 = HypercallCachedPages + 2;
  LODWORD(v29) = 110;
  v27 = v17;
  do
  {
    if ( v15 >= 0xFF )
      v15 = 255LL;
    memmove(v17, (const void *)(v13 + 16LL * *a5), 16 * v15);
    v16 ^= ((unsigned __int16)v15 ^ (unsigned __int16)v16) & 0xFFF;
    HIDWORD(v29) = v16;
    v18 = HvcallInitiateHypercall(v29, v14);
    v21 = v18;
    if ( (_WORD)v18 )
      break;
    v13 = a4;
    *a5 += HIDWORD(v18) & 0xFFF;
    v17 = v27;
    v15 = a3 - *a5;
  }
  while ( a3 != *a5 );
  HvlpReleaseHypercallPage((unsigned int *)&v24, v19, v20, v13);
  if ( v21 )
    return (unsigned int)HvlpHvToNtStatus(v21);
  return v6;
}
