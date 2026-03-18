/*
 * XREFs of xxxClientCharToWchar @ 0x1402BD404
 * Callers:
 *     EditionClientCharToWchar @ 0x140292560 (EditionClientCharToWchar.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientCharToWchar(__int16 a1, __int16 a2)
{
  int v2; // ebx
  __int16 v4; // [rsp+50h] [rbp+8h] BYREF
  __int16 v5; // [rsp+52h] [rbp+Ah]
  int v6; // [rsp+58h] [rbp+10h] BYREF
  void *Src; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  Src = 0LL;
  v6 = 0;
  v4 = a1;
  v5 = a2;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v8);
  EtwTraceBeginCallback(82LL);
  v2 = KeUserModeCallback(82LL, &v4, 4LL, &Src, &v6);
  EtwTraceEndCallback(82LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v8);
  if ( v2 < 0 || v6 != 24 )
    return 95LL;
  v8 = 0LL;
  RtlCopyFromUser(&v8, Src, 8uLL);
  return v8;
}
