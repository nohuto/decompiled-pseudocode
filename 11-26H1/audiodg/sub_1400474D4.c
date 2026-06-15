/*
 * XREFs of sub_1400474D4 @ 0x1400474D4
 * Callers:
 *     sub_140027BB4 @ 0x140027BB4 (sub_140027BB4.c)
 * Callees:
 *     sub_140027C70 @ 0x140027C70 (sub_140027C70.c)
 *     sub_140027CA8 @ 0x140027CA8 (sub_140027CA8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_1400474D4(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi

  v2 = *a1 - 24;
  v3 = *(_QWORD *)v2;
  if ( *(_DWORD *)(v2 + 8) )
  {
    if ( *(int *)(v2 + 16) >= 0 )
    {
      sub_140027CA8(v2);
      *a1 = sub_1400B6010(v3) + 24;
    }
    else
    {
      sub_140027C70(a1, 0LL);
    }
  }
}
