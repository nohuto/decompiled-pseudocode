/*
 * XREFs of KasanUmaCopyFromUserNonTemporal @ 0x14071F050
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405DDA50 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405E31F0 (KcsanValidateAddress.c)
 *     UmapCopyFromUserNonTemporal @ 0x14077FC30 (UmapCopyFromUserNonTemporal.c)
 */

__int64 __fastcall KasanUmaCopyFromUserNonTemporal(void *Destination, void *Source, SIZE_T Length)
{
  signed __int8 *v6; // rdx
  unsigned __int64 v7; // r8
  signed __int8 v8; // cl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( KasaniValidationEnabled && (unsigned __int64)Destination >= 0xFFFF800000000000uLL )
  {
    if ( Length )
    {
      v6 = (signed __int8 *)(KasaniShadow + (((unsigned __int64)Destination + 0x800000000000LL) >> 3));
      v7 = KasaniShadow + (((unsigned __int64)Destination + Length + 0x7FFFFFFFFFFFLL) >> 3);
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
        KasaniReport((ULONG_PTR)Destination, Length, 1u, retaddr, v8);
      }
LABEL_8:
      v8 = *v6;
      if ( *v6 && v8 < 8 && (char)(((Length + (_BYTE)Destination - 1) & 7) + 1) > v8 )
        goto LABEL_16;
      if ( v8 == 9 && KeGetCurrentIrql() >= 2u )
        KasaniReport((ULONG_PTR)Destination, Length, 1u, retaddr, 9u);
    }
    if ( KcsaniValidationEnabled )
      KcsanValidateAddress((unsigned __int64)Destination, Length, 1, 0, retaddr);
  }
  return UmapCopyFromUserNonTemporal(Destination, Source, Length);
}
