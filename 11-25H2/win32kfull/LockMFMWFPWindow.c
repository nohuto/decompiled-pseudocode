/*
 * XREFs of LockMFMWFPWindow @ 0x1402BF34C
 * Callers:
 *     xxxHandleMenuMessages @ 0x1400439DC (xxxHandleMenuMessages.c)
 *     xxxMNUpdateDraggingInfo @ 0x1402E9B84 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     IsMFMWFPWindow @ 0x140044744 (IsMFMWFPWindow.c)
 *     UnlockMFMWFPWindow @ 0x14026B510 (UnlockMFMWFPWindow.c)
 */

void __fastcall LockMFMWFPWindow(__int64 *a1, __int64 a2)
{
  int v4; // eax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *a1 != a2 )
  {
    UnlockMFMWFPWindow(a1);
    LOBYTE(v4) = IsMFMWFPWindow(a2);
    if ( v4 )
    {
      v5[0] = a1;
      v5[1] = a2;
      HMAssignmentLock(v5, 0LL);
    }
    else
    {
      *a1 = a2;
    }
  }
}
