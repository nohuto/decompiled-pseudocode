/*
 * XREFs of sub_180012384 @ 0x180012384
 * Callers:
 *     sub_1800120E0 @ 0x1800120E0 (sub_1800120E0.c)
 *     sub_1800BC4A0 @ 0x1800BC4A0 (sub_1800BC4A0.c)
 *     sub_1800C1D80 @ 0x1800C1D80 (sub_1800C1D80.c)
 *     sub_1800C1FC0 @ 0x1800C1FC0 (sub_1800C1FC0.c)
 *     sub_1800C3C1C @ 0x1800C3C1C (sub_1800C3C1C.c)
 *     sub_1800C3E50 @ 0x1800C3E50 (sub_1800C3E50.c)
 *     sub_1800C57C0 @ 0x1800C57C0 (sub_1800C57C0.c)
 *     sub_1800C5A60 @ 0x1800C5A60 (sub_1800C5A60.c)
 *     sub_1800CB160 @ 0x1800CB160 (sub_1800CB160.c)
 *     sub_1800CB5F4 @ 0x1800CB5F4 (sub_1800CB5F4.c)
 *     sub_1800CB8A8 @ 0x1800CB8A8 (sub_1800CB8A8.c)
 *     sub_1800CEA90 @ 0x1800CEA90 (sub_1800CEA90.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_180012384(__int64 a1, const char *a2)
{
  unsigned int v3; // ebx
  void (__fastcall *v5)(__int64, void *, _QWORD, const char *); // rbp
  int v6; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
  {
    v3 = 0;
    v6 = 0;
    (*(void (__fastcall **)(__int64, void *, int *, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, &unk_1800F9CC8, &v6, 0LL);
    if ( !v6 )
    {
      v5 = *(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)a1 + 40LL);
      if ( a2 )
        v3 = strnlen(a2, 0xFFuLL);
      v5(a1, &unk_1800F9CC8, v3, a2);
    }
  }
}
