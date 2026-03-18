/*
 * XREFs of PopAdaptiveGetRemoteSessionState @ 0x140A3D890
 * Callers:
 *     PopAdaptiveGetSessionStateUnsafe @ 0x140A3D93C (PopAdaptiveGetSessionStateUnsafe.c)
 * Callees:
 *     PopSetSessionUserStatus @ 0x140A3E39C (PopSetSessionUserStatus.c)
 */

__int64 __fastcall PopAdaptiveGetRemoteSessionState(unsigned int a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5)
{
  char v5; // r10
  __int64 v6; // rdx

  *a4 = 256;
  v5 = 0;
  *(_QWORD *)a3 = 0LL;
  *a5 = 256;
  if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                        - *(_QWORD *)a2)
     / 0x3E8 >= LODWORD(PopAdaptiveStandbyLock.UserWaitTime)
    && LODWORD(PopAdaptiveStandbyLock.UserWaitTime)
    || !*(_DWORD *)(a2 + 24) )
  {
    *(_DWORD *)(a3 + 8) = 0;
    v6 = 2LL;
    v5 = 1;
  }
  else
  {
    v6 = 0LL;
    *(_DWORD *)(a3 + 8) = PopAdaptiveStandbyLock.UserWaitTime;
  }
  *(_BYTE *)(a3 + 12) = v5;
  return PopSetSessionUserStatus(a1, v6);
}
