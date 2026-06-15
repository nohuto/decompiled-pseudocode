/*
 * XREFs of sub_140055DD8 @ 0x140055DD8
 * Callers:
 *     sub_140054D3C @ 0x140054D3C (sub_140054D3C.c)
 *     sub_140054D5C @ 0x140054D5C (sub_140054D5C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140055DD8(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
