/*
 * XREFs of EtwpTraceBootSystemTime @ 0x140CE7588
 * Callers:
 *     EtwpTraceSystemInitialization @ 0x140CE77E0 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char EtwpTraceBootSystemTime()
{
  _UNKNOWN **v0; // rax
  char v2; // [rsp+48h] [rbp-C0h] BYREF
  char InitialStack; // [rsp+49h] [rbp-BFh] BYREF
  char v4; // [rsp+4Ah] [rbp-BEh] BYREF
  int QuantumTarget; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v6; // [rsp+50h] [rbp-B8h] BYREF
  LIST_ENTRY WaitListHead; // [rsp+58h] [rbp-B0h] BYREF
  void *SListFaultAddress; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  struct _LIST_ENTRY **v10; // [rsp+88h] [rbp-80h]
  __int64 v11; // [rsp+90h] [rbp-78h]
  void **v12; // [rsp+98h] [rbp-70h]
  __int64 v13; // [rsp+A0h] [rbp-68h]
  unsigned __int64 *v14; // [rsp+A8h] [rbp-60h]
  __int64 v15; // [rsp+B0h] [rbp-58h]
  int *v16; // [rsp+B8h] [rbp-50h]
  __int64 v17; // [rsp+C0h] [rbp-48h]
  void **v18; // [rsp+C8h] [rbp-40h]
  __int64 v19; // [rsp+D0h] [rbp-38h]
  char *v20; // [rsp+D8h] [rbp-30h]
  __int64 v21; // [rsp+E0h] [rbp-28h]
  void *volatile *p_StackLimit; // [rsp+E8h] [rbp-20h]
  __int64 v23; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+F8h] [rbp-10h] BYREF
  LIST_ENTRY *p_WaitListHead; // [rsp+118h] [rbp+10h]
  __int64 v26; // [rsp+120h] [rbp+18h]
  struct _LIST_ENTRY **p_Blink; // [rsp+128h] [rbp+20h]
  __int64 v28; // [rsp+130h] [rbp+28h]
  void **p_SListFaultAddress; // [rsp+138h] [rbp+30h]
  __int64 v30; // [rsp+140h] [rbp+38h]
  int *p_QuantumTarget; // [rsp+148h] [rbp+40h]
  __int64 v32; // [rsp+150h] [rbp+48h]
  char *v33; // [rsp+158h] [rbp+50h]
  __int64 v34; // [rsp+160h] [rbp+58h]
  char *p_InitialStack; // [rsp+168h] [rbp+60h]
  __int64 v36; // [rsp+170h] [rbp+68h]
  char *v37; // [rsp+178h] [rbp+70h]
  __int64 v38; // [rsp+180h] [rbp+78h]
  __int64 *v39; // [rsp+188h] [rbp+80h]
  __int64 v40; // [rsp+190h] [rbp+88h]
  _UNKNOWN *retaddr; // [rsp+1B0h] [rbp+A8h] BYREF

  v0 = &retaddr;
  if ( (unsigned int)dword_140E08F78 > 5 )
  {
    LOBYTE(v0) = tlgKeywordOn((__int64)&dword_140E08F78, 0x200000000000LL);
    if ( (_BYTE)v0 )
    {
      WaitListHead = stru_140FC11F0.Header.WaitListHead;
      v26 = 8LL;
      p_WaitListHead = &WaitListHead;
      p_Blink = &WaitListHead.Blink;
      SListFaultAddress = stru_140FC11F0.SListFaultAddress;
      p_SListFaultAddress = &SListFaultAddress;
      QuantumTarget = stru_140FC11F0.QuantumTarget;
      p_QuantumTarget = &QuantumTarget;
      v2 = ExpRealTimeIsUniversal;
      v33 = &v2;
      InitialStack = (char)stru_140FC11F0.InitialStack;
      p_InitialStack = &InitialStack;
      v4 = BYTE4(stru_140FC11F0.InitialStack);
      v37 = &v4;
      LODWORD(v6) = stru_140FC11F0.StackLimit;
      v39 = &v6;
      v28 = 8LL;
      v30 = 8LL;
      v32 = 4LL;
      v34 = 1LL;
      v36 = 1LL;
      v38 = 1LL;
      v40 = 4LL;
      LOBYTE(v0) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140E08F78,
                     (unsigned __int8 *)byte_140054AE5,
                     0LL,
                     0LL,
                     0xAu,
                     &v24);
    }
  }
  if ( EtwKernelProvRegHandle )
  {
    *(_QWORD *)&UserData.Size = 8LL;
    UserData.Ptr = (ULONGLONG)&stru_140FC11F0.Header.WaitListHead;
    v11 = 8LL;
    v10 = &stru_140FC11F0.Header.WaitListHead.Blink;
    v13 = 8LL;
    v12 = &stru_140FC11F0.SListFaultAddress;
    v15 = 4LL;
    v14 = &stru_140FC11F0.QuantumTarget;
    v16 = &ExpRealTimeIsUniversal;
    v18 = &stru_140FC11F0.InitialStack;
    v20 = (char *)&stru_140FC11F0.InitialStack + 4;
    p_StackLimit = &stru_140FC11F0.StackLimit;
    v17 = 4LL;
    v19 = 4LL;
    v21 = 4LL;
    v23 = 4LL;
    LOBYTE(v0) = EtwWriteEx(EtwKernelProvRegHandle, &KernelBootSystemTime, 0LL, 0, 0LL, 0LL, 8u, &UserData);
  }
  return (char)v0;
}
