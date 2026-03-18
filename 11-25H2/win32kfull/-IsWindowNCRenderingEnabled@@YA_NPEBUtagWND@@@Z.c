/*
 * XREFs of ?IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z @ 0x140034DBC
 * Callers:
 *     WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x14014EFC4 (WindowMargins--CWindowMarginProp--CalculateWindowMargins.c)
 *     NtUserGetWindowCompositionAttribute @ 0x140298E30 (NtUserGetWindowCompositionAttribute.c)
 * Callees:
 *     GetAppCompatFlags2QuadWord @ 0x140034EB0 (GetAppCompatFlags2QuadWord.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x140034FB4 (IsTopLevelOrLayeredChildWindow.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

char __fastcall IsWindowNCRenderingEnabled(const struct tagWND *a1)
{
  char v2; // bl
  int v3; // ebp
  __m128i *v4; // rcx
  int v5; // esi
  int v6; // ecx
  __int64 v7; // rdx
  int v8; // eax

  v2 = 0;
  v3 = IsTopLevelOrLayeredChildWindow();
  if ( v3 && (v4 = (__m128i *)*((_QWORD *)a1 + 46)) != 0LL )
  {
    v5 = _mm_cvtsi128_si32(_mm_srli_si128(*v4, 4));
    v6 = _mm_cvtsi128_si32(*v4) & 0xFFFFF;
  }
  else
  {
    v5 = 0;
    GetAppCompatFlags2QuadWord(*((_QWORD *)a1 + 2));
    LOBYTE(v6) = 0;
    if ( !v3 )
      return v2;
  }
  v7 = *((_QWORD *)a1 + 5);
  v8 = *(_DWORD *)(v7 + 24);
  if ( ((v8 & 0x80000) == 0 || (v8 & 0x20000000) != 0) && (v6 & 1) == 0 )
  {
    if ( v5 )
    {
      if ( v5 == 2 )
        return 1;
    }
    else if ( ((unsigned __int8)~(*(_BYTE *)(v7 + 30) >> 2) & ((*(_BYTE *)(v7 + 30) & 0xC0) != 0xC0)) == 0 )
    {
      return 1;
    }
  }
  return v2;
}
