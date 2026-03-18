/*
 * XREFs of ?GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z @ 0x1400C1194
 * Callers:
 *     SendDwmIconChange @ 0x14005C6EC (SendDwmIconChange.c)
 *     xxxDrawCaptionTemp @ 0x1400C08C8 (xxxDrawCaptionTemp.c)
 *     xxxRealDrawMenuItem @ 0x1401910EC (xxxRealDrawMenuItem.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1400B33E0 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1400C12A0 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

struct tagCURSOR *__fastcall GetWindowSmIcon(struct tagWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v6, *((_QWORD *)a1 + 17));
  v3 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 264LL);
  if ( !v3 || (LOBYTE(v2) = 3, (v4 = HMValidateHandleNoSecure(v3, v2)) == 0) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)v6[0] + 112LL);
    if ( !v4 )
      v4 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)v6[0], v2) + 35128);
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v6, v2);
  return (struct tagCURSOR *)v4;
}
