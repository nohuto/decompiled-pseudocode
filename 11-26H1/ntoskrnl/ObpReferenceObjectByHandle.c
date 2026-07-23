/*
 * XREFs of ObpReferenceObjectByHandle @ 0x14092A3F0
 * Callers:
 *     ObWaitForMultipleObjects @ 0x140A2C6D0 (ObWaitForMultipleObjects.c)
 * Callees:
 *     ExSlowReplenishHandleTableEntry @ 0x1404453A0 (ExSlowReplenishHandleTableEntry.c)
 *     ExGetHandlePointer @ 0x14044EE00 (ExGetHandlePointer.c)
 *     ExHandleLogBadReference @ 0x140466170 (ExHandleLogBadReference.c)
 *     ExFastReplenishHandleTableEntry @ 0x1404A61B0 (ExFastReplenishHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14092AE54 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14092AE90 (ExpLookupHandleTableEntry.c)
 */

__int64 *__fastcall ObpReferenceObjectByHandle(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        __int64 *a3,
        volatile signed __int64 **a4)
{
  __int64 *v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int128 v12; // rt0
  unsigned __int8 v13; // tt
  unsigned __int64 v14; // rcx
  volatile signed __int64 *HandlePointer; // rax
  __int64 v16; // rcx
  signed __int64 v17; // r8
  int v18; // eax
  volatile signed __int64 *v19; // r8
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  int v23; // eax
  signed __int32 v24[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( (BugCheckParameter1 & 0x3FC) != 0
    && (v8 = (__int64 *)ExpLookupHandleTableEntry(BugCheckParameter2, BugCheckParameter1), (v9 = v8) != 0LL) )
  {
    _m_prefetchw(v8);
    v10 = *v8;
LABEL_4:
    *a3 = v10;
    a3[1] = v9[1];
    while ( 1 )
    {
      v11 = *a3;
      if ( (*a3 & 0x1FFFE) == 0 )
        break;
      if ( (v11 & 1) == 0 )
      {
        ExpBlockOnLockedHandleEntry(BugCheckParameter2, v9, *a3);
        _m_prefetchw(v9);
        v10 = *v9;
        goto LABEL_4;
      }
      v12 = *(_OWORD *)a3;
      v13 = _InterlockedCompareExchange128(v9, *((signed __int64 *)&v12 + 1), v11 - 2, (signed __int64 *)&v12);
      *(_OWORD *)a3 = v12;
      if ( v13 )
      {
        v14 = (unsigned __int64)*a3 >> 1;
        if ( (_WORD)v14 == 16 )
        {
          *a3 = (2 * v14 - 2) ^ (*a3 ^ (2 * v14 - 2)) & 0xFFFFFFFFFFFE0001uLL;
          HandlePointer = (volatile signed __int64 *)ExGetHandlePointer(a3);
          *a4 = HandlePointer;
          v16 = _InterlockedExchangeAdd64(HandlePointer, 0x7FF0uLL);
          if ( v16 <= 0 )
            KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(HandlePointer + 6), 0x10uLL, v16 + 32752);
          v23 = ExFastReplenishHandleTableEntry(v9, (unsigned __int64 *)a3, 32752);
          if ( v23 )
            _InterlockedAdd64(*a4, -v23);
        }
        else
        {
          *a4 = (volatile signed __int64 *)ExGetHandlePointer(a3);
        }
        return v9;
      }
    }
    do
    {
      while ( 1 )
      {
        _m_prefetchw(v9);
        v17 = *v9;
        if ( (*v9 & 1) != 0 )
          break;
        if ( !v17 )
          goto LABEL_21;
        ExpBlockOnLockedHandleEntry(BugCheckParameter2, v9, v17);
      }
    }
    while ( v17 != _InterlockedCompareExchange64(v9, v17 - 1, v17) );
    *a4 = (volatile signed __int64 *)ExGetHandlePointer(v9);
    *(_OWORD *)a3 = *(_OWORD *)v9;
    v18 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v9);
    v19 = *a4;
    v20 = v18 + 1;
    v21 = _InterlockedExchangeAdd64(*a4, v20);
    if ( v21 <= 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v19 + 6), 0x10uLL, v20 + v21);
    _InterlockedIncrement64(v9);
    _InterlockedOr(v24, 0);
    if ( *(_QWORD *)(BugCheckParameter2 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(BugCheckParameter2 + 48), 0LL);
    return v9;
  }
  else
  {
LABEL_21:
    if ( BugCheckParameter1 )
      ExHandleLogBadReference(BugCheckParameter2, BugCheckParameter1, KeGetCurrentThread()->PreviousMode);
    return 0LL;
  }
}
