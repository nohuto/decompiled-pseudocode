/*
 * XREFs of DmaEnabler_Create @ 0x14007ED20
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x140078FC0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_q @ 0x14002E028 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall DmaEnabler_Create(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ebx
  int v9; // edx
  int v10; // edi
  unsigned __int64 v11; // rax
  unsigned int v12; // r15d
  int v13; // edx
  __int64 v14; // rbx
  __int128 v16; // [rsp+30h] [rbp-59h] BYREF
  __int128 v17; // [rsp+40h] [rbp-49h]
  __int128 v18; // [rsp+50h] [rbp-39h]
  void *v19; // [rsp+60h] [rbp-29h]
  _QWORD v20[10]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v21; // [rsp+F8h] [rbp+6Fh] BYREF

  v21 = 0LL;
  v19 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v16) = -1;
    else
      LODWORD(v16) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v16) = 56;
  }
  v6 = *(_QWORD *)(a2 + 88);
  *((_QWORD *)&v17 + 1) = 0x100000001LL;
  v19 = off_14006AE10;
  if ( (*(_QWORD *)(*(_QWORD *)(v6 + 8) + 744LL) & 0x80000LL) != 0 )
    v7 = 0;
  else
    v7 = XilRegister_ReadUlong(v6, (unsigned int *)(*(_QWORD *)(v6 + 24) + 16LL)) & 1;
  v8 = v7 + 5;
  memset(v20, 0, sizeof(v20));
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x15 )
      LODWORD(v20[0]) = -1;
    else
      LODWORD(v20[0]) = *(_DWORD *)(WdfStructures + 168);
  }
  else
  {
    LODWORD(v20[0]) = 80;
  }
  HIDWORD(v20[0]) = v8;
  LODWORD(v20[9]) = 1;
  HIDWORD(v20[8]) = 3;
  v20[1] = 16776704LL;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int128 *, __int64 *))(WdfFunctions_01033
                                                                                                 + 752))(
          WdfDriverGlobals,
          a1,
          v20,
          &v16,
          &v21);
  if ( v10 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 3072))(
            WdfDriverGlobals,
            v21,
            0LL);
    v12 = v11;
    if ( v11 > 0xFFFE00 )
      v12 = 16776704;
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            v21,
            off_14006AE10);
    *(_QWORD *)v14 = v21;
    *(_QWORD *)(v14 + 8) = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_q(
        *(_QWORD *)(a2 + 72),
        v13,
        18,
        11,
        (__int64)&WPP_4656eba9686234bf83124d5041977f77_Traceguids,
        v21);
    }
    *(_QWORD *)(v14 + 24) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 3080))(
                              WdfDriverGlobals,
                              v21,
                              0LL);
    *(_DWORD *)(v14 + 16) = v12;
    *(_DWORD *)(v14 + 20) = (v12 >> 12) + ((v12 & 0xFFF) != 0) + 1;
    *a3 = v14;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 72), v9, 18, 10, (__int64)&WPP_4656eba9686234bf83124d5041977f77_Traceguids, v10);
  }
  return (unsigned int)v10;
}
