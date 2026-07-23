/*
 * XREFs of WmipFreeTraceDeviceList @ 0x140B0D154
 * Callers:
 *     WmipBuildTraceDeviceList @ 0x1404C792C (WmipBuildTraceDeviceList.c)
 *     WmiSetNetworkNotify @ 0x140829E18 (WmiSetNetworkNotify.c)
 *     WmiTraceRundownNotify @ 0x140B0D0B4 (WmiTraceRundownNotify.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x1403C0F80 (WmipUnreferenceRegEntry.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
