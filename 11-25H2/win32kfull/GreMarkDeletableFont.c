/*
 * XREFs of GreMarkDeletableFont @ 0x14014AA78
 * Callers:
 *     DeleteMetricsFont @ 0x14003FD0C (DeleteMetricsFont.c)
 *     UserSetFont @ 0x1400C044C (UserSetFont.c)
 *     CreateFontFromUserProfile @ 0x1400C04C8 (CreateFontFromUserProfile.c)
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1401489C4 (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     xxxSetNCFonts @ 0x140149590 (xxxSetNCFonts.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1402917BC (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x1400BCD48 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 */

void __fastcall GreMarkDeletableFont(struct HLFONT__ *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  struct LFONT *v7; // [rsp+28h] [rbp-10h]

  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v6, a1, 0LL, a4);
  if ( v6 && (*(_DWORD *)(v6 + 4) & 2) == 0 )
  {
    LOBYTE(v5) = 10;
    HmgMarkDeletable(a1, v5);
  }
  if ( v7 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v7);
}
