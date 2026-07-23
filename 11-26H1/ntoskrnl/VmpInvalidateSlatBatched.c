/*
 * XREFs of VmpInvalidateSlatBatched @ 0x1406C5010
 * Callers:
 *     VmpRemoveMemoryRange @ 0x14050AC9C (VmpRemoveMemoryRange.c)
 *     VmpUnpinMemoryRangeHelper @ 0x1406C644C (VmpUnpinMemoryRangeHelper.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     VmpInsertInvalidateListRange @ 0x140253938 (VmpInsertInvalidateListRange.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     VmpProcessInvalidateList @ 0x140512570 (VmpProcessInvalidateList.c)
 *     VmpInvalidateOutstandingFaults @ 0x1405249A8 (VmpInvalidateOutstandingFaults.c)
 *     VmpFindNextPinnedPageStateHelper @ 0x1406C4DA8 (VmpFindNextPinnedPageStateHelper.c)
 */

char __fastcall VmpInvalidateSlatBatched(
        PEX_SPIN_LOCK SpinLock,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5,
        unsigned int a6,
        unsigned int **a7)
{
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned int *v10; // rbx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r12
  unsigned __int64 NextPinnedPageStateHelper; // rax
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned int v19; // eax
  KIRQL v20; // al
  unsigned __int64 v22; // [rsp+30h] [rbp-48h]
  unsigned __int64 v23; // [rsp+88h] [rbp+10h]
  unsigned __int64 v24; // [rsp+90h] [rbp+18h]
  unsigned __int64 v25; // [rsp+98h] [rbp+20h]

  v25 = a4;
  v24 = a3;
  v23 = a2;
  v7 = a3;
  v8 = a2;
  if ( a7 )
  {
    v10 = *a7;
    if ( *a7 )
      goto LABEL_4;
  }
  while ( 1 )
  {
    v8 = v23;
    v10 = (unsigned int *)((char *)KeGetCurrentPrcb()->VmInternal + 4608);
LABEL_4:
    v11 = v8;
    v12 = a4;
    v13 = v7;
    if ( a4 > 0x40000 )
      v12 = 0x40000LL;
    v14 = 0LL;
    v23 = v12 + v8;
    NextPinnedPageStateHelper = v12 + v8 - 1;
    v22 = NextPinnedPageStateHelper;
    if ( v12 )
    {
      while ( 1 )
      {
        if ( (a6 & 4) != 0
          || (v17 = VmpFindNextPinnedPageStateHelper((__int64)SpinLock, v11, NextPinnedPageStateHelper, 1), v17 == -1) )
        {
          v16 = v12 - v14;
        }
        else
        {
          if ( v17 == v11 )
          {
            NextPinnedPageStateHelper = VmpFindNextPinnedPageStateHelper((__int64)SpinLock, v11, v22, 0);
            if ( NextPinnedPageStateHelper == -1LL )
              goto LABEL_18;
            v14 += NextPinnedPageStateHelper - v11;
            v18 = NextPinnedPageStateHelper - v11;
            v11 = NextPinnedPageStateHelper;
            v13 += v18;
            goto LABEL_17;
          }
          v16 = v17 - v11;
        }
        v19 = a6;
        if ( (a6 & 1) != 0 )
        {
          VmpInvalidateOutstandingFaults((__int64)SpinLock, v13, v16);
          v19 = a6;
        }
        VmpInsertInvalidateListRange((__int64)SpinLock, v10, v11, v13, v16, v19);
        v11 += v16;
        v13 += v16;
        v14 += v16;
LABEL_17:
        NextPinnedPageStateHelper = v22;
        if ( v14 >= v12 )
        {
LABEL_18:
          a4 = v25;
          v7 = v24;
          break;
        }
      }
    }
    v25 = a4 - v12;
    if ( a4 == v12 )
      break;
    if ( *((_QWORD *)v10 + 1) )
      VmpProcessInvalidateList((__int64)SpinLock, (__int64)v10);
    v10[1] = 0;
    if ( *a5 == -2LL )
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    else
      ExReleaseSpinLockExclusive(SpinLock, *a5);
    v7 += v12;
    v24 = v7;
    v20 = ExAcquireSpinLockExclusive(SpinLock);
    a4 = v25;
    *a5 = v20;
  }
  if ( a7 )
  {
    *a7 = v10;
  }
  else
  {
    if ( *((_QWORD *)v10 + 1) )
      LOBYTE(NextPinnedPageStateHelper) = VmpProcessInvalidateList((__int64)SpinLock, (__int64)v10);
    v10[1] = 0;
  }
  return NextPinnedPageStateHelper;
}
