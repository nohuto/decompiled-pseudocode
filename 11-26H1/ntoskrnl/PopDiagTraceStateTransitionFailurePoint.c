/*
 * XREFs of PopDiagTraceStateTransitionFailurePoint @ 0x1407D8518
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceStateTransitionFailurePoint(int a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdx
  unsigned int v5; // r8d
  __int64 v6; // r10
  __int64 v7; // r10
  int v9; // [rsp+30h] [rbp-79h] BYREF
  int v10; // [rsp+34h] [rbp-75h] BYREF
  int v11; // [rsp+38h] [rbp-71h] BYREF
  struct _KTHREAD *v12; // [rsp+40h] [rbp-69h] BYREF
  struct _KTHREAD *v13; // [rsp+48h] [rbp-61h] BYREF
  __int64 v14; // [rsp+50h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-51h] BYREF
  int *v16; // [rsp+68h] [rbp-41h]
  __int64 v17; // [rsp+70h] [rbp-39h]
  int *v18; // [rsp+78h] [rbp-31h]
  __int64 v19; // [rsp+80h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+90h] [rbp-19h] BYREF
  struct _KTHREAD **v21; // [rsp+B0h] [rbp+7h]
  __int64 v22; // [rsp+B8h] [rbp+Fh]
  int *v23; // [rsp+C0h] [rbp+17h]
  __int64 v24; // [rsp+C8h] [rbp+1Fh]
  int *v25; // [rsp+D0h] [rbp+27h]
  __int64 v26; // [rsp+D8h] [rbp+2Fh]
  __int64 *v27; // [rsp+E0h] [rbp+37h]
  __int64 v28; // [rsp+E8h] [rbp+3Fh]
  int v29; // [rsp+110h] [rbp+67h] BYREF

  v29 = a1;
  v9 = 0;
  CurrentThread = KeGetCurrentThread();
  v12 = CurrentThread;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(CurrentThread) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STATE_TRANSITION_FAILURE);
    if ( (_BYTE)CurrentThread )
    {
      UserData.Ptr = (ULONGLONG)&v12;
      v9 = a2;
      v16 = &v29;
      *(_QWORD *)&UserData.Size = 8LL;
      v18 = &v9;
      v17 = 4LL;
      v19 = 4LL;
      LOBYTE(CurrentThread) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_STATE_TRANSITION_FAILURE, 0LL, 3u, &UserData);
    }
  }
  if ( dword_140E07560 )
  {
    LOBYTE(CurrentThread) = tlgKeywordOn((__int64)&dword_140E07560, 0x800000000000LL);
    if ( (_BYTE)CurrentThread )
    {
      if ( v5 > 5 )
      {
        LOBYTE(CurrentThread) = tlgKeywordOn(v6, v4);
        if ( (_BYTE)CurrentThread )
        {
          v13 = v12;
          v22 = 8LL;
          v21 = &v13;
          v10 = v29;
          v23 = &v10;
          v25 = &v11;
          v27 = &v14;
          v24 = 4LL;
          v11 = a2;
          v26 = 4LL;
          v14 = 0x1000000LL;
          v28 = 8LL;
          LOBYTE(CurrentThread) = tlgWriteTransfer_EtwWriteTransfer(
                                    v7,
                                    (unsigned __int8 *)word_14004A2CA,
                                    0LL,
                                    0LL,
                                    6u,
                                    &v20);
        }
      }
    }
  }
  return (char)CurrentThread;
}
