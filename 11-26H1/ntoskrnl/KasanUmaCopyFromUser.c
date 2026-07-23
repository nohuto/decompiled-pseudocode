/*
 * XREFs of KasanUmaCopyFromUser @ 0x140723B40
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405E5B60 (KcsanValidateAddress.c)
 *     KscpCopyFromUser @ 0x140C64BC0 (KscpCopyFromUser.c)
 */

__int64 __fastcall KasanUmaCopyFromUser(ULONG_PTR BugCheckParameter1, __int64 a2, ULONG_PTR a3)
{
  __int64 v4; // r9
  signed __int8 *v7; // rdx
  ULONG_PTR v8; // r8
  signed __int8 v9; // cl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v4 = retaddr;
  if ( KasaniValidationEnabled && BugCheckParameter1 >= 0xFFFF800000000000uLL )
  {
    if ( a3 )
    {
      v7 = (signed __int8 *)(KasaniShadow + ((BugCheckParameter1 + 0x800000000000LL) >> 3));
      v8 = KasaniShadow + ((a3 + BugCheckParameter1 + 0x7FFFFFFFFFFFLL) >> 3);
      if ( (unsigned __int64)v7 < v8 )
      {
        while ( 1 )
        {
          v9 = *v7;
          if ( *v7 )
          {
            if ( v9 < 8 )
              break;
          }
          if ( (unsigned __int64)++v7 >= v8 )
            goto LABEL_8;
        }
LABEL_16:
        KasaniReport(BugCheckParameter1, a3, 1u, retaddr, v9);
      }
LABEL_8:
      v9 = *v7;
      if ( *v7 && v9 < 8 && (char)(((a3 + BugCheckParameter1 - 1) & 7) + 1) > v9 )
        goto LABEL_16;
      if ( v9 == 9 && KeGetCurrentIrql() >= 2u )
        KasaniReport(BugCheckParameter1, a3, 1u, retaddr, 9u);
    }
    if ( KcsaniValidationEnabled )
      KcsanValidateAddress(BugCheckParameter1, a3, 1, 0, retaddr);
  }
  return KscpCopyFromUser(BugCheckParameter1, a2, a3, v4);
}
