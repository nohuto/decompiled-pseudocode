/*
 * XREFs of ClientImmProcessKey @ 0x1401A1DC8
 * Callers:
 *     ?xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z @ 0x1401A182C (-xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall ClientImmProcessKey(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  int v5; // ebx
  __int64 result; // rax
  _QWORD v7[2]; // [rsp+38h] [rbp-30h] BYREF
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]
  __int64 v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+58h] [rbp-10h]
  int v12; // [rsp+5Ch] [rbp-Ch]
  void *Src; // [rsp+70h] [rbp+8h] BYREF
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF
  int v15; // [rsp+80h] [rbp+18h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h]

  Src = 0LL;
  v15 = 0;
  v9 = 0;
  v12 = 0;
  v7[0] = a1;
  v7[1] = a2;
  v8 = a3;
  v10 = a4;
  v11 = a5;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v14);
  EtwTraceBeginCallback(93LL);
  v5 = KeUserModeCallback(93LL, v7, 40LL, &Src, &v15);
  EtwTraceEndCallback(93LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v14);
  if ( v5 < 0 || v15 != 24 )
    return 0LL;
  v14 = 0LL;
  RtlCopyFromUser(&v14, Src, 8uLL);
  result = v14;
  v16 = v14;
  return result;
}
