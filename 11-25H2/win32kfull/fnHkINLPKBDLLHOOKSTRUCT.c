/*
 * XREFs of fnHkINLPKBDLLHOOKSTRUCT @ 0x1401B5C4C
 * Callers:
 *     xxxHkCallHook @ 0x1400C5590 (xxxHkCallHook.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void *__fastcall fnHkINLPKBDLLHOOKSTRUCT(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  int v5; // ebx
  void *result; // rax
  int v7; // [rsp+30h] [rbp-78h] BYREF
  void *v8; // [rsp+38h] [rbp-70h] BYREF
  void *Src[3]; // [rsp+40h] [rbp-68h] BYREF
  _DWORD v10[2]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v11; // [rsp+60h] [rbp-48h]
  __int64 v12; // [rsp+68h] [rbp-40h]
  __int64 v13; // [rsp+70h] [rbp-38h]
  __int128 v14; // [rsp+78h] [rbp-30h]
  __int64 v15; // [rsp+88h] [rbp-20h]

  Src[0] = 0LL;
  v7 = 0;
  v10[1] = 0;
  v10[0] = a1;
  v11 = a2;
  v14 = *a3;
  v15 = *((_QWORD *)a3 + 2);
  v12 = a4;
  v13 = a5;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v8);
  EtwTraceBeginCallback(45LL);
  v5 = KeUserModeCallback(45LL, v10, 56LL, Src, &v7);
  EtwTraceEndCallback(45LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v8);
  if ( v5 < 0 || v7 != 24 )
    return 0LL;
  v8 = 0LL;
  RtlCopyFromUser(&v8, Src[0], 8uLL);
  result = v8;
  Src[1] = v8;
  return result;
}
