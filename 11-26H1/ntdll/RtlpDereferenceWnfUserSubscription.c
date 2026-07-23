/*
 * XREFs of RtlpDereferenceWnfUserSubscription @ 0x18008E680
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18003A554 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x1800902B4 (RtlpRemoveUserSubFromNameSub.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlpWakeByAddress @ 0x180035FC0 (RtlpWakeByAddress.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x18008E764 (RtlpDecrementWnfSerializationGroup.c)
 */

LOGICAL __fastcall RtlpDereferenceWnfUserSubscription(volatile signed __int64 *BaseAddress, _QWORD *a2, _QWORD *a3)
{
  signed __int64 v6; // rax
  bool v7; // cc
  signed __int64 v8; // rax
  LOGICAL result; // eax
  void *v10; // rcx
  volatile signed __int64 **v11; // rdx
  PVOID *v12; // rcx
  _DWORD *v13; // r14
  signed __int32 v14[10]; // [rsp+0h] [rbp-28h] BYREF

  v6 = _InterlockedExchangeAdd64(BaseAddress + 4, 0xFFFFFFFFFFFFFFFFuLL);
  v7 = v6 <= 1;
  v8 = v6 - 1;
  if ( v7 )
  {
    if ( v8 )
      __fastfail(0xEu);
    v10 = (void *)*((_QWORD *)BaseAddress + 10);
    if ( v10 )
      RtlpDecrementWnfSerializationGroup(v10);
    v11 = (volatile signed __int64 **)*((_QWORD *)BaseAddress + 1);
    if ( v11[1] != BaseAddress + 1 || (v12 = (PVOID *)*((_QWORD *)BaseAddress + 2), *v12 != BaseAddress + 1) )
      __fastfail(3u);
    *v12 = v11;
    v11[1] = (volatile signed __int64 *)v12;
    v13 = (_DWORD *)*((_QWORD *)BaseAddress + 11);
    *a2 = *((_QWORD *)BaseAddress + 12);
    *a3 = *((_QWORD *)BaseAddress + 13);
    result = RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, (PVOID)BaseAddress);
    if ( v13 )
    {
      *v13 = 1;
      _InterlockedOr(v14, 0);
      return RtlpWakeByAddress((unsigned __int64)v13, 0, 0LL);
    }
  }
  else
  {
    result = 0;
    *a2 = 0LL;
    *a3 = 0LL;
  }
  return result;
}
