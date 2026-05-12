/*
 * XREFs of sub_1400D10FC @ 0x1400D10FC
 * Callers:
 *     sub_1400CA6FC @ 0x1400CA6FC (sub_1400CA6FC.c)
 *     sub_14018A49C @ 0x14018A49C (sub_14018A49C.c)
 *     sub_14018EBA4 @ 0x14018EBA4 (sub_14018EBA4.c)
 *     sub_140190BB4 @ 0x140190BB4 (sub_140190BB4.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1400D10FC(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rcx

  v2 = *(_QWORD *)(a1 + 592);
  v5 = 0LL;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v2 + 24), 1u);
  v6 = *(_QWORD *)(a1 + 592);
  v7 = *(_QWORD **)v6;
  while ( v7 != (_QWORD *)v6 )
  {
    v5 = v7 - 3;
    if ( a2 == v7 - 3 )
      break;
    v7 = (_QWORD *)*v7;
    v5 = 0LL;
  }
  ExReleaseResourceLite((PERESOURCE)(v6 + 24));
  KeLeaveCriticalRegion();
  return v5;
}
