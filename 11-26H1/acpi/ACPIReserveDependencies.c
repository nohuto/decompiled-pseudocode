/*
 * XREFs of ACPIReserveDependencies @ 0x140059F24
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x1400451BC (ACPIAddInitializationDependencies.c)
 *     ACPIConvertDependenciesToPnpReservations @ 0x140054888 (ACPIConvertDependenciesToPnpReservations.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x14002C354 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     WPP_RECORDER_SF_sL @ 0x14005A20C (WPP_RECORDER_SF_sL.c)
 */

__int64 __fastcall ACPIReserveDependencies(__int64 a1, __int64 a2)
{
  int v4; // edi
  int v5; // edx
  __int128 v7; // [rsp+40h] [rbp-18h] BYREF

  v7 = 0LL;
  v4 = ACPIAmliBuildObjectPathnameUnicode(a2, (__int64)&v7);
  AMLIDereferenceHandleEx(a2);
  if ( v4 >= 0 )
  {
    v4 = IoReserveDependency(a1, &v7, 1LL);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_sL(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      21,
      20,
      (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
      *((__int64 *)&v7 + 1),
      v4);
  }
  if ( *((_QWORD *)&v7 + 1) )
    ExFreePoolWithTag(*((PVOID *)&v7 + 1), 0x53706341u);
  return (unsigned int)v4;
}
