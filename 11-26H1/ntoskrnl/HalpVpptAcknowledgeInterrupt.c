/*
 * XREFs of HalpVpptAcknowledgeInterrupt @ 0x140426D60
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     HalpTimerGetInternalData @ 0x140426EC0 (HalpTimerGetInternalData.c)
 *     HalpAcquireHighLevelLock @ 0x140426EEC (HalpAcquireHighLevelLock.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x140426F38 (HalpVpptUpdatePhysicalTimer.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpVpptAcknowledgeInterrupt(__int64 a1)
{
  __int64 InternalData; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned __int64 InterruptTimePrecise; // rax
  unsigned __int64 v7; // rcx
  int *v8; // rdx
  int *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  byte_140FBB3F8 = HalpAcquireHighLevelLock(&qword_140FBB3F0);
  InternalData = HalpTimerGetInternalData(*(_QWORD *)&HalpVpptPhysicalTimer);
  guard_dispatch_icall_no_overrides(InternalData, v3);
  if ( *(_QWORD *)&HalpVpptQueue == a1 )
  {
    if ( *(int **)(*(_QWORD *)&HalpVpptQueue + 8LL) != &HalpVpptQueue )
      goto LABEL_18;
    v5 = **(_QWORD **)&HalpVpptQueue;
    if ( *(_QWORD *)(**(_QWORD **)&HalpVpptQueue + 8LL) != *(_QWORD *)&HalpVpptQueue )
      goto LABEL_18;
    *(_QWORD *)&HalpVpptQueue = **(_QWORD **)&HalpVpptQueue;
    *(_QWORD *)(v5 + 8) = &HalpVpptQueue;
    if ( !*(_QWORD *)(a1 + 40) )
    {
      *(_BYTE *)(a1 + 24) = 0;
      goto LABEL_2;
    }
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v13);
    v7 = *(_QWORD *)(a1 + 32);
    if ( v7 <= InterruptTimePrecise )
    {
      do
        v7 += *(_QWORD *)(a1 + 40);
      while ( v7 <= InterruptTimePrecise );
      *(_QWORD *)(a1 + 32) = v7;
    }
    v8 = *(int **)&HalpVpptQueue;
    v9 = &HalpVpptQueue;
    while ( v8 != &HalpVpptQueue && v7 >= *((_QWORD *)v8 + 4) )
    {
      v9 = v8;
      v8 = *(int **)v8;
    }
    v10 = *(_QWORD *)v9;
    if ( *(int **)(*(_QWORD *)v9 + 8LL) != v9 )
LABEL_18:
      __fastfail(3u);
    *(_QWORD *)a1 = v10;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(v10 + 8) = a1;
    *(_QWORD *)v9 = a1;
  }
LABEL_2:
  if ( *(int **)&HalpVpptQueue == &HalpVpptQueue )
  {
    if ( *(_DWORD *)(*(_QWORD *)&HalpVpptPhysicalTimer + 228LL) != 3 )
    {
      v11 = HalpTimerGetInternalData(*(_QWORD *)&HalpVpptPhysicalTimer);
      guard_dispatch_icall_no_overrides(v11, v12);
    }
  }
  else
  {
    HalpVpptUpdatePhysicalTimer();
  }
  v4 = (unsigned __int8)byte_140FBB3F8;
  KxReleaseSpinLock(&qword_140FBB3F0);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  __writecr8(v4);
}
