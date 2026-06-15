/*
 * XREFs of sub_140019060 @ 0x140019060
 * Callers:
 *     <none>
 * Callees:
 *     sub_140017A94 @ 0x140017A94 (sub_140017A94.c)
 *     sub_140017CB0 @ 0x140017CB0 (sub_140017CB0.c)
 *     sub_14003A1E0 @ 0x14003A1E0 (sub_14003A1E0.c)
 */

__int64 __fastcall sub_140019060(__int64 a1, __int64 *a2)
{
  signed __int64 v2; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  bool v8; // zf
  __int64 v9; // rax
  __int64 v11; // rbx

  v2 = *(_QWORD *)(a1 + 24);
  *a2 = 0LL;
  if ( v2 >= 0 )
  {
    v5 = sub_140017A94(a1 - 16);
    v6 = v5;
    if ( !v5 )
      return 2147942414LL;
    v7 = (v5 >> 1) | 0x8000000000000000uLL;
    do
    {
      *(_DWORD *)(v6 + 16) = v2;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v7, v2);
      v8 = v2 == v9;
      v2 = v9;
      if ( v8 )
      {
        *a2 = v6;
        return 0LL;
      }
    }
    while ( v9 >= 0 );
    sub_14003A1E0(v6, 1LL);
  }
  v11 = 2 * v2;
  sub_140017CB0((volatile signed __int32 *)(v11 + 12));
  *a2 = v11;
  return 0LL;
}
