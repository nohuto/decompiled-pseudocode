/*
 * XREFs of ValidateAcpiIdleDomain @ 0x140027F1C
 * Callers:
 *     InitAcpiIdleDomain @ 0x140040448 (InitAcpiIdleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_SDD @ 0x14000A364 (WPP_RECORDER_SF_SDD.c)
 *     WPP_RECORDER_SF_SDDD @ 0x14000BAC8 (WPP_RECORDER_SF_SDDD.c)
 */

__int64 __fastcall ValidateAcpiIdleDomain(unsigned int *a1, __int64 i, const wchar_t *a3)
{
  unsigned int v3; // edi
  unsigned int v4; // r9d
  unsigned int v5; // r10d
  unsigned int *v6; // rsi
  unsigned int v8; // ecx
  __int64 v9; // rdx
  unsigned __int16 v10; // r9
  int v12; // [rsp+20h] [rbp-38h]

  v3 = *a1;
  v4 = 0;
  v5 = 0;
  v6 = (unsigned int *)i;
  while ( 1 )
  {
    if ( v5 >= v3 )
      return v4;
    v8 = a1[6 * v5 + 1];
    if ( v8 != 6 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741823;
      v10 = 20;
      goto LABEL_25;
    }
    if ( a1[6 * v5 + 4] != 254 )
      break;
    v8 = a1[6 * v5 + 5];
    if ( v8 > 0x800 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741823;
      v10 = 22;
LABEL_25:
      WPP_RECORDER_SF_SDD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        i,
        (__int64)a3,
        v10,
        (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
        a3,
        v5,
        v8);
      return (unsigned int)-1073741823;
    }
    if ( !v8 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 23;
        goto LABEL_25;
      }
      return (unsigned int)-1073741823;
    }
    v9 = *v6;
    if ( a1[6 * v5 + 6] >= (unsigned int)v9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_SDDD((__int64)WPP_GLOBAL_Control->DeviceExtension, v9, (__int64)a3, 0LL, v12, a3);
      return (unsigned int)-1073741823;
    }
    for ( i = 0LL; (unsigned int)i < v3; i = (unsigned int)(i + 1) )
    {
      if ( v5 != (_DWORD)i && a1[6 * v5 + 6] == a1[6 * (unsigned int)i + 6] )
        return (unsigned int)-1073741637;
    }
    ++v5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_SDD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      i,
      (__int64)a3,
      0x15u,
      (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
      a3,
      v5,
      a1[6 * v5 + 4]);
  return (unsigned int)-1073741637;
}
