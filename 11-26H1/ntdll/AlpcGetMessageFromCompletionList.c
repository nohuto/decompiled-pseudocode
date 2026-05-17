/*
 * XREFs of AlpcGetMessageFromCompletionList @ 0x1800C2C30
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall AlpcGetMessageFromCompletionList(__int64 a1, volatile signed __int64 **a2)
{
  volatile signed __int64 *v2; // rsi
  unsigned int v3; // ebp
  volatile signed __int64 **v4; // r14
  char *SchedulerSharedDataSlot; // r8
  unsigned int i; // eax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  __int64 v10; // r10
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // r11
  signed __int64 v15; // rcx
  __int64 v16; // rdi

  v2 = (volatile signed __int64 *)(a1 + 320);
  v3 = 0;
  v4 = a2;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      a2 = (volatile signed __int64 **)&SchedulerSharedDataSlot[8 * i];
      if ( !*a2 )
      {
        *a2 = v2;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    RtlpAcquireSRWLockExclusiveContended(v2, (__int64)a2);
  v8 = *(_QWORD *)(a1 + 64);
  v9 = (unsigned __int64)*(unsigned int *)(a1 + 16) >> 2;
  v10 = a1 + *(unsigned int *)(a1 + 12);
  do
  {
    v11 = v8;
    v12 = v8 & 0xFFFFFF;
    if ( v12 == 0xFFFFFF || v12 >= v9 || (v13 = (v8 >> 24) & 0xFFFFFF, v13 >= v9) )
    {
      v16 = 0LL;
      goto LABEL_18;
    }
    v14 = *(unsigned int *)(v10 + 4 * (v8 & 0xFFFFFF));
    if ( v12 == v13 )
      v15 = v8 | 0xFFFFFFFFFFFFLL;
    else
      v15 = ((v12 + 1) % v9) ^ (v8 ^ ((v12 + 1) % v9)) & 0xFFFFFFFFFF000000uLL;
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v15, v8);
  }
  while ( v8 != v11 );
  v16 = v14 + a1 + *(unsigned int *)(a1 + 28);
  if ( v4 )
  {
    if ( *(_DWORD *)(a1 + 36) )
    {
      if ( (((_BYTE)v16 + (unsigned __int8)*(_WORD *)(v16 + 2)) & 7) != 0 )
        v3 = 8 - (((_BYTE)v16 + (unsigned __int8)*(_WORD *)(v16 + 2)) & 7);
      *v4 = (volatile signed __int64 *)(v16 + *(unsigned __int16 *)(v16 + 2) + v3);
    }
    else
    {
      *v4 = 0LL;
    }
  }
LABEL_18:
  RtlReleaseSRWLockExclusive(v2);
  return v16;
}
