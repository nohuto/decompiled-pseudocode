/*
 * XREFs of ACPIAddInitializationDependencies @ 0x1400451BC
 * Callers:
 *     ACPIBuildFilter @ 0x140044FD0 (ACPIBuildFilter.c)
 *     ACPIBuildPdo @ 0x14004FAEC (ACPIBuildPdo.c)
 * Callees:
 *     ACPIConvertDependenciesToPnpReservations @ 0x140054888 (ACPIConvertDependenciesToPnpReservations.c)
 *     ACPIReserveDependencies @ 0x140059F24 (ACPIReserveDependencies.c)
 *     ACPIQueryDeviceBiosName @ 0x1400D1FE4 (ACPIQueryDeviceBiosName.c)
 */

__int64 __fastcall ACPIAddInitializationDependencies(__int64 a1)
{
  int v2; // edi
  char v3; // cl
  __int64 i; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  PVOID P[2]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = 0;
  *(_OWORD *)P = 0LL;
  if ( _bittest64((const signed __int64 *)(a1 + 8), 0x33u) )
    return (unsigned int)v2;
  if ( *(_QWORD *)(a1 + 648) )
  {
    v2 = ACPIConvertDependenciesToPnpReservations(*(_QWORD *)(a1 + 784), *(_QWORD *)(a1 + 760));
    if ( v2 < 0 )
      return (unsigned int)v2;
    if ( (*(_BYTE *)(a1 + 8) & 0x40) == 0 )
    {
      ExFreePoolWithTag(*(PVOID *)(a1 + 648), 0x4F706341u);
      *(_QWORD *)(a1 + 648) = 0LL;
    }
    v3 = 1;
  }
  for ( i = 0LL; (unsigned int)i <= 4; i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(a1 + 8 * i + 408);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 8);
      if ( *(_QWORD *)(v6 + 96) )
      {
        v2 = ACPIConvertDependenciesToPnpReservations(*(_QWORD *)(a1 + 784), *(_QWORD *)(v6 + 32));
        if ( v2 < 0 )
          return (unsigned int)v2;
        v3 = 1;
      }
    }
  }
  v7 = *(_QWORD *)(a1 + 448);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 8);
    if ( *(_QWORD *)(v8 + 96) )
    {
      v2 = ACPIConvertDependenciesToPnpReservations(*(_QWORD *)(a1 + 784), *(_QWORD *)(v8 + 32));
      if ( v2 < 0 )
        return (unsigned int)v2;
      v3 = 1;
    }
  }
  if ( _bittest64((const signed __int64 *)(a1 + 1008), 0x26u) && *(_QWORD *)(a1 + 968) )
  {
    v2 = ACPIReserveDependencies(*(_QWORD *)(a1 + 784));
    if ( v2 < 0 )
      return (unsigned int)v2;
    goto LABEL_23;
  }
  if ( v3 )
LABEL_23:
    _InterlockedOr64((volatile signed __int64 *)(a1 + 1008), 0x40uLL);
  v2 = ACPIQueryDeviceBiosName(*(_QWORD *)(a1 + 768), P);
  if ( v2 >= 0 )
    v2 = IoResolveDependency(P, *(_QWORD *)(a1 + 784));
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x53706341u);
  return (unsigned int)v2;
}
