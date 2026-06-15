/*
 * XREFs of ?GetFirst@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResourcePool@Sarm@@XZ @ 0x180125100
 * Callers:
 *     ?Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ @ 0x180126E90 (-Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::GetFirst(__int64 a1)
{
  __int64 v2; // r8
  unsigned int i; // ecx
  __int64 v4; // r10
  __int64 v5; // rcx
  unsigned int v6; // r11d
  __int64 v7; // rdx

  v2 = 0LL;
  if ( *(_QWORD *)(a1 + 8) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL * i) )
      {
        _mm_lfence();
        v4 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * i);
        goto LABEL_8;
      }
    }
  }
  v4 = 0LL;
LABEL_8:
  *(_QWORD *)(a1 + 72) = v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( !v5 )
    {
      v6 = *(_DWORD *)(a1 + 16);
      LODWORD(v7) = *(_DWORD *)(v4 + 48) % v6;
      do
      {
        v7 = (unsigned int)(v7 + 1);
        v5 = 0LL;
        if ( (unsigned int)v7 >= v6 )
          break;
        v5 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v7);
      }
      while ( !v5 );
    }
    *(_QWORD *)(a1 + 72) = v5;
    return v4 + 8;
  }
  return v2;
}
