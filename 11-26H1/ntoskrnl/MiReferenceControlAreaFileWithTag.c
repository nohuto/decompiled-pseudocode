/*
 * XREFs of MiReferenceControlAreaFileWithTag @ 0x140390AC0
 * Callers:
 *     MiEmptyPageAccessLog @ 0x1402B1B9C (MiEmptyPageAccessLog.c)
 *     MiLogPageAccess @ 0x140322960 (MiLogPageAccess.c)
 *     MiCompleteRestrictedImageFault @ 0x140376250 (MiCompleteRestrictedImageFault.c)
 *     MiCreateSystemSection @ 0x14038C270 (MiCreateSystemSection.c)
 *     MiInitializeFlushPacket @ 0x14038EAB4 (MiInitializeFlushPacket.c)
 *     MiReferenceInPageFile @ 0x14038F034 (MiReferenceInPageFile.c)
 *     MiIssueHardFault @ 0x14038F100 (MiIssueHardFault.c)
 *     MmFlushSection @ 0x14039C7A0 (MmFlushSection.c)
 *     MiFaultTrimBehind @ 0x14043AA6C (MiFaultTrimBehind.c)
 *     MiSetPagesModified @ 0x140455A14 (MiSetPagesModified.c)
 *     MiMakeModifiedSystemCachePteValid @ 0x140485680 (MiMakeModifiedSystemCachePteValid.c)
 *     MiGatherMappedPages @ 0x140490828 (MiGatherMappedPages.c)
 *     MmGetFileObjectForSection @ 0x140AA75C0 (MmGetFileObjectForSection.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140278120 (ObpTraceObjectReferenceIfActive.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void *__fastcall MiReferenceControlAreaFileWithTag(__int64 a1, unsigned int a2, int a3)
{
  signed __int64 v6; // r9
  signed __int64 v7; // rax
  signed __int64 v8; // rbx
  unsigned int v9; // r9d
  ULONG_PTR v10; // rbx
  __int64 v11; // rax
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  volatile signed __int32 *v15; // rbx
  volatile LONG *v16; // rcx
  KIRQL v17; // si
  void *v18; // rdi
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  _m_prefetchw((const void *)(a1 + 64));
  v6 = *(_QWORD *)(a1 + 64);
  if ( (v6 & 0xF) != 0 )
  {
    do
    {
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v6 - 1, v6);
      if ( v6 == v7 )
        break;
      v6 = v7;
    }
    while ( (v7 & 0xF) != 0 );
  }
  v8 = v6;
  v9 = v6 & 0xF;
  v10 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v9 <= 1 )
  {
    if ( !v9 )
      goto LABEL_14;
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 48), 0xFuLL);
    if ( v11 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v10, 0x10uLL, v11 + 15);
    _m_prefetchw((const void *)(a1 + 64));
    v12 = *(_QWORD *)(a1 + 64);
    while ( (v12 & 0xF) == 0 )
    {
      if ( v10 != (v12 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v13 = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v12 + 15, v12);
      if ( v13 == v12 )
        goto LABEL_12;
    }
    _InterlockedAdd64((volatile signed __int64 *)(v10 - 48), 0xFFFFFFFFFFFFFFF1uLL);
  }
LABEL_12:
  ObpTraceObjectReferenceIfActive(v10 - 48, 1, a2);
  if ( v10 )
    return (void *)v10;
LABEL_14:
  v15 = (volatile signed __int32 *)(a1 + 72);
  v16 = (volatile LONG *)(a1 + 72);
  if ( a3 )
  {
    v17 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(v16);
  }
  else
  {
    v17 = ExAcquireSpinLockShared(v16);
  }
  v18 = (void *)(*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v18 )
    ObfReferenceObjectWithTag(v18, a2);
  if ( v17 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v15, 0xBFFFFFFF);
      _InterlockedDecrement(v15);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v15, retaddr);
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v15, 0xBFFFFFFF);
      _InterlockedDecrement(v15);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v15, retaddr);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
    __writecr8(v17);
  }
  return v18;
}
