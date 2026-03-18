/*
 * XREFs of ?InitializeWppRecorder@@YAJPEAPEAURECORDER_LOG__@@PEADK@Z @ 0x140142190
 * Callers:
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x140142028 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall InitializeWppRecorder(struct RECORDER_LOG__ **a1, char *a2)
{
  __int64 v3; // rdx
  struct RECORDER_LOG__ **v4; // rbx
  __int64 v5; // r8
  char v6; // al
  struct RECORDER_LOG__ **v7; // rax
  __int64 v9; // [rsp+20h] [rbp-40h] BYREF
  __int64 v10; // [rsp+28h] [rbp-38h]
  __int64 CurrentWin32kSessionId; // [rsp+30h] [rbp-30h]
  __int64 v12; // [rsp+38h] [rbp-28h]
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]

  v14 = 0LL;
  CurrentWin32kSessionId = 0LL;
  v12 = 0x1000000000LL;
  v3 = 16LL;
  v4 = a1;
  v10 = 0xC800000000LL;
  v9 = 56LL;
  v13 = 0LL;
  LOBYTE(v13) = 0;
  if ( a2 )
  {
    v5 = a2 - (char *)&v13;
    a1 = (struct RECORDER_LOG__ **)&v13;
    do
    {
      if ( v3 == -2147483630 )
        break;
      v6 = *((_BYTE *)a1 + v5);
      if ( !v6 )
        break;
      *(_BYTE *)a1 = v6;
      a1 = (struct RECORDER_LOG__ **)((char *)a1 + 1);
      --v3;
    }
    while ( v3 );
    v7 = (struct RECORDER_LOG__ **)((char *)a1 - 1);
    if ( v3 )
      v7 = a1;
    *(_BYTE *)v7 = 0;
  }
  LODWORD(v10) = 4096;
  v14 = 0x200000002LL;
  CurrentWin32kSessionId = (unsigned int)W32GetCurrentWin32kSessionId((__int64)a1);
  LOBYTE(v12) = 1;
  return imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v9, v4);
}
