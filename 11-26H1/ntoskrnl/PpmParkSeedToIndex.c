/*
 * XREFs of PpmParkSeedToIndex @ 0x1404FAE9C
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x14025D7A0 (PpmParkComputeUnparkMask.c)
 *     PpmParkFindSpecificTopologyMask @ 0x14045E650 (PpmParkFindSpecificTopologyMask.c)
 * Callees:
 *     RtlCountSetBitsAffinityEx @ 0x140251920 (RtlCountSetBitsAffinityEx.c)
 */

__int64 __fastcall PpmParkSeedToIndex(unsigned __int16 *a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // eax
  unsigned __int64 v3; // r9
  __int64 v4; // r10
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int16 v10; // r8
  int i; // r11d
  unsigned __int64 v12; // rdx

  v1 = 0;
  v2 = RtlCountSetBitsAffinityEx(a1);
  if ( v2 )
  {
    v6 = v2;
    v7 = v3;
    v8 = *(_QWORD *)(v4 + 8);
    v9 = v7 % v6;
    v10 = 0;
    for ( i = v9; ; --i )
    {
      while ( !v8 )
      {
        if ( ++v10 >= *(_WORD *)v4 )
          return v1;
        v8 = *(_QWORD *)(v4 + 8LL * v10 + 8);
      }
      _BitScanForward64(&v12, v8);
      v8 &= ~(1LL << v12);
      v1 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock + 64 * v10
                                                                                        + (unsigned __int8)v12);
      if ( !i )
        break;
    }
  }
  return v1;
}
