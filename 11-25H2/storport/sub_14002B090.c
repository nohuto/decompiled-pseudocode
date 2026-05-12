/*
 * XREFs of sub_14002B090 @ 0x14002B090
 * Callers:
 *     sub_1400D19A0 @ 0x1400D19A0 (sub_1400D19A0.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

char __fastcall sub_14002B090(__int64 a1)
{
  __int64 (__fastcall *v1)(__int64); // rax

  if ( a1 && (v1 = *(__int64 (__fastcall **)(__int64))(a1 + 160)) != 0LL )
    return v1(*(_QWORD *)(a1 + 240) + 16LL);
  else
    return 0;
}
