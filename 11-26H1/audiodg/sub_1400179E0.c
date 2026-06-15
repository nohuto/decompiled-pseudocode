/*
 * XREFs of sub_1400179E0 @ 0x1400179E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140017A94 @ 0x140017A94 (sub_140017A94.c)
 *     sub_140017CB0 @ 0x140017CB0 (sub_140017CB0.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_1400179E0(__int64 a1, __int64 *a2, __int64 a3)
{
  signed __int64 v3; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // rbx

  v3 = *(_QWORD *)(a1 + 16);
  *a2 = 0LL;
  if ( v3 < 0 )
  {
LABEL_7:
    v11 = 2 * v3;
    sub_140017CB0(v11 + 12, a2, a3);
    *a2 = v11;
    return 0LL;
  }
  v6 = sub_140017A94(a1 - 8);
  v7 = v6;
  if ( v6 )
  {
    v8 = (v6 >> 1) | 0x8000000000000000uLL;
    while ( 1 )
    {
      *(_DWORD *)(v7 + 16) = v3;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v8, v3);
      v9 = v3 == v10;
      v3 = v10;
      if ( v9 )
        break;
      if ( v10 < 0 )
      {
        *(_QWORD *)v7 = off_1400B86B0;
        *(_DWORD *)(v7 + 16) = -1073741823;
        *(_DWORD *)(v7 + 12) = -1073741823;
        j_j__o_free(v7, 32LL);
        goto LABEL_7;
      }
    }
    *a2 = v7;
    return 0LL;
  }
  return 2147942414LL;
}
