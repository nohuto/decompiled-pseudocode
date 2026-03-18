/*
 * XREFs of NtCreateProfile @ 0x1408425B0
 * Callers:
 *     DifNtCreateProfileWrapper @ 0x140673070 (DifNtCreateProfileWrapper.c)
 * Callees:
 *     KeQueryGroupAffinity @ 0x14049AF50 (KeQueryGroupAffinity.c)
 *     KeQueryPrimaryGroupThread @ 0x1404BE49C (KeQueryPrimaryGroupThread.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ExpProfileCreate @ 0x140842064 (ExpProfileCreate.c)
 */

__int64 __fastcall NtCreateProfile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        volatile void *a6,
        unsigned int a7,
        int a8,
        __int64 a9)
{
  USHORT PrimaryGroupThread; // ax

  PrimaryGroupThread = KeQueryPrimaryGroupThread((__int64)KeGetCurrentThread());
  if ( a9 == -1 )
    KeQueryGroupAffinity(PrimaryGroupThread);
  return ExpProfileCreate(a1, a2, a3, a4, a5, a6, a7, a8);
}
