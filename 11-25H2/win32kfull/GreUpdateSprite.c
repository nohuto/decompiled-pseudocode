/*
 * XREFs of GreUpdateSprite @ 0x14007BD8C
 * Callers:
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x14008D9F8 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     bMoveDevPreviewRect @ 0x1401E7590 (bMoveDevPreviewRect.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1401E9B50 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x140321FE8 (-SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z.c)
 * Callees:
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14007C824 (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1400986E8 (-GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34.c)
 */

__int64 __fastcall GreUpdateSprite(
        HDEV a1,
        HWND a2,
        void *a3,
        HDC a4,
        struct tagPOINT *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct tagPOINT *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct tagRECT *a12,
        struct tagMINIWINDOWINFO *a13,
        int a14,
        int a15,
        unsigned int a16)
{
  unsigned int updated; // ebx
  OPTAPIDCOBJ *v20; // rcx
  _BYTE v22[128]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v23[128]; // [rsp+100h] [rbp+0h] BYREF

  if ( a4 == a7 && a4 )
  {
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v22, a4);
    updated = GrepUpdateSprite(
                a1,
                a2,
                a3,
                (struct OPTAPIDCOBJ *)v22,
                a5,
                a6,
                (struct OPTAPIDCOBJ *)v22,
                a8,
                a9,
                a10,
                a11,
                a12,
                a13,
                a14,
                0,
                a16);
    v20 = (OPTAPIDCOBJ *)v22;
  }
  else
  {
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v23, a4);
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v22, a7);
    updated = GrepUpdateSprite(
                a1,
                a2,
                a3,
                (struct OPTAPIDCOBJ *)v23,
                a5,
                a6,
                (struct OPTAPIDCOBJ *)v22,
                a8,
                a9,
                a10,
                a11,
                a12,
                a13,
                a14,
                0,
                a16);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v22);
    v20 = (OPTAPIDCOBJ *)v23;
  }
  OPTAPIDCOBJ::~OPTAPIDCOBJ(v20);
  return updated;
}
