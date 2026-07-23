/*
 * XREFs of __asan_wrap_strncmp @ 0x1405E4B60
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405E5B60 (KcsanValidateAddress.c)
 *     strncmp @ 0x140741F60 (strncmp.c)
 */

int __fastcall _asan_wrap_strncmp(const char *BugCheckParameter1, const char *a2, size_t MaxCount)
{
  unsigned __int64 v4; // rsi
  ULONG_PTR v7; // rbx
  signed __int8 v8; // cl
  ULONG_PTR v10; // rbx
  signed __int8 v11; // cl
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v4 = 0xFFFF800000000000uLL - (_QWORD)BugCheckParameter1;
  v7 = (ULONG_PTR)BugCheckParameter1;
  do
  {
    if ( v7 + 0x800000000000LL + v4 >= MaxCount )
      break;
    if ( KasaniValidationEnabled && v7 >= 0xFFFF800000000000uLL )
    {
      v8 = *(_BYTE *)(((v7 + 0x800000000000LL) >> 3) + KasaniShadow);
      if ( v8 )
      {
        if ( v8 < 8 && (char)((v7 & 7) + 1) > v8 )
          KasaniReport(v7, 1uLL, 0, retaddr, v8);
        if ( v8 == 9 && KeGetCurrentIrql() >= 2u )
          KasaniReport(v7, 1uLL, 0, retaddr, 9u);
      }
      if ( KcsaniValidationEnabled )
        KcsanValidateAddress(v7, 1, 0, 0, retaddr);
    }
  }
  while ( *(_BYTE *)v7++ );
  v10 = (ULONG_PTR)a2;
  do
  {
    if ( v10 - (unsigned __int64)a2 >= MaxCount )
      break;
    if ( KasaniValidationEnabled && v10 >= 0xFFFF800000000000uLL )
    {
      v11 = *(_BYTE *)(((v10 + 0x800000000000LL) >> 3) + KasaniShadow);
      if ( v11 )
      {
        if ( v11 < 8 && (char)((v10 & 7) + 1) > v11 )
          KasaniReport(v10, 1uLL, 0, retaddr, v11);
        if ( v11 == 9 && KeGetCurrentIrql() >= 2u )
          KasaniReport(v10, 1uLL, 0, retaddr, 9u);
      }
      if ( KcsaniValidationEnabled )
        KcsanValidateAddress(v10, 1, 0, 0, retaddr);
    }
  }
  while ( *(_BYTE *)v10++ );
  return strncmp(BugCheckParameter1, a2, MaxCount);
}
