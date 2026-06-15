/*
 * XREFs of sub_14000D8D0 @ 0x14000D8D0
 * Callers:
 *     sub_14000C5E0 @ 0x14000C5E0 (sub_14000C5E0.c)
 *     sub_14000CB10 @ 0x14000CB10 (sub_14000CB10.c)
 *     sub_140082A00 @ 0x140082A00 (sub_140082A00.c)
 *     sub_140082DA0 @ 0x140082DA0 (sub_140082DA0.c)
 *     sub_1400861E0 @ 0x1400861E0 (sub_1400861E0.c)
 * Callees:
 *     sub_14000D938 @ 0x14000D938 (sub_14000D938.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_14000D8D0(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  bool v5; // zf

  v1 = *(__int64 **)a1;
  if ( !*(_QWORD *)a1 )
    sub_14004639C(2147500037LL, 0LL);
  v3 = *v1;
  v4 = v1[2];
  *(_QWORD *)a1 = *v1;
  if ( v3 )
    *(_QWORD *)(v3 + 8) = 0LL;
  else
    *(_QWORD *)(a1 + 8) = 0LL;
  *v1 = *(_QWORD *)(a1 + 32);
  v5 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = v1;
  if ( v5 )
    sub_14000D938(a1);
  return v4;
}
