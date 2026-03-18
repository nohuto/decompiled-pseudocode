/*
 * XREFs of WmipDeregisterRegEntry @ 0x1403B6EF0
 * Callers:
 *     WmipRegisterDevice @ 0x140ACD8E8 (WmipRegisterDevice.c)
 *     WmipDeregisterDevice @ 0x140ACDBA8 (WmipDeregisterDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 *     WmipUnreferenceRegEntry @ 0x1403B7080 (WmipUnreferenceRegEntry.c)
 *     KeReleaseMutantEx @ 0x1403DD130 (KeReleaseMutantEx.c)
 *     WmipRemoveDS @ 0x140A0B50C (WmipRemoveDS.c)
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
  KeWaitForSingleObject(&EtwpSecurityLock.IoSelfBoostsEntry, Executive, 0, 0, 0LL);
  v2 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  *((_QWORD *)Entry + 5) = &Object;
  _m_prefetchw(Entry + 48);
  v3 = _InterlockedOr((volatile signed __int32 *)Entry + 12, 0xA0000000);
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v2);
  KeReleaseMutantEx((struct _KTHREAD *)&EtwpSecurityLock.IoSelfBoostsEntry);
  WmipUnreferenceRegEntry(Entry);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  KeWaitForSingleObject(&EtwpSecurityLock.IoSelfBoostsEntry, Executive, 0, 0, 0LL);
  v4 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  v5 = *(char ***)Entry;
  --WmipInUseRegEntryCount;
  if ( v5[1] != Entry || (v6 = (PVOID *)*((_QWORD *)Entry + 1), *v6 != Entry) )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = (char *)v6;
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v4);
  KeReleaseMutantEx((struct _KTHREAD *)&EtwpSecurityLock.IoSelfBoostsEntry);
  if ( (v3 & 0x10000000) == 0 )
    ObfDereferenceObjectWithTag(*((PVOID *)Entry + 2), 0x746C6644u);
  v7 = (void *)*((_QWORD *)Entry + 3);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
  WmipRemoveDS(Entry);
  ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E28440.SystemCallNumber, Entry);
}
