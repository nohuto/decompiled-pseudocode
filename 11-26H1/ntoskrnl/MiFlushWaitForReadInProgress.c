/*
 * XREFs of MiFlushWaitForReadInProgress @ 0x1403398B8
 * Callers:
 *     MiFlushSubsection @ 0x1403CB290 (MiFlushSubsection.c)
 * Callees:
 *     MiInitializePageFaultPacket @ 0x14033B3D0 (MiInitializePageFaultPacket.c)
 *     MiWaitForCollidedFaultComplete @ 0x14038D338 (MiWaitForCollidedFaultComplete.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiFlushWaitForReadInProgress(int a1, int a2, char a3)
{
  _DWORD *v6; // r9
  _DWORD v8[4]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v9[160]; // [rsp+40h] [rbp-C8h] BYREF

  memset_0(v9, 0, 0x98uLL);
  v8[0] = 1;
  MiInitializePageFaultPacket(0, 0, 0, 0, 0LL, (__int64)v9);
  v6 = v8;
  LOBYTE(v6) = a3;
  return MiWaitForCollidedFaultComplete((unsigned int)v9, a1, a2, (_DWORD)v6, (__int64)v8);
}
