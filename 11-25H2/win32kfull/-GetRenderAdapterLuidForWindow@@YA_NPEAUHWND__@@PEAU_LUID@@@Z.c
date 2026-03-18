/*
 * XREFs of ?GetRenderAdapterLuidForWindow@@YA_NPEAUHWND__@@PEAU_LUID@@@Z @ 0x1402874B8
 * Callers:
 *     ?RecreateRedirectionBitmapIfAdapterChanged@@YAXPEAUtagWND@@@Z @ 0x140287508 (-RecreateRedirectionBitmapIfAdapterChanged@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     GreGetDxSharedSurface @ 0x14009D7B0 (GreGetDxSharedSurface.c)
 */

bool __fastcall GetRenderAdapterLuidForWindow(Gre::Base *a1, struct _LUID *a2)
{
  __int64 v3; // [rsp+30h] [rbp-18h] BYREF
  __int64 v4; // [rsp+38h] [rbp-10h] BYREF
  int v5; // [rsp+60h] [rbp+18h] BYREF
  int v6; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  v5 = 0;
  return (int)GreGetDxSharedSurface(a1, &v3, a2, &v6, &v5, &v4) >= 0 && v3 != 0;
}
