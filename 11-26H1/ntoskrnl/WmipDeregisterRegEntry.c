/*
 * XREFs of WmipDeregisterRegEntry @ 0x1403C0DF0
 * Callers:
 *     WmipRegisterDevice @ 0x140ACFB28 (WmipRegisterDevice.c)
 *     WmipDeregisterDevice @ 0x140ACFDE8 (WmipDeregisterDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     WmipUnreferenceRegEntry @ 0x1403C0F80 (WmipUnreferenceRegEntry.c)
 *     KeReleaseMutantEx @ 0x1403E0320 (KeReleaseMutantEx.c)
 *     WmipRemoveDS @ 0x140B3C5D8 (WmipRemoveDS.c)
 */

void __fastcall WmipDeregisterRegEntry(char *Entry)
{
  KIRQL v2; // dl
  signed __int32 v3; // edi
  KIRQL v4; // al
  char **v5; // r10
  PVOID *v6; // r9
  void *v7; // rcx
  __int64 Object; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v9[3]; // [rsp+38h] [rbp-18h] BYREF

  Object = 393217LL;
  v9[1] = v9;
  v9[0] = v9;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v2 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  *((_QWORD *)Entry + 5) = &Object;
  _m_prefetchw(Entry + 48);
  v3 = _InterlockedOr((volatile signed __int32 *)Entry + 12, 0xA0000000);
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v2);
  KeReleaseMutantEx((struct _KTHREAD *)&WmipSMMutex);
  WmipUnreferenceRegEntry(Entry);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  v5 = *(char ***)Entry;
  --WmipInUseRegEntryCount;
  if ( v5[1] != Entry || (v6 = (PVOID *)*((_QWORD *)Entry + 1), *v6 != Entry) )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = (char *)v6;
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v4);
  KeReleaseMutantEx((struct _KTHREAD *)&WmipSMMutex);
  if ( (v3 & 0x10000000) == 0 )
    ObfDereferenceObjectWithTag(*((PVOID *)Entry + 2), 0x746C6644u);
  v7 = (void *)*((_QWORD *)Entry + 3);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
  WmipRemoveDS(Entry);
  ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E285C0.SystemCallNumber, Entry);
}
