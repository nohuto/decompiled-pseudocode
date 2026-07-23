/*
 * XREFs of HalpGetProfileDescriptor @ 0x1404E4A04
 * Callers:
 *     HalpRemoveProfileSourceFromList @ 0x140582CD8 (HalpRemoveProfileSourceFromList.c)
 *     EmonEnableMonitoring @ 0x140597AD0 (EmonEnableMonitoring.c)
 *     EmonSetInterval @ 0x140599120 (EmonSetInterval.c)
 *     Amd64EnableMonitoring @ 0x1405A6350 (Amd64EnableMonitoring.c)
 *     Amd64SetInterval @ 0x1405A7520 (Amd64SetInterval.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpGetProfileDescriptor(int a1, __int64 a2, _QWORD *a3)
{
  __int64 *i; // rax

  for ( i = (__int64 *)HalpProfileSourceDescriptorListHead; ; i = (__int64 *)*i )
  {
    if ( i == &HalpProfileSourceDescriptorListHead )
      return 3221225659LL;
    if ( *((_DWORD *)i - 2) == a1 )
      break;
  }
  *a3 = i - 1;
  return 0LL;
}
