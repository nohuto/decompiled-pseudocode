/*
 * XREFs of MiLogHotPatchPagesLocked @ 0x140878900
 * Callers:
 *     MiPrepareImagePagesForHotPatch @ 0x140701500 (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall MiLogHotPatchPagesLocked(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  struct _KTHREAD *CurrentThread; // rax
  void *FirstArgument; // rbx
  _KPROCESS *Process; // rdi
  __int64 v12; // r8
  int v14; // [rsp+28h] [rbp-E0h]
  int v15; // [rsp+30h] [rbp-D8h]
  int v16; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int ProcessId; // [rsp+4Ch] [rbp-BCh] BYREF
  int v18; // [rsp+50h] [rbp-B8h] BYREF
  int v19; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+78h] [rbp-90h] BYREF
  unsigned int *p_ProcessId; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  __int64 *v27; // [rsp+A8h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-58h]
  __int64 *v29; // [rsp+B8h] [rbp-50h]
  __int64 v30; // [rsp+C0h] [rbp-48h]
  int *v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h]
  int *v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  __int64 *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  int *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]
  __int64 *v39; // [rsp+108h] [rbp+0h]
  __int64 v40; // [rsp+110h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  FirstArgument = stru_140E366D8.FirstArgument;
  Process = CurrentThread->ApcState.Process;
  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u )
  {
    LOBYTE(CurrentThread) = tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000020LL);
    if ( (_BYTE)CurrentThread )
    {
      ProcessId = (unsigned int)PsGetProcessId(Process);
      v26 = 4LL;
      p_ProcessId = &ProcessId;
      v21 = a2;
      v27 = &v21;
      v28 = 8LL;
      v29 = &v22;
      v31 = &v18;
      v19 = a5;
      v33 = &v19;
      LODWORD(v20) = a6;
      v35 = &v20;
      LOWORD(v16) = WORD2(Process[3].PerProcessorCycleTimes);
      v37 = &v16;
      v39 = &v23;
      v22 = a3;
      v30 = 8LL;
      v18 = a4;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 2LL;
      v23 = 0x1000000LL;
      v40 = 8LL;
      LOBYTE(CurrentThread) = tlgWriteEx_EtwWriteEx(
                                (__int64)FirstArgument,
                                (unsigned __int8 *)&byte_1400596DD,
                                v12,
                                1u,
                                v14,
                                v15,
                                0xAu,
                                &v24);
    }
  }
  return (char)CurrentThread;
}
