/*
 * XREFs of ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14013898C
 * Callers:
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1401F3274 (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0CB@@@YAXXZ @ 0x1401C3FF4 (--$GrepAcquireLockValidate@$0CB@@@YAXXZ.c)
 */

struct _ERESOURCE **__fastcall SEMOBJ<33>::SEMOBJ<33>(struct _ERESOURCE **a1, struct _ERESOURCE **a2)
{
  struct _ERESOURCE *v3; // rcx

  v3 = *a2 + 4;
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<33>();
  return a1;
}
