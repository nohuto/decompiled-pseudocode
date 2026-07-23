/*
 * XREFs of PopPolicyWorkerAction @ 0x1409F3240
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     PopGetPolicyWorker @ 0x14042756C (PopGetPolicyWorker.c)
 *     PopSetPowerActionState @ 0x1404ED954 (PopSetPowerActionState.c)
 *     PopThermalSxExit @ 0x140516740 (PopThermalSxExit.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopIssueActionRequest @ 0x1409F3438 (PopIssueActionRequest.c)
 *     PopCompleteAction @ 0x1409F4288 (PopCompleteAction.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPolicyWorkerAction(__int64 a1, __int64 a2)
{
  char v2; // si
  char v3; // bp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r15
  unsigned int v9; // edi
  unsigned int v10; // ebx
  int v11; // r14d
  unsigned int v12; // edi
  struct _KTHREAD *i; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  __int64 v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-30h]
  int v22; // [rsp+3Ch] [rbp-2Ch]
  _QWORD v23[2]; // [rsp+40h] [rbp-28h] BYREF

  v2 = 0;
  v3 = 0;
  PopAcquirePolicyLock(a1, a2);
  qword_140F105E8 = (__int64)KeGetCurrentThread();
  if ( byte_140F10421 == 1 )
  {
    v8 = (int)qword_140F10424;
    v9 = HIDWORD(qword_140F10424);
    v10 = dword_140F1042C;
    PopSetPowerActionState(2);
    v11 = dword_140F10434;
    v12 = PopIssueActionRequest(0LL, (unsigned int)v8, v9, v10);
    v3 = 1;
    if ( (PopAction & 2) != 0 )
    {
      if ( HIDWORD(qword_140F10424) == 5 )
        v11 = 6;
      dword_140F10434 = v11;
      dword_140F1042C = dword_140F1042C & 0x7FFFFFDC | 0x80000020;
      LOBYTE(PopAction) = PopAction & 0xFD;
      PopSetPowerActionState(1);
      PopGetPolicyWorker(2);
    }
    else
    {
      if ( (xmmword_140FC0C10 & 0x8000) != 0 )
      {
        v22 = 0;
        v23[0] = &v20;
        v20 = v8;
        v21 = v12;
        v23[1] = 16LL;
        EtwTraceKernelEvent((int)v23, 1, 0x80008000, 4643, 5249026);
      }
      dword_140F10430 = v12;
      PopSetPowerActionState(0);
      for ( i = *(struct _KTHREAD **)&PpmIdlePolicyLock.ThreadFlags2;
            i != (struct _KTHREAD *)&PpmIdlePolicyLock.512;
            i = *(struct _KTHREAD **)&i->Header.Lock )
      {
        PopCompleteAction(i->Header.WaitListHead.Blink, v12);
      }
      PopGetPolicyWorker(1);
      v2 = 1;
    }
  }
  qword_140F105E8 = 0LL;
  PopReleasePolicyLock(v5, v4, v6, v7, v19);
  if ( v2 )
    PopThermalSxExit(v15, v14, v16, v17);
  PoResumeFromHibernate = 0;
  if ( v3 && qword_140E67790 )
    guard_dispatch_icall_no_overrides(v15, v14);
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
