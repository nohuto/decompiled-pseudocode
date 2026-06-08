/*
 * XREFs of ValidateAcpiCStates @ 0x14002FE30
 * Callers:
 *     InitAcpi2CStates @ 0x140026670 (InitAcpi2CStates.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1400070F8 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_Sd @ 0x14000789C (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_SDD @ 0x1400079F0 (WPP_RECORDER_SF_SDD.c)
 *     IsValidAcpiGenericAddress @ 0x14002F928 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall ValidateAcpiCStates(unsigned int *a1, const wchar_t *a2)
{
  unsigned int v2; // r10d
  unsigned int *v4; // r11
  unsigned int v5; // esi
  __int64 i; // rdx
  __int64 v7; // rax
  unsigned int j; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int16 v11; // r9

  v2 = 0;
  v4 = a1;
  if ( !a1 )
    return (unsigned int)-1073741823;
  v5 = *a1;
  for ( i = 1LL; (unsigned int)i < v5; i = (unsigned int)(i + 1) )
  {
    v7 = (unsigned int)(i - 1);
    if ( LOBYTE(a1[5 * (unsigned int)i + 4]) < LOBYTE(a1[5 * v7 + 4])
      || HIWORD(a1[5 * (unsigned int)i + 4]) < HIWORD(a1[5 * v7 + 4])
      || a1[5 * (unsigned int)i + 5] > a1[5 * v7 + 5] )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_SDD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          i,
          5LL * (unsigned int)i,
          0x19u,
          (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
          a2,
          i,
          i - 1);
      return (unsigned int)-1073741823;
    }
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= v5 )
      return v2;
    if ( LOBYTE(v4[5 * j + 1]) == 127 )
      continue;
    if ( !LOBYTE(v4[5 * j + 4]) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_S(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x1Cu,
          (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
          a2);
      return (unsigned int)-1073741823;
    }
    if ( LOBYTE(v4[5 * j + 4]) == 1 )
      return (unsigned int)-1073741823;
    if ( LOBYTE(v4[5 * j + 4]) == 2 )
      break;
    if ( !IsValidAcpiGenericAddress((__int64)&dword_1400155A4)
      || !IsValidAcpiGenericAddress((__int64)&dword_140015574)
      || !IsValidAcpiGenericAddress((__int64)&dword_14001558C) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741823;
      v11 = 27;
      goto LABEL_21;
    }
LABEL_23:
    ;
  }
  if ( IsValidAcpiGenericAddress((__int64)&dword_14001558C) )
    goto LABEL_23;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = 26;
LABEL_21:
    WPP_RECORDER_SF_Sd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v9,
      v10,
      v11,
      (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
      a2,
      j);
  }
  return (unsigned int)-1073741823;
}
