/*
 * XREFs of hfontInitDefaultGuiFont @ 0x1403EDDD8
 * Callers:
 *     FinishStockFontReinit @ 0x140146570 (FinishStockFontReinit.c)
 *     GreEnsureDpiDepDefaultGuiFontForPlateau @ 0x140309F70 (GreEnsureDpiDepDefaultGuiFontForPlateau.c)
 *     bInitStockFontsInternal @ 0x1403EE62C (bInitStockFontsInternal.c)
 * Callees:
 *     hfontCreate @ 0x14008F860 (hfontCreate.c)
 *     ?bOpenKey@@YAHPEBGPEAPEAX@Z @ 0x14014706C (-bOpenKey@@YAHPEBGPEAPEAX@Z.c)
 *     ?bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x14021A79C (-bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall hfontInitDefaultGuiFont(int a1)
{
  __int64 v2; // rdx
  int v3; // ecx
  __int64 v4; // rbx
  __int64 v5; // rdx
  int v6; // ecx
  BOOL ValueKey; // eax
  int v8; // ecx
  BOOL v9; // eax
  int v10; // ecx
  BOOL v11; // eax
  char v12; // dl
  BOOL v13; // eax
  char v14; // dl
  HANDLE Handle; // [rsp+38h] [rbp-D0h] BYREF
  char v17[16]; // [rsp+48h] [rbp-C0h] BYREF
  int v18; // [rsp+58h] [rbp-B0h]
  char v19; // [rsp+5Ch] [rbp-ACh]
  char v20; // [rsp+5Fh] [rbp-A9h]
  wchar_t Dst[202]; // [rsp+64h] [rbp-A4h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+1F8h] [rbp+F0h] BYREF
  wchar_t Src[34]; // [rsp+204h] [rbp+FCh] BYREF

  Handle = 0LL;
  memset_0(v17, 0, 0x1A4uLL);
  v4 = *(_QWORD *)(W32GetSessionState(v3, v2) + 96);
  wcscpy_s(Dst, 0x20uLL, L"MS Shell Dlg");
  *(_DWORD *)v17 = 8;
  v18 = 400;
  v19 = 0;
  v20 = *(_BYTE *)(v4 + 20376);
  if ( bOpenKey(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize", &Handle) )
  {
    if ( bQueryValueKey(L"GUIFont.Facename", Handle, KeyValueInformation, 0x48u) )
      wcsncpy_s(Dst, 0x20uLL, Src, 0x20uLL);
    ValueKey = bQueryValueKey(L"GUIFont.Height", Handle, KeyValueInformation, 0x48u);
    v8 = *(_DWORD *)v17;
    if ( ValueKey )
      v8 = *(_DWORD *)Src;
    *(_DWORD *)v17 = v8;
    v9 = bQueryValueKey(L"GUIFont.Weight", Handle, KeyValueInformation, 0x48u);
    v10 = v18;
    if ( v9 )
      v10 = *(_DWORD *)Src;
    v18 = v10;
    v11 = bQueryValueKey(L"GUIFont.Italic", Handle, KeyValueInformation, 0x48u);
    v12 = v19;
    if ( v11 )
      v12 = Src[0];
    v19 = v12;
    v13 = bQueryValueKey(L"GUIFont.CharSet", Handle, KeyValueInformation, 0x48u);
    v14 = v20;
    if ( v13 )
      v14 = Src[0];
    v20 = v14;
    ZwClose(Handle);
  }
  if ( a1 == -1 )
    *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v6, v5) + 96) + 24128LL) = 1;
  else
    *(_DWORD *)v17 = (*(_DWORD *)v17 * a1 + 36) / -72;
  return hfontCreate(v17, 7, 2, 0LL, 72);
}
