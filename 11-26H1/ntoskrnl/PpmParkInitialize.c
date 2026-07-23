/*
 * XREFs of PpmParkInitialize @ 0x140CDC73C
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 PpmParkInitialize()
{
  int v0; // eax
  unsigned int v1; // ebx
  struct _KAFFINITY_EX *Pool2; // rax
  __int64 v3; // rsi
  unsigned int *p_Reserved; // rdi
  ULONG_PTR v5; // rax
  __int64 v6; // rcx

  v0 = PpmHeteroMultiClassParkingRegValue;
  v1 = 0;
  if ( PpmHeteroMultiClassParkingRegValue == -1 )
    v0 = (unsigned __int8)PpmMaxCoreClasses > 2u;
  PpmHeteroMultiClassParkingEnabled = v0;
  PpmParkOldSoftParkRankList = (void *)ExAllocatePool2(64LL, 4LL * (unsigned int)KeMaximumProcessors, 0x704D5050u);
  if ( !PpmParkOldSoftParkRankList )
    return (unsigned int)-1073741670;
  PpmParkNewSoftParkRankList = (void *)ExAllocatePool2(64LL, 4LL * (unsigned int)KeMaximumProcessors, 0x704D5050u);
  if ( !PpmParkNewSoftParkRankList )
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
  v5 = ExAllocatePool2(64LL, (unsigned int)(16 * KeMaximumProcessors), 0x704D5050u);
  if ( v5 )
  {
    v6 = 4LL * (unsigned int)KeMaximumProcessors;
    PpmHeteroPerfCheckUtilities = v5;
    qword_140F0C250 = v6 + v5;
    qword_140F0C248 = v6 + v5 + v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
