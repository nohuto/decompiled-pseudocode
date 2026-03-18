/*
 * XREFs of wcscat_s @ 0x14053CA60
 * Callers:
 *     ExpWatchLicenseInfoWork @ 0x140836EA0 (ExpWatchLicenseInfoWork.c)
 *     ExpCreateOutputSIGNATURE @ 0x14083B414 (ExpCreateOutputSIGNATURE.c)
 *     AslPathToNetworkPathNt @ 0x1408896D4 (AslPathToNetworkPathNt.c)
 *     VhdiMountVhdFile @ 0x1408A63B0 (VhdiMountVhdFile.c)
 *     RtlConvertSidToUnicodeString @ 0x140925970 (RtlConvertSidToUnicodeString.c)
 *     BcdGetSystemStorePath @ 0x1409D39D8 (BcdGetSystemStorePath.c)
 *     NtLockProductActivationKeys @ 0x140AE5D90 (NtLockProductActivationKeys.c)
 *     ExpWatchProductTypeInitialization @ 0x140CE4EEC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404D1DF0 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcscat_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src)
{
  wchar_t *v3; // r9
  errno_t v4; // ebx
  wchar_t v6; // ax

  if ( Dst && SizeInWords )
  {
    if ( Src )
    {
      v3 = Dst;
      while ( *v3 )
      {
        ++v3;
        if ( !--SizeInWords )
          goto LABEL_7;
      }
      while ( 1 )
      {
        v6 = *Src++;
        *v3++ = v6;
        if ( !v6 )
          return 0;
        if ( !--SizeInWords )
        {
          v4 = 34;
          goto LABEL_8;
        }
      }
    }
    else
    {
LABEL_7:
      v4 = 22;
LABEL_8:
      *Dst = 0;
      xHalTimerWatchdogStop();
      return v4;
    }
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
