/*
 * XREFs of ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x140207CAC
 * Callers:
 *     xxxHardErrorControl @ 0x14021DD80 (xxxHardErrorControl.c)
 *     zzzReattachThreads @ 0x14023FD24 (zzzReattachThreads.c)
 *     xxxDesktopThread @ 0x140288970 (xxxDesktopThread.c)
 * Callees:
 *     <none>
 */

char __fastcall tagQ::IsAnyThreadAttached(tagQ *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 63) || *((_QWORD *)this + 64) )
    return 1;
  return result;
}
