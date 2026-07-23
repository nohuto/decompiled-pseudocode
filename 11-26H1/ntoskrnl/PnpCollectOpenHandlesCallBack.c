/*
 * XREFs of PnpCollectOpenHandlesCallBack @ 0x140B27620
 * Callers:
 *     <none>
 * Callees:
 *     IopDebugPrint @ 0x1405DC688 (IopDebugPrint.c)
 *     PnpAddVetoInformation @ 0x140B2768C (PnpAddVetoInformation.c)
 */

__int64 __fastcall PnpCollectOpenHandlesCallBack(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int *v5; // rdi

  v5 = (unsigned int *)(a2 + 464);
  if ( *(_BYTE *)(a5 + 36) )
    IopDebugPrint(0x14u, (int)"  DeviceObject:%p ProcessID:%dT FileObject:%p Handle:%dT\n", a1, *(_QWORD *)v5, a3, a4);
  if ( *(_BYTE *)(a5 + 37) )
    PnpAddVetoInformation(*(_QWORD *)a5, a5 + 16, *v5);
  ++*(_DWORD *)(a5 + 32);
  return 0LL;
}
