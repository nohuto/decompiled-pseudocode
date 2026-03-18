/*
 * XREFs of ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800E39D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800E4048 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x1800E77CC (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800E8010 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x1800E8278 (--0CBitmapLock@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::LockForRead(__int64 a1, _DWORD *a2, CBitmapLock **a3)
{
  CBitmapLock *v6; // rbx
  _DWORD *v7; // rdx
  __int64 v8; // rcx
  unsigned __int8 PixelFormatSize; // al
  _DWORD *v10; // rdx
  unsigned int v11; // ebp
  CBitmapLock *v12; // rax
  CBitmapLock *v13; // rax
  int v14; // edi
  unsigned int v15; // eax

  v6 = 0LL;
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(a2)
    && (*v7 < *(_DWORD *)(a1 + 24)
     || v7[1] < *(_DWORD *)(a1 + 28)
     || v7[2] > *(_DWORD *)(a1 + 32)
     || v7[3] > *(_DWORD *)(a1 + 36))
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v8) )
  {
    v14 = -2147024809;
    v15 = 132;
  }
  else
  {
    PixelFormatSize = GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 124));
    v11 = v10[1] * *(_DWORD *)(a1 + 120) + *v10 * (PixelFormatSize >> 3);
    v12 = (CBitmapLock *)operator new(0x80uLL);
    if ( v12 && (v13 = CBitmapLock::CBitmapLock(v12), (v6 = v13) != 0LL) )
    {
      (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v13 + 8LL))(v13);
      v14 = CBitmapLock::HrInit(
              v6,
              (struct IBitmapUnlock *)((a1 + 16) & -(__int64)(a1 != 0)),
              a2[2] - *a2,
              a2[3] - a2[1],
              (const struct PixelFormatInfo *)(a1 + 124),
              *(_DWORD *)(a1 + 120),
              *(_DWORD *)(a1 + 144) - v11,
              (void *)(*(_QWORD *)(a1 + 136) + v11),
              WICBitmapLockRead,
              0,
              0LL);
      if ( v14 >= 0 )
      {
        *a3 = v6;
        return (unsigned int)v14;
      }
      v15 = 152;
    }
    else
    {
      v14 = -2147024882;
      v15 = 141;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, v15, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v14;
}
