/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14001BCF0
 * Callers:
 *     wil_details_IsEnabledFallback @ 0x14001BEEC (wil_details_IsEnabledFallback.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(char a1, int a2, __int64 a3)
{
  volatile signed __int32 *v3; // r9
  int v4; // edx
  unsigned int v5; // r10d
  signed __int32 v6; // eax
  signed __int32 v7; // r8d
  volatile signed __int32 v8; // edx
  int v9; // ecx

  v3 = *(volatile signed __int32 **)a3;
  v4 = a2 - 3;
  if ( v4 )
  {
    if ( v4 != 1 )
      return;
    v5 = 32;
  }
  else
  {
    v5 = 16;
  }
  if ( *(_BYTE *)(a3 + 30) || *(_BYTE *)(a3 + 29) )
  {
    _InterlockedOr(v3, v5);
  }
  else
  {
    v6 = *v3;
    v7 = *v3;
    v8 = *v3;
    if ( (*v3 & 2) != 0 )
    {
      v9 = a1 & 1;
      do
      {
        if ( (v8 & 1) != v9 )
          break;
        v6 = _InterlockedCompareExchange(v3, v6 | v5, v7);
        if ( v7 == v6 )
          break;
        v7 = v6;
        LOBYTE(v8) = v6;
      }
      while ( (v6 & 2) != 0 );
    }
  }
}
