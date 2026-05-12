/*
 * XREFs of sub_140088234 @ 0x140088234
 * Callers:
 *     sub_140114944 @ 0x140114944 (sub_140114944.c)
 *     sub_140115008 @ 0x140115008 (sub_140115008.c)
 *     sub_140122570 @ 0x140122570 (sub_140122570.c)
 * Callees:
 *     sub_1400179D0 @ 0x1400179D0 (sub_1400179D0.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_140088234(__int64 a1)
{
  void *v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r10
  unsigned int v4; // r11d
  char v5; // [rsp+20h] [rbp-18h]

  if ( sub_1400179D0(a1) )
  {
    v5 = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, void *, char))(*(_QWORD *)(*(_QWORD *)(v2 + 1144) + 8LL) + 24LL))(
      *(_QWORD *)(v2 + 1144),
      v4,
      v3,
      v1,
      v5);
  }
  else
  {
    MmFreeContiguousMemory(v1);
  }
}
