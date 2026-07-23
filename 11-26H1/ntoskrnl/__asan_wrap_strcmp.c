/*
 * XREFs of __asan_wrap_strcmp @ 0x1405E4630
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405E5B60 (KcsanValidateAddress.c)
 */

__int64 __fastcall _asan_wrap_strcmp(unsigned __int8 *BugCheckParameter1, ULONG_PTR a2)
{
  unsigned __int64 v3; // rbp
  unsigned __int8 *v4; // rdi
  ULONG_PTR v5; // rbx
  signed __int8 v6; // cl
  ULONG_PTR v8; // rbx
  signed __int8 v9; // cl
  ULONG_PTR v11; // r15
  unsigned __int8 v12; // al
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v3 = 0xFFFF800000000000uLL - (_QWORD)BugCheckParameter1;
  v4 = BugCheckParameter1;
  v5 = (ULONG_PTR)BugCheckParameter1;
  do
  {
    if ( v5 + 0x800000000000LL + v3 == -1LL )
      break;
    if ( KasaniValidationEnabled && v5 >= 0xFFFF800000000000uLL )
    {
      v6 = *(_BYTE *)(((v5 + 0x800000000000LL) >> 3) + KasaniShadow);
      if ( v6 )
      {
        if ( v6 < 8 && (char)((v5 & 7) + 1) > v6 )
          KasaniReport(v5, 1uLL, 0, retaddr, v6);
        if ( v6 == 9 && KeGetCurrentIrql() >= 2u )
          KasaniReport(v5, 1uLL, 0, retaddr, 9u);
      }
      if ( KcsaniValidationEnabled )
        KcsanValidateAddress(v5, 1, 0, 0, retaddr);
    }
  }
  while ( *(_BYTE *)v5++ );
  v8 = a2;
  do
  {
    if ( v8 - a2 == -1LL )
      break;
    if ( KasaniValidationEnabled && v8 >= 0xFFFF800000000000uLL )
    {
      v9 = *(_BYTE *)(((v8 + 0x800000000000LL) >> 3) + KasaniShadow);
      if ( v9 )
      {
        if ( v9 < 8 && (char)((v8 & 7) + 1) > v9 )
          KasaniReport(v8, 1uLL, 0, retaddr, v9);
        if ( v9 == 9 && KeGetCurrentIrql() >= 2u )
          KasaniReport(v8, 1uLL, 0, retaddr, 9u);
      }
      if ( KcsaniValidationEnabled )
        KcsanValidateAddress(v8, 1, 0, 0, retaddr);
    }
  }
  while ( *(_BYTE *)v8++ );
  v11 = a2 - (_QWORD)v4;
  while ( 1 )
  {
    v12 = *v4;
    if ( *v4 != v4[v11] )
      break;
    ++v4;
    if ( !v12 )
      return 0LL;
  }
  return v12 < v4[v11] ? -1 : 1;
}
