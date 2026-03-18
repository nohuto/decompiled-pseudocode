/*
 * XREFs of NtUserfnTOUCH @ 0x1400CACA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ForwardTouchMessage @ 0x1400CA82C (ForwardTouchMessage.c)
 */

__int64 __fastcall NtUserfnTOUCH(
        struct tagWND *a1,
        __int64 a2,
        __int64 a3,
        volatile void *a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rbx
  int v9; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v14; // rax
  __int64 v15; // [rsp+50h] [rbp-28h] BYREF

  v6 = 0LL;
  v15 = 0LL;
  v9 = a2;
  PtiCurrent((__int64)a1, a2);
  if ( v9 == 576 )
  {
    if ( a6 <= 0x2B2 )
    {
      if ( a6 != 690 && a6 != 670 && a6 != 671 && a6 != 683 && a6 != 684 && a6 != 689 )
        return v6;
    }
    else if ( a6 != 691 && a6 != 692 && a6 - 695 > 1 )
    {
      return v6;
    }
    if ( (unsigned __int64)a1 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    {
      UserSetLastError(1400);
    }
    else
    {
      v14 = PtiCurrent(v12, v11);
      if ( (unsigned int)ForwardTouchMessage(v14, a1, 0x240u, a3, a4, 0, a5, a6, &v15) )
        return v15;
    }
  }
  return v6;
}
