/*
 * XREFs of ?OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z @ 0x1800B7F60
 * Callers:
 *     ?OnRepresentationTypeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x1800BF758 (-OnRepresentationTypeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z @ 0x1800B72E0 (-RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@H.c)
 *     ?SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800B8004 (-SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 */

__int64 __fastcall CImmersiveWindowIconic::OnRepresentationTypeUpdated(CImmersiveWindowIconic *this, int a2)
{
  enum DEVICE_SCALE_FACTOR v2; // r9d
  int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 57);
  v9 = 0;
  v4 = CImmersiveIconicBitmapRegistry::RegisterIconicRepresentation(
         *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 29),
         this,
         a2,
         v2,
         *((_BYTE *)this + 232),
         (enum IconicRepresentationType *)&v9,
         0LL);
  if ( v4 < 0 )
  {
    v6 = 213LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"clientcore\\windows\\dwm\\udwm\\immersivewindowiconic.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  LOBYTE(v5) = 1;
  v4 = CImmersiveWindowIconic::SetRepresentationType(this, v9, v5);
  if ( v4 < 0 )
  {
    v6 = 214LL;
    goto LABEL_3;
  }
  return 0LL;
}
