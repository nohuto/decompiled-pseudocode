/*
 * XREFs of wcsncat_s @ 0x14053F010
 * Callers:
 *     SddlpUuidFromString @ 0x1407771A8 (SddlpUuidFromString.c)
 *     PnprGetPluginDriverImagePath @ 0x1407B2190 (PnprGetPluginDriverImagePath.c)
 *     ExpConvertArcName @ 0x140841144 (ExpConvertArcName.c)
 *     ExpFindArcName @ 0x140841820 (ExpFindArcName.c)
 *     VhdiMountVhdFile @ 0x1408AC820 (VhdiMountVhdFile.c)
 *     ExpTranslateEfiPath @ 0x140A2D97C (ExpTranslateEfiPath.c)
 *     NtLockProductActivationKeys @ 0x140AE3B50 (NtLockProductActivationKeys.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcsncat_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src, rsize_t MaxCount)
{
  rsize_t v4; // r11
  wchar_t *v5; // r10
  errno_t v7; // ebx
  signed __int64 v8; // rcx
  wchar_t v9; // ax
  signed __int64 v10; // r8
  wchar_t v11; // ax

  v4 = SizeInWords;
  v5 = Dst;
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
  if ( MaxCount && !Src )
  {
LABEL_11:
    v7 = 22;
LABEL_27:
    *v5 = 0;
    xHalTimerWatchdogStop();
    return v7;
  }
  while ( *Dst )
  {
    ++Dst;
    if ( !--SizeInWords )
      goto LABEL_11;
  }
  if ( MaxCount == -1LL )
  {
    v8 = (char *)Dst - (char *)Src;
    while ( 1 )
    {
      v9 = *Src;
      *(const wchar_t *)((char *)Src + v8) = *Src;
      ++Src;
      if ( !v9 )
        return 0;
      if ( !--SizeInWords )
        goto LABEL_23;
    }
  }
  if ( MaxCount )
  {
    v10 = (char *)Src - (char *)Dst;
    do
    {
      v11 = *(wchar_t *)((char *)Dst + v10);
      *Dst++ = v11;
      if ( !v11 )
        return 0;
      if ( !--SizeInWords )
        goto LABEL_23;
    }
    while ( --MaxCount );
  }
  *Dst = 0;
LABEL_23:
  if ( !SizeInWords )
  {
    if ( MaxCount == -1LL )
    {
      v5[v4 - 1] = 0;
      return 80;
    }
    v7 = 34;
    goto LABEL_27;
  }
  return 0;
}
