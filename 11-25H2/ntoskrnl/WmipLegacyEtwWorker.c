/*
 * XREFs of WmipLegacyEtwWorker @ 0x1409B8B90
 * Callers:
 *     WmipProcessSynchronousEtw @ 0x140AB1760 (WmipProcessSynchronousEtw.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     WmipProcessLegacyEtwRegister @ 0x1407962B4 (WmipProcessLegacyEtwRegister.c)
 *     WmipProcessLegacyEtwUnregister @ 0x14079639C (WmipProcessLegacyEtwUnregister.c)
 *     WmipUnreferenceEntry @ 0x1409B5E78 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x1409B6D18 (WmipReferenceEntry.c)
 *     WmipProcessLegacyEtwCallback @ 0x140A89598 (WmipProcessLegacyEtwCallback.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipLegacyEtwWorker(ULONG_PTR a1)
{
  __int64 v2; // rcx
  void **v3; // rsi
  void ***v4; // rbx
  void **v5; // rax
  int v6; // ecx
  int v7; // ecx

  WmipReferenceEntry(a1);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v2 = *(_QWORD *)(a1 + 128);
  v3 = (void **)(v2 + 24);
  if ( !v2 )
    v3 = (void **)(a1 + 136);
  while ( 1 )
  {
    v4 = (void ***)*v3;
    if ( *v3 == v3 )
      break;
    if ( v4[1] != v3 || (v5 = *v4, (*v4)[1] != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
    v6 = *((_DWORD *)v4 + 4);
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
          WmipProcessLegacyEtwCallback(v4, a1);
      }
      else
      {
        WmipProcessLegacyEtwUnregister(a1);
      }
    }
    else
    {
      WmipProcessLegacyEtwRegister(a1, (__int64)v4);
    }
    WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, (volatile signed __int64 *)a1);
    ExFreePoolWithTag(v4, 0x70696D57u);
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  }
  *(_DWORD *)(a1 + 16) &= ~0x10u;
  *(_QWORD *)(a1 + 128) = 0LL;
  KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  return WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, (volatile signed __int64 *)a1);
}
