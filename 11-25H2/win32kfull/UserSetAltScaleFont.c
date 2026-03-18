/*
 * XREFs of UserSetAltScaleFont @ 0x1401491DC
 * Callers:
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1401489C4 (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     xxxSetNCFonts @ 0x140149590 (xxxSetNCFonts.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1402917BC (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x140055014 (GreCreateFontIndirectW.c)
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall UserSetAltScaleFont(Gre::Base *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  INT v12; // eax
  __int64 FontIndirectW; // rax
  INT a[23]; // [rsp+20h] [rbp-78h] BYREF
  __int16 v16; // [rsp+7Ch] [rbp-1Ch]

  v4 = 0;
  v16 = 0;
  if ( !(unsigned int)GreExtGetObjectW(a1, 96LL, a, a4) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v7, v6);
  a[0] = EngMulDiv(a[0], 96, *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19872) + 6998LL));
  v11 = W32GetUserSessionState(v10, v9);
  v12 = EngMulDiv(a[1], 96, *(unsigned __int16 *)(*(_QWORD *)(v11 + 19872) + 6998LL));
  v16 = 257;
  a[1] = v12;
  FontIndirectW = GreCreateFontIndirectW((__int128 *)a);
  *a2 = FontIndirectW;
  LOBYTE(v4) = FontIndirectW != 0;
  return v4;
}
