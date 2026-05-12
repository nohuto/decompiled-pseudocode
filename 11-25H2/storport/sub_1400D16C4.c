/*
 * XREFs of sub_1400D16C4 @ 0x1400D16C4
 * Callers:
 *     sub_1400CB67C @ 0x1400CB67C (sub_1400CB67C.c)
 *     sub_1400CBA00 @ 0x1400CBA00 (sub_1400CBA00.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1400D16C4(__int64 a1, __int16 a2)
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
    if ( *((_WORD *)v7 - 30) == a2 )
      break;
    v7 = (_QWORD *)*v7;
    v4 = 0LL;
  }
  ExReleaseResourceLite(v5);
  KeLeaveCriticalRegion();
  return v4;
}
