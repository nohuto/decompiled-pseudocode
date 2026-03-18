/*
 * XREFs of ACPIConvertDependenciesToPnpReservations @ 0x140054888
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x1400451BC (ACPIAddInitializationDependencies.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x14001B500 (AMLIGetNameSpaceObject.c)
 *     ACPIReserveDependencies @ 0x140059F24 (ACPIReserveDependencies.c)
 *     WPP_RECORDER_SF_sL @ 0x14005A20C (WPP_RECORDER_SF_sL.c)
 */

__int64 __fastcall ACPIConvertDependenciesToPnpReservations(__int64 a1, __int64 *a2, __int64 a3)
{
  int v3; // ebx
  unsigned int v7; // edi
  unsigned int v8; // ebp
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // edx
  int v13; // r9d
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  v15 = 0LL;
  v7 = 0;
  v8 = **(_DWORD **)(a3 + 32);
  while ( v7 < v8 )
  {
    v9 = *(_QWORD *)(a3 + 32);
    v10 = v7 + 1LL;
    v11 = 5 * v10;
    v3 = AMLIGetNameSpaceObject(*(_BYTE **)(v9 + 40 * v10), a2, &v15, 0);
    if ( v3 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v3;
      v13 = 21;
      goto LABEL_10;
    }
    v3 = ACPIReserveDependencies(a1);
    if ( v3 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v3;
      v13 = 22;
LABEL_10:
      WPP_RECORDER_SF_sL(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        21,
        v13,
        (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
        *(_QWORD *)(v9 + 8 * v11),
        v3);
      return (unsigned int)v3;
    }
    ++v7;
  }
  return (unsigned int)v3;
}
