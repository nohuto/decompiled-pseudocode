/*
 * XREFs of sub_1400601B0 @ 0x1400601B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140017A94 @ 0x140017A94 (sub_140017A94.c)
 *     sub_140017CB0 @ 0x140017CB0 (sub_140017CB0.c)
 *     sub_14003A1E0 @ 0x14003A1E0 (sub_14003A1E0.c)
 */

__int64 __fastcall sub_1400601B0(__int64 a1, __int64 *a2)
{
  signed __int64 v2; // rbx
  __int64 v5; // rbx
  __int64 v6; // rcx
  bool v8; // zf
  __int64 v9; // rax

  v2 = *(_QWORD *)(a1 + 40);
  *a2 = 0LL;
  if ( v2 >= 0 )
  {
    v6 = sub_140017A94(a1 - 16);
    if ( !v6 )
      return 2147942414LL;
    while ( 1 )
    {
      *(_DWORD *)(v6 + 16) = v2;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), (v6 >> 1) | 0x8000000000000000uLL, v2);
      v8 = v2 == v9;
      v2 = v9;
      if ( v8 )
        break;
      if ( v9 < 0 )
      {
        sub_14003A1E0(v6, 1);
        goto LABEL_2;
      }
    }
    *a2 = v6;
  }
  else
  {
LABEL_2:
    v5 = 2 * v2;
    sub_140017CB0((volatile signed __int32 *)(v5 + 12));
    *a2 = v5;
  }
  return 0LL;
}
