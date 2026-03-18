/*
 * XREFs of xxxClientEndScroll @ 0x1402BDA24
 * Callers:
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x140259C18 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientEndScroll(__int64 a1)
{
  int v1; // ebx
  __int64 result; // rax
  __int64 v3; // [rsp+38h] [rbp-20h] BYREF
  int v4; // [rsp+40h] [rbp-18h]
  int v5; // [rsp+44h] [rbp-14h]
  void *Src; // [rsp+60h] [rbp+8h] BYREF
  int v7; // [rsp+68h] [rbp+10h] BYREF
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h]

  Src = 0LL;
  v7 = 0;
  v5 = 0;
  v3 = a1;
  v4 = 1;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v8);
  EtwTraceBeginCallback(135LL);
  v1 = KeUserModeCallback(135LL, &v3, 16LL, &Src, &v7);
  EtwTraceEndCallback(135LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v8);
  if ( v1 < 0 || v7 != 24 )
    return 0LL;
  v8 = 0LL;
  RtlCopyFromUser(&v8, Src, 8uLL);
  result = v8;
  v9 = v8;
  return result;
}
