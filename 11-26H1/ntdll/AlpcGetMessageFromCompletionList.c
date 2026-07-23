/*
 * XREFs of AlpcGetMessageFromCompletionList @ 0x1800C0300
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 */

PPORT_MESSAGE __cdecl AlpcGetMessageFromCompletionList(
        PVOID CompletionList,
        PALPC_MESSAGE_ATTRIBUTES *MessageAttributes)
{
  _ALPC_MESSAGE_ATTRIBUTES *v2; // rsi
  unsigned int v3; // ebp
  PALPC_MESSAGE_ATTRIBUTES *v4; // r14
  char *SchedulerSharedDataSlot; // r8
  unsigned int i; // eax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  char *v10; // r10
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // r11
  signed __int64 v15; // rcx
  _PORT_MESSAGE *v16; // rdi

  v2 = (_ALPC_MESSAGE_ATTRIBUTES *)((char *)CompletionList + 320);
  v3 = 0;
  v4 = MessageAttributes;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      MessageAttributes = (PALPC_MESSAGE_ATTRIBUTES *)&SchedulerSharedDataSlot[8 * i];
      if ( !*MessageAttributes )
      {
        *MessageAttributes = v2;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)v2, (unsigned __int64)MessageAttributes);
  v8 = *((_QWORD *)CompletionList + 8);
  v9 = (unsigned __int64)*((unsigned int *)CompletionList + 4) >> 2;
  v10 = (char *)CompletionList + *((unsigned int *)CompletionList + 3);
  do
  {
    v11 = v8;
    v12 = v8 & 0xFFFFFF;
    if ( v12 == 0xFFFFFF || v12 >= v9 || (v13 = (v8 >> 24) & 0xFFFFFF, v13 >= v9) )
    {
      v16 = 0LL;
      goto LABEL_18;
    }
    v14 = *(unsigned int *)&v10[4 * (v8 & 0xFFFFFF)];
    if ( v12 == v13 )
      v15 = v8 | 0xFFFFFFFFFFFFLL;
    else
      v15 = ((v12 + 1) % v9) ^ (v8 ^ ((v12 + 1) % v9)) & 0xFFFFFFFFFF000000uLL;
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)CompletionList + 8, v15, v8);
  }
  while ( v8 != v11 );
  v16 = (_PORT_MESSAGE *)((char *)CompletionList + *((unsigned int *)CompletionList + 7) + v14);
  if ( v4 )
  {
    if ( *((_DWORD *)CompletionList + 9) )
    {
      if ( (((_BYTE)v16 + (unsigned __int8)v16->u1.s1.TotalLength) & 7) != 0 )
        v3 = 8 - (((_BYTE)v16 + (unsigned __int8)v16->u1.s1.TotalLength) & 7);
      *v4 = (PALPC_MESSAGE_ATTRIBUTES)((char *)v16 + (unsigned __int16)v16->u1.s1.TotalLength + v3);
    }
    else
    {
      *v4 = 0LL;
    }
  }
LABEL_18:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v2);
  return v16;
}
