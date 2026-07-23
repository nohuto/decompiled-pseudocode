/*
 * XREFs of KasanUmaCopyToUser @ 0x140723DA0
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405E5B60 (KcsanValidateAddress.c)
 *     KscpCopyToUser @ 0x140C64C20 (KscpCopyToUser.c)
 */

__int64 __fastcall KasanUmaCopyToUser(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 v4; // r9
  signed __int8 *v7; // rdx
  unsigned __int64 v8; // r8
  signed __int8 v9; // cl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v4 = retaddr;
  if ( KasaniValidationEnabled && a2 >= 0xFFFF800000000000uLL )
  {
    if ( a3 )
    {
      v7 = (signed __int8 *)(KasaniShadow + ((a2 + 0x800000000000LL) >> 3));
      v8 = KasaniShadow + ((a3 + a2 + 0x7FFFFFFFFFFFLL) >> 3);
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
        KasaniReport(a2, a3, 0, retaddr, v9);
      }
LABEL_8:
      v9 = *v7;
      if ( *v7 && v9 < 8 && (char)(((a3 + a2 - 1) & 7) + 1) > v9 )
        goto LABEL_16;
      if ( v9 == 9 && KeGetCurrentIrql() >= 2u )
        KasaniReport(a2, a3, 0, retaddr, 9u);
    }
    if ( KcsaniValidationEnabled )
      KcsanValidateAddress(a2, a3, 0, 0, retaddr);
  }
  return KscpCopyToUser(a1, a2, a3, v4);
}
