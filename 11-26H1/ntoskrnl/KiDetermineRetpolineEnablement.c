/*
 * XREFs of KiDetermineRetpolineEnablement @ 0x1405F4A24
 * Callers:
 *     KiInitializeBootStructures @ 0x140BFB890 (KiInitializeBootStructures.c)
 * Callees:
 *     KiDetectHardwareSpecControlFeatures @ 0x1405F4498 (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsPgiKernel @ 0x1405F4BE4 (KiIsPgiKernel.c)
 *     KiIsSafeBoot @ 0x1405F4CA4 (KiIsSafeBoot.c)
 *     KiIsWinPEBoot @ 0x1405F4DF4 (KiIsWinPEBoot.c)
 */

char __fastcall KiDetermineRetpolineEnablement(__int64 a1)
{
  __int64 v2; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v5 = 0LL;
  LOBYTE(v2) = KiIsSafeBoot();
  if ( !(_BYTE)v2 )
  {
    LOBYTE(v2) = KiIsWinPEBoot(a1);
    if ( !(_BYTE)v2 )
    {
      LOBYTE(v2) = KiIsPgiKernel();
      if ( !(_BYTE)v2 )
      {
        LOBYTE(v2) = (unsigned __int8)KiDetectHardwareSpecControlFeatures((__int64)KeGetCurrentPrcb(), 0LL, &v4, 0LL);
        if ( (KiFeatureSettings & 5) == 0 )
        {
          v2 = *(_QWORD *)(a1 + 240);
          if ( *(_DWORD *)(v2 + 3500) )
          {
            if ( (v4 & 1) == 0 && !(_BYTE)KiKernelCetEnabled )
            {
              if ( (KiFeatureSettings & 0x200) != 0
                || (LOBYTE(v2) = (KiFeatureSettings & 0x100) == 0, (((v4 & 0x204) == 4) & (unsigned __int8)v2) != 0)
                && (LOBYTE(v2) = 16, (v4 & 0x4000010) != 0x4000010) )
              {
                LOBYTE(v2) = 0;
                _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x20000000000uLL);
              }
            }
          }
        }
      }
    }
  }
  return v2;
}
