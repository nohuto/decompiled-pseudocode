/*
 * XREFs of CreateFontFromUserProfile @ 0x1400C04C8
 * Callers:
 *     UserSetFont @ 0x1400C044C (UserSetFont.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1402917BC (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x140055014 (GreCreateFontIndirectW.c)
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1400C062C (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     GreMarkDeletableFont @ 0x14014AA78 (GreMarkDeletableFont.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

struct HLFONT__ *__fastcall CreateFontFromUserProfile(struct _UNICODE_STRING *a1, __int128 *a2, unsigned int a3)
{
  struct tagLOGFONTW *LogFontFromUserProfile; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  struct HLFONT__ *FontIndirectW; // rbx
  __int64 v17; // r9
  __int64 v18; // r8
  __int128 v20[5]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h]
  int v22; // [rsp+78h] [rbp-88h]
  __int16 v23; // [rsp+7Ch] [rbp-84h]
  _OWORD v24[5]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v25; // [rsp+D0h] [rbp-30h]
  int v26; // [rsp+D8h] [rbp-28h]
  struct tagLOGFONTW v27; // [rsp+E0h] [rbp-20h] BYREF

  memset_0(v24, 0, 0x5CuLL);
  if ( !a2 )
  {
    LogFontFromUserProfile = GetLogFontFromUserProfile(&v27, a1, a3);
    a2 = v24;
    v7 = *(_OWORD *)&LogFontFromUserProfile->lfWeight;
    v24[0] = *(_OWORD *)&LogFontFromUserProfile->lfHeight;
    v8 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[2];
    v24[1] = v7;
    v9 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[10];
    v24[2] = v8;
    v10 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[18];
    v24[3] = v9;
    *(_QWORD *)&v9 = *(_QWORD *)&LogFontFromUserProfile->lfFaceName[26];
    LODWORD(LogFontFromUserProfile) = *(_DWORD *)&LogFontFromUserProfile->lfFaceName[30];
    v24[4] = v10;
    v25 = v9;
    v26 = (int)LogFontFromUserProfile;
  }
  v11 = *a2;
  v12 = a2[1];
  v22 = *((_DWORD *)a2 + 22);
  v20[0] = v11;
  v13 = a2[2];
  v23 = 256;
  v20[1] = v12;
  v14 = a2[3];
  v20[2] = v13;
  v15 = a2[4];
  v20[3] = v14;
  *(_QWORD *)&v14 = *((_QWORD *)a2 + 10);
  v20[4] = v15;
  v21 = v14;
  FontIndirectW = (struct HLFONT__ *)GreCreateFontIndirectW(v20);
  if ( FontIndirectW )
  {
    memset_0(&v27, 0, sizeof(v27));
    if ( (unsigned int)GreExtGetObjectW(FontIndirectW, 92LL, &v27, v17) && v27.lfHeight == *(_DWORD *)a2 )
    {
      LOBYTE(v18) = 10;
      HmgSetOwner(FontIndirectW, 0LL, v18);
    }
    else
    {
      GreMarkDeletableFont(FontIndirectW);
      GreDeleteObject(FontIndirectW);
      return 0LL;
    }
  }
  return FontIndirectW;
}
