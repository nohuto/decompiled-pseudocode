/*
 * XREFs of ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x14004289C
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14001996C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x14001AA44 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     GetLayeredOrRedirectedParent @ 0x140042940 (GetLayeredOrRedirectedParent.c)
 *     GetRedirectionBitmap @ 0x1400429A0 (GetRedirectionBitmap.c)
 *     ?IsMinimizedSausageWindow@@YAHQEBUtagWND@@@Z @ 0x140042ACC (-IsMinimizedSausageWindow@@YAHQEBUtagWND@@@Z.c)
 *     CalcVisRgn @ 0x14004E180 (CalcVisRgn.c)
 */

__int64 __fastcall SwpCalcVisRgn(struct tagWND *a1, HRGN a2)
{
  __int64 LayeredOrRedirectedParent; // rax
  const struct tagWND *v3; // rsi
  HRGN v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0 )
    return 0LL;
  LayeredOrRedirectedParent = GetLayeredOrRedirectedParent(a1);
  v3 = (const struct tagWND *)LayeredOrRedirectedParent;
  if ( LayeredOrRedirectedParent && (*(_DWORD *)(*(_QWORD *)(LayeredOrRedirectedParent + 40) + 24LL) & 0x20000000) != 0 )
  {
    if ( GetRedirectionBitmap(LayeredOrRedirectedParent) )
      IsMinimizedSausageWindow(v3);
  }
  return CalcVisRgn(&v5);
}
