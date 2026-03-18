/*
 * XREFs of RIMGetDeviceFeedbackGlobalIntensityCaps @ 0x14015DB74
 * Callers:
 *     RIMAllocateHidDesc @ 0x1401DE298 (RIMAllocateHidDesc.c)
 *     RIMConfigureDeviceFeedback @ 0x1401DEB80 (RIMConfigureDeviceFeedback.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall RIMGetDeviceFeedbackGlobalIntensityCaps(PHIDP_PREPARSED_DATA PreparsedData, __int64 a2)
{
  unsigned __int8 v4; // r14
  struct _HIDP_VALUE_CAPS *ValueCaps; // rbx
  USHORT i; // di
  USHORT LinkCollection; // r12
  USHORT ValueCapsLength; // [rsp+90h] [rbp+18h] BYREF
  USHORT v10; // [rsp+98h] [rbp+20h] BYREF

  ValueCapsLength = 0;
  v4 = 0;
  if ( HidP_GetSpecificValueCaps(HidP_Feature, 0xEu, 0, 0x23u, 0LL, &ValueCapsLength, PreparsedData) == -1072627705 )
  {
    ValueCaps = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInitImpl(256LL, 72LL * ValueCapsLength, 0x78707352u);
    if ( ValueCaps )
    {
      if ( HidP_GetSpecificValueCaps(HidP_Feature, 0xEu, 0, 0x23u, ValueCaps, &ValueCapsLength, PreparsedData) >= 0 )
      {
        for ( i = 0; i < ValueCapsLength; ++i )
        {
          v10 = 0;
          LinkCollection = ValueCaps[i].LinkCollection;
          if ( HidP_GetSpecificValueCaps(HidP_Feature, 0xEu, LinkCollection, 0x21u, 0LL, &v10, PreparsedData) == -1072627708
            && HidP_GetSpecificValueCaps(HidP_Feature, 0xEu, LinkCollection, 0x20u, 0LL, &v10, PreparsedData) == -1072627708 )
          {
            if ( a2 )
            {
              *(_OWORD *)a2 = *(_OWORD *)&ValueCaps[i].UsagePage;
              *(_OWORD *)(a2 + 16) = *(_OWORD *)&ValueCaps[i].HasNull;
              *(_OWORD *)(a2 + 32) = *(_OWORD *)&ValueCaps[i].UnitsExp;
              *(_OWORD *)(a2 + 48) = *(_OWORD *)&ValueCaps[i].PhysicalMin;
              *(_QWORD *)(a2 + 64) = *(_QWORD *)&ValueCaps[i].NotRange.DesignatorIndex;
            }
            v4 = 1;
          }
        }
      }
      GreDeleteFastMutex((char *)ValueCaps);
    }
  }
  return v4;
}
