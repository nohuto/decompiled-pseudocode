/*
 * XREFs of EtwpClockSourceRunDown @ 0x140B60BD4
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A99DCC (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     KeGetDynamicTickDisableReason @ 0x1404FDF30 (KeGetDynamicTickDisableReason.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall EtwpClockSourceRunDown(__int64 a1, __int64 a2)
{
  unsigned __int8 DynamicTickDisableReason; // al
  unsigned int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+38h] [rbp-48h]
  __int128 v8; // [rsp+40h] [rbp-40h] BYREF
  __int64 v9; // [rsp+50h] [rbp-30h]
  int v10; // [rsp+58h] [rbp-28h]
  char v11; // [rsp+5Ch] [rbp-24h]
  _QWORD v12[2]; // [rsp+60h] [rbp-20h] BYREF

  if ( (_BYTE)a2 )
  {
    v9 = 0LL;
    v10 = 0;
    v11 = 0;
    v8 = 0LL;
    guard_dispatch_icall_no_overrides((__int64)&v8, a2);
    v6 = *(_QWORD *)((char *)&v8 + 4);
    DynamicTickDisableReason = KeGetDynamicTickDisableReason();
    v4 = *(_DWORD *)a1;
    v5 = *(_QWORD *)(a1 + 1360);
    v7 = DynamicTickDisableReason;
    v12[0] = &v6;
    v12[1] = 12LL;
    EtwpLogKernelEvent((__int64)v12, v5, v4, 1u, 0xF5Au, 0x501802u);
  }
}
