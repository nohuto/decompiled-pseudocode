/*
 * XREFs of ?ndisOidGetStatisticAllProcessors@@YAEPEAU_NDIS_MINIPORT_STATS@@KPEA_K@Z @ 0x14003F960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisOidGetStatisticAllProcessors(
        struct _NDIS_MINIPORT_STATS *a1,
        int a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rax
  int v5; // ecx
  __int64 v6; // rbx
  __int64 v7; // r11
  __int64 v8; // rdi
  unsigned __int64 v9; // r9

  v3 = 0LL;
  *a3 = 0LL;
  if ( a2 == 131591 )
  {
    v6 = -1LL;
    v5 = 8;
    v7 = -1LL;
LABEL_4:
    if ( ndisMaxNumberOfProcessors )
    {
      v8 = ndisMaxNumberOfProcessors;
      do
      {
        v9 = *a3 + *(unsigned __int64 *)((char *)&a1->ifHCInOctets + v5 + v3);
        *a3 = v9;
        if ( v6 >= 0 )
        {
          v9 += *(unsigned __int64 *)((char *)&a1->ifHCInOctets + v3 + v6);
          *a3 = v9;
        }
        if ( v7 >= 0 )
          *a3 = v9 + *(unsigned __int64 *)((char *)&a1->ifHCInOctets + v3 + v7);
        v3 += 112LL;
        --v8;
      }
      while ( v8 );
      LOBYTE(v3) = 0;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 131585:
        v6 = -1LL;
        v5 = 88;
        v7 = -1LL;
        goto LABEL_4;
      case 131586:
        v6 = -1LL;
        v5 = 64;
        v7 = -1LL;
        goto LABEL_4;
      case 131587:
        v6 = -1LL;
        v5 = 96;
        v7 = -1LL;
        goto LABEL_4;
      case 131588:
        v6 = -1LL;
        v5 = 72;
        v7 = -1LL;
        goto LABEL_4;
      case 131589:
        v6 = -1LL;
        v5 = 104;
        v7 = -1LL;
        goto LABEL_4;
      case 131590:
        v6 = -1LL;
        v5 = 80;
        v7 = -1LL;
        goto LABEL_4;
      case 131592:
        v6 = -1LL;
        v5 = 32;
        v7 = -1LL;
        goto LABEL_4;
      case 131593:
        v6 = -1LL;
        v5 = 24;
        v7 = -1LL;
        goto LABEL_4;
      case 131594:
        v6 = -1LL;
        v5 = 40;
        v7 = -1LL;
        goto LABEL_4;
      case 131595:
        v6 = -1LL;
        v5 = 16;
        v7 = -1LL;
        goto LABEL_4;
      case 131596:
        v6 = -1LL;
        v5 = 48;
        v7 = -1LL;
        goto LABEL_4;
      case 131609:
        v5 = 8;
        v6 = 16LL;
        v7 = 24LL;
        goto LABEL_4;
      case 131610:
        v5 = 88;
        v6 = 104LL;
        v7 = 96LL;
        goto LABEL_4;
      default:
        LOBYTE(v3) = 1;
        break;
    }
  }
  return v3;
}
