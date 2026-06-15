/*
 * XREFs of sub_140017AF0 @ 0x140017AF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140017A94 @ 0x140017A94 (sub_140017A94.c)
 *     sub_140017CB0 @ 0x140017CB0 (sub_140017CB0.c)
 *     sub_14003A1E0 @ 0x14003A1E0 (sub_14003A1E0.c)
 */

__int64 __fastcall sub_140017AF0(__int64 a1, __int64 *a2, __int64 a3)
{
  signed __int64 v3; // rbx
  __int64 v6; // rbx
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v10; // rax

  v3 = *(_QWORD *)(a1 + 104);
  *a2 = 0LL;
  if ( v3 < 0 )
  {
LABEL_2:
    v6 = 2 * v3;
    sub_140017CB0(v6 + 12, a2, a3);
    *a2 = v6;
    return 0LL;
  }
  v8 = sub_140017A94(a1 - 16);
  if ( v8 )
  {
    while ( 1 )
    {
      *(_DWORD *)(v8 + 16) = v3;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), (v8 >> 1) | 0x8000000000000000uLL, v3);
      v9 = v3 == v10;
      v3 = v10;
      if ( v9 )
        break;
      if ( v10 < 0 )
      {
        sub_14003A1E0(v8, 1LL);
        goto LABEL_2;
      }
    }
    *a2 = v8;
    return 0LL;
  }
  return 2147942414LL;
}
