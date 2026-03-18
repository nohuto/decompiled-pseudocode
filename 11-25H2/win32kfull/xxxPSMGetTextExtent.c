/*
 * XREFs of xxxPSMGetTextExtent @ 0x14002B2D0
 * Callers:
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x140042684 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxRealDrawMenuItem @ 0x1401910EC (xxxRealDrawMenuItem.c)
 *     xxxDrawMenuBarUnderlines @ 0x140205BB0 (xxxDrawMenuBarUnderlines.c)
 * Callees:
 *     GetPrefixCount @ 0x14002B41C (GetPrefixCount.c)
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreGetTextExtentW @ 0x1400C0134 (GreGetTextExtentW.c)
 *     ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x1400C13EC (-CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z.c)
 *     xxxClientGetTextExtentPointW @ 0x1400C1B54 (xxxClientGetTextExtentPointW.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x140128970 (--$ManualLock@X@-$Win32RawLockedItemBase@G$1-Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEA.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxPSMGetTextExtent(HDC a1, const WCHAR *a2, unsigned int a3, _DWORD *a4)
{
  struct tagTHREADINFO *v8; // r15
  WCHAR *p_SourceString; // rdi
  ULONG_PTR v11; // rax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+30h] [rbp-278h] BYREF
  __int64 v13; // [rsp+40h] [rbp-268h]
  __int64 v14; // [rsp+58h] [rbp-250h]
  WCHAR SourceString; // [rsp+60h] [rbp-248h] BYREF

  v8 = PtiCurrent();
  v14 = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v13 = -1LL;
  if ( a3 < 0xFF )
  {
    p_SourceString = &SourceString;
LABEL_3:
    if ( (unsigned int)GetPrefixCount(a2, a3, p_SourceString, a3) >> 16 )
      a2 = p_SourceString;
    if ( (unsigned int)CALL_LPK(v8) )
      xxxClientGetTextExtentPointW(a1, a2);
    else
      GreGetTextExtentW(a1);
    if ( v13 != -1 )
      PopAndFreeW32ThreadLock(BugCheckParameter2);
    return 1LL;
  }
  v11 = Win32AllocPoolZInit(2LL * (int)(a3 + 1), 1953657685LL);
  p_SourceString = (WCHAR *)v11;
  if ( v11 )
  {
    Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
      (ULONG_PTR)BugCheckParameter2,
      v11);
    goto LABEL_3;
  }
  a4[1] = 0;
  *a4 = 0;
  if ( v13 != -1 )
    PopAndFreeW32ThreadLock(BugCheckParameter2);
  return 0LL;
}
