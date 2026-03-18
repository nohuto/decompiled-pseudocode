/*
 * XREFs of CheckDpcWatchdogTimerExpireSoon @ 0x140006AC0
 * Callers:
 *     ControllerReset @ 0x140007840 (ControllerReset.c)
 *     NVMeCompletionDpcRoutine @ 0x1400096D0 (NVMeCompletionDpcRoutine.c)
 *     NvmSubsystemReset @ 0x140019374 (NvmSubsystemReset.c)
 * Callees:
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 */

bool __fastcall CheckDpcWatchdogTimerExpireSoon(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  bool v6; // dl
  _BYTE v8[8]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+28h] [rbp-30h] BYREF
  int v10; // [rsp+38h] [rbp-20h]

  if ( a2 || (v8[0] = 0, StorPortExtendedFunction(109LL, a1, v8, a4), v8[0] == 2) )
  {
    v10 = 0;
    v9 = 0LL;
    v5 = StorPortExtendedFunction(106LL, a1, &v9, a4);
    v6 = 1;
    if ( !v5 )
    {
      if ( DWORD2(v9) )
        v6 = 100 * HIDWORD(v9) >= (unsigned int)(5 * DWORD2(v9));
      if ( (_DWORD)v9 && 100 * DWORD1(v9) < (unsigned int)(5 * v9) )
        v6 = 0;
    }
  }
  else
  {
    v6 = 1;
  }
  return !v6;
}
