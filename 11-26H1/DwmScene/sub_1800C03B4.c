/*
 * XREFs of sub_1800C03B4 @ 0x1800C03B4
 * Callers:
 *     sub_1800BFD20 @ 0x1800BFD20 (sub_1800BFD20.c)
 *     sub_1800CEA90 @ 0x1800CEA90 (sub_1800CEA90.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_1800C03B4(__int64 a1, const char *a2)
{
  size_t v2; // r8
  void (__fastcall *v5)(__int64, void *, size_t, const char *); // rsi

  if ( a1 )
  {
    v2 = 0LL;
    v5 = *(void (__fastcall **)(__int64, void *, size_t, const char *))(*(_QWORD *)a1 + 24LL);
    if ( a2 )
      v2 = strnlen(a2, 0xFFuLL);
    v5(a1, &unk_1800F9CC8, v2, a2);
  }
}
