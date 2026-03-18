/*
 * XREFs of WmipFreeTraceDeviceList @ 0x140B0BA04
 * Callers:
 *     WmipBuildTraceDeviceList @ 0x1404CDEFC (WmipBuildTraceDeviceList.c)
 *     WmiSetNetworkNotify @ 0x140823BCC (WmiSetNetworkNotify.c)
 *     WmiTraceRundownNotify @ 0x140B0B964 (WmiTraceRundownNotify.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x1403B7080 (WmipUnreferenceRegEntry.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall WmipFreeTraceDeviceList(__int64 *P, unsigned int a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi

  if ( a2 )
  {
    v3 = P;
    v4 = a2;
    do
    {
      WmipUnreferenceRegEntry(*v3);
      v3 += 2;
      --v4;
    }
    while ( v4 );
  }
  ExFreePoolWithTag(P, 0x70696D57u);
}
