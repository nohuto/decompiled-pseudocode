/*
 * XREFs of ?ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z @ 0x140065EA0
 * Callers:
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x140048630 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140048990 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisUpdateCsSpuriousWakeStats(struct _NDIS_MINIPORT_AOAC *a1, unsigned int a2)
{
  if ( a2 == 65534 )
  {
    ++*((_DWORD *)a1 + 266);
    return;
  }
  if ( a2 <= 0x1000 )
  {
    switch ( a2 )
    {
      case 0x1000u:
        ++*((_DWORD *)a1 + 254);
        return;
      case 0u:
        ++*((_DWORD *)a1 + 250);
        return;
      case 1u:
        ++*((_DWORD *)a1 + 251);
        return;
      case 2u:
        ++*((_DWORD *)a1 + 252);
        return;
      case 3u:
        ++*((_DWORD *)a1 + 253);
        return;
    }
LABEL_35:
    ++*((_DWORD *)a1 + 268);
    *((_DWORD *)a1 + 269) = a2;
    return;
  }
  if ( a2 > 0x2001 )
  {
    switch ( a2 )
    {
      case 0x2002u:
        ++*((_DWORD *)a1 + 262);
        break;
      case 0x2004u:
        ++*((_DWORD *)a1 + 263);
        break;
      case 0x2005u:
        ++*((_DWORD *)a1 + 264);
        break;
      case 0xFFFDu:
        ++*((_DWORD *)a1 + 267);
        break;
      case 0xFFFFu:
        ++*((_DWORD *)a1 + 265);
        return;
      default:
        goto LABEL_35;
    }
  }
  else
  {
    if ( a2 == 8193 )
    {
      ++*((_DWORD *)a1 + 261);
      return;
    }
    if ( a2 > 0x1004 )
    {
      if ( a2 == 4101 )
      {
        ++*((_DWORD *)a1 + 259);
        return;
      }
      if ( a2 == 0x2000 )
      {
        ++*((_DWORD *)a1 + 260);
        return;
      }
      goto LABEL_35;
    }
    switch ( a2 )
    {
      case 0x1004u:
        ++*((_DWORD *)a1 + 258);
        break;
      case 0x1001u:
        ++*((_DWORD *)a1 + 255);
        break;
      case 0x1002u:
        ++*((_DWORD *)a1 + 256);
        break;
      default:
        ++*((_DWORD *)a1 + 257);
        break;
    }
  }
}
