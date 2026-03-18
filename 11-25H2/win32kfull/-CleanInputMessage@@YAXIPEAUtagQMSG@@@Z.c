/*
 * XREFs of ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1401AD7F8
 * Callers:
 *     PostInputMessage @ 0x14011FED8 (PostInputMessage.c)
 *     SuspendThreadQueue @ 0x1401AD580 (SuspendThreadQueue.c)
 * Callees:
 *     _FreeTouchInputInfo @ 0x1400CABF0 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1402694A0 (_FreeGestureInfo.c)
 */

void __fastcall CleanInputMessage(int a1, struct tagQMSG *a2)
{
  if ( a1 == 576 )
  {
    FreeTouchInputInfo(*((_QWORD *)a2 + 5));
  }
  else if ( a1 == 281 )
  {
    FreeGestureInfo(*((_QWORD *)a2 + 5), 1LL);
  }
}
