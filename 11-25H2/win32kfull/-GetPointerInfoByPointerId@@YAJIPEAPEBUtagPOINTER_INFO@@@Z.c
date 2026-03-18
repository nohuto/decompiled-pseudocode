/*
 * XREFs of ?GetPointerInfoByPointerId@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x140266CA0
 * Callers:
 *     ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x140266C4C (-ValidatePointer@HideInkCursorProvider@@AEBAJI@Z.c)
 *     ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1402EEE68 (-GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z.c)
 *     ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1402EFB7C (-ValidatePointer@InkDevice@@AEBAJI@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x140139028 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     ?GetPointerInfoByPointerMsgId@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z @ 0x1401A2850 (-GetPointerInfoByPointerMsgId@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall GetPointerInfoByPointerId(__int64 a1, const struct tagPOINTER_INFO **a2)
{
  unsigned __int16 v3; // bx
  struct tagTHREADINFO *v4; // rax
  struct _LIST_ENTRY *v5; // rcx
  struct _LIST_ENTRY *ThreadPointerData; // rax
  unsigned __int64 Blink; // rcx

  *a2 = 0LL;
  v3 = a1;
  v4 = PtiCurrent(a1, (__int64)a2);
  v5 = (struct _LIST_ENTRY *)((char *)v4 + 1208);
  ThreadPointerData = (struct _LIST_ENTRY *)*((_QWORD *)v4 + 154);
  if ( ThreadPointerData )
  {
    if ( LOWORD(ThreadPointerData[1].Flink) != v3 )
      return 3221225485LL;
  }
  else
  {
    ThreadPointerData = FindThreadPointerData(v5, v3);
    if ( !ThreadPointerData )
      return 3221225485LL;
  }
  if ( ((__int64)ThreadPointerData[3].Flink & 8) != 0 )
    return 3221225485LL;
  Blink = (unsigned __int64)ThreadPointerData[1].Blink;
  if ( !Blink )
    return 3221225485LL;
  return GetPointerInfoByPointerMsgId(Blink, a2);
}
