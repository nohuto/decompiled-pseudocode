/*
 * XREFs of HalpPmuReservedResourcesProcessorCallback @ 0x140582B18
 * Callers:
 *     EmonAllocateResources @ 0x1405976C4 (EmonAllocateResources.c)
 *     EmonReleaseProfileResourcesInternal @ 0x140598774 (EmonReleaseProfileResourcesInternal.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x140202CC0 (KeGetProcessorNumberFromIndex.c)
 *     KeSetTargetProcessorDpcEx @ 0x14021AC20 (KeSetTargetProcessorDpcEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpPmuReservedResourcesProcessorCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int ProcessorNumberFromIndex; // ebx
  int v5; // edi
  unsigned __int8 CurrentIrql; // si
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r14
  unsigned __int16 *v15[2]; // [rsp+38h] [rbp-38h] BYREF
  __int16 v16; // [rsp+48h] [rbp-28h]
  int v17; // [rsp+4Ah] [rbp-26h]
  __int16 v18; // [rsp+4Eh] [rbp-22h]
  _QWORD v19[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h]
  ULONG ProcIndex; // [rsp+B0h] [rbp+40h] BYREF
  int v22; // [rsp+B8h] [rbp+48h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+C0h] [rbp+50h] BYREF

  v19[0] = a2;
  v17 = 0;
  ProcessorNumberFromIndex = 0;
  v18 = 0;
  v5 = 0;
  ProcIndex = 0;
  ProcNumber = 0;
  v20 = 0LL;
  v19[1] = a3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  v22 = 0;
  v16 = 0;
  v15[1] = *(unsigned __int16 **)(a1 + 8);
  v15[0] = (unsigned __int16 *)a1;
  while ( !(unsigned int)KeEnumerateNextProcessor(&ProcIndex, v15) )
  {
    v11 = ProcIndex;
    if ( ProcIndex == KeGetPcr()->Prcb.Number )
    {
      ProcessorNumberFromIndex = guard_dispatch_icall_no_overrides(a3, v10);
      if ( ProcessorNumberFromIndex < 0 )
        break;
    }
    else
    {
      v12 = 10LL * ProcIndex;
      *(_QWORD *)(a4 + 8 * v12 + 72) = HalpPmuProcessorCallbackDpcRoutine;
      v13 = a4 + 80 * v11;
      *(_WORD *)(a4 + 8 * v12 + 50) = 0;
      *(_QWORD *)(a4 + 8 * v12 + 80) = v19;
      *(_QWORD *)(a4 + 8 * v12 + 104) = 0LL;
      *(_QWORD *)(a4 + 8 * v12 + 64) = 0LL;
      *(_BYTE *)(a4 + 8 * v12 + 49) = 3;
      *(_BYTE *)(v13 + 48) = 19;
      ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(v11, &ProcNumber);
      if ( ProcessorNumberFromIndex < 0 )
        break;
      KeSetTargetProcessorDpcEx((PKDPC)(v13 + 48), &ProcNumber);
      ++v5;
      KiInsertQueueDpc(v13 + 48, (__int64)&v22, 0LL, 0LL, 0);
    }
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  while ( v22 != v5 )
    _mm_pause();
  if ( ProcessorNumberFromIndex >= 0 && (int)v20 < 0 )
    return (unsigned int)v20;
  return (unsigned int)ProcessorNumberFromIndex;
}
