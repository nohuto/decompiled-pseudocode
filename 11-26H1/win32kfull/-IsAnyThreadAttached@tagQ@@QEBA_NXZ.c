/*
 * XREFs of ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x140237ED4
 * Callers:
 *     xxxDesktopThread @ 0x14020A3B0 (xxxDesktopThread.c)
 *     xxxHardErrorControl @ 0x140244D3C (xxxHardErrorControl.c)
 *     zzzReattachThreads @ 0x140277664 (zzzReattachThreads.c)
 * Callees:
 *     <none>
 */

char __fastcall tagQ::IsAnyThreadAttached(tagQ *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 66) || *((_QWORD *)this + 67) )
    return 1;
  return result;
}
