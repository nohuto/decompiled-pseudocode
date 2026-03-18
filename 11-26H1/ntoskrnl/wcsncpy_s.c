/*
 * XREFs of wcsncpy_s @ 0x14053CCA0
 * Callers:
 *     _wsplitpath_s @ 0x14053C0F0 (_wsplitpath_s.c)
 *     EmonAddProfileSource @ 0x140594AB0 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1405A3000 (Amd64AddProfileSource.c)
 *     CarInitializeTelemetryData @ 0x140649C90 (CarInitializeTelemetryData.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1408269B8 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpFindArcName @ 0x14083B5E0 (ExpFindArcName.c)
 *     ExpParseSignatureName @ 0x14083BBA0 (ExpParseSignatureName.c)
 *     LocalGetAclForString @ 0x1409243B0 (LocalGetAclForString.c)
 *     LocalGetStringForControl @ 0x140A627D4 (LocalGetStringForControl.c)
 *     GetOperatorIndexByName @ 0x140A62AF4 (GetOperatorIndexByName.c)
 *     EtwSetPerformanceTraceInformation @ 0x140B36610 (EtwSetPerformanceTraceInformation.c)
 *     HalpKdEnumerateDebuggingDevices @ 0x140C12590 (HalpKdEnumerateDebuggingDevices.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404D1DF0 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcsncpy_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src, rsize_t MaxCount)
{
  rsize_t v4; // r10
  errno_t v6; // ebx
  wchar_t *v7; // r11
  signed __int64 v8; // r11
  wchar_t v9; // ax
  signed __int64 v10; // r8
  wchar_t v11; // ax
  rsize_t v12; // rbx

  v4 = SizeInWords;
  if ( MaxCount )
  {
    if ( !Dst )
      goto LABEL_4;
  }
  else if ( !Dst )
  {
    if ( SizeInWords )
    {
LABEL_4:
      xHalTimerWatchdogStop();
      return 22;
    }
    return 0;
  }
  if ( !SizeInWords )
    goto LABEL_4;
  if ( !MaxCount )
  {
    *Dst = 0;
    return 0;
  }
  if ( Src )
  {
    v7 = Dst;
    if ( MaxCount == -1LL )
    {
      v8 = (char *)Dst - (char *)Src;
      while ( 1 )
      {
        v9 = *Src;
        *(const wchar_t *)((char *)Src + v8) = *Src;
        ++Src;
        if ( !v9 )
          break;
        if ( !--SizeInWords )
          goto LABEL_25;
      }
    }
    else
    {
      v10 = (char *)Src - (char *)Dst;
      while ( 1 )
      {
        v11 = *(wchar_t *)((char *)v7 + v10);
        v12 = MaxCount;
        *v7++ = v11;
        if ( !v11 )
          break;
        if ( --SizeInWords )
        {
          if ( --MaxCount )
            continue;
        }
        MaxCount = v12 - 1;
        if ( !SizeInWords )
          MaxCount = v12;
        if ( !MaxCount )
          *v7 = 0;
LABEL_25:
        if ( SizeInWords )
          return 0;
        if ( MaxCount == -1LL )
        {
          Dst[v4 - 1] = 0;
          return 80;
        }
        v6 = 34;
        goto LABEL_29;
      }
    }
    return 0;
  }
  v6 = 22;
LABEL_29:
  *Dst = 0;
  xHalTimerWatchdogStop();
  return v6;
}
