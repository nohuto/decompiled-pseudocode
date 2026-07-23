/*
 * XREFs of DmrValidateDeviceScope @ 0x1405B2930
 * Callers:
 *     HalpIvtProcessDrhdEntry @ 0x1405B12F8 (HalpIvtProcessDrhdEntry.c)
 * Callees:
 *     DmrGetNextDrhdDeviceScope @ 0x1405B259C (DmrGetNextDrhdDeviceScope.c)
 *     DmrCheckPathMatch @ 0x1405B25C8 (DmrCheckPathMatch.c)
 *     DmrGetNextRemappingStructure @ 0x1405B28DC (DmrGetNextRemappingStructure.c)
 */

__int64 __fastcall DmrValidateDeviceScope(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int8 v5; // r15
  __int64 i; // rdx
  _BYTE *NextDrhdDeviceScope; // rax
  __int64 j; // rdx
  unsigned __int64 NextRemappingStructure; // rax
  unsigned __int64 v10; // rdi
  __int64 k; // rdx
  char *v12; // r14
  __int64 m; // rdx
  char *v14; // rax
  char *v15; // rbp

  v2 = 0;
  if ( *(_WORD *)a2 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v5 = *(_BYTE *)(a2 + 4);
    if ( (v5 & 1) != 0 )
    {
      for ( i = 0LL; ; i = (__int64)NextDrhdDeviceScope )
      {
        NextDrhdDeviceScope = (_BYTE *)DmrGetNextDrhdDeviceScope(a2, i);
        if ( !NextDrhdDeviceScope )
          break;
        if ( *NextDrhdDeviceScope == 1 || *NextDrhdDeviceScope == 2 )
          return (unsigned int)-1073741823;
      }
    }
    for ( j = 0LL; ; j = v10 )
    {
      NextRemappingStructure = DmrGetNextRemappingStructure(a1, j);
      v10 = NextRemappingStructure;
      if ( !NextRemappingStructure )
        break;
      if ( !*(_WORD *)NextRemappingStructure
        && NextRemappingStructure != a2
        && *(_WORD *)(NextRemappingStructure + 6) == *(_WORD *)(a2 + 6) )
      {
        if ( (v5 & *(_BYTE *)(NextRemappingStructure + 4) & 1) != 0 )
          return (unsigned int)-1073741823;
        for ( k = 0LL; ; k = (__int64)v12 )
        {
          v12 = (char *)DmrGetNextDrhdDeviceScope(a2, k);
          if ( !v12 )
            break;
          for ( m = 0LL; ; m = (__int64)v15 )
          {
            v14 = (char *)DmrGetNextDrhdDeviceScope(v10, m);
            v15 = v14;
            if ( !v14 )
              break;
            if ( DmrCheckPathMatch(v12, v14) )
              return (unsigned int)-1073741823;
          }
        }
      }
    }
  }
  return v2;
}
