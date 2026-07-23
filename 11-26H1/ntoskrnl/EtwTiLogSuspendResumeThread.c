/*
 * XREFs of EtwTiLogSuspendResumeThread @ 0x140AAD018
 * Callers:
 *     PsMultiResumeThread @ 0x1404F76A8 (PsMultiResumeThread.c)
 *     PspSuspendThread @ 0x140949620 (PspSuspendThread.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     EtwProviderEnabled @ 0x140257D70 (EtwProviderEnabled.c)
 *     EtwpTiFillProcessIdentity @ 0x140259590 (EtwpTiFillProcessIdentity.c)
 *     EtwpTiFillThreadIdentity @ 0x14049BCE8 (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall EtwTiLogSuspendResumeThread(int a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7; // r15
  const EVENT_DESCRIPTOR *v8; // rbx
  int v9; // eax
  int v10; // eax
  int v11; // r8d
  int v12; // eax
  int v13; // r9d
  int v14; // eax
  int v15; // r8d
  unsigned __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v19[32]; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+190h] [rbp+90h] BYREF

  if ( a1 >= 0 )
  {
    v20 = a1;
    if ( KeGetCurrentThread()->PreviousMode == 1 )
    {
      if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x300000uLL) )
      {
        v7 = *(_QWORD *)(a2 + 544);
        v8 = (const EVENT_DESCRIPTOR *)THREATINT_SUSPEND_THREAD;
        if ( !a4 )
          v8 = &THREATINT_RESUME_THREAD;
        if ( EtwEventEnabled(EtwThreatIntProvRegHandle, v8) )
        {
          *(_QWORD *)&UserData.Size = 4LL;
          UserData.Ptr = (ULONGLONG)&v20;
          v9 = EtwpTiFillProcessIdentity(v19, v7, &v16);
          v10 = EtwpTiFillThreadIdentity(&UserData.Ptr + 2 * (unsigned int)(v9 + 1), a2);
          v12 = EtwpTiFillProcessIdentity(&UserData.Ptr + 2 * (unsigned int)(v10 + v11), *(_QWORD *)(a3 + 544), &v17);
          v14 = EtwpTiFillThreadIdentity(&UserData.Ptr + 2 * (unsigned int)(v12 + v13), a3);
          EtwWrite(EtwThreatIntProvRegHandle, v8, 0LL, v14 + v15, &UserData);
        }
      }
    }
  }
}
