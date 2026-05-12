/*
 * XREFs of sub_1400D1198 @ 0x1400D1198
 * Callers:
 *     sub_1400CDA00 @ 0x1400CDA00 (sub_1400CDA00.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1400D1198(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  struct _ERESOURCE *v5; // rsi
  _QWORD **v6; // rbx
  _QWORD *v7; // r8

  v4 = 0LL;
  KeEnterCriticalRegion();
  v5 = (struct _ERESOURCE *)(a1 + 632);
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 632), 1u);
  v6 = (_QWORD **)(a1 + 608);
  v7 = *v6;
  while ( v7 != v6 )
  {
    v4 = v7 - 8;
    if ( a2 == v7 - 8 )
      break;
    v7 = (_QWORD *)*v7;
    v4 = 0LL;
  }
  ExReleaseResourceLite(v5);
  KeLeaveCriticalRegion();
  return v4;
}
