/*
 * XREFs of RIMAssignTouchType @ 0x1401701F0
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x14012EC08 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMRetrieveLinkCollection @ 0x1401692DC (RIMRetrieveLinkCollection.c)
 *     RIMIsParallelDevice @ 0x1401703D8 (RIMIsParallelDevice.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall RIMAssignTouchType(__int64 a1, struct _HIDP_PREPARSED_DATA *a2)
{
  NTSTATUS SpecificButtonCaps; // eax
  NTSTATUS SpecificValueCaps; // eax
  NTSTATUS v6; // ebx
  __int64 v7; // rax
  USHORT LinkCollection; // ax
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-89h] BYREF
  ULONG v11[3]; // [rsp+44h] [rbp-85h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+50h] [rbp-79h] BYREF
  struct _HIDP_BUTTON_CAPS ButtonCaps; // [rsp+A0h] [rbp-29h] BYREF

  memset(&ValueCaps, 0, sizeof(ValueCaps));
  memset(&ButtonCaps, 0, sizeof(ButtonCaps));
  ValueCapsLength[0] = 1;
  SpecificButtonCaps = HidP_GetSpecificButtonCaps(HidP_Input, 0xDu, 0, 0x47u, &ButtonCaps, ValueCapsLength, a2);
  if ( (int)(SpecificButtonCaps + 0x80000000) < 0 || SpecificButtonCaps == -1072627705 )
    *(_DWORD *)(a1 + 368) |= 4u;
  ValueCapsLength[0] = 1;
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0xDu, 0, 0x51u, &ValueCaps, ValueCapsLength, a2);
  v6 = SpecificValueCaps;
  if ( ((SpecificValueCaps + 0x80000000) & 0x80000000) != 0 || SpecificValueCaps == -1072627705 )
  {
    ValueCapsLength[0] = 1;
    v6 = HidP_GetSpecificValueCaps(HidP_Feature, 0xDu, 0, 0x55u, &ValueCaps, ValueCapsLength, a2);
    if ( v6 < 0 )
    {
      LinkCollection = ValueCaps.LinkCollection;
      *(_DWORD *)(a1 + 368) |= 0x20u;
      *(_WORD *)(a1 + 784) = LinkCollection;
    }
    else
    {
      v11[0] = 0;
      *(_DWORD *)(a1 + 24) = 2;
      v7 = Win32AllocPoolZInitImpl(256LL, 0x28uLL, 0x71707352u);
      *(_QWORD *)(a1 + 768) = v7;
      if ( !v7
        || (unsigned int)RIMIsParallelDevice(a1, a2, v11) && !(unsigned int)RIMRetrieveLinkCollection(a1, a2, v11[0]) )
      {
        return (unsigned int)-1073741668;
      }
    }
  }
  return (unsigned int)v6;
}
