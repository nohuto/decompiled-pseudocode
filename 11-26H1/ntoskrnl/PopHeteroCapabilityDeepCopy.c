/*
 * XREFs of PopHeteroCapabilityDeepCopy @ 0x140B76650
 * Callers:
 *     PpmHeteroReinitializeWpsProcessors @ 0x1407DA9A8 (PpmHeteroReinitializeWpsProcessors.c)
 *     PopIsSimulatedArchitecturalHeteroPresent @ 0x140B56DD0 (PopIsSimulatedArchitecturalHeteroPresent.c)
 *     PopInitializeHeteroProcessors @ 0x140B76758 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline @ 0x14060D3CC (Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall PopHeteroCapabilityDeepCopy(__int64 a1, const void **a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r14
  unsigned int v6; // ebp
  int v7; // r15d
  void *v8; // rcx
  unsigned int v9; // r14d

  v2 = 0;
  if ( a2 )
  {
    if ( a1 )
    {
      if ( a2 != (const void **)a1 )
      {
        v5 = *(unsigned int *)a2;
        if ( (_DWORD)v5 == *(_DWORD *)a1 )
        {
          v6 = *((_DWORD *)a2 + 1);
          if ( v6 == *(_DWORD *)(a1 + 4) )
          {
            memmove(*(void **)(a1 + 16), a2[2], (unsigned int)v5);
            v7 = v5 + 2 * v6;
            memmove(*(void **)(a1 + 24), a2[3], 2LL * v6);
            if ( (unsigned int)Feature_WpsInitTableCollection__private_IsEnabledDeviceUsageNoInline()
              && *((_BYTE *)a2 + 8)
              && !*(_BYTE *)(a1 + 8) )
            {
              v8 = *(void **)(a1 + 32);
              *(_BYTE *)(a1 + 8) = 1;
              memmove(v8, a2[4], 4 * v5);
              v7 += 8 * v5;
              memmove(*(void **)(a1 + 40), a2[5], 4 * v5);
            }
            v9 = v6 * v5;
            v2 = v7 + 4 * v9;
            memmove((void *)(a1 + 48), a2 + 6, 4LL * v9);
          }
        }
      }
    }
  }
  return v2;
}
