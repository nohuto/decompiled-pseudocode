/*
 * XREFs of ?SetRootVisual@CCachedVisualImage@@IEAAJPEAVCVisual@@@Z @ 0x1802625C4
 * Callers:
 *     ?CreateForDCompSnapshot@CCachedVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@AEBUD2D_SIZE_U@@_NPEAPEAV1@@Z @ 0x180262030 (-CreateForDCompSnapshot@CCachedVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@AEBUD2D_SIZE_U@@_N.c)
 *     ?CreateForVisualBitmap@CCachedVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180262178 (-CreateForVisualBitmap@CCachedVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x18002B2C0 (-MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::SetRootVisual(CCachedVisualImage *this, struct CVisual *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  int v6; // eax

  v2 = 0;
  if ( !*((_BYTE *)this + 1600) )
  {
    (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 200LL))(this);
    v5 = *(_QWORD *)this;
    *((_QWORD *)this + 15) = a2;
    (*(void (__fastcall **)(CCachedVisualImage *))(v5 + 192))(this);
    v6 = (*(__int64 (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 216LL))(this);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x255u, 0LL);
    }
    else
    {
      CCachedVisualImage::MarkAllTargetsDirty(this);
      (*(void (__fastcall **)(CCachedVisualImage *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
    }
  }
  return v2;
}
