/*
 * XREFs of ExTryToConvertFastResourceSharedToExclusive @ 0x1406D2490
 * Callers:
 *     DifExTryToConvertFastResourceSharedToExclusiveWrapper @ 0x140658B10 (DifExTryToConvertFastResourceSharedToExclusiveWrapper.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExpConvertSharedToExclusiveImmediately @ 0x1406D2680 (ExpConvertSharedToExclusiveImmediately.c)
 */

char __fastcall ExTryToConvertFastResourceSharedToExclusive(struct _KTHREAD *a1, ULONG_PTR BugCheckParameter2)
{
  char v2; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v6; // rax
  char v7; // al
  signed __int64 v8; // rax
  signed __int64 v9; // rcx
  signed __int64 v10; // rtt
  unsigned __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r9

  v2 = 1;
  if ( (BYTE2(a1->SListFaultAddress) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)a1, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  if ( (struct _KTHREAD *)(*(_QWORD *)(BugCheckParameter2 + 16) & 0xFFFFFFFFFFFFFFFEuLL) != CurrentThread )
    KeBugCheckEx(0x1C6u, 9uLL, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 16) & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 37) & 2) == 0 )
  {
    v6 = *(struct _KTHREAD **)(BugCheckParameter2 + 24);
    if ( v6 != a1 )
    {
      if ( v6 )
        KeBugCheckEx(0x1C6u, 8uLL, (ULONG_PTR)a1, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 24));
    }
  }
  if ( (*(_QWORD *)(BugCheckParameter2 + 16) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, BugCheckParameter2, 0LL, 0LL);
  v7 = *(_BYTE *)(BugCheckParameter2 + 37);
  if ( (v7 & 2) != 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, BugCheckParameter2, (unsigned __int64)(v7 & 2) << 15, 0LL);
  if ( *(int *)(BugCheckParameter2 + 32) > 1 )
    KeBugCheckEx(0x1C6u, 0x13uLL, (ULONG_PTR)a1, 0LL, 0LL);
  _m_prefetchw(a1);
  v8 = *(_QWORD *)&a1->Header.Lock;
  do
  {
    if ( (v8 & 1) != 0 )
      break;
    if ( (v8 & 2) != 0 || v8 >> 2 != 1 )
      return 0;
    v9 = v8 & 2 | 1;
    if ( v9 == v8 )
      break;
    v10 = v8;
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, v9, v8);
  }
  while ( v10 != v8 );
  v11 = *(unsigned __int8 *)(BugCheckParameter2 + 36);
  ExpConvertSharedToExclusiveImmediately(a1, BugCheckParameter2, KeGetCurrentThread());
  if ( BYTE4(a1->StateSaveArea) )
  {
    if ( (_BYTE)v11 )
      KeAbPostReleaseEx(a1, v11, v12, v13);
  }
  else
  {
    BYTE4(a1->StateSaveArea) = v11;
  }
  return v2;
}
