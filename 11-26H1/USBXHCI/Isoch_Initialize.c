/*
 * XREFs of Isoch_Initialize @ 0x140081380
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Isoch_CalculatePacketsPerFrame @ 0x140035F7C (Isoch_CalculatePacketsPerFrame.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Isoch_Initialize(__int64 a1)
{
  int v2; // edx
  int v3; // ebx
  __int128 v5; // [rsp+30h] [rbp-9h] BYREF
  __int128 v6; // [rsp+40h] [rbp+7h]
  __int64 v7; // [rsp+50h] [rbp+17h]
  __int128 v8; // [rsp+58h] [rbp+1Fh] BYREF
  __int128 v9; // [rsp+68h] [rbp+2Fh]
  __int128 v10; // [rsp+78h] [rbp+3Fh]
  __int64 v11; // [rsp+88h] [rbp+4Fh]

  DWORD1(v8) = 0;
  *(_QWORD *)(a1 + 400) = a1 + 392;
  *(_QWORD *)(a1 + 392) = a1 + 392;
  *(_QWORD *)(a1 + 416) = a1 + 408;
  *(_QWORD *)(a1 + 408) = a1 + 408;
  *(_QWORD *)(a1 + 432) = a1 + 424;
  *(_QWORD *)(a1 + 424) = a1 + 424;
  *(_DWORD *)(a1 + 364) = Isoch_CalculatePacketsPerFrame(a1);
  v7 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x37 )
      LODWORD(v5) = -1;
    else
      LODWORD(v5) = *(_DWORD *)(WdfStructures + 440);
  }
  else
  {
    LODWORD(v5) = 40;
  }
  LODWORD(v6) = 0;
  *((_QWORD *)&v5 + 1) = Isoch_WdfEvtRingEmptyTimer;
  BYTE4(v6) = 1;
  DWORD2(v6) = 0;
  v11 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v8) = -1;
    else
      LODWORD(v8) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v8) = 56;
  }
  *(_QWORD *)&v10 = *(_QWORD *)(a1 + 72);
  *((_QWORD *)&v9 + 1) = 0x100000001LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 2544))(
         WdfDriverGlobals,
         &v5,
         &v8,
         a1 + 328);
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v2,
        14,
        10,
        (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
        v3);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v3;
}
