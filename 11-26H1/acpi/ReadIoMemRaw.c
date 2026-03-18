/*
 * XREFs of ReadIoMemRaw @ 0x14003BAB4
 * Callers:
 *     AcpiPccWriteRegister @ 0x14004DB5C (AcpiPccWriteRegister.c)
 *     AcpiPccReadRegister @ 0x140051844 (AcpiPccReadRegister.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x14001E4A0 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall ReadIoMemRaw(unsigned __int8 *a1, int a2, int a3)
{
  __int64 v3; // rbx
  int v6; // r9d

  v3 = 0LL;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      switch ( a3 )
      {
        case 8:
          return __inbyte((unsigned __int16)a1);
        case 16:
          return __inword((unsigned __int16)a1);
        case 32:
          return __indword((unsigned __int16)a1);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = 12;
LABEL_19:
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          a2,
          21,
          v6,
          (__int64)&WPP_cc72d47764df3397336cff0a641bfca0_Traceguids,
          a3);
      }
    }
  }
  else
  {
    switch ( a3 )
    {
      case 64:
        return *(_QWORD *)a1;
      case 8:
        return *a1;
      case 16:
        return *(unsigned __int16 *)a1;
      case 32:
        return *(unsigned int *)a1;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 13;
      goto LABEL_19;
    }
  }
  return v3;
}
