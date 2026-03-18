/*
 * XREFs of ValidateExternalLogFont @ 0x1400C02C0
 * Callers:
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1400C062C (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x14021B380 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     GreSelectFont @ 0x140054D30 (GreSelectFont.c)
 *     GreCreateFontIndirectW @ 0x140055014 (GreCreateFontIndirectW.c)
 *     GetCharDimensions @ 0x1400BFF0C (GetCharDimensions.c)
 */

_BOOL8 __fastcall ValidateExternalLogFont(__int64 a1, __int64 a2)
{
  BOOL v2; // edi
  __int64 UserSessionState; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 v7; // rdx
  __int128 v8; // xmm0
  HDC v9; // rsi
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  HFONT FontIndirectW; // rax
  HFONT v13; // rbx
  HFONT v14; // r14
  int CharDimensions; // eax
  __int128 v17[5]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v18; // [rsp+70h] [rbp-10h]
  int v19; // [rsp+78h] [rbp-8h]
  __int16 v20; // [rsp+7Ch] [rbp-4h]
  int v21; // [rsp+A0h] [rbp+20h] BYREF

  v2 = 0;
  v21 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = *(_OWORD *)a1;
  v20 = 0;
  v6 = *(_OWORD *)(a1 + 16);
  v7 = *(_QWORD *)(UserSessionState + 56968);
  LODWORD(UserSessionState) = *(_DWORD *)(a1 + 88);
  v17[0] = v5;
  v8 = *(_OWORD *)(a1 + 32);
  v9 = *(HDC *)(v7 + 72);
  v17[1] = v6;
  v10 = *(_OWORD *)(a1 + 48);
  v19 = UserSessionState;
  v17[2] = v8;
  v11 = *(_OWORD *)(a1 + 64);
  v17[3] = v10;
  *(_QWORD *)&v10 = *(_QWORD *)(a1 + 80);
  v17[4] = v11;
  v18 = v10;
  FontIndirectW = (HFONT)GreCreateFontIndirectW(v17);
  v13 = FontIndirectW;
  if ( FontIndirectW )
  {
    v14 = GreSelectFont(v9, FontIndirectW);
    CharDimensions = GetCharDimensions(v9, 0LL, &v21);
    if ( v21 > 0 && CharDimensions > 0 && v21 < 0x7FFF )
      v2 = CharDimensions < 0x7FFF;
    GreSelectFont(v9, v14);
    GreDeleteObject(v13);
  }
  return v2;
}
