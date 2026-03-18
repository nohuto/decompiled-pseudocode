/*
 * XREFs of ?GetProperty@CAnimationTrigger@@EEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180269E60
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CAnimationTrigger::GetProperty(__int64 a1, int a2, CExpressionValue *a3)
{
  unsigned int v3; // edi
  char v5; // bl

  v3 = 0;
  if ( a2 )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    v5 = *(_BYTE *)(a1 + 128) & 1;
    CExpressionValue::DestroyCurrent(a3);
    *((_DWORD *)a3 + 16) = 17;
    *(_BYTE *)a3 = v5;
  }
  return v3;
}
