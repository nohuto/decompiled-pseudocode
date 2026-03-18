/*
 * XREFs of WriteIoMemRaw @ 0x14003FA48
 * Callers:
 *     AcpiPccWriteRegister @ 0x14004DB5C (AcpiPccWriteRegister.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x14001E4A0 (WPP_RECORDER_SF_D.c)
 */

char __fastcall WriteIoMemRaw(_BYTE *a1, int a2, int a3, __int64 a4)
{
  _UNKNOWN **v4; // rax
  int v5; // r9d
  signed __int32 v7[8]; // [rsp+0h] [rbp-38h] BYREF

  LOBYTE(v4) = 0;
  if ( !a2 )
  {
    switch ( a3 )
    {
      case 8:
        *a1 = a4;
        break;
      case 16:
        *(_WORD *)a1 = a4;
        break;
      case 32:
        *(_DWORD *)a1 = a4;
        break;
      case 64:
        *(_QWORD *)a1 = a4;
        break;
      default:
        v4 = &WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (char)v4;
        v5 = 15;
        goto LABEL_18;
    }
    _InterlockedOr(v7, 0);
    return (char)v4;
  }
  if ( a2 != 1 )
    return (char)v4;
  if ( a3 != 8 )
  {
    if ( a3 == 16 )
    {
      LOBYTE(v4) = a4;
      __outword((unsigned __int16)a1, a4);
      return (char)v4;
    }
    if ( a3 == 32 )
    {
      LOBYTE(v4) = a4;
      __outdword((unsigned __int16)a1, a4);
      return (char)v4;
    }
    v4 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (char)v4;
    v5 = 14;
LABEL_18:
    LOBYTE(a2) = 2;
    LOBYTE(v4) = WPP_RECORDER_SF_D(
                   WPP_GLOBAL_Control->DeviceExtension,
                   a2,
                   21,
                   v5,
                   (__int64)&WPP_cc72d47764df3397336cff0a641bfca0_Traceguids,
                   a3);
    return (char)v4;
  }
  LOBYTE(v4) = a4;
  __outbyte((unsigned __int16)a1, a4);
  return (char)v4;
}
