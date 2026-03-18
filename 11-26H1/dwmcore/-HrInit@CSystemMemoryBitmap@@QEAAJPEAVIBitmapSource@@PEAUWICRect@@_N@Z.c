/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x18029436C
 * Callers:
 *     ?RotateShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE_ROTATION@@@Z @ 0x18029196C (-RotateShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@W4DXGI_MODE.c)
 *     ?ScaleShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@I@Z @ 0x180291BD4 (-ScaleShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@I@Z.c)
 *     ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x1802B0178 (-HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800E1EE0 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x1801278A4 (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x180224CB0 (-HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(CSystemMemoryBitmap *this, struct IBitmapSource *a2, struct WICRect *a3)
{
  int inited; // eax
  unsigned int v6; // ebx
  _DWORD *v7; // r14
  int v8; // eax
  int v9; // eax
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 (__fastcall *v15)(struct IBitmapSource *, __int64 *, __int64, __int64, __int64); // rax
  int v16; // eax
  void *v17; // rcx
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  int v20; // [rsp+38h] [rbp-40h]
  int v21; // [rsp+3Ch] [rbp-3Ch]
  __int128 v22; // [rsp+40h] [rbp-38h]

  if ( a2 )
  {
    v22 = 0LL;
    inited = CBitmap::HrInitDataFromIBitmapSource(this, a2, 0LL);
    v6 = inited;
    if ( inited >= 0 )
    {
      v7 = (_DWORD *)((char *)this + 144);
      v8 = HrCalcDWordAlignedScanlineStride(
             *((unsigned int *)this + 22),
             *((_DWORD *)this + 26),
             (unsigned int *)this + 36);
      v6 = v8;
      if ( v8 >= 0 )
      {
        v9 = HrMalloc((unsigned int)*v7, *((unsigned int *)this + 23), (void **)this + 17);
        v6 = v9;
        if ( v9 >= 0 )
        {
          v10 = *((_DWORD *)this + 23);
          v11 = *((_QWORD *)this + 17);
          v12 = (unsigned int)*v7;
          v20 = *((_DWORD *)this + 22);
          v13 = *(_QWORD *)a2;
          v21 = v10;
          v14 = (unsigned int)(*v7 * v10);
          v15 = *(__int64 (__fastcall **)(struct IBitmapSource *, __int64 *, __int64, __int64, __int64))(v13 + 48);
          v19 = 0LL;
          v16 = v15(a2, &v19, v12, v14, v11);
          v6 = v16;
          if ( v16 >= 0 )
            return v6;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x19Cu, 0LL);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x189u, 0LL);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x181u, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, inited, 0x17Au, 0LL);
    }
  }
  else
  {
    v6 = -2147024809;
  }
  v17 = (void *)*((_QWORD *)this + 17);
  if ( v17 )
  {
    operator delete(v17);
    *((_QWORD *)this + 17) = 0LL;
  }
  return v6;
}
