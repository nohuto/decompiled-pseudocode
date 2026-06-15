/*
 * XREFs of sub_140089C20 @ 0x140089C20
 * Callers:
 *     <none>
 * Callees:
 *     sub_140017A94 @ 0x140017A94 (sub_140017A94.c)
 *     sub_140017CB0 @ 0x140017CB0 (sub_140017CB0.c)
 *     sub_14003A1E0 @ 0x14003A1E0 (sub_14003A1E0.c)
 */

__int64 __fastcall sub_140089C20(__int64 a1, __int64 *a2)
{
  signed __int64 v2; // rbx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v9; // rdx
  bool i; // zf
  signed __int64 v11; // rax

  v2 = *(_QWORD *)(a1 + 24);
  *a2 = 0LL;
  if ( v2 >= 0 )
  {
    v6 = sub_140017A94(a1 - 56);
    v7 = v6;
    if ( !v6 )
      return 2147942414LL;
    *(_DWORD *)(v6 + 16) = v2;
    v9 = (v6 >> 1) | 0x8000000000000000uLL;
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v9, v2);
    for ( i = v2 == v11; ; i = v11 == v2 )
    {
      v2 = v11;
      if ( i )
      {
        *a2 = v7;
        return 0LL;
      }
      if ( v11 < 0 )
        break;
      *(_DWORD *)(v7 + 16) = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v9, v11);
    }
    sub_14003A1E0(v7, 1);
  }
  sub_140017CB0((volatile signed __int32 *)(2 * v2 + 12));
  *a2 = v5;
  return 0LL;
}
