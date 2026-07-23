/*
 * XREFs of BgpFoGetFontHandle @ 0x140C5A508
 * Callers:
 *     BgpConsoleInitialize @ 0x140C56420 (BgpConsoleInitialize.c)
 *     ResFwConfigureDisplayStringResources @ 0x140C56C5C (ResFwConfigureDisplayStringResources.c)
 *     AnFwConfigureProgressResources @ 0x140C570AC (AnFwConfigureProgressResources.c)
 *     BgpTxtCreateRegion @ 0x140C57CF0 (BgpTxtCreateRegion.c)
 *     BgpFoDetermineFontInformation @ 0x140D19B78 (BgpFoDetermineFontInformation.c)
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 */

__int64 __fastcall BgpFoGetFontHandle(wchar_t *Str2, struct _LIST_ENTRY **a2)
{
  __int64 result; // rax
  struct _LIST_ENTRY *Blink; // rdi
  struct _LIST_ENTRY *i; // rbx

  result = 3221226021LL;
  if ( !a2 || !BYTE4(gLoadedDiffHivesLock.Timer.Header.WaitListHead.Flink) )
    return 3221225485LL;
  *a2 = 0LL;
  Blink = gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink;
  while ( Blink != (struct _LIST_ENTRY *)&gLoadedDiffHivesLock.Timer.Header.WaitListHead.Blink )
  {
    for ( i = Blink[2].Blink; i != (struct _LIST_ENTRY *)&Blink[2].Blink; i = i->Flink )
    {
      if ( Str2 )
      {
        if ( !wcsicmp((const wchar_t *)i[2].Flink, Str2) )
        {
LABEL_9:
          *a2 = i;
          return 0LL;
        }
      }
      else if ( (HIDWORD(Blink[1].Blink) & 1) != 0 )
      {
        goto LABEL_9;
      }
    }
    Blink = Blink->Flink;
    result = 3221226021LL;
  }
  return result;
}
