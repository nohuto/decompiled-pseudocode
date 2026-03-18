/*
 * XREFs of ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18009A4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18009A68C (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::GetDeviceTexture(
        CCachedVisualImage *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  int v5; // eax
  struct IRenderTargetBitmap *v6; // rbx
  unsigned int v7; // edi
  int v8; // eax
  struct IRenderTargetBitmap *v10; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0LL;
  v10 = 0LL;
  v5 = CCachedVisualImage::EnsureRenderTargetBitmap((CCachedVisualImage *)((char *)this - 80), a2, &v10);
  v6 = v10;
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x113u, 0LL);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(char *, const struct RenderTargetInfo *, struct IDeviceTexture **))(*((_QWORD *)v10 + 1) + 104LL))(
           (char *)v10 + 8,
           a2,
           a3);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x116u, 0LL);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
