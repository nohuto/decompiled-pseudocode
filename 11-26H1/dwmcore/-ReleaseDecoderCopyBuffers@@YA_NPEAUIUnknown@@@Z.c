/*
 * XREFs of ?ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z @ 0x1801E35AC
 * Callers:
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18012D6D0 (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 *     ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1802B3F90 (-CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall ReleaseDecoderCopyBuffers(struct IUnknown *a1)
{
  struct IUnknownVtbl *lpVtbl; // rax
  char v2; // di
  int v3; // ebx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  lpVtbl = a1->lpVtbl;
  v2 = 0;
  v5 = 0LL;
  ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
    a1,
    &IID_IWICDecoderBitmapSource,
    &v5);
  if ( v5 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    return v3 == 0;
  }
  return v2;
}
