/*
 * XREFs of ndisValidOid @ 0x1400890F0
 * Callers:
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x14015D440 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisValidOid(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 i; // rcx

  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v3 + 32) < 6u && (a2 & 0xFF000000) == 0xFF000000 || (*(_DWORD *)(v3 + 120) & 0x80u) != 0 )
  {
    LOBYTE(v4) = 1;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 4);
      for ( i = 0LL; (unsigned int)i < v5; i = (unsigned int)(i + 1) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4 * i) == a2 )
          break;
      }
      LOBYTE(v4) = (unsigned int)i < v5;
    }
  }
  return v4;
}
