/*
 * XREFs of UserSetFont @ 0x1400C044C
 * Callers:
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1401489C4 (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     xxxSetNCFonts @ 0x140149590 (xxxSetNCFonts.c)
 * Callees:
 *     CreateFontFromUserProfile @ 0x1400C04C8 (CreateFontFromUserProfile.c)
 *     GreMarkDeletableFont @ 0x14014AA78 (GreMarkDeletableFont.c)
 */

__int64 __fastcall UserSetFont(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3, struct HLFONT__ **a4)
{
  __int64 result; // rax
  struct HLFONT__ *v6; // rdi

  result = CreateFontFromUserProfile(a1);
  v6 = (struct HLFONT__ *)result;
  if ( result )
  {
    if ( *a4
      && *a4 != *(struct HLFONT__ **)(GetSessionDpiServerInfo() + 24)
      && *a4 != *(struct HLFONT__ **)(Get96DpiServerInfo() + 24) )
    {
      GreMarkDeletableFont(*a4);
      GreDeleteObject(*a4);
    }
    *a4 = v6;
    return 1LL;
  }
  return result;
}
