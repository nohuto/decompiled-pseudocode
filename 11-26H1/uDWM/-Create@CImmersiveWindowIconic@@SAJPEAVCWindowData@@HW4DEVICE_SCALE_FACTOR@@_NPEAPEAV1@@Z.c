/*
 * XREFs of ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x1800B7B4C
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180028E98 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?IconicRepresentationDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x1800B7204 (-IconicRepresentationDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ??0CImmersiveWindowIconic@@IEAA@XZ @ 0x1800B7A4C (--0CImmersiveWindowIconic@@IEAA@XZ.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800B7C30 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 */

__int64 __fastcall CImmersiveWindowIconic::Create(
        struct CWindowData *a1,
        int a2,
        enum DEVICE_SCALE_FACTOR a3,
        bool a4,
        struct CImmersiveWindowIconic **a5)
{
  CImmersiveWindowIconic *v9; // rax
  CImmersiveWindowIconic *v10; // rax
  struct CImmersiveWindowIconic *v11; // rbx
  int v12; // edi
  unsigned int v13; // eax

  v9 = (CImmersiveWindowIconic *)DefaultHeap::AllocClear(0xF0uLL);
  if ( !v9 )
  {
    v11 = 0LL;
    goto LABEL_7;
  }
  v10 = CImmersiveWindowIconic::CImmersiveWindowIconic(v9);
  v11 = v10;
  if ( !v10 )
  {
LABEL_7:
    v12 = -2147024882;
    v13 = 34;
    goto LABEL_8;
  }
  v12 = CImmersiveWindowIconic::Initialize(v10, a1, a2, a3, a4);
  if ( v12 >= 0 )
  {
    *a5 = v11;
    return (unsigned int)v12;
  }
  v13 = 36;
LABEL_8:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, v13, 0LL);
  if ( v11 )
  {
    CImmersiveIconicBitmapRegistry::IconicRepresentationDestroyed(
      *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 29),
      (HWND *)a1);
    CBaseObject::Release(v11);
  }
  return (unsigned int)v12;
}
