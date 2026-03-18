/*
 * XREFs of ?RegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAJXZ @ 0x1801BE9D0
 * Callers:
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x18004AD90 (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::RegisterWithSurfaceManager(CGdiSpriteBitmap *this)
{
  __int64 *v1; // r8
  __int64 v2; // rdx
  __int64 **v3; // rax

  if ( !*((_BYTE *)this + 150) )
  {
    v1 = (__int64 *)((char *)this + 160);
    v2 = *((_QWORD *)g_pComposition + 78) + 232LL;
    v3 = *(__int64 ***)(*((_QWORD *)g_pComposition + 78) + 240LL);
    if ( *v3 != (__int64 *)v2 )
      __fastfail(3u);
    *v1 = v2;
    *((_QWORD *)this + 21) = v3;
    *v3 = v1;
    *(_QWORD *)(v2 + 8) = v1;
    *((_BYTE *)this + 150) = 1;
  }
  return 0LL;
}
