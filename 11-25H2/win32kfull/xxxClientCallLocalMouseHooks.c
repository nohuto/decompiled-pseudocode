/*
 * XREFs of xxxClientCallLocalMouseHooks @ 0x140229D60
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void *__fastcall xxxClientCallLocalMouseHooks(int a1, __int64 a2, int a3)
{
  int v3; // ebx
  void *result; // rax
  int v5; // [rsp+30h] [rbp-78h] BYREF
  void *v6; // [rsp+38h] [rbp-70h] BYREF
  void *Src[3]; // [rsp+40h] [rbp-68h] BYREF
  _OWORD v8[3]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v9; // [rsp+88h] [rbp-20h]

  Src[0] = 0LL;
  v5 = 0;
  memset(v8, 0, sizeof(v8));
  v9 = 0LL;
  LODWORD(v8[0]) = a1;
  *(_OWORD *)((char *)v8 + 8) = *(_OWORD *)a2;
  *(_OWORD *)((char *)&v8[1] + 8) = *(_OWORD *)(a2 + 16);
  *((_QWORD *)&v8[2] + 1) = *(_QWORD *)(a2 + 32);
  LODWORD(v9) = a3;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v6);
  EtwTraceBeginCallback(120LL);
  v3 = KeUserModeCallback(120LL, v8, 56LL, Src, &v5);
  EtwTraceEndCallback(120LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v6);
  if ( v3 < 0 || v5 != 24 )
    return 0LL;
  v6 = 0LL;
  RtlCopyFromUser(&v6, Src[0], 8uLL);
  result = v6;
  Src[1] = v6;
  return result;
}
