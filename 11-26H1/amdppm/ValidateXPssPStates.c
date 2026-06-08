/*
 * XREFs of ValidateXPssPStates @ 0x14003218C
 * Callers:
 *     InitAcpiPerfStates @ 0x14003943C (InitAcpiPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_Sd @ 0x14000789C (WPP_RECORDER_SF_Sd.c)
 *     ValidateMsr_PCT @ 0x1400313BC (ValidateMsr_PCT.c)
 *     ValidatePssCore @ 0x140031E6C (ValidatePssCore.c)
 */

__int64 __fastcall ValidateXPssPStates(__int64 a1, unsigned int *a2, const wchar_t *a3, _DWORD *a4)
{
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // r8
  unsigned __int16 v10; // r9
  int v12; // [rsp+30h] [rbp-18h]

  *a4 = 0;
  v8 = ValidatePssCore(a2, "XPSS", a3);
  if ( v8 >= 0 )
  {
    v8 = ValidateMsr_PCT(a1, a3);
    if ( v8 < 0 )
    {
      *a4 |= 0x20u;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 16;
        goto LABEL_7;
      }
    }
  }
  else
  {
    *a4 |= 0x80u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 15;
LABEL_7:
      v12 = v8;
      WPP_RECORDER_SF_Sd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v7,
        v9,
        v10,
        (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
        a3,
        v12);
    }
  }
  return (unsigned int)v8;
}
