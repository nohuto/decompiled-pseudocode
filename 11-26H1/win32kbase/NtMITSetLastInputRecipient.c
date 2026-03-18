/*
 * XREFs of NtMITSetLastInputRecipient @ 0x1401E1610
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     ?Set@LastWokenThread@@YAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z @ 0x1400CFD00 (-Set@LastWokenThread@@YAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z.c)
 *     PtiFromThreadId @ 0x1401200F0 (PtiFromThreadId.c)
 */

__int64 __fastcall NtMITSetLastInputRecipient(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r9

  EnterSharedCrit(0LL, 1LL, a3, a4);
  v8 = 0LL;
  if ( IsInputThread(v6, v5, v7) )
  {
    v14 = PtiFromThreadId(a1);
    if ( v14 )
    {
      LastWokenThread::Set(v14, 1u, 0, v15);
      v8 = 1LL;
      goto LABEL_7;
    }
    v9 = 87;
  }
  else
  {
    v9 = 5;
  }
  UserSetLastError(v9);
LABEL_7:
  UserSessionSwitchLeaveCritWithNonPaged(v11, v10, v12, v13);
  return v8;
}
