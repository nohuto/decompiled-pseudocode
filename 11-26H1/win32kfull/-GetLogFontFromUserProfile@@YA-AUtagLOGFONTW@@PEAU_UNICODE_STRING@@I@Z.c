/*
 * XREFs of ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x140123BA0
 * Callers:
 *     CreateFontFromUserProfile @ 0x140123A40 (CreateFontFromUserProfile.c)
 *     xxxSetNCFonts @ 0x1401250CC (xxxSetNCFonts.c)
 * Callees:
 *     ValidateExternalLogFont @ 0x1401248C4 (ValidateExternalLogFont.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

struct tagLOGFONTW *__fastcall GetLogFontFromUserProfile(
        struct tagLOGFONTW *__return_ptr retstr,
        struct _UNICODE_STRING *a2,
        unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  LONG *p_lfWeight; // rbx
  int v11; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax

  memset_0(retstr, 0, sizeof(struct tagLOGFONTW));
  retstr->lfCharSet = *(_BYTE *)(W32GetUserSessionState(v7, v6) + 14051);
  FastGetProfileValue(a2, 23LL, a3, 0LL, retstr, 92, 0);
  if ( !retstr->lfFaceName[0] )
  {
    *(_OWORD *)retstr->lfFaceName = xmmword_140360D90;
    *(_QWORD *)&retstr->lfFaceName[8] = 0x67006C00440020LL;
    retstr->lfFaceName[12] = 0;
  }
  if ( retstr->lfHeight )
  {
    if ( retstr->lfHeight <= 0 )
      goto LABEL_5;
  }
  else
  {
    retstr->lfHeight = 8;
  }
  retstr->lfHeight = (retstr->lfHeight
                    * *(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(v9, v8) + 19904) + 6998LL)
                    + 36)
                   / -72;
LABEL_5:
  p_lfWeight = &retstr->lfWeight;
  v11 = 700;
  if ( !retstr->lfWeight )
  {
    v16 = 400;
    if ( a3 == 139 )
      v16 = 700;
    *p_lfWeight = v16;
  }
  *(_WORD *)&retstr->lfOutPrecision = 0;
  retstr->lfQuality = 0;
  if ( !(unsigned int)ValidateExternalLogFont(retstr) )
  {
    memset_0(retstr, 0, sizeof(struct tagLOGFONTW));
    retstr->lfCharSet = *(_BYTE *)(W32GetUserSessionState(v14, v13) + 14051);
    *(_OWORD *)retstr->lfFaceName = xmmword_140360D90;
    *(_QWORD *)&retstr->lfFaceName[8] = 0x67006C00440020LL;
    retstr->lfFaceName[12] = 0;
    retstr->lfHeight = 8;
    retstr->lfHeight = (8 * *(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(0LL, v15) + 19904) + 6998LL) + 36)
                     / -72;
    if ( a3 != 139 )
      v11 = 400;
    *p_lfWeight = v11;
    *(_WORD *)&retstr->lfOutPrecision = 0;
    retstr->lfQuality = 0;
  }
  return retstr;
}
