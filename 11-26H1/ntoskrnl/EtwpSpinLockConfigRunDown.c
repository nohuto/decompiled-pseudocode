/*
 * XREFs of EtwpSpinLockConfigRunDown @ 0x14083610C
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A99DCC (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpSpinLockConfigRunDown(__int64 a1, char a2)
{
  bool v2; // cf
  unsigned int v3; // r8d
  __int64 v4; // rdx
  _DWORD v6[4]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v7[2]; // [rsp+40h] [rbp-28h] BYREF

  v2 = a2 != 0;
  v3 = *(_DWORD *)a1;
  v4 = *(_QWORD *)(a1 + 1360);
  v6[0] = EtwpSpinLockSpinThreshold;
  v6[2] = EtwpSpinLockAcquireSampleRate;
  v6[1] = EtwpSpinLockContentionSampleRate;
  v6[3] = EtwpSpinLockHoldThreshold;
  v7[0] = v6;
  v7[1] = 16LL;
  return EtwpLogKernelEvent((__int64)v7, v4, v3, 1u, 3916 - v2, 0x601903u);
}
