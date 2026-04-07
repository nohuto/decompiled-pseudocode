/*
 * XREFs of ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800B864C
 * Callers:
 *     ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x1800B7E58 (-BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z.c)
 * Callees:
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x18001B7FC (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?RemoveAt@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z @ 0x180059084 (-RemoveAt@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x1800972A4 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?GetWindow@CIconicAnimatedVisual@@QEAAPEAUHWND__@@XZ @ 0x18009A22C (-GetWindow@CIconicAnimatedVisual@@QEAAPEAUHWND__@@XZ.c)
 *     ?OnRepresentationTypeUpdated@CIconicAnimatedVisual@@QEAAXXZ @ 0x1800B71DC (-OnRepresentationTypeUpdated@CIconicAnimatedVisual@@QEAAXXZ.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x1800B7E30 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800B84E0 (-SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSour.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x1800CF840 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 */

void __fastcall CImmersiveIconicBitmapRegistry::_AcceptBitmap(
        CImmersiveIconicBitmapRegistry *this,
        HWND *a2,
        struct CBitmapSource *a3)
{
  unsigned int v3; // ebx
  unsigned int i; // edx
  __int64 v8; // rsi
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // rax
  __int64 v10; // rcx
  unsigned int j; // esi

  v3 = 0;
  if ( *((_DWORD *)this + 10) > *((_DWORD *)this + 2) )
  {
    for ( i = 0; i < *((_DWORD *)this + 10); ++i )
    {
      v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * i);
      if ( !*(_BYTE *)(v8 + 40) && !*(_DWORD *)(v8 + 44) )
      {
        DynArray<CAnimationComponent *,0>::RemoveAt((__int64 *)this + 2, i);
        CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'((CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *)v8);
        break;
      }
    }
  }
  IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(this, a2[5]);
  if ( IconicResourceNoRef )
  {
    *((_BYTE *)IconicResourceNoRef + 40) = 0;
    v10 = *((unsigned int *)this + 2);
    if ( *((_DWORD *)this + 10) <= (unsigned int)v10 )
      CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::SetBitmapResource(IconicResourceNoRef, a3);
    for ( j = 0; j < *((_DWORD *)a2 + 148); ++j )
    {
      v10 = *(_QWORD *)(*((_QWORD *)a2[71] + j) + 88LL);
      if ( v10 )
        CThumbnailVisual::OnRepresentationTypeUpdated((CThumbnailVisual *)v10);
    }
    if ( *((_DWORD *)this + 18) )
    {
      do
      {
        if ( a2[5] == CIconicAnimatedVisual::GetWindow(*(CIconicAnimatedVisual **)(*((_QWORD *)this + 6) + 8LL * v3)) )
          CIconicAnimatedVisual::OnRepresentationTypeUpdated((CIconicAnimatedVisual *)v10);
        ++v3;
      }
      while ( v3 < *((_DWORD *)this + 18) );
    }
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp_EtwEventWriteTransfer(v10, (__int64)&UdwmManageIconicThumbnail_Info, 0LL, a2[5]);
}
