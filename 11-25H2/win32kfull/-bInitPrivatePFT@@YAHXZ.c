/*
 * XREFs of ?bInitPrivatePFT@@YAHXZ @ 0x1402672E0
 * Callers:
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1400B61AC (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z @ 0x14010D2A4 (-GrepAddFontMemResource@@YAPEAXPEAXKPEAUtagDESIGNVECTOR@@KPEAK@Z.c)
 *     ?GrepAddFontResource@@YAHPEAGKKKKPEAUtagDESIGNVECTOR@@K@Z @ 0x1401A2F68 (-GrepAddFontResource@@YAHPEAGKKKKPEAUtagDESIGNVECTOR@@K@Z.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0x14020D6AC (--0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z.c)
 *     ?pAllocateAndInitializePFT@@YAPEAVPFT@@I@Z @ 0x140231848 (-pAllocateAndInitializePFT@@YAPEAVPFT@@I@Z.c)
 */

__int64 __fastcall bInitPrivatePFT(int a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  struct PFT *v5; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  HSEMAPHORE v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  SEMOBJ<17>::SEMOBJ<17>(&v7, v2 + 4872);
  v3 = 0;
  if ( *(_QWORD *)(v2 + 20408) )
  {
    SEMOBJ<17>::vUnlock(&v7);
    return 1LL;
  }
  else
  {
    v5 = pAllocateAndInitializePFT(20);
    *(_QWORD *)(v2 + 20408) = v5;
    if ( v5 )
    {
      FHMEMOBJ::FHMEMOBJ((__int64)v6, (_QWORD *)v5 + 1, 0, 0x14u);
      v3 = 1;
      FHMEMOBJ::FHMEMOBJ((__int64)v6, *(_QWORD **)(v2 + 20408), 1, 0x14u);
      FHMEMOBJ::FHMEMOBJ((__int64)v6, (_QWORD *)(*(_QWORD *)(v2 + 20408) + 16LL), 2, 0x14u);
    }
    SEMOBJ<17>::vUnlock(&v7);
    return v3;
  }
}
