/*
 * XREFs of PnpCompleteDeviceEvent @ 0x140A1B2E0
 * Callers:
 *     PnpProcessCompletedEject @ 0x1407A7890 (PnpProcessCompletedEject.c)
 *     PnpDeviceEventWorker @ 0x140A1A040 (PnpDeviceEventWorker.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PiPdcDeactivate @ 0x140A1B44C (PiPdcDeactivate.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpCompleteDeviceEvent(PVOID P, int a2)
{
  __int32 i; // eax
  __int64 v5; // rcx
  __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // rax
  _DWORD *v9; // rax
  void *v10; // rcx
  __int64 v11; // rcx
  void *v12; // rcx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  Interval.QuadPart = -1000000LL;
  for ( i = _InterlockedExchange((volatile __int32 *)P + 17, 1); i; i = _InterlockedExchange(
                                                                          (volatile __int32 *)P + 17,
                                                                          1) )
    KeDelayExecutionThread(0, 0, &Interval);
  v5 = *((_QWORD *)P + 10);
  if ( v5 )
  {
    while ( _InterlockedExchange((volatile __int32 *)(v5 + 68), 1) )
    {
      KeDelayExecutionThread(0, 0, &Interval);
      v5 = *((_QWORD *)P + 10);
    }
  }
  PiPdcDeactivate(*((_QWORD *)P + 14));
  v7 = *((_BYTE *)P + 72) == 0;
  *((_QWORD *)P + 14) = 0LL;
  if ( !v7 || (v8 = *((_QWORD *)P + 10)) != 0 && *(_BYTE *)(v8 + 72) )
  {
    v12 = (void *)*((_QWORD *)P + 6);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
  }
  else
  {
    v9 = (_DWORD *)*((_QWORD *)P + 18);
    if ( *((_QWORD *)P + 3) )
    {
      *v9 = a2;
      KeSetEvent(*((PRKEVENT *)P + 3), 0, 0);
    }
    else if ( v9 && *((_DWORD *)P + 34) == 1 )
    {
      *v9 = a2;
    }
    if ( *((_QWORD *)P + 4) )
      guard_dispatch_icall_no_overrides(*((_QWORD *)P + 5), v6);
  }
  v10 = (void *)*((_QWORD *)P + 20);
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x56706E50u);
  v11 = *((_QWORD *)P + 10);
  if ( v11 && _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 64), 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(*((PVOID *)P + 10), 0x4B706E50u);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(P, 0x4B706E50u);
}
