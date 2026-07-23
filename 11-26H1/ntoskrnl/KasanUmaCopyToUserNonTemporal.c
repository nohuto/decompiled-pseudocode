/*
 * XREFs of KasanUmaCopyToUserNonTemporal @ 0x140723ED0
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405E5B60 (KcsanValidateAddress.c)
 *     UmapCopyToUserNonTemporal @ 0x140782790 (UmapCopyToUserNonTemporal.c)
 */

__int64 __fastcall KasanUmaCopyToUserNonTemporal(void *Destination, void *Source, SIZE_T Length)
{
  signed __int8 *v6; // rdx
  unsigned __int64 v7; // r8
  signed __int8 v8; // cl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( KasaniValidationEnabled && (unsigned __int64)Source >= 0xFFFF800000000000uLL )
  {
    if ( Length )
    {
      v6 = (signed __int8 *)(KasaniShadow + (((unsigned __int64)Source + 0x800000000000LL) >> 3));
      v7 = KasaniShadow + (((unsigned __int64)Source + Length + 0x7FFFFFFFFFFFLL) >> 3);
      if ( (unsigned __int64)v6 < v7 )
      {
        while ( 1 )
        {
          v8 = *v6;
          if ( *v6 )
          {
            if ( v8 < 8 )
              break;
          }
          if ( (unsigned __int64)++v6 >= v7 )
            goto LABEL_8;
        }
LABEL_16:
        KasaniReport((ULONG_PTR)Source, Length, 0, retaddr, v8);
      }
LABEL_8:
      v8 = *v6;
      if ( *v6 && v8 < 8 && (char)(((Length + (_BYTE)Source - 1) & 7) + 1) > v8 )
        goto LABEL_16;
      if ( v8 == 9 && KeGetCurrentIrql() >= 2u )
        KasaniReport((ULONG_PTR)Source, Length, 0, retaddr, 9u);
    }
    if ( KcsaniValidationEnabled )
      KcsanValidateAddress((unsigned __int64)Source, Length, 0, 0, retaddr);
  }
  return UmapCopyToUserNonTemporal(Destination, Source, Length);
}
