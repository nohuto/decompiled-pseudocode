/*
 * XREFs of ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x1800E23C0
 * Callers:
 *     ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800E24E0 (-LockForRead@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUnique.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800E2F10 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x1800E1FE0 (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x1800E646C (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HrCreateDestBitmap(unsigned int a1, unsigned int a2, enum DXGI_FORMAT *a3, struct IBitmapDest **a4)
{
  CSystemMemoryBitmap *v8; // rax
  CSystemMemoryBitmap *v9; // rax
  void **v10; // rbx
  __int64 v11; // rsi
  int v12; // eax
  unsigned int v13; // edi
  int v15; // r9d
  unsigned int v16; // [rsp+20h] [rbp-28h]

  *a4 = 0LL;
  v8 = (CSystemMemoryBitmap *)operator new(0x98uLL);
  if ( !v8 )
  {
    v11 = 0LL;
    goto LABEL_7;
  }
  v9 = CSystemMemoryBitmap::CSystemMemoryBitmap(v8);
  v10 = (void **)v9;
  v11 = (__int64)v9;
  if ( !v9 )
  {
LABEL_7:
    v13 = -2147024882;
    v15 = -2147024882;
    v16 = 128;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, v16, 0LL);
    goto LABEL_5;
  }
  (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v9 + 8LL))(v9);
  v12 = CSystemMemoryBitmap::HrInit(v10, a1, a2, a3, 1);
  v13 = v12;
  if ( v12 < 0 )
  {
    v16 = 134;
    goto LABEL_11;
  }
  v12 = (*(__int64 (__fastcall **)(void **, GUID *, struct IBitmapDest **))*v10)(
          v10,
          &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
          a4);
  v13 = v12;
  if ( v12 < 0 )
  {
    v16 = 137;
LABEL_11:
    v15 = v12;
    goto LABEL_8;
  }
LABEL_5:
  ReleaseInterfaceNoNULL<ID2D1Ink>(v11);
  return v13;
}
