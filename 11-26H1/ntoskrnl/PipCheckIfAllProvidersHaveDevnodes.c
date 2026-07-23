/*
 * XREFs of PipCheckIfAllProvidersHaveDevnodes @ 0x140774D30
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x1409B0EBC (PipProcessRebuildPowerRelationsQueue.c)
 * Callees:
 *     PiEnumerateProviderListEntry @ 0x1407A2650 (PiEnumerateProviderListEntry.c)
 *     PipIsDeviceReadyForPowerRelations @ 0x1409B36F4 (PipIsDeviceReadyForPowerRelations.c)
 */

char __fastcall PipCheckIfAllProvidersHaveDevnodes(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 *v3; // rbx
  __int64 *i; // r11
  __int64 **v5; // r11
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v7 = 0LL;
  if ( v1 && (v2 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 80LL)) != 0 )
    v3 = (__int64 *)(v2 + 16);
  else
    v3 = &PiDependencyNodeEmptyList;
  for ( i = (__int64 *)*v3; i != v3; i = *v5 )
  {
    PiEnumerateProviderListEntry(i, &v7, 0LL);
    if ( !(unsigned __int8)PipIsDeviceReadyForPowerRelations(v7) )
      return 0;
  }
  return 1;
}
