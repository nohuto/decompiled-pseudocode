/*
 * XREFs of ?prfntDeactivateEudcRFONTs@@YAXPEBQEAVPFE@@PEAU_LIST_ENTRY@@@Z @ 0x1400B9870
 * Callers:
 *     bUnloadEudcFont @ 0x140107588 (bUnloadEudcFont.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400BA064 (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400D7660 (--0-$SEMOBJ@$0BC@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     vDeactivateEudcRFONTsWorker @ 0x14030DC0C (vDeactivateEudcRFONTsWorker.c)
 */

void __fastcall prfntDeactivateEudcRFONTs(struct PFE *const *a1, struct _LIST_ENTRY *a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 i; // rbx
  __int64 v9; // r8
  char v10; // [rsp+50h] [rbp+18h] BYREF
  HSEMAPHORE v11; // [rsp+58h] [rbp+20h] BYREF

  v5 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  SEMOBJ<17>::SEMOBJ<17>(&v11, v5 + 4872);
  SEMOBJ<18>::SEMOBJ<18>(&v10, v5 + 4872);
  v7 = *(_QWORD *)(v5 + 20416);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v7 + 24); i = (unsigned int)(i + 1) )
  {
    v9 = *(_QWORD *)(v7 + 8 * i + 40);
    if ( v9 )
      vDeactivateEudcRFONTsWorker(v6, a1, v9, a2);
  }
  SEMOBJ<18>::vUnlock(&v10);
  SEMOBJ<17>::vUnlock(&v11);
}
