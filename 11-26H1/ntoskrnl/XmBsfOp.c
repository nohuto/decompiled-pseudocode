/*
 * XREFs of XmBsfOp @ 0x1404A1000
 * Callers:
 *     <none>
 * Callees:
 *     XmStoreResult @ 0x1404A24CC (XmStoreResult.c)
 */

__int64 __fastcall XmBsfOp(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // r8d

  v1 = *(_DWORD *)(a1 + 108);
  v2 = 0;
  *(_DWORD *)(a1 + 16) |= 0x40u;
  while ( v1 )
  {
    if ( (v1 & 1) != 0 )
    {
      *(_DWORD *)(a1 + 16) &= ~0x40u;
      return XmStoreResult(a1, v2);
    }
    ++v2;
    v1 >>= 1;
  }
  return XmStoreResult(a1, v2);
}
