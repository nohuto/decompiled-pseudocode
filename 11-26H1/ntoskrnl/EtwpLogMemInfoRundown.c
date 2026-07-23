/*
 * XREFs of EtwpLogMemInfoRundown @ 0x140835768
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A99DCC (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogMemInfo @ 0x14034A4BC (EtwpLogMemInfo.c)
 *     MmQuerySystemMemoryInformation @ 0x1404C6990 (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpLogMemInfoWs @ 0x1409BBBE8 (EtwpLogMemInfoWs.c)
 */

__int64 __fastcall EtwpLogMemInfoRundown(__int64 a1)
{
  _OWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v3, 0, sizeof(v3));
  MmQuerySystemMemoryInformation((_KPROCESS **)v3);
  EtwpLogMemInfo(a1, (__int64)v3);
  return EtwpLogMemInfoWs(a1, *(_QWORD *)&v3[0]);
}
