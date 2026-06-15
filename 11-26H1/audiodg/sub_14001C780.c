/*
 * XREFs of sub_14001C780 @ 0x14001C780
 * Callers:
 *     <none>
 * Callees:
 *     sub_14001C80C @ 0x14001C80C (sub_14001C80C.c)
 *     sub_140073954 @ 0x140073954 (sub_140073954.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14001C780(__int64 a1)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  __int64 v5; // rcx

  v2 = a1 - 128;
  v3 = sub_14001C80C(a1 - 128);
  if ( !v3 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( v5 )
    {
      sub_1400B6010(v5);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
    if ( v2 )
      sub_1400B6010(v2);
  }
  return v3;
}
