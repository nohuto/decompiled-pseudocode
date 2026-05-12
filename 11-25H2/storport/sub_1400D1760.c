/*
 * XREFs of sub_1400D1760 @ 0x1400D1760
 * Callers:
 *     sub_1400D8C60 @ 0x1400D8C60 (sub_1400D8C60.c)
 *     sub_1401282DC @ 0x1401282DC (sub_1401282DC.c)
 * Callees:
 *     sub_1400D94E0 @ 0x1400D94E0 (sub_1400D94E0.c)
 */

char __fastcall sub_1400D1760(__int64 a1)
{
  char v3; // di
  struct _ERESOURCE *v4; // rbp
  _QWORD *v5; // rsi
  _QWORD *i; // rbx

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 )
    return sub_1400D94E0(*(_QWORD *)(a1 + 1136));
  if ( (*(_BYTE *)(a1 + 416) & 0x40) == 0 )
    return 0;
  v3 = 0;
  KeEnterCriticalRegion();
  v4 = (struct _ERESOURCE *)(a1 + 1176);
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 1176), 1u);
  v5 = (_QWORD *)(a1 + 1288);
  for ( i = *(_QWORD **)(a1 + 1288); i != v5; i = (_QWORD *)*i )
  {
    v3 = sub_1400D94E0(i - 14);
    if ( v3 )
      break;
  }
  ExReleaseResourceLite(v4);
  KeLeaveCriticalRegion();
  return v3;
}
