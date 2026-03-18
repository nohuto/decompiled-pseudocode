/*
 * XREFs of ACPIInterruptInitialize @ 0x1400A94DC
 * Callers:
 *     ACPIInitialize @ 0x1400D7008 (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     OSInterruptVector @ 0x1400D959C (OSInterruptVector.c)
 */

__int64 __fastcall ACPIInterruptInitialize(ULONG_PTR a1)
{
  int v1; // edx
  int v2; // ebx

  if ( *((_BYTE *)AcpiInformation + 133) )
  {
    return 0;
  }
  else
  {
    v2 = OSInterruptVector(a1);
    if ( v2 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v1) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v1,
        22,
        39,
        (__int64)&WPP_a984ea3e217b3fb5c4c90658d89fa1c5_Traceguids);
    }
  }
  return (unsigned int)v2;
}
