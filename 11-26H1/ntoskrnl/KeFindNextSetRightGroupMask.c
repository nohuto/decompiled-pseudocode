/*
 * XREFs of KeFindNextSetRightGroupMask @ 0x1404BB7F8
 * Callers:
 *     KeSelectGroupFromNode @ 0x1405F13CC (KeSelectGroupFromNode.c)
 *     KiSelectGroupFromNodeForAffinity @ 0x1405F27F8 (KiSelectGroupFromNodeForAffinity.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KeFindNextSetRightGroupMask(__int64 a1, unsigned __int16 a2, _WORD *a3)
{
  __int64 v3; // rbx
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rdx
  _QWORD *v7; // r9
  __int64 i; // r8
  unsigned __int64 result; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax

  v3 = a2;
  v5 = a2 & (unsigned __int64)-(__int64)(a2 < 0x20uLL);
  v6 = 31LL;
  while ( 1 )
  {
    if ( v6 - v5 == -1LL )
      goto LABEL_6;
    v7 = (_QWORD *)(a1 + 8 * (v5 >> 6));
    for ( i = ~*v7 | ((1LL << v5) - 1); i == -1; i = ~*v7 )
    {
      if ( (unsigned __int64)++v7 > a1 + 8 * (v6 >> 6) )
        goto LABEL_6;
    }
    _BitScanForward64(&v11, ~i);
    result = (((__int64)v7 - a1) >> 3 << 6) + v11;
    if ( result > v6 )
    {
LABEL_6:
      result = -1LL;
      goto LABEL_7;
    }
    if ( result != -1LL )
      break;
LABEL_7:
    if ( !v5 )
      break;
    v10 = v3 + 1;
    if ( (unsigned __int64)(v3 + 1) > 0x20 )
      v10 = 32LL;
    v6 = v10 - 1;
    v5 = 0LL;
  }
  *a3 = result;
  return result;
}
