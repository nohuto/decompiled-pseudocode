/*
 * XREFs of ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800B7630
 * Callers:
 *     ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x1800B6E20 (-BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z.c)
 * Callees:
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x180019D08 (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?RemoveAt@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z @ 0x18003D848 (-RemoveAt@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x18008A828 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?GetWindow@CIconicAnimatedVisual@@QEAAPEAUHWND__@@XZ @ 0x18008DD38 (-GetWindow@CIconicAnimatedVisual@@QEAAPEAUHWND__@@XZ.c)
 *     ?OnRepresentationTypeUpdated@CIconicAnimatedVisual@@QEAAXXZ @ 0x1800B61AC (-OnRepresentationTypeUpdated@CIconicAnimatedVisual@@QEAAXXZ.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x1800B6DF4 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800B74C4 (-SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSour.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x1800C9ED8 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 */

void __fastcall CImmersiveIconicBitmapRegistry::_AcceptBitmap(
        CImmersiveIconicBitmapRegistry *this,
        HWND *a2,
        struct CBitmapSource *a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // ebx
  unsigned int i; // edx
  __int64 v9; // rsi
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // rax
  __int64 v11; // rcx
  unsigned int j; // esi

  v3 = *((_DWORD *)this + 10);
  v4 = 0;
  if ( v3 > *((_DWORD *)this + 2) )
  {
    for ( i = 0; i < v3; ++i )
    {
      v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * i);
      if ( !*(_BYTE *)(v9 + 40) && !*(_DWORD *)(v9 + 44) )
      {
        DynArray<CAnimationComponent *,0>::RemoveAt((__int64 *)this + 2, i);
        CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'((CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *)v9);
        break;
      }
    }
  }
  IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(this, a2[5]);
  if ( IconicResourceNoRef )
  {
    *((_BYTE *)IconicResourceNoRef + 40) = 0;
    v11 = *((unsigned int *)this + 2);
    if ( *((_DWORD *)this + 10) <= (unsigned int)v11 )
      CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::SetBitmapResource(IconicResourceNoRef, a3);
    for ( j = 0; j < *((_DWORD *)a2 + 148); ++j )
    {
      v11 = *(_QWORD *)(*((_QWORD *)a2[71] + j) + 88LL);
      if ( v11 )
        CThumbnailVisual::OnRepresentationTypeUpdated((CThumbnailVisual *)v11);
    }
    if ( *((_DWORD *)this + 18) )
    {
      do
      {
        if ( a2[5] == CIconicAnimatedVisual::GetWindow(*(CIconicAnimatedVisual **)(*((_QWORD *)this + 6) + 8LL * v4)) )
          CIconicAnimatedVisual::OnRepresentationTypeUpdated((CBaseObject **)v11);
        ++v4;
      }
      while ( v4 < *((_DWORD *)this + 18) );
    }
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer(v11, (int)&UdwmManageIconicThumbnail_Info, 0, a2[5]);
}
