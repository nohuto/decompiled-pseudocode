/*
 * XREFs of TpAdjustBindingCount @ 0x180065570
 * Callers:
 *     TppAllocAlpcCompletion @ 0x180064DE4 (TppAllocAlpcCompletion.c)
 *     TppIopFree @ 0x180065230 (TppIopFree.c)
 *     TpBindFileToDirect @ 0x1800654D4 (TpBindFileToDirect.c)
 *     RtlpTpIoDllProcessUnloads @ 0x1800B8268 (RtlpTpIoDllProcessUnloads.c)
 *     TpAllocJobNotification @ 0x1800FB800 (TpAllocJobNotification.c)
 *     TppAlpcpFree @ 0x1800FF700 (TppAlpcpFree.c)
 *     TppJobpFree @ 0x180104710 (TppJobpFree.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x180162570 (NtSetInformationWorkerFactory.c)
 */

void __fastcall TpAdjustBindingCount(__int64 a1, unsigned int a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // eax
  __int64 v5; // rcx
  int v6; // [rsp+38h] [rbp+10h] BYREF

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
      v5 = *(_QWORD *)(a1 + 56);
      v6 = v4;
      NtSetInformationWorkerFactory(v5, 3LL, &v6, 4LL);
      return;
    }
    if ( v3 > 0 )
    {
      v4 = 1;
      goto LABEL_7;
    }
  }
}
