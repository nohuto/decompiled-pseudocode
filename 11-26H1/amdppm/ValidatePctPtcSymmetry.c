/*
 * XREFs of ValidatePctPtcSymmetry @ 0x14003165C
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x140031908 (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     WPP_RECORDER_SF_SSs @ 0x14000A248 (WPP_RECORDER_SF_SSs.c)
 *     ValidateRegisterSymmetry @ 0x140032064 (ValidateRegisterSymmetry.c)
 */

__int64 __fastcall ValidatePctPtcSymmetry(const wchar_t *a1, __int64 a2, const wchar_t *a3, __int64 a4, const char *a5)
{
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int16 v13; // r9
  int v15; // [rsp+20h] [rbp-28h]

  v9 = -1073741823;
  if ( (unsigned __int8)ValidateRegisterSymmetry(a2, a4, a3, a4) )
  {
    if ( (unsigned __int8)ValidateRegisterSymmetry(a2 + 12, a4 + 12, v11, v12) )
      return 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 76;
      goto LABEL_4;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = 75;
LABEL_4:
    WPP_RECORDER_SF_SSs((__int64)WPP_GLOBAL_Control->DeviceExtension, v10, v11, v13, v15, a1, a3, a5);
  }
  return v9;
}
