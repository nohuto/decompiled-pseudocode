/*
 * XREFs of sub_18000D77C @ 0x18000D77C
 * Callers:
 *     sub_180029D50 @ 0x180029D50 (sub_180029D50.c)
 * Callees:
 *     _o__free_base @ 0x18000CD96 (_o__free_base.c)
 *     _o__malloc_base @ 0x18000CDC6 (_o__malloc_base.c)
 */

__int64 __fastcall sub_18000D77C(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  int v4; // eax

  v2 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v3 = *(_QWORD *)(v2 + 32);
  if ( !v3 )
  {
    v3 = v2 + 48;
LABEL_7:
    v4 = 0;
    *(_QWORD *)(v2 + 32) = v3;
    *(_DWORD *)v3 = 0;
    goto LABEL_8;
  }
  v4 = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 == 30 )
  {
    v3 = o__malloc_base();
    o__free_base();
    if ( !v3 )
      return 0xFFFFFFFFLL;
    *(_QWORD *)(v3 + 8) = *(_QWORD *)(v2 + 32);
    goto LABEL_7;
  }
LABEL_8:
  *(_QWORD *)(v3 + 8LL * v4 + 16) = a1;
  ++*(_DWORD *)v3;
  return 0LL;
}
