/*
 * XREFs of KiIntRedirectQueueRequestOnProcessor @ 0x1402F8398
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14032F7F0 (KiCallInterruptServiceRoutine.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x1402F95B0 (HalRequestIpiSpecifyVector.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiIntRedirectQueueRequestOnProcessor(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  ULONG_PTR v3; // rbx
  unsigned int v4; // r9d
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // [rsp+30h] [rbp-128h] BYREF
  _QWORD v10[33]; // [rsp+38h] [rbp-120h] BYREF

  v3 = (unsigned int)BugCheckParameter3;
  memset_0(v10, 0, 0x100uLL);
  v9 = 2097153LL;
  memset_0(v10, 0, 0x100uLL);
  v4 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v3) & 0x3F;
  v5 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v3) >> 6;
  if ( !(_DWORD)v5 )
    goto LABEL_2;
  if ( WORD1(v9) > (unsigned int)v5 )
  {
    LOWORD(v9) = v5 + 1;
LABEL_2:
    v6 = (unsigned int)v5;
    v7 = v10[v5];
    _bittestandset64(&v7, v4);
    v10[v6] = v7;
  }
  result = HalRequestIpiSpecifyVector(0LL, &v9, a2);
  if ( (int)result < 0 )
    KeBugCheckEx(0xA0u, 0x4001uLL, 0x103uLL, v3, (int)result);
  return result;
}
