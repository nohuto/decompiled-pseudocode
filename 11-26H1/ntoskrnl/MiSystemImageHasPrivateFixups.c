/*
 * XREFs of MiSystemImageHasPrivateFixups @ 0x140492D78
 * Callers:
 *     MiProtoFaultApplyPrivateFixups @ 0x1402BC040 (MiProtoFaultApplyPrivateFixups.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiOffsetToProtos @ 0x1403422D4 (MiOffsetToProtos.c)
 */

signed __int64 __fastcall MiSystemImageHasPrivateFixups(unsigned __int64 a1, __int64 *a2, unsigned __int64 *a3)
{
  signed __int64 v3; // rbx
  bool v4; // zf
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = stru_140E2D2D0.SavedApcState.ApcListHead[1].Blink == (struct _LIST_ENTRY *)&stru_140E2D2D0.SavedApcState.ApcListHead[1].Blink;
  *a3 = 0LL;
  *a2 = 0LL;
  if ( v4 || (unsigned int)MiGetSystemRegionType(a1) != 11 )
    return 0LL;
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)&stru_140E2D2D0.SchedulerApc.SpareLong0);
  for ( i = stru_140E2D2D0.SavedApcState.ApcListHead[1].Blink;
        i != (struct _LIST_ENTRY *)&stru_140E2D2D0.SavedApcStateFill[24];
        i = i->Flink )
  {
    Flink = i[1].Flink;
    if ( a1 >= (unsigned __int64)Flink && (struct _LIST_ENTRY *)a1 <= i[1].Blink )
    {
      v11 = (a1 - (unsigned __int64)Flink) >> 12;
      if ( _bittest64((const signed __int64 *)i[3].Blink, v11) )
      {
        v12 = 0LL;
        *a3 = v11;
        v3 = (char *)Flink - (char *)i[2].Flink;
        *a2 = MiOffsetToProtos((__int64)i[2].Blink, v11 << 12, &v12);
      }
      break;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&stru_140E2D2D0.SchedulerApc.SpareLong0);
  return v3;
}
