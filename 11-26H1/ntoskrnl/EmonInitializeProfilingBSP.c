/*
 * XREFs of EmonInitializeProfilingBSP @ 0x140597F64
 * Callers:
 *     EmonInitializeProfiling @ 0x140BF33D0 (EmonInitializeProfiling.c)
 * Callees:
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14057F37C (HalpQueryMaximumRegisteredProcessorCount.c)
 *     EmonAllocateCounters @ 0x1405975E0 (EmonAllocateCounters.c)
 *     EmonInitializePebs @ 0x140BF3300 (EmonInitializePebs.c)
 */

__int64 __fastcall EmonInitializeProfilingBSP(char a1)
{
  struct _KPRCB *CurrentPrcb; // r15
  __int64 MaximumRegisteredProcessorCount; // r9
  unsigned int v9; // edi
  unsigned int v10; // esi
  __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts[24] = 0;
  MaximumRegisteredProcessorCount = (unsigned int)HalpQueryMaximumRegisteredProcessorCount();
  _RAX = 10LL;
  __asm { cpuid }
  IommuInterfaceStateChangeCallbackPushLock.ForegroundLossTime = BYTE2(_RAX);
  *(_DWORD *)IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts = (unsigned __int8)_RAX;
  if ( (unsigned __int8)_RAX >= 2u )
    *(&IommuInterfaceStateChangeCallbackPushLock.ForegroundLossTime + 1) = (unsigned __int8)((unsigned int)_RDX >> 5);
  if ( a1 )
  {
    v10 = 32;
    v9 = 32;
  }
  else
  {
    v9 = 0;
    v10 = BYTE1(_RAX);
    if ( (unsigned __int8)_RAX >= 2u )
      v9 = _RDX & 0xF;
  }
  if ( (_DWORD)MaximumRegisteredProcessorCount )
  {
    v11 = 0LL;
    v12 = MaximumRegisteredProcessorCount;
    do
    {
      v13 = v11 + CurrentPrcb->HalReserved[2];
      EmonAllocateCounters(v13, 0, v10);
      EmonAllocateCounters(v13 + 24, 1, v9);
      EmonAllocateCounters(v13 + 48, 100, 0);
      EmonAllocateCounters(v13 + 72, 101, 0);
      v11 += 96LL;
      --v12;
    }
    while ( v12 );
  }
  HalpProfileSourceDescriptorListLock = 0LL;
  HalpProfileIntervalLimits = (__int64)EmonProfileIntervalLimits;
  qword_140FBC2E8 = (__int64)&HalpProfileSourceDescriptorListHead;
  *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.AbCompletedIoQoSBoostCount = &IommuInterfaceStateChangeCallbackPushLock.PriorityFloorSummary;
  *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.PriorityFloorSummary = &IommuInterfaceStateChangeCallbackPushLock.PriorityFloorSummary;
  v14 = 0LL;
  HalpProfileSourceDescriptorListHead = (__int64)&HalpProfileSourceDescriptorListHead;
  *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts[16] = 0LL;
  do
  {
    v15 = 320 * v14;
    if ( !*((_BYTE *)&EmonProfileSourceDescriptorTable + 320 * v14 + 29) )
    {
      v16 = (_QWORD *)((char *)&EmonProfileSourceDescriptorTable + v15 + 8);
      v15 = qword_140FBC2E8;
      if ( *(__int64 **)qword_140FBC2E8 != &HalpProfileSourceDescriptorListHead )
        __fastfail(3u);
      ++HalpProfileSourceDescriptorCount;
      *v16 = &HalpProfileSourceDescriptorListHead;
      v16[1] = v15;
      *(_QWORD *)v15 = v16;
      qword_140FBC2E8 = (__int64)v16;
    }
    v14 = (unsigned int)(v14 + 1);
  }
  while ( (unsigned int)v14 < 0x12 );
  EmonInitializePebs(v14, v15, &EmonProfileSourceDescriptorTable);
  result = 0x37FFFFFFFFFFFFFLL;
  IommuInterfaceStateChangeCallbackPushLock.ReadOperationCount = 0x37FFFFFFFFFFFFFLL;
  if ( IommuInterfaceStateChangeCallbackPushLock.PriorityFloorCounts[24] )
  {
    result = 0x437FFFFFFFFFFFFFLL;
    IommuInterfaceStateChangeCallbackPushLock.ReadOperationCount = 0x437FFFFFFFFFFFFFLL;
  }
  return result;
}
