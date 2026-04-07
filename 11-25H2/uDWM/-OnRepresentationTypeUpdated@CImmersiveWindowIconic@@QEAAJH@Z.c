/*
 * XREFs of ?OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z @ 0x1800B8EB4
 * Callers:
 *     ?OnRepresentationTypeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x1800C5CA8 (-OnRepresentationTypeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z @ 0x1800B8324 (-RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@H.c)
 *     ?SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800B8F54 (-SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 */

__int64 __fastcall CImmersiveWindowIconic::OnRepresentationTypeUpdated(CImmersiveWindowIconic *this, int a2)
{
  int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // rdx
  void *v7; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0;
  LOBYTE(v7) = *((_BYTE *)this + 280);
  v3 = CImmersiveIconicBitmapRegistry::RegisterIconicRepresentation(
         *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 29),
         this,
         a2,
         (enum DEVICE_SCALE_FACTOR)*((_DWORD *)this + 69),
         v7,
         (enum IconicRepresentationType *)&v9,
         0LL);
  if ( v3 < 0 )
  {
    v5 = 225LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"clientcore\\windows\\dwm\\udwm\\immersivewindowiconic.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  LOBYTE(v4) = 1;
  v3 = CImmersiveWindowIconic::SetRepresentationType(this, v9, v4);
  if ( v3 < 0 )
  {
    v5 = 226LL;
    goto LABEL_3;
  }
  return 0LL;
}
