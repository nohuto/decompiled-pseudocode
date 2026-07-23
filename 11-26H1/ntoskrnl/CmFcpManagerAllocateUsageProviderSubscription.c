/*
 * XREFs of CmFcpManagerAllocateUsageProviderSubscription @ 0x14077C144
 * Callers:
 *     CmFcManagerRegisterFeatureUsageProvider @ 0x140B55350 (CmFcManagerRegisterFeatureUsageProvider.c)
 * Callees:
 *     CmFcpInitializeFeatureUsageProviderSubscription @ 0x140867B58 (CmFcpInitializeFeatureUsageProviderSubscription.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

char *__fastcall CmFcpManagerAllocateUsageProviderSubscription(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int32 v5; // eax
  char *Pool2; // rbx

  if ( CmpFreezeListLock.SchedulerApcFill3[50] )
  {
    Pool2 = (char *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
      return Pool2;
LABEL_6:
    CmFcpInitializeFeatureUsageProviderSubscription(Pool2, a2, a2, a3);
    return Pool2;
  }
  v5 = _InterlockedIncrement(&dword_140EFBE48);
  if ( v5 <= 3 )
  {
    Pool2 = (char *)&unk_140EFBCB0 + 136 * v5 - 136;
    goto LABEL_6;
  }
  return 0LL;
}
