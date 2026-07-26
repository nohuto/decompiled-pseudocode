/*
 * XREFs of ndisPeriodicReceivesTimer @ 0x140053F60
 * Callers:
 *     <none>
 * Callees:
 *     ndisTraceWorkItemExecStart @ 0x140062950 (ndisTraceWorkItemExecStart.c)
 *     ndisTraceWorkItemExecEnd @ 0x140063220 (ndisTraceWorkItemExecEnd.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisPeriodicReceivesTimer(
        PVOID SystemSpecific1,
        PVOID FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  _QWORD *v4; // rdi
  char *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 Number; // rcx
  __int64 v9; // rcx
  LARGE_INTEGER v10; // rdx
  _QWORD *v11; // rax

  v4 = 0LL;
  v5 = (char *)qword_14011D440 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v5 + 2);
  v6 = *(_QWORD **)v5;
  if ( *(char **)v5 != v5 )
  {
    if ( (char *)v6[1] != v5 )
      goto LABEL_16;
    v7 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 )
      goto LABEL_16;
    *(_QWORD *)v5 = v7;
    v4 = v6;
    *(_QWORD *)(v7 + 8) = v5;
    v6[1] = 0LL;
    *v6 = 0LL;
    --*((_DWORD *)v5 + 6);
  }
  Number = KeGetPcr()->Prcb.Number;
  if ( *(char **)v5 == v5 )
  {
    *((_DWORD *)qword_14011D438 + Number) = 0;
  }
  else
  {
    v10.QuadPart = -1LL;
    if ( DueTime.QuadPart )
      v10 = DueTime;
    KeSetTimer(
      (PKTIMER)qword_14011D430 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number,
      v10,
      (PKDPC)qword_14011D430 + 2 * Number + 1);
  }
  if ( v4 == (_QWORD *)((char *)ndisPerCpuPoisonPills + 32 * KeGetPcr()->Prcb.Number) )
  {
    v11 = *(_QWORD **)v5;
    if ( *(char **)(*(_QWORD *)v5 + 8LL) == v5 )
    {
      *v4 = v11;
      v4[1] = v5;
      v11[1] = v4;
      *(_QWORD *)v5 = v4;
      ++*((_DWORD *)v5 + 6);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v5 + 2);
      return;
    }
LABEL_16:
    __fastfail(3u);
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v5 + 2);
  if ( v4 )
  {
    if ( (_BYTE)word_14011EFA4 )
    {
      LOBYTE(v9) = 1;
      ndisTraceWorkItemExecStart(v9);
    }
    ((void (__fastcall *)(_QWORD))v4[2])(v4[3]);
    if ( (_BYTE)word_14011EFA4 )
      ndisTraceWorkItemExecEnd();
  }
}
