/*
 * XREFs of ?xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z @ 0x1402B9E64
 * Callers:
 *     xxxClientCopyDDEIn1 @ 0x14021CBC0 (xxxClientCopyDDEIn1.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void *__fastcall xxxClientCopyDDEIn2(struct tagINTDDEINFO *a1)
{
  int v1; // ebx
  void *result; // rax
  int v3; // [rsp+30h] [rbp-98h] BYREF
  void *v4; // [rsp+38h] [rbp-90h] BYREF
  void *Src[4]; // [rsp+40h] [rbp-88h] BYREF
  _OWORD v6[4]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v7; // [rsp+A0h] [rbp-28h]

  Src[0] = 0LL;
  v3 = 0;
  v6[0] = *(_OWORD *)a1;
  v6[1] = *((_OWORD *)a1 + 1);
  v6[2] = *((_OWORD *)a1 + 2);
  v6[3] = *((_OWORD *)a1 + 3);
  v7 = *((_QWORD *)a1 + 8);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v4);
  EtwTraceBeginCallback(61LL);
  v1 = KeUserModeCallback(61LL, v6, 72LL, Src, &v3);
  EtwTraceEndCallback(61LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v4);
  if ( v1 < 0 || v3 != 24 )
    return 0LL;
  v4 = 0LL;
  RtlCopyFromUser(&v4, Src[0], 8uLL);
  result = v4;
  Src[1] = v4;
  return result;
}
