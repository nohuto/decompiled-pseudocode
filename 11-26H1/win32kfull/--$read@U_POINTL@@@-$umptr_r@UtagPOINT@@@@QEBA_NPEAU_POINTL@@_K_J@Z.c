/*
 * XREFs of ??$read@U_POINTL@@@?$umptr_r@UtagPOINT@@@@QEBA_NPEAU_POINTL@@_K_J@Z @ 0x140112FC0
 * Callers:
 *     ?GrePolyDraw@@YAHPEAUHDC__@@AEAV?$umptr_r@UtagPOINT@@@@AEAV?$umptr_r@E@@K@Z @ 0x140113090 (-GrePolyDraw@@YAHPEAUHDC__@@AEAV-$umptr_r@UtagPOINT@@@@AEAV-$umptr_r@E@@K@Z.c)
 * Callees:
 *     memmove @ 0x14034FF00 (memmove.c)
 */

char __fastcall umptr_r<tagPOINT>::read<_POINTL>(__int64 a1, void *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r10
  __int64 v4; // r9
  char v5; // al
  bool v6; // zf
  unsigned __int64 *v7; // rax
  size_t v8; // r8

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0LL;
  if ( v2 > 0x7FFFFFFFFFFFFFFFLL
    || (v4 = v2 - 1, v2 >> 63 == 1) && (unsigned __int64)v4 <= 0x7FFFFFFFFFFFFFFFLL
    || v4 < 0 )
  {
    v5 = 0;
  }
  else
  {
    v3 = v2 - 1;
    v5 = 1;
  }
  v6 = v5 == 0;
  v7 = (unsigned __int64 *)(a1 + 8);
  if ( v6 || v3 > *v7 )
    *(_BYTE *)(a1 + 24) = 1;
  v8 = 0LL;
  if ( *v7 == v3 )
    goto LABEL_16;
  v8 = 8LL;
  if ( !is_mul_ok(1uLL, 8uLL) )
  {
    v8 = -1LL;
LABEL_16:
    *(_BYTE *)(a1 + 24) = 1;
  }
  if ( *(_BYTE *)(a1 + 25) || *(_BYTE *)(a1 + 24) )
    return 0;
  memmove(a2, (const void *)(*(_QWORD *)a1 + 8 * v3), v8);
  return 1;
}
