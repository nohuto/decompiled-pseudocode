/*
 * XREFs of GreDecQuotaCount @ 0x1400CF5E0
 * Callers:
 *     HMChangeOwnerPheProcessWorker @ 0x1400CFF28 (HMChangeOwnerPheProcessWorker.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001B450 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 */

void __fastcall GreDecQuotaCount(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // r8d
  HSEMAPHORE v4; // [rsp+30h] [rbp+8h] BYREF

  SEMOBJ<20>::SEMOBJ<20>(&v4);
  --*(_DWORD *)(a1 + 60);
  SEMOBJ<20>::vUnlock(&v4, v2, v3);
}
