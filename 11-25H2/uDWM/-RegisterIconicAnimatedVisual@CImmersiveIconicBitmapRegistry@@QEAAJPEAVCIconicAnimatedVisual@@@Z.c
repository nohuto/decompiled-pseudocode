/*
 * XREFs of ?RegisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@@Z @ 0x1800B826C
 * Callers:
 *     ?GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimationComponent@@PEBUtagRECT@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAPEAVCVisual@@@Z @ 0x1800D283C (-GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimat.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::RegisterIconicAnimatedVisual(
        CImmersiveIconicBitmapRegistry *this,
        struct CIconicAnimatedVisual *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  int v4; // ebx
  unsigned int v5; // eax
  int v6; // r9d
  CMILRefCountBase *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *((_DWORD *)this + 18);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    v5 = 179;
    v6 = -2147024362;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v5, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x227u, 0LL);
    return (unsigned int)v4;
  }
  v4 = 0;
  if ( v3 > *((_DWORD *)this + 17) )
  {
    v4 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 48, 8, 1, &v8);
    v6 = v4;
    if ( v4 < 0 )
    {
      v5 = 190;
      goto LABEL_8;
    }
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * *((unsigned int *)this + 18)) = a2;
    *((_DWORD *)this + 18) = v3;
  }
  CMILRefCountBase::AddRef(v8);
  return (unsigned int)v4;
}
