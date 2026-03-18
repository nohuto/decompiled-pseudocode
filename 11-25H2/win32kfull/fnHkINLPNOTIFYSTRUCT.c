/*
 * XREFs of fnHkINLPNOTIFYSTRUCT @ 0x1402BD110
 * Callers:
 *     ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x140289620 (-xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B0C (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B9B64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall fnHkINLPNOTIFYSTRUCT(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int *a6)
{
  int v8; // ebx
  int v10; // [rsp+40h] [rbp-68h] BYREF
  __int64 v11; // [rsp+48h] [rbp-60h]
  __int64 v12; // [rsp+50h] [rbp-58h]
  __int64 v13; // [rsp+58h] [rbp-50h]
  int v14; // [rsp+60h] [rbp-48h]
  __int64 v15; // [rsp+68h] [rbp-40h]
  int v16; // [rsp+70h] [rbp-38h]
  __int64 v17; // [rsp+78h] [rbp-30h]
  __int64 v18; // [rsp+80h] [rbp-28h]
  int v19; // [rsp+88h] [rbp-20h]
  int v20; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+10h] BYREF
  void *Src; // [rsp+C8h] [rbp+20h] BYREF

  v21 = a2;
  Src = 0LL;
  v20 = 0;
  memset_0(&v10, 0, 0x60uLL);
  v10 = a1;
  v11 = 0LL;
  v15 = *(_QWORD *)(a3 + 32);
  v16 = *(_DWORD *)(a3 + 48);
  v17 = *(int *)(a3 + 40);
  v18 = *(int *)(a3 + 44);
  v19 = *(_DWORD *)(a3 + 52);
  v12 = 0LL;
  v13 = a5;
  v14 = *a6;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v21);
  EtwTraceBeginCallback(127LL);
  v8 = KeUserModeCallback(127LL, &v10, 96LL, &Src, &v20);
  EtwTraceEndCallback(127LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v21);
  if ( v8 < 0 || v20 != 24 )
    return 0LL;
  v21 = 0LL;
  RtlCopyFromUser(&v21, Src, 8uLL);
  a5 = v21;
  return (unsigned int)v21;
}
