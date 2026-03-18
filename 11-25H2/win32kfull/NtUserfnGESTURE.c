/*
 * XREFs of NtUserfnGESTURE @ 0x14021FE50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SendGestureMessage @ 0x14021FF48 (SendGestureMessage.c)
 */

__int64 __fastcall NtUserfnGESTURE(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // rbx
  int v9; // esi
  _QWORD v12[3]; // [rsp+40h] [rbp-18h] BYREF

  v6 = 0LL;
  v12[0] = 0LL;
  v9 = a2;
  PtiCurrent(a1, a2);
  if ( v9 == 281 )
  {
    if ( a6 > 0x2B2 )
    {
      if ( a6 != 691 && a6 != 692 && a6 - 695 > 1 )
        return v6;
    }
    else if ( a6 != 690 && a6 != 670 && a6 != 671 && a6 != 683 && a6 != 684 && a6 != 689 )
    {
      return v6;
    }
    if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      UserSetLastError(1400);
    }
    else if ( (unsigned int)SendGestureMessage(a1, 281LL, a3, a4, a5, a6, v12) )
    {
      return v12[0];
    }
  }
  return v6;
}
