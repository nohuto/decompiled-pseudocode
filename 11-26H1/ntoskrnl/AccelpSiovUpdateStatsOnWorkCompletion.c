/*
 * XREFs of AccelpSiovUpdateStatsOnWorkCompletion @ 0x1406E49AC
 * Callers:
 *     AccelpSiovDsaOperationHandler @ 0x1404B90F4 (AccelpSiovDsaOperationHandler.c)
 * Callees:
 *     AccelpSiovGetOperationType @ 0x1406E3E0C (AccelpSiovGetOperationType.c)
 */

void __fastcall AccelpSiovUpdateStatsOnWorkCompletion(__int64 a1, __int64 a2)
{
  __int64 v3; // r10
  __int64 v4; // r11
  unsigned __int64 v5; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 188LL) == 1 )
  {
    v6 = 8;
    if ( (int)AccelpSiovGetOperationType(a1, a2, &v6) >= 0 && v6 != 8 && v4 )
    {
      if ( (*(_BYTE *)v4 & 0x3F) == 1 )
      {
        v5 = *(unsigned int *)(a2 + 32);
      }
      else
      {
        if ( (*(_BYTE *)v4 & 0x3Fu) - 3 > 1 )
          return;
        v5 = *(unsigned int *)(v4 + 4);
      }
      _InterlockedAdd64((volatile signed __int64 *)(v3 + 24LL * v6 + 624), v5);
    }
  }
}
