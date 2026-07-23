/*
 * XREFs of EtwpExecutiveResourceConfigRunDown @ 0x140835688
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A99DCC (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpExecutiveResourceConfigRunDown(__int64 a1, char a2)
{
  bool v2; // cf
  unsigned int v3; // r8d
  __int64 v4; // rdx
  _DWORD v6[4]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v7[2]; // [rsp+40h] [rbp-28h] BYREF

  v2 = a2 != 0;
  v3 = *(_DWORD *)a1;
  v4 = *(_QWORD *)(a1 + 1360);
  v6[0] = EtwpExecutiveResourceReleaseSampleRate;
  v6[1] = EtwpExecutiveResourceContentionSampleRate;
  v6[2] = EtwpExecutiveResourceTimeout;
  v7[0] = v6;
  v7[1] = 12LL;
  return EtwpLogKernelEvent((__int64)v7, v4, v3, 1u, 3918 - v2, 0x501902u);
}
