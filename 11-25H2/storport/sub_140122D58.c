/*
 * XREFs of sub_140122D58 @ 0x140122D58
 * Callers:
 *     sub_1400EC648 @ 0x1400EC648 (sub_1400EC648.c)
 *     sub_140107CC0 @ 0x140107CC0 (sub_140107CC0.c)
 *     sub_140123DD0 @ 0x140123DD0 (sub_140123DD0.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_140122D58(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // rbx
  __int64 v4; // rsi
  KIRQL v5; // bp
  __int64 v6; // r8

  if ( a2 && *(_QWORD *)(*(_QWORD *)a2 + 4176LL) )
  {
    v2 = *(_DWORD *)(*(_QWORD *)a2 + 4256LL);
    v3 = *(_QWORD *)(a1 + 128);
    v4 = *(_QWORD *)(*(_QWORD *)a2 + 4176LL);
    v5 = KfRaiseIrql(2u);
    LOBYTE(v6) = (v2 & 0x200) != 0;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v3 + 1144) + 8LL) + 96LL))(
      *(_QWORD *)(v3 + 1144),
      v4,
      v6);
    if ( v5 < 2u )
      KeLowerIrql(v5);
  }
}
