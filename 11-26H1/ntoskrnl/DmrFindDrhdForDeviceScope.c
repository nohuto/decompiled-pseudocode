/*
 * XREFs of DmrFindDrhdForDeviceScope @ 0x1405B24FC
 * Callers:
 *     DmrEnumerateRmrrDomains @ 0x1405B2A28 (DmrEnumerateRmrrDomains.c)
 * Callees:
 *     DmrGetNextDrhdDeviceScope @ 0x1405B259C (DmrGetNextDrhdDeviceScope.c)
 *     DmrCheckPathMatch @ 0x1405B25C8 (DmrCheckPathMatch.c)
 *     DmrGetNextRemappingStructure @ 0x1405B28DC (DmrGetNextRemappingStructure.c)
 */

__int64 __fastcall DmrFindDrhdForDeviceScope(__int64 a1, __int16 a2, _BYTE *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 NextRemappingStructure; // rax
  __int64 v9; // rbx
  __int64 i; // rdx
  __int64 NextDrhdDeviceScope; // rax
  __int64 v12; // rsi

  v3 = 0LL;
  v6 = a1;
  if ( *a3 == 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      NextRemappingStructure = DmrGetNextRemappingStructure(a1, v7);
      v9 = NextRemappingStructure;
      if ( !NextRemappingStructure )
        break;
      if ( !*(_WORD *)NextRemappingStructure && *(_WORD *)(NextRemappingStructure + 6) == a2 )
      {
        if ( (*(_BYTE *)(NextRemappingStructure + 4) & 1) != 0 )
          return v9;
        for ( i = 0LL; ; i = v12 )
        {
          NextDrhdDeviceScope = DmrGetNextDrhdDeviceScope(v9, i);
          v12 = NextDrhdDeviceScope;
          if ( !NextDrhdDeviceScope )
            break;
          if ( (unsigned __int8)DmrCheckPathMatch(NextDrhdDeviceScope, a3) )
            return v9;
        }
      }
      v7 = v9;
      a1 = v6;
    }
  }
  return v3;
}
