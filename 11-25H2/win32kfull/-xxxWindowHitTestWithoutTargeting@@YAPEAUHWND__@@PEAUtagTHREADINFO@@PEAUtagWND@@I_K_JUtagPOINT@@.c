/*
 * XREFs of ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@PEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x14002C150
 * Callers:
 *     ?xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@PEBUtagPOINTEREVENTINT@@2PEAU4@@Z @ 0x1401BF8B8 (-xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4Win.c)
 * Callees:
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14002A84C (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ?xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14002D528 (-xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ?IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z @ 0x14005BB80 (-IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall xxxWindowHitTestWithoutTargeting(
        const struct tagTHREADINFO *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        tagPOINT a6,
        int *a7,
        unsigned int a8)
{
  __int64 v9; // r10
  __int64 v10; // r11

  if ( (unsigned int)IsThreadDesktopComposed(a1) )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))xxxDCEWindowHitTest)(
             v9,
             a3,
             v10,
             a5,
             a6,
             a7,
             a8);
  else
    return xxxWindowHitTest(v9, a6, a7, a8);
}
