/*
 * XREFs of init_block @ 0x18015718C
 * Callers:
 *     deflateResetKeep @ 0x180154688 (deflateResetKeep.c)
 *     _tr_flush_block @ 0x180156884 (_tr_flush_block.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall init_block(__int64 a1)
{
  _WORD *v1; // rax
  __int64 v2; // rdx
  _WORD *v3; // rax
  __int64 v4; // rdx
  _WORD *result; // rax
  __int64 v6; // rdx

  v1 = (_WORD *)(a1 + 268);
  v2 = 286LL;
  do
  {
    *v1 = 0;
    v1 += 2;
    --v2;
  }
  while ( v2 );
  v3 = (_WORD *)(a1 + 2560);
  v4 = 30LL;
  do
  {
    *v3 = 0;
    v3 += 2;
    --v4;
  }
  while ( v4 );
  result = (_WORD *)(a1 + 2804);
  v6 = 19LL;
  do
  {
    *result = 0;
    result += 2;
    --v6;
  }
  while ( v6 );
  *(_WORD *)(a1 + 1292) = 1;
  *(_QWORD *)(a1 + 5964) = 0LL;
  *(_DWORD *)(a1 + 5972) = 0;
  *(_DWORD *)(a1 + 5956) = 0;
  return result;
}
