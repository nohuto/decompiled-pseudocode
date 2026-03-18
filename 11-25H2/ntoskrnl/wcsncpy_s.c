/*
 * XREFs of wcsncpy_s @ 0x140502200
 * Callers:
 *     _wsplitpath_s @ 0x140501630 (_wsplitpath_s.c)
 *     EmonAddProfileSource @ 0x140557F20 (EmonAddProfileSource.c)
 *     Amd64AddProfileSource @ 0x1405670A0 (Amd64AddProfileSource.c)
 *     CarInitializeTelemetryData @ 0x14060ABE0 (CarInitializeTelemetryData.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1407995D8 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpFindArcName @ 0x1407AC74C (ExpFindArcName.c)
 *     ExpParseSignatureName @ 0x1407ACBB0 (ExpParseSignatureName.c)
 *     LocalGetAclForString @ 0x140917620 (LocalGetAclForString.c)
 *     GetOperatorIndexByName @ 0x1409E84FC (GetOperatorIndexByName.c)
 *     LocalGetStringForControl @ 0x1409E9658 (LocalGetStringForControl.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A3F778 (EtwSetPerformanceTraceInformation.c)
 *     HalpKdEnumerateDebuggingDevices @ 0x140B65850 (HalpKdEnumerateDebuggingDevices.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140494A10 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcsncpy_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src, rsize_t MaxCount)
{
  errno_t v5; // ebx
  wchar_t *v6; // r11
  rsize_t v7; // r10
  signed __int64 v8; // r11
  wchar_t v9; // ax
  signed __int64 v10; // r8
  wchar_t v11; // ax
  rsize_t v12; // rbx

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
    v6 = Dst;
    v7 = SizeInWords;
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
        if ( !--v7 )
          goto LABEL_25;
      }
    }
    else
    {
      v10 = (char *)Src - (char *)Dst;
      while ( 1 )
      {
        v11 = *(wchar_t *)((char *)v6 + v10);
        v12 = MaxCount;
        *v6++ = v11;
        if ( !v11 )
          break;
        if ( --v7 )
        {
          if ( --MaxCount )
            continue;
        }
        MaxCount = v12 - 1;
        if ( !v7 )
          MaxCount = v12;
        if ( !MaxCount )
          *v6 = 0;
LABEL_25:
        if ( v7 )
          return 0;
        if ( MaxCount == -1LL )
        {
          Dst[SizeInWords - 1] = 0;
          return 80;
        }
        v5 = 34;
        goto LABEL_29;
      }
    }
    return 0;
  }
  v5 = 22;
LABEL_29:
  *Dst = 0;
  xHalTimerWatchdogStop();
  return v5;
}
