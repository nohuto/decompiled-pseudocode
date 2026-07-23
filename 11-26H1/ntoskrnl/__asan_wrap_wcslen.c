/*
 * XREFs of __asan_wrap_wcslen @ 0x1405E55B0
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405E5B60 (KcsanValidateAddress.c)
 */

__int64 __fastcall _asan_wrap_wcslen(ULONG_PTR BugCheckParameter1)
{
  char v1; // r15
  ULONG_PTR v2; // rbp
  ULONG_PTR v4; // r14
  ULONG_PTR v5; // rbx
  ULONG_PTR v6; // rdx
  signed __int8 v7; // al
  __int16 v9; // ax
  __int64 result; // rax
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v1 = BugCheckParameter1 + 1;
  v2 = BugCheckParameter1 + 0x800000000001LL;
  v4 = BugCheckParameter1 + 0x800000000000LL;
  v5 = BugCheckParameter1;
  do
  {
    v6 = v5 - BugCheckParameter1;
    if ( v5 - BugCheckParameter1 == -1LL )
      break;
    if ( KasaniValidationEnabled && v5 >= 0xFFFF800000000000uLL )
    {
      v7 = *(_BYTE *)(((v6 + v4) >> 3) + KasaniShadow);
      if ( (v5 & 7) == 7 )
      {
        if ( v7 && v7 < 8
          || (v7 = *(_BYTE *)(((v6 + v2) >> 3) + KasaniShadow)) != 0 && v7 < 8 && (char)(((v1 + v6) & 7) + 1) > v7 )
        {
LABEL_27:
          KasaniReport(v5, 2uLL, 0, retaddr, v7);
        }
      }
      else if ( v7 && v7 < 8 && (char)(((v5 + 1) & 7) + 1) > v7 )
      {
        goto LABEL_27;
      }
      if ( v7 == 9 && KeGetCurrentIrql() >= 2u )
        KasaniReport(v5, 2uLL, 0, retaddr, 9u);
      if ( KcsaniValidationEnabled )
        KcsanValidateAddress(v5, 2, 0, 0, retaddr);
    }
    v9 = *(_WORD *)v5;
    v5 += 2LL;
  }
  while ( v9 );
  result = -1LL;
  do
    ++result;
  while ( *(_WORD *)(BugCheckParameter1 + 2 * result) );
  return result;
}
