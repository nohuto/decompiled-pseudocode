/*
 * XREFs of ExInitializeProcessor @ 0x1406CB480
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407B9978 (KiStartDynamicProcessor.c)
 *     ExpInitSystemPhase1 @ 0x140CE4380 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeIsNodeInitialized @ 0x14038227C (KeIsNodeInitialized.c)
 *     Feature_LookasideDepthManager__private_IsEnabledDeviceUsageNoInline @ 0x140576470 (Feature_LookasideDepthManager__private_IsEnabledDeviceUsageNoInline.c)
 *     ExpLookasideMgrHotAddProcessor @ 0x1406CD8AC (ExpLookasideMgrHotAddProcessor.c)
 *     ExpNodeHotAddProcessor @ 0x1406D0BA0 (ExpNodeHotAddProcessor.c)
 *     ExInitializeSystemLookasideList @ 0x140C0D4C0 (ExInitializeSystemLookasideList.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall ExInitializeProcessor(__int64 a1, char a2)
{
  __int64 Pool2; // rax
  __int64 v5; // rdi
  bool IsNodeInitialized; // al
  __int64 v7; // rdx

  Pool2 = ExAllocatePool2(0x40uLL);
  v5 = Pool2;
  if ( Pool2 )
  {
    ExInitializeSystemLookasideList(Pool2, 512, 1264, 1128888389, 32);
    *(_QWORD *)(a1 + 2240) = v5;
  }
  if ( a2 )
  {
    IsNodeInitialized = KeIsNodeInitialized(*(_WORD *)KeNodeBlock[*(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL)]);
    ExpNodeHotAddProcessor(v7 & -(__int64)IsNodeInitialized);
    *(_QWORD *)(a1 + 35824) = *(_QWORD *)(ExSaPageArrays + 8LL * *(unsigned int *)(a1 + 36));
    if ( (unsigned int)Feature_LookasideDepthManager__private_IsEnabledDeviceUsageNoInline() )
      ExpLookasideMgrHotAddProcessor(a1);
  }
  return 0LL;
}
