/*
 * XREFs of ?GetAdapterLuid@CDxHandleYUVBitmapRealization@@UEBA?AU_LUID@@XZ @ 0x1801B0930
 * Callers:
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z @ 0x1801D3550 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAVIYUVSwapChainRealization@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDxHandleYUVBitmapRealization::GetAdapterLuid(CDxHandleYUVBitmapRealization *this, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  v2 = *((_QWORD *)this + 6);
  if ( v2 )
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 40) + 80LL) + 944LL);
  else
    v3 = *((_QWORD *)this - 8);
  *a2 = v3;
  return (struct _LUID)a2;
}
