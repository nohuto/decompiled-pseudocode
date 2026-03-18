/*
 * XREFs of PpmParkInitialize @ 0x140CD63E8
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 PpmParkInitialize()
{
  int v0; // eax
  unsigned int v1; // ebx
  struct _KAFFINITY_EX *Pool2; // rax
  __int64 v3; // rsi
  unsigned int *p_Reserved; // rdi
  _XSAVE_FORMAT *v5; // rax
  __int64 v6; // rcx

  v0 = PpmHeteroMultiClassParkingRegValue;
  v1 = 0;
  if ( PpmHeteroMultiClassParkingRegValue == -1 )
    v0 = (unsigned __int8)PpmMaxCoreClasses > 2u;
  PpmHeteroMultiClassParkingEnabled = v0;
  PopModernStandbyStateNotify.ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)ExAllocatePool2(
                                                                                      64LL,
                                                                                      4LL
                                                                                    * (unsigned int)KeMaximumProcessors,
                                                                                      0x704D5050u);
  if ( !PopModernStandbyStateNotify.ApcState.ApcListHead[0].Flink )
    return (unsigned int)-1073741670;
  PopModernStandbyStateNotify.ApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)ExAllocatePool2(
                                                                                      64LL,
                                                                                      4LL
                                                                                    * (unsigned int)KeMaximumProcessors,
                                                                                      0x704D5050u);
  if ( !PopModernStandbyStateNotify.ApcState.ApcListHead[0].Blink )
    return (unsigned int)-1073741670;
  Pool2 = (struct _KAFFINITY_EX *)ExAllocatePool2(64LL, 0x1CE0uLL, 0x704D5050u);
  PpmParkPerfCheckAffinities = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v3 = 28LL;
  p_Reserved = &Pool2->Reserved;
  do
  {
    *(_QWORD *)(p_Reserved - 1) = 2097153LL;
    memset_0(p_Reserved + 1, 0, 0x100uLL);
    p_Reserved += 66;
    --v3;
  }
  while ( v3 );
  v5 = (_XSAVE_FORMAT *)ExAllocatePool2(64LL, (unsigned int)(16 * KeMaximumProcessors), 0x704D5050u);
  if ( v5 )
  {
    v6 = 4LL * (unsigned int)KeMaximumProcessors;
    PopModernStandbyStateNotify.StateSaveArea = v5;
    *(_QWORD *)&PopModernStandbyStateNotify.WaitRegister.Flags = (char *)v5 + v6;
    PopModernStandbyStateNotify.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)((char *)v5 + v6 + v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
