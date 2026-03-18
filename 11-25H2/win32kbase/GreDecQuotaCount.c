/*
 * XREFs of GreDecQuotaCount @ 0x14003B500
 * Callers:
 *     HMChangeOwnerPheProcessWorker @ 0x14003ACDC (HMChangeOwnerPheProcessWorker.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001A30C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 */

__int64 __fastcall GreDecQuotaCount(__int64 a1)
{
  HSEMAPHORE v3; // [rsp+30h] [rbp+8h] BYREF

  SEMOBJ<20>::SEMOBJ<20>(&v3);
  --*(_DWORD *)(a1 + 60);
  return SEMOBJ<20>::vUnlock(&v3);
}
