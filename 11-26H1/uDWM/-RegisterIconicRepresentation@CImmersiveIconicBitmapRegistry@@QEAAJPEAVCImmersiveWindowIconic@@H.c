/*
 * XREFs of ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z @ 0x1800B72E0
 * Callers:
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800B7C30 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z @ 0x1800B7F60 (-OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z.c)
 * Callees:
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x180019D08 (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     ?_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@PEAUHWND__@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@4@Z @ 0x1800B7788 (-_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::RegisterIconicRepresentation(
        CImmersiveIconicBitmapRegistry *this,
        struct CImmersiveWindowIconic *a2,
        int a3,
        enum DEVICE_SCALE_FACTOR a4,
        bool a5,
        enum IconicRepresentationType *a6,
        enum IconicRepresentationType *a7)
{
  __int64 v7; // rsi
  unsigned int v11; // ebx
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // r8d
  int v17; // edi
  int v18; // eax
  unsigned int v20; // eax
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // [rsp+78h] [rbp+10h] BYREF

  v7 = *((_QWORD *)a2 + 23);
  v11 = -2147024774;
  IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(this, *(HWND *)(v7 + 40));
  v12 = IconicResourceNoRef;
  if ( !IconicResourceNoRef )
  {
    v13 = operator new(0x30uLL);
    v14 = v13;
    if ( !v13 )
    {
      IconicResourceNoRef = 0LL;
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x5Au, 0LL);
      return v11;
    }
    *v13 = *(_QWORD *)(v7 + 40);
    v13[1] = 0LL;
    v13[2] = 0LL;
    v13[3] = 0LL;
    *((_DWORD *)v13 + 8) = 0;
    *((_BYTE *)v13 + 40) = 0;
    *((_DWORD *)v13 + 11) = 1;
    IconicResourceNoRef = (struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *)v13;
    v15 = *((_DWORD *)this + 10);
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      v11 = -2147024362;
      v20 = 183;
      v17 = -2147024362;
    }
    else
    {
      v17 = 0;
      if ( v16 <= *((_DWORD *)this + 9) )
      {
        *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * v15) = v14;
        *((_DWORD *)this + 10) = v16;
LABEL_7:
        v12 = IconicResourceNoRef;
        v11 = v17;
        goto LABEL_8;
      }
      v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 8, 1, &IconicResourceNoRef);
      v11 = v17;
      if ( v17 >= 0 )
        goto LABEL_7;
      v20 = 194;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, v20, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x5Bu, 0LL);
    return v11;
  }
LABEL_8:
  if ( v12 )
  {
    v18 = CImmersiveIconicBitmapRegistry::_RegisterIconicRepresentation(
            this,
            v12,
            *(HWND *)(v7 + 40),
            a3,
            a4,
            a5,
            a6,
            a7);
    v11 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x60u, 0LL);
  }
  return v11;
}
