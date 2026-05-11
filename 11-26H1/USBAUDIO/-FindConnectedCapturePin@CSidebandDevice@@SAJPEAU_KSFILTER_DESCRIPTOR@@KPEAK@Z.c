/*
 * XREFs of ?FindConnectedCapturePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x140010378
 * Callers:
 *     ?GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x140011A98 (-GetSidetoneNodes@CSidebandDevice@@SAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     ?IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z @ 0x140012F6C (-IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?TraverseToCaptureBridgePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECTION@@PEAK@Z @ 0x140014090 (-TraverseToCaptureBridgePin@CSidebandDevice@@SAJPEAU_KSFILTER_DESCRIPTOR@@PEBUKSTOPOLOGY_CONNECT.c)
 */

__int64 __fastcall CSidebandDevice::FindConnectedCapturePin(
        struct _KSFILTER_DESCRIPTOR *a1,
        unsigned int a2,
        unsigned int *a3)
{
  unsigned int v4; // r11d
  ULONG i; // r10d
  const KSTOPOLOGY_CONNECTION *v6; // rdx

  v4 = -1073741275;
  for ( i = 0; i < a1->ConnectionsCount; ++i )
  {
    v6 = &a1->Connections[i];
    if ( *(_QWORD *)&v6->ToNode == __PAIR64__(a2, -1) )
      return (unsigned int)CSidebandDevice::TraverseToCaptureBridgePin(a1, v6, a3);
  }
  return v4;
}
