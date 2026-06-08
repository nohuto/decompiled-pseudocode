/*
 * XREFs of ValidatePlatformIdleState @ 0x1400437F8
 * Callers:
 *     RegisterKernelPlatformStates @ 0x1400398E4 (RegisterKernelPlatformStates.c)
 *     UpdateKernelPlatformStates @ 0x14003FDCC (UpdateKernelPlatformStates.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x140003AC0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x14000554C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall ValidatePlatformIdleState(int *a1)
{
  __int64 v1; // r9
  unsigned __int8 *v2; // rbx
  unsigned int v3; // edx
  unsigned int i; // r11d
  _DWORD *v5; // r14
  __int64 v6; // rax
  _DWORD *v8; // r11
  __int64 v9; // rax
  int v10; // eax
  unsigned __int16 v11; // r9
  unsigned __int16 v12; // r9

  v1 = *((_QWORD *)a1 + 1);
  v2 = (unsigned __int8 *)(a1 + 4);
  v3 = 0;
  if ( !v1 )
  {
LABEL_2:
    for ( i = 0; ; ++i )
    {
      if ( i >= a1[7] )
        return v3;
      v5 = *(_DWORD **)(*(_QWORD *)&a1[4 * i + 10] + 1144LL);
      if ( (unsigned int)LOBYTE(a1[4 * i + 12]) >= *v5 )
        break;
      if ( !BYTE2(a1[4 * i + 12]) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741811;
        v12 = 90;
        goto LABEL_28;
      }
      if ( !v1 )
      {
        v6 = *v2;
        if ( (unsigned int)v6 >= *v5 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (unsigned int)-1073741811;
          v11 = 92;
LABEL_16:
          v10 = *a1;
LABEL_17:
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            v11,
            (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
            v10);
          return (unsigned int)-1073741811;
        }
        if ( (v5[3 * v6 + 1] & 1) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (unsigned int)-1073741811;
          v11 = 93;
          goto LABEL_16;
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v12 = 89;
LABEL_28:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v12,
      (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
      *a1,
      i);
    return (unsigned int)-1073741811;
  }
  v8 = *(_DWORD **)(v1 + 1144);
  v9 = *v2;
  if ( (unsigned int)v9 < *v8 )
  {
    if ( (v8[3 * v9 + 1] & 1) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = 88;
        goto LABEL_16;
      }
      return (unsigned int)-1073741811;
    }
    goto LABEL_2;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = *a1;
    v11 = 87;
    goto LABEL_17;
  }
  return (unsigned int)-1073741811;
}
