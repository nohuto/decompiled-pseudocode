/*
 * XREFs of vLinkEudcPFEs @ 0x140201DCC
 * Callers:
 *     bDeleteAllFlEntry @ 0x140107318 (bDeleteAllFlEntry.c)
 *     bAddAllFlEntry @ 0x1401475F8 (bAddAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x14030D518 (GreEudcLoadLinkW.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     vLinkEudcPFEsWorker @ 0x140201E80 (vLinkEudcPFEsWorker.c)
 */

void __fastcall vLinkEudcPFEs(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // rdi
  __int64 i; // rbx
  __int64 v8; // rbx
  __int64 v9; // rdi
  HSEMAPHORE v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  SEMOBJ<17>::SEMOBJ<17>(&v10, v3 + 4872);
  v6 = *(_QWORD *)(v3 + 20416);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v6 + 24); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(v6 + 8 * i + 40);
    if ( v4 )
      vLinkEudcPFEsWorker(a1);
  }
  v8 = 0LL;
  v9 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v5, v4) + 96) + 20424LL);
  if ( *(_DWORD *)(v9 + 24) )
  {
    do
    {
      if ( *(_QWORD *)(v9 + 8 * v8 + 40) )
        vLinkEudcPFEsWorker(a1);
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < *(_DWORD *)(v9 + 24) );
  }
  SEMOBJ<17>::vUnlock(&v10);
}
