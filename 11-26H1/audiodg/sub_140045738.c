/*
 * XREFs of sub_140045738 @ 0x140045738
 * Callers:
 *     sub_140045678 @ 0x140045678 (sub_140045678.c)
 *     sub_1400B46E0 @ 0x1400B46E0 (sub_1400B46E0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_140045738(__int64 a1)
{
  __int64 *i; // rdi
  __int64 v3; // rsi
  __int64 v4; // rcx

  if ( *(_DWORD *)a1 )
  {
    for ( i = *(__int64 **)(a1 + 16); (unsigned __int64)i < *(_QWORD *)(a1 + 24); ++i )
    {
      v3 = *i;
      if ( *i )
      {
        v4 = *(_QWORD *)(v3 + 32);
        if ( v4 )
          sub_1400B6010(v4);
        *(_QWORD *)(v3 + 32) = 0LL;
      }
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
    *(_DWORD *)a1 = 0;
  }
}
