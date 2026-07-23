/*
 * XREFs of KdpReportExceptionStateChange @ 0x140C1CF4C
 * Callers:
 *     KdpReport @ 0x14050255C (KdpReport.c)
 *     KiFreezeTargetExecution @ 0x1405F8810 (KiFreezeTargetExecution.c)
 * Callees:
 *     KdpSetCommonState @ 0x140503B74 (KdpSetCommonState.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KdpQuickMoveMemory @ 0x140C1816C (KdpQuickMoveMemory.c)
 *     KdpSendWaitContinue @ 0x140C1D038 (KdpSendWaitContinue.c)
 *     KdpSetContextState @ 0x140C1D4E8 (KdpSetContextState.c)
 */

__int64 __fastcall KdpReportExceptionStateChange(unsigned __int64 Src, __int64 a2, char a3)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v9; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v10[32]; // [rsp+40h] [rbp-C0h] BYREF
  char v11[152]; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v12; // [rsp+F8h] [rbp-8h]

  v9 = 0LL;
  v8 = 0LL;
  memset_0(v10, 0, 0xF0uLL);
  do
  {
    KdpSetCommonState(12336, a2, (__int64)v10);
    KdpQuickMoveMemory(v11, Src, 152);
    v12 = a3 == 0;
    KdpSetContextState(v10, a2);
    LOWORD(v8) = 240;
    *((_QWORD *)&v8 + 1) = v10;
    LOWORD(v9) = 0;
    result = KdpSendWaitContinue(v6, &v8, &v9, a2);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
