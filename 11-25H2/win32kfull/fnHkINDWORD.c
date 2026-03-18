/*
 * XREFs of fnHkINDWORD @ 0x1400C4E78
 * Callers:
 *     xxxCallCtfHook @ 0x1400C4B80 (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1400C5590 (xxxHkCallHook.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall fnHkINDWORD(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  _DWORD *v6; // rdi
  int v7; // ebx
  __int64 v8; // rbx
  void *v9; // rdx
  _DWORD v11[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v12; // [rsp+50h] [rbp-38h]
  __int64 v13; // [rsp+58h] [rbp-30h]
  __int64 v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-20h]
  int v16; // [rsp+6Ch] [rbp-1Ch]
  __int64 v17; // [rsp+70h] [rbp-18h]
  int v18; // [rsp+90h] [rbp+8h] BYREF
  void *Src; // [rsp+98h] [rbp+10h] BYREF

  Src = 0LL;
  v18 = 0;
  v11[1] = 0;
  v16 = 0;
  v11[0] = a1;
  v12 = a2;
  v17 = a3;
  v13 = a4;
  v14 = a5;
  v6 = a6;
  v15 = *a6;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  EtwTraceBeginCallback(40LL);
  v7 = KeUserModeCallback(40LL, v11, 48LL, &Src, &v18);
  EtwTraceEndCallback(40LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  if ( v7 < 0 || v18 != 24 )
    return 0LL;
  a5 = 0LL;
  RtlCopyFromUser(&a5, Src, 8uLL);
  v8 = a5;
  v9 = (void *)*((_QWORD *)Src + 2);
  LODWORD(a5) = 0;
  RtlCopyFromUser(&a5, v9, 4uLL);
  *v6 ^= ((unsigned __int8)a5 ^ (unsigned __int8)*v6) & 0x10;
  return v8;
}
