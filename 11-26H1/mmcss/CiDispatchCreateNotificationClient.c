/*
 * XREFs of CiDispatchCreateNotificationClient @ 0x14000D280
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1400048E4 (WPP_SF_q.c)
 *     CiProcessLocate @ 0x14000ECA0 (CiProcessLocate.c)
 *     CiSystemAcquirePushLock @ 0x14000F090 (CiSystemAcquirePushLock.c)
 *     CiProcessDereference @ 0x14000F0D0 (CiProcessDereference.c)
 *     CiProcessCreate @ 0x14000F420 (CiProcessCreate.c)
 */

__int64 __fastcall CiDispatchCreateNotificationClient(PIRP Irp, __int64 a2)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // r14
  NTSTATUS v6; // esi
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  CurrentProcess = PsGetCurrentProcess();
  v5 = *(_QWORD *)(a2 + 48);
  v6 = 0;
  v7 = CurrentProcess;
  KeEnterCriticalRegion();
  v10 = CiProcessLocate(v7);
  v8 = (_QWORD *)v10;
  if ( !v10 )
  {
    v6 = CiProcessCreate(&v10);
    if ( v6 < 0 )
      goto LABEL_13;
    v8 = (_QWORD *)v10;
  }
  CiSystemAcquirePushLock(v8 + 2);
  if ( v8[1] )
    v6 = -1073741790;
  else
    v8[1] = v5;
  v8[3] = 0LL;
  ExReleasePushLockExclusiveEx(v8 + 2, 0LL);
  if ( v6 < 0 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_q((__int64)WPP_GLOBAL_Control->AttachedDevice);
    CiProcessDereference(v8);
  }
  else
  {
    *(_QWORD *)(v5 + 24) = v8;
  }
LABEL_13:
  KeLeaveCriticalRegion();
  Irp->IoStatus.Status = v6;
  Irp->IoStatus.Information = 0LL;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v6;
}
