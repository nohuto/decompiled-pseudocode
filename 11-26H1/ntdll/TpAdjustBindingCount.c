/*
 * XREFs of TpAdjustBindingCount @ 0x1800859C0
 * Callers:
 *     TppAllocAlpcCompletion @ 0x180085234 (TppAllocAlpcCompletion.c)
 *     TppIopFree @ 0x180085680 (TppIopFree.c)
 *     TpBindFileToDirect @ 0x180085924 (TpBindFileToDirect.c)
 *     RtlpTpIoDllProcessUnloads @ 0x1800B5788 (RtlpTpIoDllProcessUnloads.c)
 *     TpAllocJobNotification @ 0x1800FAF50 (TpAllocJobNotification.c)
 *     TppAlpcpFree @ 0x1800FEE50 (TppAlpcpFree.c)
 *     TppJobpFree @ 0x180103A90 (TppJobpFree.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x180162470 (NtSetInformationWorkerFactory.c)
 */

void __fastcall TpAdjustBindingCount(__int64 a1, unsigned int a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // eax
  void *v5; // rcx
  int WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 432), a2);
    v3 = v2 + a2;
    if ( v2 > 0 )
    {
      if ( v3 > 0 )
        return;
      v4 = -1;
LABEL_7:
      v5 = *(void **)(a1 + 56);
      WorkerFactoryInformation = v4;
      NtSetInformationWorkerFactory(v5, WorkerFactoryBindingCount, &WorkerFactoryInformation, 4u);
      return;
    }
    if ( v3 > 0 )
    {
      v4 = 1;
      goto LABEL_7;
    }
  }
}
