/*
 * XREFs of KiFinalizeTimer2Disablement @ 0x1403AA6A8
 * Callers:
 *     KiExpireTimer2 @ 0x140336F08 (KiExpireTimer2.c)
 *     KiUpdateTimer2Flags @ 0x1403AA610 (KiUpdateTimer2Flags.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     EtwTraceTimedEvent @ 0x14032B770 (EtwTraceTimedEvent.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032D2B0 (EtwGetKernelTraceTimestamp.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiFinalizeTimer2Disablement(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  char v5; // r14
  __int64 result; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // r15
  __int64 v12; // rdx
  _QWORD v13[3]; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v14[2]; // [rsp+48h] [rbp-40h] BYREF

  v3 = 0LL;
  memset(v14, 0, sizeof(v14));
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 96);
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  result = KiWaitNever;
  v7 = 0LL;
  v8 = *(_QWORD *)(a1 + 112);
  v9 = (unsigned int)KiWaitNever;
  v10 = (unsigned __int64)stru_140FC01F0.WaitBlock[2].WaitListEntry.Flink ^ _byteswap_uint64(a1 ^ __ROL8__(
                                                                                                    KiWaitNever ^ v8,
                                                                                                    KiWaitNever));
  if ( v10 )
  {
    v7 = (unsigned __int64)stru_140FC01F0.WaitBlock[2].WaitListEntry.Flink ^ _byteswap_uint64(a1 ^ __ROL8__(
                                                                                                     KiWaitNever ^ *(_QWORD *)(a1 + 120),
                                                                                                     KiWaitNever));
    CurrentIrql = KeGetCurrentIrql();
    v12 = 2LL;
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v9) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v9, 2LL);
    }
    if ( v5 )
      EtwGetKernelTraceTimestamp((unsigned __int64)v14, 0x40020000uLL, a3);
    guard_dispatch_icall_no_overrides(v7, v12, a3);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  if ( v5 )
  {
    v13[1] = v10;
    v13[0] = 0x7E35C6C7F3DD7277LL
           * (KiWaitNever ^ __ROR8__(
                              (unsigned __int64)stru_140FC01F0.WaitBlock[2].WaitListEntry.Flink ^ _byteswap_uint64((unsigned __int64)stru_140FC01F0.WaitBlock[2].WaitListEntry.Flink ^ a1) ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ v3, KiWaitNever)),
                              KiWaitNever));
    v13[2] = 0x7E35C6C7F3DD7277LL
           * (KiWaitNever ^ __ROR8__(
                              a1 ^ _byteswap_uint64((unsigned __int64)stru_140FC01F0.WaitBlock[2].WaitListEntry.Flink ^ v7),
                              KiWaitNever));
    if ( !v10 )
      EtwGetKernelTraceTimestamp((unsigned __int64)v14, 0x40020000uLL, KiWaitNever);
    return EtwTraceTimedEvent(3948, 0x40020000u, (__int64)v13, 24, 5246466, (__int64)v14);
  }
  return result;
}
