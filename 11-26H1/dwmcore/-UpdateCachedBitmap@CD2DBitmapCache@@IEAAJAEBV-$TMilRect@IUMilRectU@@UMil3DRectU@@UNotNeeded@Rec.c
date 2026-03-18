/*
 * XREFs of ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18012D6D0
 * Callers:
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z @ 0x18012D3C0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z.c)
 * Callees:
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x18002A150 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18002B340 (-IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUn.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x1800E3820 (-UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VID2DBitmapCacheSource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800F5710 (-InternalRelease@-$CMILRefCountBaseT@VID2DBitmapCacheSource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x1800F5C08 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@details@wil@@QEAA_NXZ @ 0x1800F72C8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainDX12Support@@@detail.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18012DEDC (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x18012EFC8 (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ?ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z @ 0x1801E35AC (-ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmapCache::UpdateCachedBitmap(CD2DBitmapCache *this, int *a2, __int64 a3)
{
  char v3; // r14
  const struct FastRegion::Internal::CRgnData *v4; // rsi
  __int64 v6; // r13
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  const struct FastRegion::Internal::CRgnData *v13; // rdx
  HANDLE ProcessHeap; // rax
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int updated; // eax
  volatile signed __int32 *v27; // rcx
  int v28; // eax
  unsigned int v29; // [rsp+20h] [rbp-59h]
  __int128 v30; // [rsp+30h] [rbp-49h] BYREF
  const struct FastRegion::Internal::CRgnData *v31; // [rsp+40h] [rbp-39h] BYREF
  _DWORD Mem[18]; // [rsp+48h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v3 = 0;
  v4 = (const struct FastRegion::Internal::CRgnData *)Mem;
  v31 = (const struct FastRegion::Internal::CRgnData *)Mem;
  Mem[0] = 0;
  v6 = a3 + 240;
  v9 = 0;
  v30 = 0LL;
  if ( a2 )
  {
    v10 = *a2;
    v11 = a2[2];
    if ( *a2 < v11 )
    {
      v12 = a2[3];
      if ( a2[1] < v12 )
      {
        Mem[3] = a2[1];
        Mem[4] = 16;
        Mem[6] = 16;
        Mem[0] = 2;
        Mem[1] = v10;
        Mem[2] = v11;
        Mem[7] = v10;
        Mem[8] = v11;
        Mem[5] = v12;
      }
    }
  }
  else
  {
    CRegion::SetRectangle((CRegion *)&v31, (const struct MilRectU *)(a3 + 240));
    v4 = v31;
  }
  if ( *(_DWORD *)v4
    && (v13 = *(const struct FastRegion::Internal::CRgnData **)(v6 + 16), *(_DWORD *)v13)
    && (v3 = FastRegion::Internal::CRgnData::Intersects(v4, v13)) != 0 )
  {
    v16 = FastRegion::CRegion::Intersect((FastRegion::CRegion *)&v31, (const struct CRegion *)(v6 + 16));
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1B1,
        (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
        (const char *)(unsigned int)v16,
        v29);
    v4 = v31;
    if ( *(_DWORD *)v31 )
    {
      v17 = *((_DWORD *)v31 + 2);
      v18 = *((_DWORD *)v31 + 3);
      v19 = *((_DWORD *)v31 + 2 * *(int *)v31 + 1);
      v20 = -1;
      if ( *((int *)v31 + 1) >= 0 )
        v20 = *((_DWORD *)v31 + 1);
      LODWORD(v30) = v20;
      v21 = -1;
      if ( v18 >= 0 )
        v21 = v18;
      DWORD1(v30) = v21;
      v22 = -1;
      if ( v17 >= 0 )
        v22 = v17;
      DWORD2(v30) = v22;
      if ( v19 < 0 )
        HIDWORD(v30) = -1;
      else
        HIDWORD(v30) = v19;
    }
  }
  else
  {
    v30 = 0uLL;
  }
  if ( Mem != (_DWORD *)v4 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v4);
  }
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 80LL))(*((_QWORD *)this + 3)) )
    {
      v23 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)a3 + 128LL))(
              a3,
              &v30,
              *((_QWORD *)this + 3));
      v9 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x139u, 0LL);
    }
    else if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompSwapchainDX12Support>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_CompSwapchainDX12Support>::GetImpl'::`2'::impl)
           && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 88LL))(
                *((_QWORD *)this + 3),
                0LL) )
    {
      v28 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)a3 + 128LL))(
              a3,
              &v30,
              *((_QWORD *)this + 3));
      v9 = v28;
      if ( v28 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x13Eu, 0LL);
    }
    else
    {
      v24 = CD2DBitmapCache::EnsureSysmemBitmap(this);
      v9 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x142u, 0LL);
      }
      else if ( (unsigned __int8)CSecondaryBitmap::IsRegionValid((_DWORD *)(*((_QWORD *)this + 5) + 24LL), a2, 0LL)
             || (updated = CD2DBitmapCache::UpdateSysmemBitmap(this), v9 = updated, updated >= 0) )
      {
        v25 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)a3 + 128LL))(
                a3,
                &v30,
                *((_QWORD *)this + 5));
        v9 = v25;
        if ( v25 >= 0 )
        {
          if ( *((_BYTE *)this + 72) )
          {
            ReleaseDecoderCopyBuffers(*((struct IUnknown **)this + 3));
            v27 = (volatile signed __int32 *)*((_QWORD *)this + 5);
            *((_QWORD *)this + 5) = 0LL;
            if ( v27 )
              CMILRefCountBaseT<ID2DBitmapCacheSource,CMilObjectDeleter>::InternalRelease(v27);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0x14Au, 0LL);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x146u, 0LL);
      }
    }
  }
  return v9;
}
