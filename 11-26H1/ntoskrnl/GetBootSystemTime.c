/*
 * XREFs of GetBootSystemTime @ 0x140CB05C4
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     HalQueryRealTimeClock @ 0x1404495B0 (HalQueryRealTimeClock.c)
 *     RtlpTimeToTimeFields @ 0x140449E70 (RtlpTimeToTimeFields.c)
 *     RtlpTimeFieldsToTime @ 0x14044A428 (RtlpTimeFieldsToTime.c)
 *     RtlULongLongMult @ 0x14045E560 (RtlULongLongMult.c)
 *     HalSetRealTimeClock @ 0x14057A830 (HalSetRealTimeClock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall GetBootSystemTime(__int64 a1, struct _LIST_ENTRY **a2)
{
  struct _LIST_ENTRY *v2; // rdi
  int v3; // r15d
  int v6; // esi
  unsigned __int8 RealTimeClock; // r14
  __int64 v8; // rax
  NTSTATUS v9; // eax
  unsigned __int64 v10; // r9
  __int64 Blink; // rcx
  ULONGLONG v12; // rdx
  ULONGLONG v13; // r10
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  bool v16; // zf
  ULONGLONG v17; // rbx
  int v18; // eax
  void *v19; // rcx
  __int64 result; // rax
  __int128 v21; // [rsp+20h] [rbp-10h] BYREF
  ULONGLONG pullResult; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int64 v23; // [rsp+78h] [rbp+48h] BYREF

  v2 = *(struct _LIST_ENTRY **)(a1 + 2632);
  v3 = -1;
  v23 = 0LL;
  pullResult = 0LL;
  v6 = 1;
  RealTimeClock = 0;
  v21 = 0LL;
  if ( (*(_BYTE *)(a1 + 2656) & 1) == 0 && !ExpRealTimeIsUniversal )
    v2 = (struct _LIST_ENTRY *)((char *)v2 + (unsigned __int64)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink);
  v8 = guard_dispatch_icall_no_overrides((__int64)&v23, (__int64)a2);
  v9 = RtlULongLongMult(v8 - *(_QWORD *)(a1 + 2640), 0x989680uLL, &pullResult);
  Blink = (unsigned int)v9;
  v12 = pullResult % v23;
  v13 = pullResult / v23;
  if ( v9 < 0 )
  {
    v14 = v10 / v23;
    Blink = v23 * (v10 / v23);
    v15 = v10 % v23;
    v12 = 10000000 * v15 % v23;
    v13 = 10000000 * v14 + 10000000 * v15 / v23;
  }
  v16 = (*(_BYTE *)(a1 + 2656) & 2) == 0;
  v17 = (ULONGLONG)v2 + v13;
  pullResult = (ULONGLONG)v2 + v13;
  if ( v16 )
  {
    if ( !ExpRealTimeIsUniversal )
      pullResult = v17 - (unsigned __int64)PsGetCurrentServerSiloGlobals()[76].Blink[27].Blink;
    RtlpTimeToTimeFields((__int64 *)&pullResult, &v21);
    v3 = 1;
    RealTimeClock = HalSetRealTimeClock((unsigned __int8 *)&v21);
    v6 = 0;
  }
  else if ( ((__int64)ExpSysDbgLock.MutantListHead.Flink & 4) == 0 )
  {
    v6 = 0;
    RealTimeClock = HalQueryRealTimeClock((__int64)&v21);
    v3 = 2;
    if ( RealTimeClock )
    {
      v3 = 3;
      RealTimeClock = RtlpTimeFieldsToTime((__int64)&v21, (__int64 *)&pullResult);
      if ( RealTimeClock )
      {
        if ( ExpRealTimeIsUniversal )
        {
          v17 = pullResult;
        }
        else
        {
          Blink = (__int64)PsGetCurrentServerSiloGlobals()[76].Blink;
          v17 = *(_QWORD *)(Blink + 440) + pullResult;
        }
        v3 = 0;
      }
      else
      {
        v17 = pullResult;
      }
    }
  }
  *a2 = (struct _LIST_ENTRY *)v17;
  v18 = guard_dispatch_icall_no_overrides(Blink, v12);
  stru_140FC11F0.Header.WaitListHead.Flink = *a2;
  stru_140FC11F0.Header.WaitListHead.Blink = v2;
  v19 = *(void **)(a1 + 2656);
  LODWORD(stru_140FC11F0.QuantumTarget) = v18;
  result = RealTimeClock;
  HIDWORD(stru_140FC11F0.InitialStack) = RealTimeClock;
  stru_140FC11F0.SListFaultAddress = v19;
  LODWORD(stru_140FC11F0.InitialStack) = v6;
  LODWORD(stru_140FC11F0.StackLimit) = v3;
  return result;
}
