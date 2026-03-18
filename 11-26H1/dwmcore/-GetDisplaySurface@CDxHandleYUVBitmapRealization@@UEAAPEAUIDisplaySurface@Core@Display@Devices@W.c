/*
 * XREFs of ?GetDisplaySurface@CDxHandleYUVBitmapRealization@@UEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAI@Z @ 0x180133380
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureDisplaySurface@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801333D0 (-EnsureDisplaySurface@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 */

struct Windows::Devices::Display::Core::IDisplaySurface *__fastcall CDxHandleYUVBitmapRealization::GetDisplaySurface(
        CDxHandleYUVBitmapRealization *this,
        unsigned int *a2)
{
  if ( (int)CDxHandleYUVBitmapRealization::EnsureDisplaySurface((CDxHandleYUVBitmapRealization *)((char *)this - 344)) < 0 )
    return 0LL;
  if ( a2 )
    *a2 = *(_DWORD *)(*((_QWORD *)this + 4) + 172LL);
  return (struct Windows::Devices::Display::Core::IDisplaySurface *)*((_QWORD *)this + 5);
}
