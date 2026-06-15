/*
 * XREFs of sub_140086650 @ 0x140086650
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     sub_1400672C0 @ 0x1400672C0 (sub_1400672C0.c)
 *     sub_140083F08 @ 0x140083F08 (sub_140083F08.c)
 */

__int64 __fastcall sub_140086650(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  _QWORD *v4; // rax

  v1 = *(__int64 **)(a1 + 768);
  if ( v1 )
  {
    v2 = *v1;
    v3 = 0LL;
    if ( v2 )
    {
      while ( v3 < *(_QWORD *)(v2 + 16) )
      {
        v4 = sub_140083F08(v2, v3);
        if ( !v4 )
          sub_14004639C(-2147467259);
        sub_1400672C0((__int64 *)v4[2]);
        ++v3;
      }
    }
  }
  return 0LL;
}
