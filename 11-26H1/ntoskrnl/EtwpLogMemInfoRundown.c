/*
 * XREFs of EtwpLogMemInfoRundown @ 0x14082F528
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A70518 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogMemInfo @ 0x14034843C (EtwpLogMemInfo.c)
 *     MmQuerySystemMemoryInformation @ 0x1404CD1F0 (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     EtwpLogMemInfoWs @ 0x14096E598 (EtwpLogMemInfoWs.c)
 */

__int64 __fastcall EtwpLogMemInfoRundown(__int64 a1)
{
  _OWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v3, 0, sizeof(v3));
  MmQuerySystemMemoryInformation((_KPROCESS **)v3);
  EtwpLogMemInfo(a1, (__int64)v3);
  return EtwpLogMemInfoWs(a1, *(_QWORD *)&v3[0]);
}
