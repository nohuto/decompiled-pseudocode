/*
 * XREFs of ?bInitPrivatePFT@@YAHXZ @ 0x140289030
 * Callers:
 *     ?GrepAddFontResource@@YAHPEAGKKKKPEAUtagDESIGNVECTOR@@K@Z @ 0x1401041B8 (-GrepAddFontResource@@YAHPEAGKKKKPEAUtagDESIGNVECTOR@@K@Z.c)
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1401EEDEC (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z @ 0x14021BB1C (-GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0x140246794 (--0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z.c)
 *     ?pAllocateAndInitializePFT@@YAPEAVPFT@@I@Z @ 0x140296068 (-pAllocateAndInitializePFT@@YAPEAVPFT@@I@Z.c)
 */

__int64 __fastcall bInitPrivatePFT(int a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  struct PFT *v4; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v7 = *(_QWORD *)(v2 + 20320);
  GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v7);
  v3 = 0;
  if ( *(_QWORD *)(v2 + 20384) )
  {
    v3 = 1;
  }
  else
  {
    v4 = pAllocateAndInitializePFT(0x14u);
    *(_QWORD *)(v2 + 20384) = v4;
    if ( v4 )
    {
      FHMEMOBJ::FHMEMOBJ((__int64)v6, (__int64 *)v4 + 1, 0, 0x14u);
      v3 = 1;
      FHMEMOBJ::FHMEMOBJ((__int64)v6, *(__int64 **)(v2 + 20384), 1, 0x14u);
      FHMEMOBJ::FHMEMOBJ((__int64)v6, (__int64 *)(*(_QWORD *)(v2 + 20384) + 16LL), 2, 0x14u);
    }
  }
  SEMOBJ<17>::vUnlock((HSEMAPHORE *)&v7);
  return v3;
}
