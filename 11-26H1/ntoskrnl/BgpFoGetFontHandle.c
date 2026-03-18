/*
 * XREFs of BgpFoGetFontHandle @ 0x140C54508
 * Callers:
 *     BgpConsoleInitialize @ 0x140C50420 (BgpConsoleInitialize.c)
 *     ResFwConfigureDisplayStringResources @ 0x140C50C5C (ResFwConfigureDisplayStringResources.c)
 *     AnFwConfigureProgressResources @ 0x140C510AC (AnFwConfigureProgressResources.c)
 *     BgpTxtCreateRegion @ 0x140C51CF0 (BgpTxtCreateRegion.c)
 *     BgpFoDetermineFontInformation @ 0x140D139B0 (BgpFoDetermineFontInformation.c)
 * Callees:
 *     _wcsicmp @ 0x140536570 (_wcsicmp.c)
 */

__int64 __fastcall BgpFoGetFontHandle(wchar_t *Str2, __int64 **a2)
{
  __int64 result; // rax
  _KTIMER *v5; // rdi
  __int64 *i; // rbx

  result = 3221226021LL;
  if ( !a2 || !LOBYTE(gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink) )
    return 3221225485LL;
  *a2 = 0LL;
  v5 = *(_KTIMER **)&gLoadedDiffHivesLock.Timer.Header.Lock;
  while ( v5 != &gLoadedDiffHivesLock.Timer )
  {
    for ( i = (__int64 *)v5->TimerListEntry.Blink; i != (__int64 *)&v5->TimerListEntry.Blink; i = (__int64 *)*i )
    {
      if ( Str2 )
      {
        if ( !wcsicmp((const wchar_t *)i[4], Str2) )
        {
LABEL_9:
          *a2 = i;
          return 0LL;
        }
      }
      else if ( (v5->DueTime.HighPart & 1) != 0 )
      {
        goto LABEL_9;
      }
    }
    v5 = *(_KTIMER **)&v5->Header.Lock;
    result = 3221226021LL;
  }
  return result;
}
