/*
 * XREFs of sub_14008797C @ 0x14008797C
 * Callers:
 *     sub_1400D9E8C @ 0x1400D9E8C (sub_1400D9E8C.c)
 *     sub_1400DA194 @ 0x1400DA194 (sub_1400DA194.c)
 * Callees:
 *     sub_1400179D0 @ 0x1400179D0 (sub_1400179D0.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_14008797C(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v3; // [rsp+20h] [rbp-18h]

  if ( sub_1400179D0(a1) )
  {
    v3 = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char))(*(_QWORD *)(*(_QWORD *)(v2 + 1144) + 8LL) + 24LL))(
      *(_QWORD *)(v2 + 1144),
      *(unsigned int *)(v1 + 16),
      *(_QWORD *)(v1 + 24),
      v1,
      v3);
  }
  else
  {
    MmFreeContiguousMemory((PVOID)v1);
  }
}
