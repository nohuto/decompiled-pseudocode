/*
 * XREFs of NtGdiGetCharWidthW @ 0x1401AF3A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082A70 (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x140082B04 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetCharWidthW@@YAHAEAVUDCOBJ@@IIPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1400BDFAC (-GrepGetCharWidthW@@YAHAEAVUDCOBJ@@IIPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z.c)
 *     PALLOCNOZ @ 0x1400FD16C (PALLOCNOZ.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtGdiGetCharWidthW(HDC a1, __int64 a2, unsigned int a3, const void *a4, char a5, char *a6)
{
  __int64 v7; // rbx
  unsigned int CharWidthW; // r15d
  float *v10; // rdi
  _WORD *v11; // rsi
  int v12; // r14d
  ULONG64 v14; // rcx
  __int64 SessionState; // rax
  size_t v16; // r8
  _QWORD v17[10]; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE v18[104]; // [rsp+B0h] [rbp-68h] BYREF
  unsigned int v19; // [rsp+128h] [rbp+10h]

  v19 = a2;
  v7 = a3;
  CharWidthW = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  if ( !a3 )
    return 0LL;
  if ( a4 )
  {
    v12 = 1;
    if ( a3 <= 0x1388000 )
      v11 = (_WORD *)PALLOCNOZ(2 * a3, 1886221383LL);
  }
  if ( !v12 || v11 )
  {
    if ( (unsigned int)v7 <= 0x9C4000 )
      v10 = (float *)AllocFreeTmpBuffer((unsigned int)(4 * v7));
    if ( v10 )
    {
      if ( v12 )
      {
        v14 = (ULONG64)a4 + 2 * v7;
        if ( v14 < (unsigned __int64)a4 || v14 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v11, a4, 2 * v7);
      }
      SessionState = W32GetSessionState((_DWORD)a1, a2);
      EUDCCountRegion::EUDCCountRegion(
        (EUDCCountRegion *)v18,
        (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
      UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v17, a1);
      if ( !v17[0] )
      {
        EngSetLastError(6u);
        UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v17);
        EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v18);
        return 0LL;
      }
      CharWidthW = GrepGetCharWidthW((struct UDCOBJ *)v17, v19, v7, v11, a5, v10);
      UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v17);
      EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v18);
      if ( CharWidthW )
      {
        v16 = 4LL * (unsigned int)v7;
        if ( (unsigned __int64)&a6[v16] > MmUserProbeAddress || &a6[v16] <= a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v10, v16);
      }
      FreeTmpBuffer(v10);
    }
    if ( v12 )
      Win32FreePool(v11);
  }
  return CharWidthW;
}
