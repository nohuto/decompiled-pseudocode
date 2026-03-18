/*
 * XREFs of bInitStockFontsInternal @ 0x1403EE62C
 * Callers:
 *     GrepFontSubSystemInitialize @ 0x14010B930 (GrepFontSubSystemInitialize.c)
 * Callees:
 *     hfontCreate @ 0x14008F860 (hfontCreate.c)
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x140146D98 (-bSetStockFont@@YAHPEAXHH@Z.c)
 *     ?bOpenKey@@YAHPEBGPEAPEAX@Z @ 0x14014706C (-bOpenKey@@YAHPEBGPEAPEAX@Z.c)
 *     ?bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x14021A79C (-bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 *     bInitOneStockFont @ 0x1403EC5D0 (bInitOneStockFont.c)
 *     bInitSystemFont @ 0x1403EC64C (bInitSystemFont.c)
 *     hfontInitDefaultGuiFont @ 0x1403EDDD8 (hfontInitDefaultGuiFont.c)
 */

unsigned __int16 *__fastcall bInitStockFontsInternal(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rdi
  unsigned __int16 *result; // rax
  unsigned __int16 *v3; // r14
  unsigned __int64 v4; // rsi
  int v5; // r12d
  BOOL v6; // ebx
  Gre::Base *v7; // rax
  Gre::Base *v8; // rax
  Gre::Base *v9; // rax
  Gre::Base *v10; // rax
  Gre::Base *v11; // rax
  Gre::Base *inited; // rax
  __int64 v13; // [rsp+30h] [rbp-D8h]
  __int64 v14; // [rsp+30h] [rbp-D8h]
  HANDLE Handle[2]; // [rsp+48h] [rbp-C0h] BYREF
  int Src; // [rsp+58h] [rbp-B0h] BYREF
  int v17; // [rsp+5Ch] [rbp-ACh]
  int v18; // [rsp+68h] [rbp-A0h]
  _BYTE v19[5]; // [rsp+6Fh] [rbp-99h]
  wchar_t Dst[202]; // [rsp+74h] [rbp-94h] BYREF

  Handle[0] = 0LL;
  v1 = Gre::Base::Globals(a1);
  result = (unsigned __int16 *)PALLOCMEM(0x254u, 1718838855LL);
  v3 = result;
  if ( result )
  {
    memmove(result, L"\\SystemRoot\\Fonts\\", 0x26uLL);
    v4 = (unsigned __int64)(v3 + 23) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( bOpenKey(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", Handle) )
    {
      if ( bQueryValueKey(
             L"SystemFontSize",
             Handle[0],
             (PVOID)((unsigned __int64)(v3 + 23) & 0xFFFFFFFFFFFFFFF8uLL),
             0x200u) )
      {
        v5 = *(_DWORD *)(v4 + 12);
        if ( bQueryValueKey(
               L"SystemFont",
               Handle[0],
               (PVOID)((unsigned __int64)(v3 + 23) & 0xFFFFFFFFFFFFFFF8uLL),
               0x200u) )
        {
          memmove(v3 + 18, (const void *)(v4 + 12), *(unsigned int *)(v4 + 8));
          bInitSystemFont(v3, v5);
        }
      }
      ZwClose(Handle[0]);
    }
    v6 = 1;
    if ( bOpenKey(
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts",
           Handle)
      || bOpenKey(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize", Handle) )
    {
      if ( !*(_QWORD *)(*((_QWORD *)v1 + 376) + 104LL) )
        bInitOneStockFont(
          L"FONTS.FON",
          1LL,
          13LL,
          Handle[0],
          (unsigned int *)((unsigned __int64)(v3 + 23) & 0xFFFFFFFFFFFFFFF8uLL),
          v13,
          v3,
          v3 + 18);
      bInitOneStockFont(
        L"OEMFONT.FON",
        3LL,
        10LL,
        Handle[0],
        (unsigned int *)((unsigned __int64)(v3 + 23) & 0xFFFFFFFFFFFFFFF8uLL),
        v13,
        v3,
        v3 + 18);
      bInitOneStockFont(
        L"FIXEDFON.FON",
        2LL,
        16LL,
        Handle[0],
        (unsigned int *)((unsigned __int64)(v3 + 23) & 0xFFFFFFFFFFFFFFF8uLL),
        v14,
        v3,
        v3 + 18);
      ZwClose(Handle[0]);
    }
    memset_0(&Src, 0, 0x1A4uLL);
    Src = 16;
    v17 = 7;
    v18 = 700;
    *(_DWORD *)&v19[1] = 570556929;
    wcscpy_s(Dst, 0x20uLL, L"System");
    v7 = (Gre::Base *)hfontCreate((char *)&Src, 1, 2, 0LL, 72);
    if ( !(unsigned int)bSetStockFont(v7, 13, 0) && !*((_DWORD *)v1 + 712) )
      goto LABEL_14;
    memset_0(&Src, 0, 0x1A4uLL);
    Src = 12;
    v17 = 8;
    v18 = 400;
    *(_DWORD *)v19 = 33686015;
    v19[4] = 49;
    wcscpy_s(Dst, 0x20uLL, L"Terminal");
    v8 = (Gre::Base *)hfontCreate((char *)&Src, 3, 2, 0LL, 72);
    if ( !(unsigned int)bSetStockFont(v8, 10, 0) && !*((_DWORD *)v1 + 712) )
      goto LABEL_14;
    *((_QWORD *)v1 + 55) = *(_QWORD *)(*((_QWORD *)v1 + 376) + 104LL);
    memset_0(&Src, 0, 0x1A4uLL);
    v19[4] = 1;
    v9 = (Gre::Base *)hfontCreate((char *)&Src, 4, 3, 0LL, 72);
    if ( !(unsigned int)bSetStockFont(v9, 14, 0) && !*((_DWORD *)v1 + 712) )
      goto LABEL_14;
    if ( ((memset_0(&Src, 0, 0x1A4uLL),
           v19[4] = 2,
           v10 = (Gre::Base *)hfontCreate((char *)&Src, 5, 3, 0LL, 72),
           (unsigned int)bSetStockFont(v10, 12, 0))
       || *((_DWORD *)v1 + 712))
      && ((memset_0(&Src, 0, 0x1A4uLL),
           v19[4] = 1,
           v11 = (Gre::Base *)hfontCreate((char *)&Src, 6, 3, 0LL, 72),
           (unsigned int)bSetStockFont(v11, 11, 0))
       || *((_DWORD *)v1 + 712)) )
    {
      inited = (Gre::Base *)hfontInitDefaultGuiFont(-1);
      if ( !(unsigned int)bSetStockFont(inited, 17, 0) )
        v6 = *((_DWORD *)v1 + 712) != 0;
    }
    else
    {
LABEL_14:
      v6 = 0;
    }
    Win32FreePool(v3);
    return (unsigned __int16 *)v6;
  }
  return result;
}
