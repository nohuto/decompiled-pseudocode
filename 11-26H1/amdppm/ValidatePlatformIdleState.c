/*
 * XREFs of ValidatePlatformIdleState @ 0x140031CA4
 * Callers:
 *     RegisterKernelPlatformStates @ 0x140036AE4 (RegisterKernelPlatformStates.c)
 *     UpdateKernelPlatformStates @ 0x1400370BC (UpdateKernelPlatformStates.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140003168 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall ValidatePlatformIdleState(int *a1)
{
  __int64 v1; // r9
  unsigned __int8 *v2; // rbx
  unsigned int v3; // edx
  _DWORD *v4; // r11
  __int64 v5; // rax
  int v6; // eax
  int v7; // r9d
  unsigned int i; // r11d
  _DWORD *v9; // r14
  __int64 v10; // rax
  unsigned __int16 v11; // r9

  v1 = *((_QWORD *)a1 + 1);
  v2 = (unsigned __int8 *)(a1 + 4);
  v3 = 0;
  if ( v1 )
  {
    v4 = *(_DWORD **)(v1 + 1144);
    v5 = *v2;
    if ( (unsigned int)v5 >= *v4 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = *a1;
        v7 = 87;
        goto LABEL_5;
      }
      return (unsigned int)-1073741811;
    }
    if ( (v4[3 * v5 + 1] & 1) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = 88;
        goto LABEL_9;
      }
      return (unsigned int)-1073741811;
    }
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= a1[7] )
      return v3;
    v9 = *(_DWORD **)(*(_QWORD *)&a1[4 * i + 10] + 1144LL);
    if ( (unsigned int)LOBYTE(a1[4 * i + 12]) >= *v9 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741811;
      v11 = 89;
      goto LABEL_26;
    }
    if ( !BYTE2(a1[4 * i + 12]) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741811;
      v11 = 90;
LABEL_26:
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v11,
        (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
        *a1,
        i);
      return (unsigned int)-1073741811;
    }
    if ( v1 )
      continue;
    v10 = *v2;
    if ( (unsigned int)v10 >= *v9 )
      break;
    if ( (v9[3 * v10 + 1] & 1) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741811;
      v7 = 93;
      goto LABEL_9;
    }
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (unsigned int)-1073741811;
  v7 = 92;
LABEL_9:
  v6 = *a1;
LABEL_5:
  LOBYTE(v3) = 2;
  WPP_RECORDER_SF_d(
    WPP_GLOBAL_Control->DeviceExtension,
    v3,
    1,
    v7,
    (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
    v6);
  return (unsigned int)-1073741811;
}
