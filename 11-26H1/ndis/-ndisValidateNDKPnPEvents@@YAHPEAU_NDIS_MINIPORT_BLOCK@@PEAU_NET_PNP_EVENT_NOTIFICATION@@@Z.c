/*
 * XREFs of ?ndisValidateNDKPnPEvents@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x14016B910
 * Callers:
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1401767B0 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140071920 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisValidateNDKPnPEvents(struct _NDIS_MINIPORT_BLOCK *a1, struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  struct _NDIS_NDK_BLOCK *NDKBlock; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // bl
  __int64 v6; // r11
  unsigned int v7; // r9d
  unsigned int v8; // r10d

  NDKBlock = ndisGetNDKBlock(a1);
  v5 = 0;
  v6 = *(_QWORD *)(v3 + 16);
  v7 = 0;
  v8 = *(_DWORD *)(v3 + 24);
  if ( !NDKBlock )
    return 3221225488LL;
  if ( *(_BYTE *)(v4 + 32) > 6u || *(_BYTE *)(v4 + 32) == 6 && *(_BYTE *)(v4 + 33) >= 0x32u )
  {
    v5 = 1;
    if ( (*(_BYTE *)(v3 + 1) >= 2u || (*(_DWORD *)(v3 + 160) & 4) != 0)
      && (*(_DWORD *)(v3 + 160) & 2) != 0
      && *(_DWORD *)(v3 + 168) )
    {
      return v7;
    }
  }
  else if ( v6 || v8 )
  {
    return 3221225488LL;
  }
  if ( *(_DWORD *)(v3 + 8) != 13 )
  {
    if ( !v5 || !v6 && !v8 )
    {
      if ( !*((_BYTE *)NDKBlock + 24) )
        return (unsigned int)-1073741436;
      return v7;
    }
    return 3221225488LL;
  }
  if ( v5 && (!v6 || v8 < 0x38) )
    return 3221225488LL;
  if ( *((_BYTE *)NDKBlock + 24) )
    return 3221225860LL;
  return v7;
}
