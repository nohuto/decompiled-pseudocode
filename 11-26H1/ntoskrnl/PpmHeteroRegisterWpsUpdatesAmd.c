/*
 * XREFs of PpmHeteroRegisterWpsUpdatesAmd @ 0x1407E3860
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402767B0 (KeQueryMaximumProcessorCountEx.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 */

__int64 __fastcall PpmHeteroRegisterWpsUpdatesAmd(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  ULONG v4; // r14d
  __int64 v5; // r12
  ULONG MaximumProcessorCount; // r15d
  ULONG i; // esi
  unsigned int j; // ebp
  __int64 Prcb; // rax

  v2 = 0;
  if ( a2 )
  {
    if ( !PpmHeteroHgsEnabled
      || PpmHeteroHgsVendor != 1
      || !*(_QWORD *)(a2 + 48)
      || !*(_QWORD *)(a2 + 8)
      || !*(_QWORD *)(a2 + 56)
      || !*(_QWORD *)(a2 + 64) )
    {
      return (unsigned int)-1073741811;
    }
    if ( PpmHeteroHgsTableEntry || PopSleepstudySessionLock.StackLimit || PopSleepstudySessionLock.StateSaveArea )
      return (unsigned int)-1073741616;
    v4 = *(_DWORD *)(a2 + 16);
    v5 = *(_QWORD *)(a2 + 48);
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    if ( v4 > MaximumProcessorCount )
      return (unsigned int)-1073741811;
    for ( i = 0; i < v4; ++i )
    {
      for ( j = 0; j < MaximumProcessorCount; ++j )
      {
        if ( *(_DWORD *)(v5 + 4LL * i) == *(_DWORD *)(KeGetPrcb(j) + 212) )
        {
          Prcb = KeGetPrcb(j);
          if ( Prcb )
          {
            *(_WORD *)(Prcb + 35422) = i;
            *(_WORD *)(Prcb + 35418) = i * *(_WORD *)(a2 + 20);
          }
          break;
        }
      }
    }
    PpmHeteroHgsTableEntry = *(_QWORD *)(a2 + 8);
    PopSleepstudySessionLock.StackBase = *(void **)a2;
    PopSleepstudySessionLock.StackLimit = *(void *volatile *)(a2 + 56);
    PopSleepstudySessionLock.StateSaveArea = *(_XSAVE_FORMAT **)(a2 + 64);
    PpmHeteroHgsCapabilityBits = *(_DWORD *)(a2 + 24);
    PpmHeteroHgsDynamicUpdateEnabled = *(_BYTE *)(a2 + 72);
  }
  return v2;
}
