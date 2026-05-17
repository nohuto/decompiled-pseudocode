/*
 * XREFs of TpReleaseWait @ 0x1800703F0
 * Callers:
 *     EtwpRegisterTpNotificationOnce @ 0x1800700DC (EtwpRegisterTpNotificationOnce.c)
 *     RtlpWnfRegisterTpNotification @ 0x180070714 (RtlpWnfRegisterTpNotification.c)
 *     RtlDeregisterWaitEx @ 0x1801087C0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     TppBarrierAdjust @ 0x18002D290 (TppBarrierAdjust.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 *     TppCancelTimer @ 0x1800686D0 (TppCancelTimer.c)
 *     ZwCancelWaitCompletionPacket @ 0x180160210 (ZwCancelWaitCompletionPacket.c)
 */

void __fastcall TpReleaseWait(__int64 a1, __int64 a2)
{
  int v2; // eax
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  __int64 v6; // rsi
  _BYTE *v7; // rsi
  int v8; // edi
  void *ThreadPoolData; // rax
  int v10; // eax
  char v11; // al
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_DWORD *)(a1 + 168);
  if ( (v2 & 0x10000) != 0
    || (v2 & 0x20000) != 0
    && ((ThreadPoolData = NtCurrentTeb()->ThreadPoolData) == 0LL || *(_QWORD *)(*(_QWORD *)ThreadPoolData + 240LL) != a1)
    || *(__int64 (__fastcall ***)())(a1 + 8) != TppWaitpCleanupGroupMemberVFuncs
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
      return;
LABEL_17:
    TppRaiseInvalidParameter();
    return;
  }
  _m_prefetchw((const void *)(a1 + 168));
  v4 = *(_DWORD *)(a1 + 168);
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 168), v4 | 0x10000, v4);
  }
  while ( v5 != v4 );
  if ( (v4 & 0x10000) != 0 )
    goto LABEL_17;
  if ( (v4 & 0x30000) != 0 )
    return;
  v6 = *(_QWORD *)(a1 + 144);
  *(_QWORD *)(a1 + 184) = retaddr;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 240), a2);
  if ( *(_QWORD *)(a1 + 360) )
  {
    v10 = ZwCancelWaitCompletionPacket(*(_QWORD *)(a1 + 368), 1LL);
    if ( !v10 )
    {
      *(_QWORD *)(a1 + 360) = 0LL;
      v8 = -1;
      if ( TppCancelTimer(a1, (volatile signed __int64 *)(v6 + 112), 1) )
        v8 = -2;
      v7 = (_BYTE *)(a1 + 464);
      if ( (*(_BYTE *)(a1 + 464) & 4) != 0 )
      {
        TppBarrierAdjust((signed __int64 *)(a1 + 56), -1, 0);
        *v7 &= ~4u;
      }
      goto LABEL_12;
    }
    if ( v10 != 259 && v10 != -1073741536 )
      TppRaiseInvalidParameter();
    v7 = (_BYTE *)(a1 + 464);
    v11 = *(_BYTE *)(a1 + 464);
    if ( (v11 & 4) == 0 )
    {
      *v7 = v11 | 4;
      TppBarrierAdjust((signed __int64 *)(a1 + 56), 1, 0);
    }
  }
  else
  {
    v7 = (_BYTE *)(a1 + 464);
  }
  v8 = 0;
LABEL_12:
  *v7 &= ~1u;
  *v7 &= ~2u;
  ++*(_BYTE *)(a1 + 355);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, v8 - 1) == 1 - v8 )
    (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
}
