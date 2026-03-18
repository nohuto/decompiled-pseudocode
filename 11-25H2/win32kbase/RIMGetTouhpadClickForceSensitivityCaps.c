/*
 * XREFs of RIMGetTouhpadClickForceSensitivityCaps @ 0x14019CD14
 * Callers:
 *     RIMAllocateHidDesc @ 0x1401DE298 (RIMAllocateHidDesc.c)
 *     RIMConfigureTouchpadClickForceSensitivity @ 0x1401DEFE0 (RIMConfigureTouchpadClickForceSensitivity.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

_BOOL8 __fastcall RIMGetTouhpadClickForceSensitivityCaps(PHIDP_PREPARSED_DATA PreparsedData, __int64 a2)
{
  bool v4; // si
  __int64 ValueCaps; // rbx
  USHORT ValueCapsLength; // [rsp+70h] [rbp+18h] BYREF

  ValueCapsLength = 0;
  v4 = 0;
  if ( HidP_GetSpecificValueCaps(HidP_Feature, 0xDu, 0, 0xB0u, 0LL, &ValueCapsLength, PreparsedData) == -1072627705
    && ValueCapsLength == 1 )
  {
    ValueCaps = Win32AllocPoolZInitImpl(256LL, 0x48uLL, 0x78707352u);
    if ( ValueCaps )
    {
      if ( HidP_GetSpecificValueCaps(
             HidP_Feature,
             0xDu,
             0,
             0xB0u,
             (PHIDP_VALUE_CAPS)ValueCaps,
             &ValueCapsLength,
             PreparsedData) >= 0 )
      {
        v4 = ValueCapsLength == 1;
        if ( a2 )
        {
          *(_OWORD *)a2 = *(_OWORD *)ValueCaps;
          *(_OWORD *)(a2 + 16) = *(_OWORD *)(ValueCaps + 16);
          *(_OWORD *)(a2 + 32) = *(_OWORD *)(ValueCaps + 32);
          *(_OWORD *)(a2 + 48) = *(_OWORD *)(ValueCaps + 48);
          *(_QWORD *)(a2 + 64) = *(_QWORD *)(ValueCaps + 64);
        }
      }
      GreDeleteFastMutex((char *)ValueCaps);
    }
  }
  return v4;
}
