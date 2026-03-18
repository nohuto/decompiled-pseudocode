/*
 * XREFs of NtUserfnINWPARAMCHAR @ 0x1402059C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     RtlMBMessageWParamCharToWCS @ 0x14022458C (RtlMBMessageWParamCharToWCS.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnINWPARAMCHAR(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6, int a7)
{
  unsigned int v8; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  v8 = a2;
  PtiCurrent(a1, a2);
  if ( a7 )
  {
    if ( v8 == 47 || v8 == 288 )
    {
      v14[0] = (unsigned __int16)v15;
      RtlMBMessageWParamCharToWCS(v8, v14);
      v11 = WORD1(v15) << 16;
      v15 = (int)(v11 | LOWORD(v14[0]));
    }
    else
    {
      RtlMBMessageWParamCharToWCS(v8, &v15);
    }
  }
  UserSessionState = W32GetUserSessionState(v11, v10);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(UserSessionState
                                                                               + 8LL * ((a6 + 6) & 0x1F)
                                                                               + 70920))(
           a1,
           v8,
           v15,
           a4,
           a5);
}
