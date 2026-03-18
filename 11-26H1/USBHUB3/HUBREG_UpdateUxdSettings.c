/*
 * XREFs of HUBREG_UpdateUxdSettings @ 0x14008CE5C
 * Callers:
 *     HUBFDO_IoctlCyclePort @ 0x14007CB88 (HUBFDO_IoctlCyclePort.c)
 *     HUBPDO_AssignPDOIds @ 0x140080B00 (HUBPDO_AssignPDOIds.c)
 * Callees:
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 *     HUBREG_QueryGlobalUxdSettings @ 0x1400899A0 (HUBREG_QueryGlobalUxdSettings.c)
 *     HUBREG_QueryUxdDeviceKey @ 0x14008B33C (HUBREG_QueryUxdDeviceKey.c)
 *     HUBREG_QueryUxdPortKey @ 0x14008B4B8 (HUBREG_QueryUxdPortKey.c)
 */

__int64 __fastcall HUBREG_UpdateUxdSettings(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v6; // eax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rsi
  __int128 v11; // xmm1
  int v12; // eax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  _OWORD Source1[5]; // [rsp+20h] [rbp-79h] BYREF
  _OWORD Source2[5]; // [rsp+70h] [rbp-29h] BYREF

  memset(Source1, 0, 0x44uLL);
  memset(Source2, 0, 0x44uLL);
  if ( a3 )
    *a3 = 0;
  _InterlockedAnd((volatile signed __int32 *)(a2 + 1640), 0xFFFFFFFE);
  v6 = *(_DWORD *)(a2 + 1736);
  v7 = *(_OWORD *)(a2 + 1688);
  Source2[0] = *(_OWORD *)(a2 + 1672);
  v8 = *(_OWORD *)(a2 + 1704);
  LODWORD(Source2[4]) = v6;
  Source2[1] = v7;
  v9 = *(_OWORD *)(a2 + 1720);
  Source2[2] = v8;
  Source2[3] = v9;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_14006D2C0);
  if ( (int)HUBREG_QueryGlobalUxdSettings(v10) >= 0 && (*(_DWORD *)(v10 + 4) & 0x810) == 0x800 )
  {
    if ( (int)HUBREG_QueryUxdPortKey(a1, *(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 200LL), Source1) >= 0
      || (memset(Source1, 0, 0x44uLL), (int)HUBREG_QueryUxdDeviceKey(a2, (__int64)Source1) >= 0) )
    {
      _InterlockedOr((volatile signed __int32 *)(a2 + 1640), 1u);
      _InterlockedOr((volatile signed __int32 *)(a2 + 1648), 4u);
    }
    v11 = Source1[1];
    v12 = Source1[4];
    *(_OWORD *)(a2 + 1672) = Source1[0];
    v13 = Source1[2];
    *(_OWORD *)(a2 + 1688) = v11;
    v14 = Source1[3];
    *(_OWORD *)(a2 + 1704) = v13;
    *(_OWORD *)(a2 + 1720) = v14;
    *(_DWORD *)(a2 + 1736) = v12;
    if ( a3 && RtlCompareMemory(Source1, Source2, 0x44uLL) != 68 && (*(_DWORD *)(a2 + 1640) & 2) == 0 )
      *a3 = 1;
  }
  return 0LL;
}
