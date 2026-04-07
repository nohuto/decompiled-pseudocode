/*
 * XREFs of ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x1800B8B5C
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18001D550 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?IconicRepresentationDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x1800B8248 (-IconicRepresentationDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ??0CImmersiveWindowIconic@@IEAA@XZ @ 0x1800B8A74 (--0CImmersiveWindowIconic@@IEAA@XZ.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800B8C50 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
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
  CBaseObject *v11; // rdi
  int v12; // eax
  unsigned int v13; // ebx

  v9 = (CImmersiveWindowIconic *)DefaultHeap::AllocClear(0x120uLL);
  if ( v9 && (v10 = CImmersiveWindowIconic::CImmersiveWindowIconic(v9), (v11 = v10) != 0LL) )
  {
    v12 = CImmersiveWindowIconic::Initialize(v10, a1, a2, a3, a4);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x24u, 0LL);
      CImmersiveIconicBitmapRegistry::IconicRepresentationDestroyed(
        *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 29),
        (HWND *)a1);
      CBaseObject::Release(v11);
    }
    else
    {
      *a5 = v11;
    }
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x22u, 0LL);
  }
  return v13;
}
