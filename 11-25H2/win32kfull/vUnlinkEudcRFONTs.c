/*
 * XREFs of vUnlinkEudcRFONTs @ 0x14030E238
 * Callers:
 *     bDeleteFlEntry @ 0x14030D90C (bDeleteFlEntry.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400BA064 (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400D7660 (--0-$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x14019CA3C (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     vUnlinkEudcRFONTsWorker @ 0x14030E570 (vUnlinkEudcRFONTsWorker.c)
 */

void __fastcall vUnlinkEudcRFONTs(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 i; // rbx
  __int64 v7; // rdi
  __int64 j; // rbx
  __int64 v9; // rbx
  __int64 k; // rdi
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  HSEMAPHORE v12; // [rsp+58h] [rbp+10h] BYREF
  HSEMAPHORE v13; // [rsp+60h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  SEMOBJ<17>::SEMOBJ<17>(&v13, v3 + 4872);
  SEMOBJ<18>::SEMOBJ<18>(&v12, v3 + 4872);
  v5 = *(_QWORD *)(v3 + 20416);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v5 + 24); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(v5 + 8 * i + 40);
    if ( v4 )
      vUnlinkEudcRFONTsWorker(a1);
  }
  DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)v11, v4);
  v7 = v11[0];
  for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v7 + 24); j = (unsigned int)(j + 1) )
  {
    if ( *(_QWORD *)(v7 + 8 * j + 40) )
      vUnlinkEudcRFONTsWorker(a1);
  }
  v9 = *(_QWORD *)(v3 + 20408);
  if ( v9 )
  {
    for ( k = 0LL; (unsigned int)k < *(_DWORD *)(v9 + 24); k = (unsigned int)(k + 1) )
    {
      if ( *(_QWORD *)(v9 + 8 * k + 40) )
        vUnlinkEudcRFONTsWorker(a1);
    }
  }
  SEMOBJ<18>::vUnlock(&v12);
  SEMOBJ<17>::vUnlock(&v13);
}
