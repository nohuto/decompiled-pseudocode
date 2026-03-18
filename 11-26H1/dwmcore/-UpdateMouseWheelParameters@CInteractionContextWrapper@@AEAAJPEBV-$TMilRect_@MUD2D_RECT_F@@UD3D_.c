/*
 * XREFs of ?UpdateMouseWheelParameters@CInteractionContextWrapper@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D3330
 * Callers:
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@AEBVCMILMatrix@@I@Z @ 0x1801E1120 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@A.c)
 * Callees:
 *     ?Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z @ 0x180115D48 (-Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z.c)
 */

__int64 __fastcall CInteractionContextWrapper::UpdateMouseWheelParameters(__int64 a1)
{
  __int64 result; // rax

  if ( CCommonRegistryData::MousewheelScrollingMode == 2
    || *((_BYTE *)CPointerDeviceCache::Query(*(char **)(a1 + 240)) + 48)
    && !CCommonRegistryData::MousewheelScrollingMode
    && ((float)(CPointerDeviceCache::s_rcMouseRegion.right - CPointerDeviceCache::s_rcMouseRegion.left) <= 0.0
     || (float)(CPointerDeviceCache::s_rcMouseRegion.bottom - CPointerDeviceCache::s_rcMouseRegion.top) <= 0.0) )
  {
    return 0LL;
  }
  result = SetMouseWheelParameterInteractionContext(*(_QWORD *)(a1 + 16), 1LL);
  if ( (int)result >= 0 )
  {
    result = SetMouseWheelParameterInteractionContext(*(_QWORD *)(a1 + 16), 2LL);
    if ( (int)result >= 0 )
    {
      result = SetMouseWheelParameterInteractionContext(*(_QWORD *)(a1 + 16), 5LL);
      if ( (int)result >= 0 )
        return SetMouseWheelParameterInteractionContext(*(_QWORD *)(a1 + 16), 6LL);
    }
  }
  return result;
}
