/*
 * XREFs of ?SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800B8F54
 * Callers:
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800B8C50 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z @ 0x1800B8EB4 (-OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z @ 0x180095178 (-OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z.c)
 *     ?GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4IconicRepresentationType@@@Z @ 0x1800B820C (-GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4Iconi.c)
 */

__int64 __fastcall CImmersiveWindowIconic::SetRepresentationType(CImmersiveWindowIconic *a1, int a2, char a3)
{
  int v3; // r14d
  unsigned int v4; // edi
  int ImmersiveIconContainerSize; // eax
  enum DEVICE_SCALE_FACTOR v9; // ecx
  int v10; // eax

  v3 = *((_DWORD *)a1 + 66);
  v4 = 0;
  *((_DWORD *)a1 + 66) = a2;
  if ( a2 != 1 )
  {
    ImmersiveIconContainerSize = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(
                                   (enum DEVICE_SCALE_FACTOR)*((_DWORD *)a1 + 69),
                                   a2);
    v9 = *((_DWORD *)a1 + 69);
    *((_DWORD *)a1 + 67) = ImmersiveIconContainerSize - 2;
    *((_DWORD *)a1 + 68) = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(v9, a2);
  }
  if ( *((_DWORD *)a1 + 66) != v3 )
  {
    if ( a3 )
    {
      v10 = CImmersiveWindowIconic::OnIconUpdated(a1, a3);
      v4 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xF6u, 0LL);
    }
  }
  return v4;
}
