/*
 * XREFs of xxxClientTrackInit @ 0x1402BE53C
 * Callers:
 *     xxxSysCommand @ 0x1402B6EB4 (xxxSysCommand.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientTrackInit(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // ebx
  _QWORD v6[2]; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+50h] [rbp-18h]
  int v8; // [rsp+54h] [rbp-14h]
  void *Src; // [rsp+70h] [rbp+8h] BYREF
  __int64 v10; // [rsp+78h] [rbp+10h] BYREF
  int v11; // [rsp+80h] [rbp+18h] BYREF

  Src = 0LL;
  v11 = 0;
  v6[0] = a1;
  v6[1] = a2;
  v7 = a3;
  v8 = a4;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v10);
  EtwTraceBeginCallback(139LL);
  v4 = KeUserModeCallback(139LL, v6, 24LL, &Src, &v11);
  EtwTraceEndCallback(139LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v10);
  if ( v4 < 0 || v11 != 24 )
    return 0LL;
  v10 = 0LL;
  RtlCopyFromUser(&v10, Src, 8uLL);
  return v10;
}
