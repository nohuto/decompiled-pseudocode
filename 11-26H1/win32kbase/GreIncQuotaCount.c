/*
 * XREFs of GreIncQuotaCount @ 0x1400CF610
 * Callers:
 *     ?GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x14003B040 (-GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1400CFF28 (HMChangeOwnerPheProcessWorker.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001AEB0 (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001B450 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z @ 0x1400CF650 (-HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z.c)
 */

void __fastcall GreIncQuotaCount(struct _W32PROCESS *a1)
{
  __int64 v2; // rdx
  int v3; // r8d
  HSEMAPHORE v4; // [rsp+38h] [rbp+10h] BYREF

  SEMOBJ<20>::SEMOBJ<20>(&v4);
  HmgpIncProcessHandleCountEx(a1);
  SEMOBJ<20>::vUnlock(&v4, v2, v3);
}
