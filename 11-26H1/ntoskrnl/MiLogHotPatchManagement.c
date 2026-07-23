/*
 * XREFs of MiLogHotPatchManagement @ 0x140877AC8
 * Callers:
 *     NtManageHotPatch @ 0x140A9D550 (NtManageHotPatch.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall MiLogHotPatchManagement(__int64 a1, int a2, __int64 a3, unsigned __int16 *a4, int a5)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rsi
  void *FirstArgument; // rbx
  __int64 v10; // r8
  char *v11; // rdx
  int v12; // eax
  int v14; // [rsp+28h] [rbp-E0h]
  int v15; // [rsp+30h] [rbp-D8h]
  ULONG v16; // [rsp+38h] [rbp-D0h]
  int v17; // [rsp+48h] [rbp-C0h] BYREF
  int v18; // [rsp+4Ch] [rbp-BCh] BYREF
  int v19; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int ProcessId; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int *p_ProcessId; // [rsp+88h] [rbp-80h]
  __int64 v25; // [rsp+90h] [rbp-78h]
  int *v26; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  int *v28; // [rsp+A8h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  unsigned int *v30; // [rsp+B8h] [rbp-50h]
  __int64 v31; // [rsp+C0h] [rbp-48h]
  __int64 *v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  int *v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h] BYREF
  int *v36; // [rsp+E8h] [rbp-20h]
  __int64 v37; // [rsp+F0h] [rbp-18h]
  int *v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( a2 )
  {
    if ( a2 == 3 )
    {
      FirstArgument = stru_140E366D8.FirstArgument;
      if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u )
      {
        LOBYTE(CurrentThread) = tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 32LL);
        if ( (_BYTE)CurrentThread )
        {
          ProcessId = (unsigned int)PsGetProcessId(Process);
          v11 = byte_140059813;
          v25 = 4LL;
          p_ProcessId = &ProcessId;
          v19 = a5;
          v26 = &v19;
          v18 = *(_DWORD *)(a3 + 92);
          v28 = &v18;
          LODWORD(v21) = *(_DWORD *)(a3 + 96);
          v30 = (unsigned int *)&v21;
          v32 = &v35;
          v34 = (int *)*((_QWORD *)a4 + 1);
          v35 = *a4;
          v36 = (int *)(a3 + 24);
          v12 = *(unsigned __int8 *)(a3 + 25);
          v27 = 4LL;
          v31 = 4LL;
          v33 = 2LL;
          v37 = (unsigned int)(4 * v12 + 8);
          LOWORD(v17) = WORD2(Process[3].PerProcessorCycleTimes);
          v38 = &v17;
          v16 = 10;
          v39 = 2LL;
LABEL_14:
          v29 = 4LL;
          LOBYTE(CurrentThread) = tlgWriteEx_EtwWriteEx(
                                    (__int64)FirstArgument,
                                    (unsigned __int8 *)v11,
                                    v10,
                                    1u,
                                    v14,
                                    v15,
                                    v16,
                                    &v23);
        }
      }
    }
    else if ( a2 == 7 )
    {
      FirstArgument = stru_140E366D8.FirstArgument;
      if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u )
      {
        LOBYTE(CurrentThread) = tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 32LL);
        if ( (_BYTE)CurrentThread )
        {
          ProcessId = (unsigned int)PsGetProcessId(Process);
          v11 = (char *)&byte_14005979D;
          v25 = 4LL;
          p_ProcessId = &ProcessId;
          v19 = a5;
          v26 = &v19;
          v18 = *(_DWORD *)(a3 + 4);
          v28 = &v18;
          v21 = *(_QWORD *)(a3 + 16);
          v30 = (unsigned int *)&v21;
          v22 = *(_QWORD *)(a3 + 24);
          v32 = &v22;
          LOWORD(v17) = WORD2(Process[3].PerProcessorCycleTimes);
          v34 = &v17;
          v16 = 8;
          v31 = 8LL;
          v33 = 8LL;
          v35 = 2LL;
          goto LABEL_13;
        }
      }
    }
  }
  else
  {
    FirstArgument = stru_140E366D8.FirstArgument;
    if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u )
    {
      LOBYTE(CurrentThread) = tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 32LL);
      if ( (_BYTE)CurrentThread )
      {
        LODWORD(v21) = (unsigned int)PsGetProcessId(Process);
        v11 = byte_140059893;
        v25 = 4LL;
        p_ProcessId = (unsigned int *)&v21;
        v18 = a5;
        v26 = &v18;
        v19 = *(_DWORD *)(a3 + 92);
        v28 = &v19;
        ProcessId = *(_DWORD *)(a3 + 96);
        v30 = &ProcessId;
        v32 = &v35;
        v34 = (int *)*((_QWORD *)a4 + 1);
        v35 = *a4;
        LOWORD(v17) = WORD2(Process[3].PerProcessorCycleTimes);
        v36 = &v17;
        v16 = 9;
        v31 = 4LL;
        v33 = 2LL;
        v37 = 2LL;
LABEL_13:
        v27 = 4LL;
        goto LABEL_14;
      }
    }
  }
  return (char)CurrentThread;
}
