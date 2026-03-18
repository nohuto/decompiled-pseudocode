/*
 * XREFs of WheapProcessOfflineList @ 0x1406D8C30
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     WheaLogInternalEvent @ 0x1403DFEC0 (WheaLogInternalEvent.c)
 *     MmGetPageBadStatus @ 0x1406F2340 (MmGetPageBadStatus.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     WheapPushPendingOfflineWrapper @ 0x14084A4E8 (WheapPushPendingOfflineWrapper.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 WheapProcessOfflineList()
{
  KIRQL v0; // al
  struct _SINGLE_LIST_ENTRY *SparePtr; // rbx
  struct _SINGLE_LIST_ENTRY *v2; // rsi
  struct _SINGLE_LIST_ENTRY *Next; // rdi
  int PageBadStatus; // eax
  struct _SINGLE_LIST_ENTRY *v6; // [rsp+20h] [rbp-40h] BYREF
  __int128 Src; // [rsp+28h] [rbp-38h] BYREF
  __int128 v8; // [rsp+38h] [rbp-28h]
  struct _SINGLE_LIST_ENTRY *v9; // [rsp+48h] [rbp-18h]

  Src = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CmpCallbackListLock.WaitBlock[1]);
  SparePtr = (struct _SINGLE_LIST_ENTRY *)CmpCallbackListLock.WaitBlock[0].SparePtr;
  CmpCallbackListLock.WaitBlock[0].SparePtr = 0LL;
  *(_DWORD *)&CmpCallbackListLock.WaitBlockFill11[56] = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)&CmpCallbackListLock.WaitBlock[1], v0);
  while ( SparePtr )
  {
    v2 = SparePtr;
    SparePtr = SparePtr->Next;
    Next = v2[1].Next;
    v6 = Next;
    PageBadStatus = MmGetPageBadStatus(&v6);
    if ( PageBadStatus == -1073740023 )
    {
      *(_QWORD *)&Src = 0x1674C6857LL;
      *((_QWORD *)&Src + 1) = 40LL;
      *(_QWORD *)&v8 = 0x800000324C4E524BuLL;
      *((_QWORD *)&v8 + 1) = 0x800000002LL;
      v9 = Next;
      WheaLogInternalEvent(&Src);
      goto LABEL_4;
    }
    if ( PageBadStatus == 259 )
    {
      WheapPushPendingOfflineWrapper(v2);
    }
    else
    {
LABEL_4:
      ExFreePoolWithTag(v2, 0x61656857u);
      _InterlockedDecrement((volatile signed __int32 *)&CmpCallbackListLock.WaitBlockFill11[72]);
    }
  }
  return 0LL;
}
