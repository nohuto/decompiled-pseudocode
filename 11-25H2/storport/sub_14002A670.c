/*
 * XREFs of sub_14002A670 @ 0x14002A670
 * Callers:
 *     sub_1400D2AE0 @ 0x1400D2AE0 (sub_1400D2AE0.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14002A670(__int64 a1)
{
  __int64 (__fastcall *v1)(__int64); // rax

  v1 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 128LL);
  if ( v1 )
    return v1(*(_QWORD *)(a1 + 240) + 16LL);
  else
    return 1LL;
}
