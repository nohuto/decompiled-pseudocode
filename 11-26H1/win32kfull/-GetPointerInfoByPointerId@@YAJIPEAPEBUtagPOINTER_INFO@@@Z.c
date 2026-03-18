/*
 * XREFs of ?GetPointerInfoByPointerId@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x14028B868
 * Callers:
 *     ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x140250228 (-ValidatePointer@HideInkCursorProvider@@AEBAJI@Z.c)
 *     ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1402FE570 (-GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z.c)
 *     ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1402FF280 (-ValidatePointer@InkDevice@@AEBAJI@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x140136348 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     ?GetPointerInfoByPointerMsgId@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z @ 0x1401D1FA0 (-GetPointerInfoByPointerMsgId@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall GetPointerInfoByPointerId(__int64 a1, const struct tagPOINTER_INFO **a2)
{
  unsigned __int16 v3; // bx
  struct tagTHREADINFO *v4; // rax
  struct _LIST_ENTRY *v5; // rcx
  struct tagTHREADPOINTERDATA *ThreadPointerData; // rax
  unsigned __int64 v7; // rcx

  *a2 = 0LL;
  v3 = a1;
  v4 = PtiCurrent(a1);
  v5 = (struct _LIST_ENTRY *)((char *)v4 + 1208);
  ThreadPointerData = (struct tagTHREADPOINTERDATA *)*((_QWORD *)v4 + 154);
  if ( ThreadPointerData )
  {
    if ( *((_WORD *)ThreadPointerData + 8) != v3 )
      ThreadPointerData = 0LL;
  }
  else
  {
    ThreadPointerData = FindThreadPointerData(v5, v3);
  }
  if ( ThreadPointerData
    && (*((_DWORD *)ThreadPointerData + 12) & 8) == 0
    && (v7 = *((_QWORD *)ThreadPointerData + 3)) != 0 )
  {
    return GetPointerInfoByPointerMsgId(v7, a2);
  }
  else
  {
    return 3221225485LL;
  }
}
