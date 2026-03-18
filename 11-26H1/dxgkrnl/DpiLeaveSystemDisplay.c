/*
 * XREFs of DpiLeaveSystemDisplay @ 0x1400655D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DxgkReleaseAdapterCoreSync @ 0x14030E1AC (DxgkReleaseAdapterCoreSync.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 */

void DpiLeaveSystemDisplay()
{
  if ( !byte_1401691F0 && !byte_1401691F1 )
  {
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(qword_140169200 + 4032), 2LL);
    if ( *(_BYTE *)(qword_140169200 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(qword_140169200 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(qword_140169200 + 168));
    KeLeaveCriticalRegion();
    KeReleaseMutex((PRKMUTEX)(qword_1401691F8 + 72), 0);
    ReleaseMiniportListMutex();
  }
}
