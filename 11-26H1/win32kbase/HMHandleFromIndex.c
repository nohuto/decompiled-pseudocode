/*
 * XREFs of HMHandleFromIndex @ 0x1400952F8
 * Callers:
 *     HMCreateHandleForObject @ 0x140095100 (HMCreateHandleForObject.c)
 *     HMAllocObjectEx @ 0x14011DE20 (HMAllocObjectEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMHandleFromIndex(__int64 a1, int a2, int a3)
{
  __int64 UserSessionState; // rbx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ecx

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v8 = *(unsigned int *)(W32GetUserSessionState(v6, v5, v7) + 19928);
  v9 = *(_QWORD *)(UserSessionState + 19920);
  v10 = a1 * v8;
  v11 = a1 | (*(unsigned __int16 *)(v9 + v10 + 26) << 16) | 0x80000000;
  if ( *(char *)(v9 + v10 + 25) >= 0 )
    return (int)(a1 | (*(unsigned __int16 *)(v9 + v10 + 26) << 16));
  return v11;
}
