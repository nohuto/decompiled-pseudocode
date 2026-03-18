/*
 * XREFs of ?CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEBA?AU1@AEBU1@@Z @ 0x1400D6350
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400D5DF8 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(_DWORD *a1, __int64 a2, unsigned int *a3)
{
  __int64 UserSessionState; // rax
  unsigned int v7; // r9d
  unsigned int v8; // r10d
  unsigned __int64 v9; // rdx
  unsigned int v10; // edx

  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, (_DWORD)a3);
  v7 = *a3;
  *(_QWORD *)a2 = 0LL;
  v8 = *a1 - v7;
  if ( *a1 >= v7 )
    goto LABEL_5;
  v9 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
     - *(_QWORD *)(*(_QWORD *)(UserSessionState + 18952) + 64LL);
  if ( v9 > 0xFFFFFFFF )
    LODWORD(v9) = -1;
  if ( v8 <= (unsigned int)v9 )
LABEL_5:
    *(_DWORD *)a2 = v8;
  v10 = a3[1] & 0x7FFFFFFF;
  if ( (a1[1] & 0x7FFFFFFFu) > v10 )
    *(_DWORD *)(a2 + 4) = (a1[1] - v10) & 0x7FFFFFFF;
  return a2;
}
