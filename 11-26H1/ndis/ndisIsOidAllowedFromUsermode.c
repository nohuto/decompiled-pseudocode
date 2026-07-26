/*
 * XREFs of ndisIsOidAllowedFromUsermode @ 0x1400568A0
 * Callers:
 *     ndisMethodDeviceOid @ 0x1400C8D94 (ndisMethodDeviceOid.c)
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x14015D440 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIsOidAllowedFromUsermode(int a1)
{
  wchar_t *i; // rax

  for ( i = (wchar_t *)&unk_1400F8C14; ; i += 2 )
  {
    if ( i == L"\b" )
      return 1;
    if ( *(_DWORD *)i == a1 )
      break;
  }
  return 0;
}
