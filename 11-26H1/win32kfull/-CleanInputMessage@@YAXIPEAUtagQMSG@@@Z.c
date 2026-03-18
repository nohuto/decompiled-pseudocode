/*
 * XREFs of ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1401EDD40
 * Callers:
 *     PostInputMessage @ 0x1400904E8 (PostInputMessage.c)
 *     SuspendThreadQueue @ 0x1402A7460 (SuspendThreadQueue.c)
 * Callees:
 *     _FreeGestureInfo @ 0x1401EDD90 (_FreeGestureInfo.c)
 *     _FreeTouchInputInfo @ 0x1401EE500 (_FreeTouchInputInfo.c)
 */

void __fastcall CleanInputMessage(int a1, struct tagQMSG *a2)
{
  if ( a1 == 576 )
  {
    FreeTouchInputInfo(*((_QWORD *)a2 + 5), 1LL);
  }
  else if ( a1 == 281 )
  {
    FreeGestureInfo(*((_QWORD *)a2 + 5), 1LL);
  }
}
