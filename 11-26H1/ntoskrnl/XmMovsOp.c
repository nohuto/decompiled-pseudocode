/*
 * XREFs of XmMovsOp @ 0x1405B0570
 * Callers:
 *     <none>
 * Callees:
 *     XmSetSourceValue @ 0x1404A226C (XmSetSourceValue.c)
 *     XmStoreResult @ 0x1404A24CC (XmStoreResult.c)
 *     XmGetStringAddress @ 0x1405B11B8 (XmGetStringAddress.c)
 */

_WORD *__fastcall XmMovsOp(__int64 a1)
{
  _WORD *result; // rax
  int v3; // edi
  unsigned __int16 *StringAddress; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // edx

  result = 0LL;
  v3 = 1;
  if ( !*(_BYTE *)(a1 + 139)
    || (!*(_BYTE *)(a1 + 137)
      ? (v3 = *(unsigned __int16 *)(a1 + 28), *(_WORD *)(a1 + 28) = 0)
      : (v3 = *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 28) = 0),
        v3) )
  {
    do
    {
      StringAddress = (unsigned __int16 *)XmGetStringAddress(a1, *(unsigned int *)(a1 + 116), 6LL);
      XmSetSourceValue(a1, StringAddress);
      v6 = XmGetStringAddress(v5, 0LL, 7LL);
      v7 = *(_DWORD *)(a1 + 108);
      *(_QWORD *)(a1 + 88) = v6;
      result = XmStoreResult(a1, v7);
      --v3;
    }
    while ( v3 );
  }
  return result;
}
