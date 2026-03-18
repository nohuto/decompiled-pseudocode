/*
 * XREFs of ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1400C062C
 * Callers:
 *     CreateFontFromUserProfile @ 0x1400C04C8 (CreateFontFromUserProfile.c)
 *     xxxSetNCFonts @ 0x140149590 (xxxSetNCFonts.c)
 * Callees:
 *     ValidateExternalLogFont @ 0x1400C02C0 (ValidateExternalLogFont.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
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
  retstr->lfCharSet = *(_BYTE *)(W32GetUserSessionState(v7, v6) + 14059);
  FastGetProfileValue(a2, 23LL, a3, 0LL, retstr, 92, 0);
  if ( !retstr->lfFaceName[0] )
    wcscpy(retstr->lfFaceName, L"MS Shell Dlg");
  if ( retstr->lfHeight )
  {
    if ( retstr->lfHeight <= 0 )
      goto LABEL_5;
  }
  else
  {
    retstr->lfHeight = 8;
  }
  v8 = (unsigned int)((retstr->lfHeight
                     * *(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(v9, v8) + 19872) + 6998LL)
                     + 36)
                    / -72);
  retstr->lfHeight = v8;
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
  if ( !ValidateExternalLogFont((__int64)retstr, v8) )
  {
    memset_0(retstr, 0, sizeof(struct tagLOGFONTW));
    retstr->lfCharSet = *(_BYTE *)(W32GetUserSessionState(v14, v13) + 14059);
    wcscpy(retstr->lfFaceName, L"MS Shell Dlg");
    retstr->lfHeight = 8;
    retstr->lfHeight = (8
                      * *(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(aMsShellDlg[12], v15) + 19872) + 6998LL)
                      + 36)
                     / -72;
    if ( a3 != 139 )
      v11 = 400;
    *p_lfWeight = v11;
    *(_WORD *)&retstr->lfOutPrecision = 0;
    retstr->lfQuality = 0;
  }
  return retstr;
}
