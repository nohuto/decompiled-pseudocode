/*
 * XREFs of ?GetDXGIResource@CDxHandleBitmapRealization@@UEAAPEAUIDXGIResource@@PEAI@Z @ 0x1801326A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDXGIResource@CD2DBitmap@@QEAAPEAUIDXGIResource@@XZ @ 0x1801326F8 (-GetDXGIResource@CD2DBitmap@@QEAAPEAUIDXGIResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IDXGIResource *__fastcall CDxHandleBitmapRealization::GetDXGIResource(
        CDxHandleBitmapRealization *this,
        unsigned int *a2)
{
  if ( (*(int (__fastcall **)(char *))(*((_QWORD *)this - 43) + 72LL))((char *)this - 344) < 0 )
    return 0LL;
  if ( a2 )
    *a2 = *(_DWORD *)(*((_QWORD *)this + 4) + 232LL);
  return CD2DBitmap::GetDXGIResource(*((CD2DBitmap **)this + 4));
}
