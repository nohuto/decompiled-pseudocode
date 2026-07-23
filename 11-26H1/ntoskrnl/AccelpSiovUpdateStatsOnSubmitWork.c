/*
 * XREFs of AccelpSiovUpdateStatsOnSubmitWork @ 0x1406E492C
 * Callers:
 *     AccelpSiovInternalOperationHandler @ 0x14050B5F8 (AccelpSiovInternalOperationHandler.c)
 * Callees:
 *     AccelpSiovGetOperationType @ 0x1406E3E0C (AccelpSiovGetOperationType.c)
 */

void __fastcall AccelpSiovUpdateStatsOnSubmitWork(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 v4; // rdx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 188LL) == 1 )
  {
    v5 = 8;
    if ( (int)AccelpSiovGetOperationType(a1, a2, &v5) >= 0 && v5 != 8 )
    {
      v4 = 3LL * v5;
      if ( v5 == 1 || v5 == 2 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v2 + 24LL * v5 + 608));
      }
      else if ( v5 == 3 || (unsigned int)(v5 - 4) <= 1 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v2 + 24LL * v5 + 608));
        _InterlockedAdd64((volatile signed __int64 *)(v2 + 8 * v4 + 616), *(unsigned int *)(v3 + 32));
      }
    }
  }
}
