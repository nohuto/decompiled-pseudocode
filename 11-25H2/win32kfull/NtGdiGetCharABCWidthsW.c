/*
 * XREFs of NtGdiGetCharABCWidthsW @ 0x140185970
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x140082B04 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetCharABCWidthsW@@YAHAEAVUDCOBJ@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1400AE6AC (-GrepGetCharABCWidthsW@@YAHAEAVUDCOBJ@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtGdiGetCharABCWidthsW(HDC a1, __int64 a2, unsigned int a3, const void *a4, char a5, char *a6)
{
  __int64 v6; // rsi
  unsigned int CharABCWidthsW; // r15d
  _DWORD *v8; // rdi
  _WORD *v9; // rbx
  int v10; // r12d
  unsigned int v11; // r14d
  ULONG64 v13; // rcx
  __int64 SessionState; // rax
  char *v15; // rax
  _QWORD v16[10]; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE v17[104]; // [rsp+B0h] [rbp-68h] BYREF
  int v19; // [rsp+128h] [rbp+10h]

  v19 = a2;
  v6 = a3;
  CharABCWidthsW = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  if ( !a6 )
    return 0LL;
  if ( a4 )
  {
    v10 = 1;
    if ( a3 - 1 <= 0x1387FFF )
    {
      if ( 2 * a3 )
        v9 = (_WORD *)Win32AllocPool(2 * a3, 1886221383LL);
    }
  }
  if ( !v10 || v9 )
  {
    if ( (unsigned int)v6 <= 0x341555 )
    {
      v11 = 12 * v6;
      v8 = (_DWORD *)AllocFreeTmpBuffer((unsigned int)(12 * v6));
    }
    if ( v8 )
    {
      if ( v10 )
      {
        v13 = (ULONG64)a4 + 2 * v6;
        if ( v13 < (unsigned __int64)a4 || v13 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v9, a4, 2 * v6);
      }
      SessionState = W32GetSessionState((_DWORD)a1, a2);
      EUDCCountRegion::EUDCCountRegion(
        (EUDCCountRegion *)v17,
        (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
      UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v16, a1);
      if ( v16[0] )
      {
        CharABCWidthsW = GrepGetCharABCWidthsW((struct UDCOBJ *)v16, v19, v6, v9, a5, v8);
      }
      else
      {
        EngSetLastError(6u);
        CharABCWidthsW = 0;
      }
      if ( CharABCWidthsW )
      {
        v15 = &a6[v11];
        if ( (unsigned __int64)v15 > MmUserProbeAddress || v15 <= a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v8, v11);
      }
      UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v16);
      EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v17);
      FreeTmpBuffer(v8);
    }
    if ( v10 )
    {
      if ( v9 )
        Win32FreePool(v9);
    }
  }
  return CharABCWidthsW;
}
