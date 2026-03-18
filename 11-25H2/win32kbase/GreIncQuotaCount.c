/*
 * XREFs of GreIncQuotaCount @ 0x14003B400
 * Callers:
 *     HMChangeOwnerPheProcessWorker @ 0x14003ACDC (HMChangeOwnerPheProcessWorker.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C8C80 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001A30C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z @ 0x14003B440 (-HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 */

__int64 __fastcall GreIncQuotaCount(struct _W32PROCESS *a1)
{
  HSEMAPHORE v3; // [rsp+38h] [rbp+10h] BYREF

  SEMOBJ<20>::SEMOBJ<20>(&v3);
  HmgpIncProcessHandleCountEx(a1);
  return SEMOBJ<20>::vUnlock(&v3);
}
