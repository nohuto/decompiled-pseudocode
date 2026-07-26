/*
 * XREFs of ndisIsOidAllowedFromUsermode_0 @ 0x140057750
 * Callers:
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x14015D440 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIsOidAllowedFromUsermode_0(_DWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r8
  wchar_t *i; // rax

  v3 = 0LL;
LABEL_2:
  if ( v3 >= a2 )
    return 1;
  for ( i = (wchar_t *)&unk_1400F8C14; ; i += 2 )
  {
    if ( i == L"\b" )
    {
      ++v3;
      ++a1;
      goto LABEL_2;
    }
    if ( *(_DWORD *)i == *a1 )
      break;
  }
  return 0;
}
