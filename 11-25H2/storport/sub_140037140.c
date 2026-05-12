/*
 * XREFs of sub_140037140 @ 0x140037140
 * Callers:
 *     sub_1400D1520 @ 0x1400D1520 (sub_1400D1520.c)
 *     sub_1400DADB0 @ 0x1400DADB0 (sub_1400DADB0.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

char __fastcall sub_140037140(__int64 a1)
{
  __int64 v1; // rax
  __int64 (__fastcall *v2)(__int64); // rax

  if ( a1 && (v1 = *(_QWORD *)(a1 + 232)) != 0 && (v2 = *(__int64 (__fastcall **)(__int64))(v1 + 24)) != 0LL )
    return v2(*(_QWORD *)(a1 + 240) + 16LL);
  else
    return 0;
}
