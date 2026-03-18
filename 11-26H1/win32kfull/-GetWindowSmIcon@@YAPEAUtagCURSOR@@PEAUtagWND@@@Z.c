/*
 * XREFs of ?GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z @ 0x14014D3C8
 * Callers:
 *     xxxDrawCaptionTemp @ 0x140123E08 (xxxDrawCaptionTemp.c)
 *     SendDwmIconChange @ 0x14014DA14 (SendDwmIconChange.c)
 *     xxxRealDrawMenuItem @ 0x1401F9D14 (xxxRealDrawMenuItem.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x14014FA30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1401509D8 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

struct tagCURSOR *__fastcall GetWindowSmIcon(struct tagWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v6, *((_QWORD *)a1 + 17));
  v3 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 264LL);
  if ( !v3 || (v4 = HMValidateHandleNoSecure(v3, 3)) == 0 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)v6[0] + 112LL);
    if ( !v4 )
      v4 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)v6[0], v2) + 35160);
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v6);
  return (struct tagCURSOR *)v4;
}
