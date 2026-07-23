/*
 * XREFs of WheapProcessOfflineList @ 0x1406538A0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     WheaLogInternalEvent @ 0x1406520E0 (WheaLogInternalEvent.c)
 *     MmGetPageBadStatus @ 0x140669050 (MmGetPageBadStatus.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     WheapPushPendingOfflineWrapper @ 0x1407B9E34 (WheapPushPendingOfflineWrapper.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 WheapProcessOfflineList()
{
  KIRQL v0; // al
  _SINGLE_LIST_ENTRY *v1; // rbx
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
  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140EF7508);
  v1 = (_SINGLE_LIST_ENTRY *)WheapOfflineChecker;
  WheapOfflineChecker = 0LL;
  dword_140EF7510 = 0;
  KeReleaseSpinLock(&qword_140EF7508, v0);
  while ( v1 )
  {
    v2 = v1;
    v1 = v1->Next;
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
      _InterlockedDecrement(&dword_140EF7520);
    }
  }
  return 0LL;
}
