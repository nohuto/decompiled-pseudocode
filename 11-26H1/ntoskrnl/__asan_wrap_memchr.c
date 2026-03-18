/*
 * XREFs of __asan_wrap_memchr @ 0x1405E1690
 * Callers:
 *     <none>
 * Callees:
 *     memchr @ 0x140536E60 (memchr.c)
 *     KasaniReport @ 0x1405DDA50 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405E31F0 (KcsanValidateAddress.c)
 */

void *__fastcall _asan_wrap_memchr(ULONG_PTR BugCheckParameter1, int Val, size_t MaxCount)
{
  __int64 v4; // r14
  ULONG_PTR v7; // rbx
  signed __int8 v8; // cl
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v4 = 0xFFFF800000000000uLL - BugCheckParameter1;
  v7 = BugCheckParameter1;
  do
  {
    if ( v4 + v7 + 0x800000000000LL >= MaxCount )
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
  return memchr((const void *)BugCheckParameter1, Val, MaxCount);
}
