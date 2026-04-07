/*
 * XREFs of ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x18000BB44
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18000AA50 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x18003F870 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetScale@CVisual@@QEAAXMM@Z @ 0x1800169E8 (-SetScale@CVisual@@QEAAXMM@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180016A48 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18007CC88 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     _o_fmodf_0 @ 0x18009B6D0 (_o_fmodf_0.c)
 */

void __fastcall CTopLevelWindow::UpdateWindowScale(CTopLevelWindow *this)
{
  CVisual *v2; // rcx
  __int64 v3; // rax
  float v4; // xmm7_4
  float *v5; // rdi
  __int64 v6; // rdx
  CVisual *v7; // rcx

  *((_DWORD *)this + 172) = -1;
  v2 = (CVisual *)*((_QWORD *)this + 69);
  if ( v2 )
  {
    CVisual::SetScale(v2, *(float *)(*((_QWORD *)this + 89) + 216LL), *(float *)(*((_QWORD *)this + 89) + 216LL));
    v3 = *((_QWORD *)this + 89);
    v4 = *(float *)(v3 + 212);
    v5 = (float *)(v3 + 216);
    if ( o_fmodf_0() == 0.0 && o_fmodf_0() == 0.0 )
    {
      v6 = 0LL;
LABEL_5:
      CVisual::SetInterpolationMode(*((_QWORD *)this + 69), v6);
      goto LABEL_6;
    }
    if ( v4 < 1.0 || *v5 < 1.0 )
    {
      v6 = 6LL;
      goto LABEL_5;
    }
    CVisual::ClearInterpolationMode(*((CVisual **)this + 69));
  }
LABEL_6:
  v7 = (CVisual *)*((_QWORD *)this + 37);
  if ( v7 )
    CVisual::SetScale(v7, *(float *)(*((_QWORD *)this + 89) + 216LL), *(float *)(*((_QWORD *)this + 89) + 216LL));
  CTopLevelWindow::ApplyCorrectionScaleForUniformSpaceWindow(this, *((struct CWindowData **)this + 89));
}
