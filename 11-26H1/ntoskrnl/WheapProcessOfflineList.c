/*
 * XREFs of WheapProcessOfflineList @ 0x1406DCDC0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     MmGetPageBadStatus @ 0x1406F6FB0 (MmGetPageBadStatus.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     WheapPushPendingOfflineWrapper @ 0x1408507F8 (WheapPushPendingOfflineWrapper.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 WheapProcessOfflineList()
{
  KIRQL v0; // al
  _SINGLE_LIST_ENTRY *Object; // rbx
  _SINGLE_LIST_ENTRY *v2; // rsi
  struct _SINGLE_LIST_ENTRY *Next; // rdi
  int PageBadStatus; // eax
  struct _SINGLE_LIST_ENTRY *v6; // [rsp+20h] [rbp-40h] BYREF
  __int128 Src; // [rsp+28h] [rbp-38h] BYREF
  __int128 v8; // [rsp+38h] [rbp-28h]
  struct _SINGLE_LIST_ENTRY *v9; // [rsp+48h] [rbp-18h]

  Src = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CmpContextListLock.WaitBlock[0].SparePtr);
  Object = (_SINGLE_LIST_ENTRY *)CmpContextListLock.WaitBlock[0].Object;
  CmpContextListLock.WaitBlock[0].Object = 0LL;
  *(_DWORD *)&CmpContextListLock.WaitBlockFill11[48] = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)&CmpContextListLock.WaitBlock[0].SparePtr, v0);
  while ( Object )
  {
    v2 = Object;
    Object = Object->Next;
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
      _InterlockedDecrement((volatile signed __int32 *)&CmpContextListLock.WaitBlockFill11[64]);
    }
  }
  return 0LL;
}
