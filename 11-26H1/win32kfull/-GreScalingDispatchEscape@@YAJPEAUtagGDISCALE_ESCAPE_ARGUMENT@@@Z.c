/*
 * XREFs of ?GreScalingDispatchEscape@@YAJPEAUtagGDISCALE_ESCAPE_ARGUMENT@@@Z @ 0x140290888
 * Callers:
 *     NtGdiExtEscape @ 0x14027EE60 (NtGdiExtEscape.c)
 * Callees:
 *     ?GreEscCreateScaledCompatibleBitmap@@YAXPEAUtagGDISCALE_ESCAPE_ARGUMENT@@@Z @ 0x140325F18 (-GreEscCreateScaledCompatibleBitmap@@YAXPEAUtagGDISCALE_ESCAPE_ARGUMENT@@@Z.c)
 */

__int64 __fastcall GreScalingDispatchEscape(struct tagGDISCALE_ESCAPE_ARGUMENT *a1)
{
  _DWORD v3[10]; // [rsp+30h] [rbp-28h] BYREF

  memset(v3, 0, 32);
  GreProbeAndReadFromUntrustedVa(v3, 0x20uLL, a1, 0x20uLL, 1uLL);
  if ( v3[0] )
    return 3221225659LL;
  GreEscCreateScaledCompatibleBitmap((struct tagGDISCALE_ESCAPE_ARGUMENT *)v3);
  if ( !v3[0] )
    GreProbeAndWriteToUntrustedVa((char *)a1 + 8, 8uLL, &v3[2], 8uLL, 1uLL);
  return 0LL;
}
