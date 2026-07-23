/*
 * XREFs of KeAllocateProcessorProfileStructures @ 0x1405E6EC0
 * Callers:
 *     EmonCompleteInitializeProfiling @ 0x140BF31A0 (EmonCompleteInitializeProfiling.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MmFreeIndependentPages @ 0x1402EADC0 (MmFreeIndependentPages.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiIsIntelPebsSupported @ 0x1405EE39C (KiIsIntelPebsSupported.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MmCreateShadowMapping @ 0x14087BD54 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x14087BFD8 (MmDeleteShadowMapping.c)
 *     MmAllocateIndependentPages @ 0x140B3F870 (MmAllocateIndependentPages.c)
 */

__int64 __fastcall KeAllocateProcessorProfileStructures(
        unsigned int a1,
        __int64 a2,
        _PROCESSOR_PROFILE_CONTROL_AREA **a3,
        char a4)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v10; // r14
  __int64 v11; // r15
  size_t v12; // rdi
  void *IndependentPages; // rax
  unsigned __int64 v14; // rbx
  unsigned int v15; // esi
  _PROCESSOR_PROFILE_CONTROL_AREA *v16; // r14
  __int64 v17; // r8
  _PROCESSOR_PROFILE_CONTROL_AREA *v18; // rax
  unsigned __int64 *PebsGpCounterReset; // rax
  char v20; // [rsp+68h] [rbp+20h]

  CurrentIrql = KeGetCurrentIrql();
  if ( !a4 )
  {
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentPrcb->ProcessorProfileControlArea = *a3;
    CurrentPrcb->ProfileEventIndexAddress = &(*a3)->RawBuffer + 5;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  *a3 = 0LL;
  v10 = a2 * a1;
  v20 = 0;
  v11 = a1;
  v12 = v10 + 160LL * a1;
  if ( KiKvaShadow )
    v12 = (v12 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  IndependentPages = (void *)MmAllocateIndependentPages(v12, 0LL);
  v14 = (unsigned __int64)IndependentPages;
  if ( IndependentPages )
  {
    memset_0(IndependentPages, 0, v12);
    if ( KiKvaShadow )
    {
      if ( !(unsigned int)MmCreateShadowMapping(v14, v12) )
      {
        v15 = -1073741670;
        goto LABEL_29;
      }
      v20 = 1;
    }
    v16 = (_PROCESSOR_PROFILE_CONTROL_AREA *)(v14 + v10);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    if ( (unsigned __int8)KiIsIntelPebsSupported(KeGetCurrentPrcb()) )
    {
      v18 = *(_PROCESSOR_PROFILE_CONTROL_AREA **)(v17 + 36568);
      if ( v18 )
      {
        *a3 = v18;
        v15 = -1073741302;
      }
      else
      {
        if ( a1 )
        {
          PebsGpCounterReset = v16->PebsDsSaveArea.As32Bit.PebsGpCounterReset;
          do
          {
            *PebsGpCounterReset = v14;
            v14 += a2;
            PebsGpCounterReset += 20;
            --v11;
          }
          while ( v11 );
        }
        v14 = 0LL;
        *a3 = v16;
        v15 = 0;
      }
    }
    else
    {
      v15 = -1073741637;
    }
    goto LABEL_29;
  }
  v15 = -1073741801;
LABEL_29:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v14 )
  {
    if ( v20 )
      MmDeleteShadowMapping(v14, v12);
    MmFreeIndependentPages(v14, v12);
  }
  return v15;
}
