/*
 * XREFs of VidSchQueryAdapterStatistics @ 0x140117D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchQueryAdapterStatistics(__int64 a1, _DWORD *a2)
{
  __int64 i; // r8

  a2[1] = *(_DWORD *)(a1 + 88);
  a2[2] = *(_DWORD *)(a1 + 48);
  if ( *(_BYTE *)(a1 + 2500) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 48); i = (unsigned int)(i + 1) )
    {
      if ( *(_BYTE *)(i + a1 + 2096) )
      {
        a2[3] = 1;
        break;
      }
    }
  }
  else
  {
    a2[3] = *(unsigned __int8 *)(a1 + 2096);
  }
  a2[4] = *(_DWORD *)(a1 + 3280);
  return 0LL;
}
