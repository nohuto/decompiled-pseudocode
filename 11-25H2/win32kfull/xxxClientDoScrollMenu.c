/*
 * XREFs of xxxClientDoScrollMenu @ 0x1402BD7BC
 * Callers:
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientDoScrollMenu(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // ebx
  __int64 result; // rax
  _QWORD v6[2]; // [rsp+38h] [rbp-30h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  __int64 v9; // [rsp+50h] [rbp-18h]
  __int64 v10; // [rsp+70h] [rbp+8h] BYREF
  void *Src; // [rsp+78h] [rbp+10h] BYREF
  int v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h]

  Src = 0LL;
  v12 = 0;
  v8 = 0;
  v6[0] = a1;
  v6[1] = 0LL;
  v7 = a3;
  v9 = a4;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v10);
  EtwTraceBeginCallback(134LL);
  v4 = KeUserModeCallback(134LL, v6, 32LL, &Src, &v12);
  EtwTraceEndCallback(134LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v10);
  if ( v4 < 0 || v12 != 24 )
    return 0LL;
  v10 = 0LL;
  RtlCopyFromUser(&v10, Src, 8uLL);
  result = v10;
  v13 = v10;
  return result;
}
