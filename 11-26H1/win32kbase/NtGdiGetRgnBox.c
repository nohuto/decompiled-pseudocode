/*
 * XREFs of NtGdiGetRgnBox @ 0x1400230D0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRgnBox @ 0x140022720 (GreGetRgnBox.c)
 *     ?GreProbeAndWriteToUntrustedVa@@YAXPEAX_KPEBX11@Z @ 0x14003DBE0 (-GreProbeAndWriteToUntrustedVa@@YAXPEAX_KPEBX11@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetRgnBox(HRGN a1, void *a2)
{
  unsigned int RgnBox; // ebx
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0LL;
  RgnBox = GreGetRgnBox(a1, (__int64)&v5);
  if ( RgnBox )
    GreProbeAndWriteToUntrustedVa(a2, 0x10uLL, &v5, 0x10uLL, 1uLL);
  return RgnBox;
}
