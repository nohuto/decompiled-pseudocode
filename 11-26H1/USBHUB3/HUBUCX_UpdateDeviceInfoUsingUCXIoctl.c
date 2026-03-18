/*
 * XREFs of HUBUCX_UpdateDeviceInfoUsingUCXIoctl @ 0x140029944
 * Callers:
 *     HUBDSM_UpdatingDeviceInformationInEnum @ 0x140024F50 (HUBDSM_UpdatingDeviceInformationInEnum.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_ComputeUsb20HardwareLpmParameters @ 0x140026478 (HUBUCX_ComputeUsb20HardwareLpmParameters.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x140028CF4 (HUBUCX_SubmitUcxIoctl.c)
 *     HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice @ 0x14002E7F0 (HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 */

__int64 __fastcall HUBUCX_UpdateDeviceInfoUsingUCXIoctl(__int64 *a1)
{
  __int64 v2; // rbx
  _DWORD *v3; // rsi
  unsigned int v4; // r8d
  __int64 v5; // rax
  int v6; // eax
  __int64 result; // rax
  int v8; // [rsp+28h] [rbp-10h]

  v2 = *a1;
  v3 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   a1[55],
                   0LL);
  memset(v3, 0, 0x48uLL);
  v3[6] |= 0xBu;
  v4 = v3[6] & 0xFFFFFFFB;
  if ( (*(_BYTE *)(v2 + 2512) & 4) == 0 )
    v4 = v3[6] | 4;
  v3[6] = v4;
  if ( (*((_DWORD *)a1 + 413) & 0x400) != 0 )
    v3[6] = v4 | 0x10;
  *v3 = 72;
  *((_QWORD *)v3 + 1) = *(_QWORD *)(*a1 + 248);
  *((_QWORD *)v3 + 2) = a1[3];
  *((_QWORD *)v3 + 4) = (char *)a1 + 1996;
  *((_QWORD *)v3 + 5) = a1[258];
  v5 = a1[1];
  *((_DWORD *)a1 + 683) = 1;
  if ( (*(_DWORD *)(v5 + 204) & 0x800) != 0 )
  {
    *((_DWORD *)a1 + 683) = 4;
    v3[6] |= 0x80u;
  }
  if ( (unsigned int)HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice(a1) == 4089 )
    v6 = *((unsigned __int16 *)a1 + 1106);
  else
    v6 = 0;
  v3[12] = v6;
  if ( (a1[205] & 2) != 0 )
    *((_BYTE *)v3 + 52) = 1;
  HUBUCX_ComputeUsb20HardwareLpmParameters((__int64)a1, (__int64)v3);
  if ( (*((_DWORD *)a1 + 618) & 0x80u) != 0 && (a1[205] & 0x22) == 0x20 && *(_DWORD *)(a1[1] + 208) == 512 )
  {
    v3[6] |= 0x40u;
    if ( *(_BYTE *)(*a1 + 240) )
      *((_WORD *)v3 + 32) = 20;
    else
      *((_WORD *)v3 + 32) = *(unsigned __int8 *)(a1[314] + 5);
  }
  result = HUBUCX_SubmitUcxIoctl(a1, 0x491023u);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 1432),
             2u,
             5u,
             0x21u,
             (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids,
             v8);
  }
  return result;
}
