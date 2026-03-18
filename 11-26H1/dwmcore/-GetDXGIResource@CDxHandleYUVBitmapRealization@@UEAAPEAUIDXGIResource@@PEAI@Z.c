/*
 * XREFs of ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAPEAUIDXGIResource@@PEAI@Z @ 0x1800FA790
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1800FA824 (-EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z @ 0x1800FA98C (-GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IDXGIResource *__fastcall CDxHandleYUVBitmapRealization::GetDXGIResource(
        CDxHandleYUVBitmapRealization *this,
        unsigned int *a2)
{
  CD3DTexture *v4; // rcx
  struct IDXGIResource *v5; // rbx
  struct IDXGIResource *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (int)CDxHandleYUVBitmapRealization::EnsureTexture((CDxHandleYUVBitmapRealization *)((char *)this - 344)) < 0 )
    return 0LL;
  v4 = (CD3DTexture *)*((_QWORD *)this + 4);
  v7 = 0LL;
  if ( (int)CD3DTexture::GetDXGIResource(v4, &v7) < 0 )
  {
    if ( v7 )
      ((void (__fastcall *)(struct IDXGIResource *))v7->lpVtbl->Release)(v7);
    return 0LL;
  }
  if ( a2 )
    *a2 = *(_DWORD *)(*((_QWORD *)this + 4) + 172LL);
  v5 = v7;
  if ( v7 )
    ((void (__fastcall *)(struct IDXGIResource *))v7->lpVtbl->Release)(v7);
  return v5;
}
