/*
 * XREFs of ??0?$SEMOBJ@$0CE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140189E60
 * Callers:
 *     ??1SURFMEM@@QEAA@XZ @ 0x140026090 (--1SURFMEM@@QEAA@XZ.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0CE@@@YAXXZ @ 0x140024B80 (--$GrepAcquireLockValidate@$0CE@@@YAXXZ.c)
 */

struct _ERESOURCE **__fastcall SEMOBJ<36>::SEMOBJ<36>(struct _ERESOURCE **a1, struct _ERESOURCE **a2)
{
  struct _ERESOURCE *v3; // rcx

  v3 = *a2 + 9;
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<36>();
  return a1;
}
