/*
 * XREFs of ?RegisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@@Z @ 0x1800B7228
 * Callers:
 *     ?GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimationComponent@@PEBUtagRECT@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAPEAVCVisual@@@Z @ 0x1800CF648 (-GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimat.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::RegisterIconicAnimatedVisual(
        CImmersiveIconicBitmapRegistry *this,
        struct CIconicAnimatedVisual *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  int v4; // ebx
  unsigned int v5; // eax
  CBaseObject *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_DWORD *)this + 18);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    v5 = 183;
    goto LABEL_8;
  }
  v4 = 0;
  if ( v3 > *((_DWORD *)this + 17) )
  {
    v4 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 48, 8, 1, &v7);
    if ( v4 >= 0 )
      goto LABEL_5;
    v5 = 194;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, v5, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x227u, 0LL);
    return (unsigned int)v4;
  }
  *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * v2) = a2;
  *((_DWORD *)this + 18) = v3;
LABEL_5:
  CBaseObject::AddRef(v7);
  return (unsigned int)v4;
}
