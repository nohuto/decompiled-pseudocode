/*
 * XREFs of RtlpWnfProcessCurrentDescriptor @ 0x18003A200
 * Callers:
 *     RtlpWnfNotificationThread @ 0x180039D50 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x180111120 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18003A554 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpDereferenceWnfNameSubscription @ 0x18003ABD0 (RtlpDereferenceWnfNameSubscription.c)
 *     RtlpWnfCalculateRetryTime @ 0x180114A2C (RtlpWnfCalculateRetryTime.c)
 *     NtGetCompleteWnfStateSubscription @ 0x180160D70 (NtGetCompleteWnfStateSubscription.c)
 *     memcmp @ 0x1801648D0 (memcmp.c)
 */

void __fastcall RtlpWnfProcessCurrentDescriptor(_WNF_STATE_NAME *OldSubscriptionId, int a2, _DWORD *a3, _DWORD *a4)
{
  ULONG64 *v5; // r12
  _RTL_SRWLOCK *v6; // rcx
  _RTL_SRWLOCK *v9; // rbp
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  int v12; // esi
  int v13; // eax
  unsigned __int64 v14; // rax
  _RTL_SRWLOCK *v15; // rbx
  int Ptr_high; // eax
  unsigned __int64 *v17; // rdi
  unsigned __int64 *i; // rax
  ULONG64 *Value; // rax
  int v20; // ecx
  void *Ptr; // r8

  *a3 = 1;
  v5 = 0LL;
  v6 = (_RTL_SRWLOCK *)(qword_1801C6200 + 8);
  *a4 = 0;
  RtlAcquireSRWLockShared(v6);
  v9 = (_RTL_SRWLOCK *)qword_1801C6200;
  v10 = *(_QWORD *)(qword_1801C6200 + 24);
  v11 = *(_QWORD *)(qword_1801C6200 + 16);
  if ( (v10 & 1) != 0 )
  {
    if ( !v11 )
      goto LABEL_36;
    v11 ^= qword_1801C6200 + 16;
  }
  v12 = v10 & 1;
  if ( !v11 )
    goto LABEL_36;
  do
  {
    v13 = memcmp(&OldSubscriptionId[1], (const void *)(v11 - 16), 8uLL);
    if ( v13 < 0 )
    {
      v14 = *(_QWORD *)v11;
      if ( v12 && v14 )
        goto LABEL_32;
      goto LABEL_5;
    }
    if ( v13 <= 0 )
      break;
    v14 = *(_QWORD *)(v11 + 8);
    if ( v12 && v14 )
    {
LABEL_32:
      v11 ^= v14;
      continue;
    }
LABEL_5:
    v11 = v14;
  }
  while ( v11 );
  if ( !v11 || (v15 = (_RTL_SRWLOCK *)(v11 - 32)) == 0LL || v15[1].Value != *OldSubscriptionId )
  {
LABEL_36:
    RtlReleaseSRWLockShared(v9 + 1);
    return;
  }
  RtlAcquireSRWLockExclusive(v15 + 8);
  Ptr_high = HIDWORD(v15[15].Ptr);
  if ( !Ptr_high )
    goto LABEL_11;
  if ( Ptr_high == 1 )
  {
    if ( !a2 )
    {
      Ptr = v15[16].Ptr;
      if ( Ptr )
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Ptr);
      v15[16].Value = (unsigned __int64)OldSubscriptionId;
      *a3 = 0;
    }
LABEL_35:
    RtlReleaseSRWLockExclusive(v15 + 8);
    v9 = (_RTL_SRWLOCK *)qword_1801C6200;
    goto LABEL_36;
  }
  if ( a2 )
    goto LABEL_35;
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v15[16].Ptr);
  v15[16].Value = 0LL;
  HIDWORD(v15[15].Ptr) = 0;
LABEL_11:
  HIDWORD(v15[15].Ptr) = 1;
  if ( _InterlockedIncrement64((volatile signed __int64 *)&v15[11]) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockExclusive(v15 + 8);
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_1801C6200 + 8));
  v17 = (unsigned __int64 *)&v15[9];
  while ( 1 )
  {
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(OldSubscriptionId, v15, 0LL) == -1073741267 )
      *a4 = 1;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(OldSubscriptionId, v15, 1LL) == -1073741267 )
      *a4 = 1;
    RtlAcquireSRWLockExclusive(v15 + 8);
    for ( i = (unsigned __int64 *)*v17; i != v17; i = (unsigned __int64 *)*i )
      *((_DWORD *)i + 37) = 0;
    Value = (ULONG64 *)v15[16].Value;
    if ( !Value )
      break;
    v15[16].Value = 0LL;
    OldSubscriptionId = (_WNF_STATE_NAME *)Value;
    RtlReleaseSRWLockExclusive(v15 + 8);
    if ( v5 )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v5);
    v5 = (ULONG64 *)OldSubscriptionId;
    *a4 = 0;
  }
  if ( *a4 )
  {
    v15[16].Value = (unsigned __int64)OldSubscriptionId;
    HIDWORD(v15[15].Ptr) = 2;
    if ( OldSubscriptionId == (_WNF_STATE_NAME *)v5 )
      v5 = 0LL;
    RtlpWnfCalculateRetryTime(v15);
    *a3 = 0;
  }
  else
  {
    v20 = (int)v15[3].0;
    HIDWORD(v15[15].Ptr) = 0;
    if ( !v20 || (signed int)(OldSubscriptionId[2].Data[0] - v20) > 0 )
      *(_DWORD *)&v15[3].0 = OldSubscriptionId[2].Data[0];
  }
  NtGetCompleteWnfStateSubscription(
    OldSubscriptionId + 1,
    (ULONG64 *)OldSubscriptionId,
    OldSubscriptionId[3].Data[0],
    *a4 != 0 ? 0xC000022D : 0,
    0LL,
    0);
  RtlReleaseSRWLockExclusive(v15 + 8);
  RtlpDereferenceWnfNameSubscription(v15);
  if ( v5 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v5);
}
