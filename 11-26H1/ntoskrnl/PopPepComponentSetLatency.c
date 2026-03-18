/*
 * XREFs of PopPepComponentSetLatency @ 0x1403B1784
 * Callers:
 *     PoFxSetComponentLatency @ 0x1403B1590 (PoFxSetComponentLatency.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 *     ExTryQueueWorkItem @ 0x140382070 (ExTryQueueWorkItem.c)
 *     PopPepTriggerActivity @ 0x1403AFA10 (PopPepTriggerActivity.c)
 *     PopPepPromoteActivities @ 0x1403B0F90 (PopPepPromoteActivities.c)
 *     PopPepGetComponentPreferedIdleState @ 0x1403B1B10 (PopPepGetComponentPreferedIdleState.c)
 *     KeReleaseSemaphore @ 0x1403B1D20 (KeReleaseSemaphore.c)
 */

void __fastcall PopPepComponentSetLatency(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rsi
  bool v7; // zf
  char v8; // r13
  volatile LONG *v9; // r14
  KIRQL v10; // bp
  unsigned int v11; // esi
  int ComponentPreferedIdleState; // eax
  unsigned int v13; // edx
  __int64 i; // rcx
  _DWORD *v15; // rdx
  KIRQL v16; // al
  unsigned int v17; // edx
  struct _KSEMAPHORE *p_Process; // rsi
  __int64 v19; // r12
  __int64 v21; // [rsp+70h] [rbp+18h]

  v4 = a1;
  v5 = 208LL * a2 + a1 + 192;
  v6 = (unsigned int)(*(_DWORD *)(v5 + 188) - 1);
  if ( *(_DWORD *)(v5 + 188) != 1 )
  {
    do
    {
      if ( *(_QWORD *)(*(_QWORD *)(v5 + 200) + 24 * v6) <= a3 )
        break;
      v7 = (_DWORD)v6 == 1;
      v6 = (unsigned int)(v6 - 1);
    }
    while ( !v7 );
  }
  v8 = 0;
  v9 = (volatile LONG *)(a1 + 64);
  if ( *(_DWORD *)(a1 + 180) != 1 )
  {
    v16 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
    v10 = v16;
    if ( *(_BYTE *)(v4 + 125) != 1 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v5);
      goto LABEL_6;
    }
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v4 + 64), v16);
  }
  v8 = 1;
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 64));
  *(_BYTE *)(v4 + 125) = 1;
LABEL_6:
  *(_QWORD *)(v5 + 112) = a3;
  if ( *(_DWORD *)(v5 + 156) != (_DWORD)v6 )
  {
    *(_DWORD *)(v5 + 156) = v6;
    v11 = *(_DWORD *)(v4 + 120) + *(_DWORD *)(v5 + 104);
    ComponentPreferedIdleState = PopPepGetComponentPreferedIdleState(v5);
    if ( ComponentPreferedIdleState != *(_DWORD *)(v5 + 176) )
      PopPepTriggerActivity(v4, v5, 1, ComponentPreferedIdleState | 0x80000000);
    PopPepPromoteActivities(v4, v5, 2);
    v13 = *(_DWORD *)(v4 + 120) + *(_DWORD *)(v5 + 104);
    if ( v13 > v11 )
    {
      v17 = v13 - v11;
      if ( v17 )
      {
        p_Process = (struct _KSEMAPHORE *)&unk_140F12260;
        if ( (*(_QWORD *)(v4 + 24) & 0x20LL) != 0 )
          p_Process = (struct _KSEMAPHORE *)&stru_140F12420.Process;
        v21 = v17;
        do
        {
          KeReleaseSemaphore(p_Process + 2, 0, 1, 0);
          v19 = 0LL;
          do
          {
            _m_prefetchw(&p_Process[3]);
            if ( ((1 << v19) & _InterlockedOr(&p_Process[3].Header.Lock, 1 << v19)) == 0 )
            {
              if ( ExTryQueueWorkItem((_QWORD *)&p_Process[v19 + 3].Header.WaitListHead.Blink + (unsigned int)v19, 48LL) )
                break;
              _InterlockedAnd(&p_Process[3].Header.Lock, ~(1 << v19));
            }
            v19 = (unsigned int)(v19 + 1);
          }
          while ( (unsigned int)v19 < 4 );
          --v21;
        }
        while ( v21 );
        v4 = a1;
      }
    }
  }
  if ( v8 == 1 )
  {
    for ( i = 0LL; (unsigned int)i < 6; i = (unsigned int)(i + 1) )
    {
      v15 = *(_DWORD **)(v4 + 8 * i + 72);
      if ( v15 && *v15 )
      {
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 64), v10);
        return;
      }
    }
    if ( *(_BYTE *)(v4 + 136) )
      *(_BYTE *)(v4 + 125) = 0;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v5);
    ExReleaseSpinLockSharedFromDpcLevel(v9);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
  __writecr8(v10);
}
