/*
 * XREFs of sub_1400D4930 @ 0x1400D4930
 * Callers:
 *     sub_1400D629C @ 0x1400D629C (sub_1400D629C.c)
 *     sub_140128F6C @ 0x140128F6C (sub_140128F6C.c)
 * Callees:
 *     sub_1400F2254 @ 0x1400F2254 (sub_1400F2254.c)
 */

void __fastcall sub_1400D4930(__int64 a1)
{
  struct _ERESOURCE *v2; // rsi
  _QWORD *v3; // rdi
  _QWORD *i; // rbx

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 )
  {
    sub_1400F2254(*(_QWORD *)(a1 + 1136));
  }
  else if ( (*(_BYTE *)(a1 + 416) & 0x40) != 0 )
  {
    KeEnterCriticalRegion();
    v2 = (struct _ERESOURCE *)(a1 + 1176);
    ExAcquireResourceSharedLite((PERESOURCE)(a1 + 1176), 1u);
    v3 = (_QWORD *)(a1 + 1288);
    for ( i = *(_QWORD **)(a1 + 1288); i != v3; i = (_QWORD *)*i )
    {
      if ( *((_DWORD *)i + 216) == 2 )
        ((void (*)(void))sub_1400F2254)();
    }
    ExReleaseResourceLite(v2);
    KeLeaveCriticalRegion();
  }
}
