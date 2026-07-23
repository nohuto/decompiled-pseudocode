/*
 * XREFs of EtwpProfileInterrupt @ 0x1406C9350
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x140216D50 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall EtwpProfileInterrupt(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int64 v2; // rdx
  int v3; // r8d
  _KPROCESS *Process; // r10
  char v5; // cl
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int8 NestingLevel; // al
  char v8; // cl
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  char *v10; // rax
  unsigned __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  unsigned int CurrentRunTime; // [rsp+38h] [rbp-28h]
  __int16 v13; // [rsp+3Ch] [rbp-24h]
  char v14; // [rsp+3Eh] [rbp-22h]
  char v15; // [rsp+3Fh] [rbp-21h]
  _QWORD v16[2]; // [rsp+40h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = *(_QWORD *)(a1 + 360);
  v3 = 34658818;
  if ( v2 < 0x7FFFFFFF0000LL )
    v3 = 34656770;
  Process = CurrentThread->Process;
  CurrentRunTime = CurrentThread[1].CurrentRunTime;
  v5 = 8 * CurrentThread->Priority;
  v14 = v5;
  v11 = v2;
  v13 = 1;
  CurrentPrcb = KeGetCurrentPrcb();
  NestingLevel = CurrentPrcb->NestingLevel;
  if ( NestingLevel != 2 )
  {
    if ( NestingLevel <= 1u )
      goto LABEL_9;
    goto LABEL_7;
  }
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
LABEL_7:
    v8 = v5 | 2;
    goto LABEL_8;
  }
  v8 = v5 | 1;
LABEL_8:
  v3 &= ~0x4000u;
  v14 = v8;
LABEL_9:
  SchedulingGroup = CurrentThread->SchedulingGroup;
  if ( SchedulingGroup )
  {
    v10 = (char *)SchedulingGroup + CurrentPrcb->ScbOffset;
    while ( *((_DWORD *)v10 + 35) <= 0xFFu )
    {
      LOBYTE(SchedulingGroup) = v10[140];
      if ( !(_BYTE)SchedulingGroup )
      {
        v10 = (char *)*((_QWORD *)v10 + 55);
        if ( v10 )
          continue;
      }
      goto LABEL_16;
    }
    LOBYTE(SchedulingGroup) = -1;
  }
LABEL_16:
  v16[0] = &v11;
  v15 = (char)SchedulingGroup;
  v16[1] = 16LL;
  EtwTraceSiloKernelEvent(Process[3].ActiveGroupsMask.Masks[0], (int)v16, 1, 0x20000002u, 3886, v3);
}
