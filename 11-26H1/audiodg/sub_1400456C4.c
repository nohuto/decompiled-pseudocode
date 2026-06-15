/*
 * XREFs of sub_1400456C4 @ 0x1400456C4
 * Callers:
 *     sub_140045678 @ 0x140045678 (sub_140045678.c)
 * Callees:
 *     sub_1400598A0 @ 0x1400598A0 (sub_1400598A0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_1400456C4(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rcx

  v2 = a1 + 8;
  if ( *(_DWORD *)(a1 + 8) )
  {
    if ( *(_QWORD *)(a1 + 16) )
    {
      sub_1400598A0(v2 & -(__int64)(a1 != 0));
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    v3 = *(_QWORD *)(a1 + 64);
    if ( v3 )
      sub_1400B6010(v3);
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
    *(_DWORD *)v2 = 0;
  }
}
