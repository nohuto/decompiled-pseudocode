/*
 * XREFs of ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1401442FC
 * Callers:
 *     GreSelectRedirectionBitmap @ 0x14009A2A0 (GreSelectRedirectionBitmap.c)
 *     GreHintDCWnd @ 0x14009A6C0 (GreHintDCWnd.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x140144234 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1401442AC (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x14009F4AC (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 */

void __fastcall DC::vUpdateCachedDPIScaleValue(DC *this)
{
  __int64 v1; // rcx
  int v2; // r8d
  DC *v3; // r9
  int v4; // r10d
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  if ( (unsigned int)DC::bDpiScaleTransform(this) )
  {
    v4 = *(_DWORD *)(v1 + 524);
    v5 = (unsigned __int8)(v4 >> 23);
    if ( v5 <= 0x9E )
    {
      v6 = v4 & 0x7FFFFF | 0x800000LL;
      if ( v5 < v2 + 117 )
        v7 = v6 >> ((unsigned __int8)v2 + 117 - (unsigned __int8)v5);
      else
        v7 = v6 << ((unsigned __int8)v5 - 118);
      v8 = (v7 + 0x80000000LL) >> 32;
      v2 = -(int)v8;
      if ( v4 >= 0 )
        v2 = v8;
    }
  }
  DC::SetCachedDpiScaleValue(v3, v2);
}
