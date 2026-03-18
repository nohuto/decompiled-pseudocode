/*
 * XREFs of ?RegistryNotificaionEnumerationEnd@@YAXPEAK@Z @ 0x140257CD0
 * Callers:
 *     ?GrepAddFontResource@@YAHPEAGKKKKPEAUtagDESIGNVECTOR@@K@Z @ 0x1401041B8 (-GrepAddFontResource@@YAHPEAGKKKKPEAUtagDESIGNVECTOR@@K@Z.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x14028F80C (-bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z.c)
 */

void __fastcall RegistryNotificaionEnumerationEnd(unsigned int *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  HSEMAPHORE v6; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96);
  v4 = *(_QWORD *)(v3 + 20320);
  if ( v4 )
  {
    v6 = *(HSEMAPHORE *)(v3 + 20320);
    GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(
      (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
      v4);
    v5[0] = *(_QWORD *)(v3 + 20392);
    if ( v5[0] )
      PUBLIC_PFTOBJ::bCleanupPFT(v5, 1LL, a1);
    SEMOBJ<17>::vUnlock(&v6);
  }
}
