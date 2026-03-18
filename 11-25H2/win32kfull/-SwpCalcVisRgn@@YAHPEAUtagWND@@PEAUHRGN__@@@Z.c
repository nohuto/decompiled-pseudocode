/*
 * XREFs of ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1400345C0
 * Callers:
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1401554B0 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x140234300 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     GetRedirectionBitmap @ 0x14001DFF0 (GetRedirectionBitmap.c)
 *     CalcVisRgn @ 0x1400319F0 (CalcVisRgn.c)
 *     GetLayeredOrRedirectedParent @ 0x140033E50 (GetLayeredOrRedirectedParent.c)
 *     ?IsMinimizedSausageWindow@@YAHQEBUtagWND@@@Z @ 0x1401CC17C (-IsMinimizedSausageWindow@@YAHQEBUtagWND@@@Z.c)
 */

__int64 __fastcall SwpCalcVisRgn(struct tagWND *a1, HRGN a2)
{
  char v3; // cl
  int v4; // ebx
  const struct tagWND *LayeredOrRedirectedParent; // rax
  __int64 v6; // rdx
  const struct tagWND *v7; // rsi
  unsigned int v8; // r9d
  int v9; // eax
  HRGN v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  v3 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v3 & 0x10) == 0 )
    return 0LL;
  v4 = (4 * (v3 & 4)) | 1;
  LayeredOrRedirectedParent = (const struct tagWND *)GetLayeredOrRedirectedParent(a1);
  v7 = LayeredOrRedirectedParent;
  v8 = v4;
  if ( LayeredOrRedirectedParent && (*(_DWORD *)(*((_QWORD *)LayeredOrRedirectedParent + 5) + 24LL) & 0x20000000) != 0 )
  {
    if ( GetRedirectionBitmap((__int64)LayeredOrRedirectedParent, v6) )
    {
      v9 = IsMinimizedSausageWindow(v7);
      v8 = v4;
      if ( !v9 )
        v8 = v4 | 0x4000;
    }
    else
    {
      v8 = v4;
    }
  }
  return CalcVisRgn(&v11, (__int64)a1, a1, v8);
}
