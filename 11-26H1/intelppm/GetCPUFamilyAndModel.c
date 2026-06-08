/*
 * XREFs of GetCPUFamilyAndModel @ 0x140049008
 * Callers:
 *     PctGetIntelEsuType @ 0x14000523C (PctGetIntelEsuType.c)
 *     IsShortQosHysteresisTargetCpu @ 0x140006C00 (IsShortQosHysteresisTargetCpu.c)
 *     IsTargettedCpuForQosExperiment_Intel @ 0x140006C7C (IsTargettedCpuForQosExperiment_Intel.c)
 *     IsNonwrappingACountMCountSupported @ 0x14002AF9C (IsNonwrappingACountMCountSupported.c)
 *     GetHwDebugRegisters @ 0x14002B1D0 (GetHwDebugRegisters.c)
 *     QueryPPMForRegisterList @ 0x140047730 (QueryPPMForRegisterList.c)
 * Callees:
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x140010330 (GetCpuIdInfo.c)
 */

char __fastcall GetCPUFamilyAndModel(_WORD *a1, _BYTE *a2)
{
  unsigned int v4; // r8d
  unsigned int v5; // r9d
  __int16 v6; // cx
  char result; // al
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  v8 = 0LL;
  GetCpuIdInfo(1u, &v8);
  v4 = v8;
  v5 = ((unsigned int)v8 >> 8) & 0xF;
  v6 = ((unsigned int)v8 >> 8) & 0xF;
  *a1 = v6;
  if ( v5 == 15 )
    *a1 = v6 + (unsigned __int8)(v4 >> 20);
  result = (v4 >> 4) & 0xF;
  *a2 = result;
  if ( v5 == 15 || v5 == 6 )
    *a2 = result + 16 * BYTE2(v4);
  return result;
}
