/*
 * XREFs of xxxClientBroadcastThemeChange @ 0x1401F01F8
 * Callers:
 *     xxxProcessEventMessage @ 0x14024572C (xxxProcessEventMessage.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void *__fastcall xxxClientBroadcastThemeChange(__int64 a1, __int64 a2)
{
  int v2; // ebx
  void *result; // rax
  int v4; // [rsp+30h] [rbp-48h] BYREF
  void *v5; // [rsp+38h] [rbp-40h] BYREF
  void *Src[3]; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v7[2]; // [rsp+58h] [rbp-20h] BYREF

  Src[0] = 0LL;
  v4 = 0;
  v7[0] = a1;
  v7[1] = a2;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v5);
  EtwTraceBeginCallback(121LL);
  v2 = KeUserModeCallback(121LL, v7, 16LL, Src, &v4);
  EtwTraceEndCallback(121LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v5);
  if ( v2 < 0 || v4 != 24 )
    return 0LL;
  v5 = 0LL;
  RtlCopyFromUser(&v5, Src[0], 8uLL);
  result = v5;
  Src[1] = v5;
  return result;
}
