/*
 * XREFs of ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z @ 0x1800B8324
 * Callers:
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800B8C50 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z @ 0x1800B8EB4 (-OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x180011E44 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x18001B7FC (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@PEAUHWND__@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@4@Z @ 0x1800B87A4 (-_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::RegisterIconicRepresentation(
        CImmersiveIconicBitmapRegistry *this,
        struct CImmersiveWindowIconic *a2,
        int a3,
        enum DEVICE_SCALE_FACTOR a4,
        void *a5,
        enum IconicRepresentationType *a6,
        enum IconicRepresentationType *a7)
{
  __int64 v7; // rsi
  unsigned int v11; // ebx
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v12; // rdx
  _QWORD *v13; // r9
  __int64 v14; // r9
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // eax
  int v18; // edi
  int v19; // eax
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // [rsp+78h] [rbp+10h] BYREF

  v7 = *((_QWORD *)a2 + 30);
  v11 = -2147024774;
  IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(this, *(HWND *)(v7 + 40));
  v12 = IconicResourceNoRef;
  if ( IconicResourceNoRef )
    goto LABEL_10;
  v13 = operator new[](0x30uLL, 0LL);
  if ( !v13 )
  {
    IconicResourceNoRef = 0LL;
    goto LABEL_17;
  }
  *v13 = *(_QWORD *)(v7 + 40);
  CBitmapSourceArray::CBitmapSourceArray((CBitmapSourceArray *)(v13 + 1));
  *(_BYTE *)(v14 + 40) = 0;
  *(_DWORD *)(v14 + 44) = 1;
  IconicResourceNoRef = (struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *)v14;
  if ( !v14 )
  {
LABEL_17:
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x5Au, 0LL);
    return v11;
  }
  v15 = *((_DWORD *)this + 10);
  v16 = v15 + 1;
  if ( v15 + 1 < v15 )
  {
    v11 = -2147024362;
    v17 = 179;
    v18 = -2147024362;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, v17, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x5Bu, 0LL);
    return v11;
  }
  v18 = 0;
  if ( v16 > *((_DWORD *)this + 9) )
  {
    v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 8, 1, &IconicResourceNoRef);
    v11 = v18;
    if ( v18 < 0 )
    {
      v17 = 190;
      goto LABEL_15;
    }
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * *((unsigned int *)this + 10)) = v14;
    *((_DWORD *)this + 10) = v16;
  }
  v12 = IconicResourceNoRef;
  v11 = v18;
LABEL_10:
  if ( v12 )
  {
    v19 = CImmersiveIconicBitmapRegistry::_RegisterIconicRepresentation(
            this,
            v12,
            *(HWND *)(v7 + 40),
            a3,
            a4,
            (bool)a5,
            a6,
            a7);
    v11 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x60u, 0LL);
  }
  return v11;
}
