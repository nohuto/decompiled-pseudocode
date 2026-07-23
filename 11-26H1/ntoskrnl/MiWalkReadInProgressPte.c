/*
 * XREFs of MiWalkReadInProgressPte @ 0x14070A398
 * Callers:
 *     MiWalkEntireSubsection @ 0x14031D3A0 (MiWalkEntireSubsection.c)
 * Callees:
 *     MiInitializePageFaultPacket @ 0x14033B3D0 (MiInitializePageFaultPacket.c)
 *     MiDeleteTransitionPte @ 0x140340870 (MiDeleteTransitionPte.c)
 *     MiWaitForCollidedFaultComplete @ 0x14038D338 (MiWaitForCollidedFaultComplete.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiWalkReadInProgressPte(_QWORD **a1, __int64 a2, ULONG_PTR a3, char a4)
{
  int v8; // eax
  struct _KLOCK_ENTRIES *v10; // r9
  int v11[4]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v12[20]; // [rsp+40h] [rbp-C8h] BYREF

  memset_0(v12, 0, 0x98uLL);
  v8 = *((_DWORD *)*a1 + 6);
  if ( (v8 & 1) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  if ( (v8 & 0x10) != 0 && (*(_DWORD *)(*a1[1] + 56LL) & 2) == 0 )
  {
    MiDeleteTransitionPte(*(_QWORD *)(a3 + 8) | 0x8000000000000000uLL, a3, 0x11u, 0);
    return 0LL;
  }
  MiInitializePageFaultPacket(0LL, 0LL, 0, 0LL, 0LL, (__int64)v12);
  v11[0] = 1;
  LOBYTE(v10) = a4;
  MiWaitForCollidedFaultComplete(v12, a3, a2, v10, v11);
  return 3221226029LL;
}
