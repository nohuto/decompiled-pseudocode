/*
 * XREFs of AcpiValidatePepDeviceControlResources @ 0x1400B53A4
 * Callers:
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1400B51C0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_Dd @ 0x140066898 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_iiid @ 0x140066A50 (WPP_RECORDER_SF_iiid.c)
 *     AMLICheckIfIoRangeValid @ 0x14006C298 (AMLICheckIfIoRangeValid.c)
 *     AMLIValidateFirmwareMemoryAddress @ 0x14006C5BC (AMLIValidateFirmwareMemoryAddress.c)
 */

__int64 __fastcall AcpiValidatePepDeviceControlResources(_DWORD *a1, unsigned __int64 a2, __int64 a3, int a4)
{
  bool v4; // zf
  int v6; // ebx
  int v7; // edi
  _DWORD *v8; // r10
  ULONGLONG v9; // rsi
  unsigned __int16 v10; // r9
  ULONGLONG v11; // rax
  int v13; // [rsp+20h] [rbp-40h]
  unsigned __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v15; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 MaximumAddress; // [rsp+A8h] [rbp+48h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+B0h] [rbp+50h] BYREF
  unsigned __int64 v18; // [rsp+B8h] [rbp+58h] BYREF

  v4 = *a1 == 0;
  v14 = 0LL;
  v6 = -1073741823;
  v18 = 0LL;
  MaximumAddress = 0LL;
  MinimumAddress = 0LL;
  if ( v4 || !a1[9] )
    return (unsigned int)v6;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = &a1[8 * v7];
    if ( *((_BYTE *)v8 + 41) == 1 )
    {
      v11 = RtlIoDecodeMemIoResource((PIO_RESOURCE_DESCRIPTOR)(v8 + 10), 0LL, &v18, &v14);
      if ( v11 + v18 - 1 != v14 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741823;
        v10 = 33;
        goto LABEL_31;
      }
      if ( !AMLICheckIfIoRangeValid(v18, v11) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741823;
        v10 = 35;
        goto LABEL_31;
      }
      goto LABEL_18;
    }
    if ( *((_BYTE *)v8 + 41) == 2 )
      break;
    if ( *((_BYTE *)v8 + 41) != 3 )
    {
      if ( *((_BYTE *)v8 + 41) == 5 )
        goto LABEL_10;
      if ( *((_BYTE *)v8 + 41) != 7 )
      {
        if ( *((unsigned __int8 *)v8 + 41) != 132 )
          return (unsigned int)-1073741637;
LABEL_10:
        v6 = 0;
        goto LABEL_18;
      }
    }
    v9 = RtlIoDecodeMemIoResource((PIO_RESOURCE_DESCRIPTOR)(v8 + 10), 0LL, &MinimumAddress, &MaximumAddress);
    a2 = MaximumAddress;
    if ( v9 + MinimumAddress - 1 != MaximumAddress )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741823;
      v10 = 36;
      goto LABEL_31;
    }
    if ( v9 > 0xFFFFFFFF )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741823;
      v10 = 37;
      goto LABEL_31;
    }
    v15 = MinimumAddress;
    v6 = AMLIValidateFirmwareMemoryAddress((const void **)&v15, v9);
    if ( v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741823;
      v10 = 39;
LABEL_31:
      WPP_RECORDER_SF_iiid((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, v10, v13);
      return (unsigned int)-1073741823;
    }
LABEL_18:
    if ( (unsigned int)++v7 >= a1[9] )
      return (unsigned int)v6;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dd(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
  return (unsigned int)-1073741823;
}
