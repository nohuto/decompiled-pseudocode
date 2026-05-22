/*
 * XREFs of ?ProcessInputReport@PenInterface@@QEAAJPEADK@Z @ 0x180194654
 * Callers:
 *     ?HandleRIMDeviceInput@HapticDeviceManager@@QEAAXPEAX0K@Z @ 0x18018EF30 (-HandleRIMDeviceInput@HapticDeviceManager@@QEAAXPEAX0K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?ParseTransducerPropertiesReport@PenInterface@@AEAAJW4_HIDP_REPORT_TYPE@@PEADKPEAUTransducerPropertiesReport@1@@Z @ 0x180194408 (-ParseTransducerPropertiesReport@PenInterface@@AEAAJW4_HIDP_REPORT_TYPE@@PEADKPEAUTransducerProp.c)
 *     ?UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z @ 0x180194848 (-UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z.c)
 */

__int64 __fastcall PenInterface::ProcessInputReport(PenInterface *this, char *a2, ULONG a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+34h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v7 = 0;
  v8 = 0LL;
  v4 = PenInterface::ParseTransducerPropertiesReport(
         this,
         HidP_Input,
         a2,
         a3,
         (struct PenInterface::TransducerPropertiesReport *)&v7);
  v5 = v4;
  if ( v4 >= 0 )
  {
    PenInterface::UpdateTransducerProperties(this, (const struct PenInterface::TransducerPropertiesReport *)&v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x150,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\peninterface.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
