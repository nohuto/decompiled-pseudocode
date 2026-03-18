/*
 * XREFs of IvtCheckForReservedRegion @ 0x1407879E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIvtCheckIdPathMatch @ 0x14052DD38 (HalpIvtCheckIdPathMatch.c)
 *     DmrGetNextDeviceScope @ 0x1405B0084 (DmrGetNextDeviceScope.c)
 *     DmrGetNextRemappingStructure @ 0x1405B00CC (DmrGetNextRemappingStructure.c)
 */

char __fastcall IvtCheckForReservedRegion(_DWORD *a1)
{
  __int64 i; // rdx
  _WORD *NextRemappingStructure; // rax
  _WORD *v4; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r14
  char *NextDeviceScope; // rax

  if ( *a1 == 1 && qword_140E65950 )
  {
    for ( i = 0LL; ; i = (__int64)v4 )
    {
      NextRemappingStructure = (_WORD *)DmrGetNextRemappingStructure(qword_140E65950, i);
      v4 = NextRemappingStructure;
      if ( !NextRemappingStructure )
        break;
      if ( *NextRemappingStructure == 1 )
      {
        v5 = 0LL;
        v6 = (unsigned __int64)NextRemappingStructure + (unsigned __int16)NextRemappingStructure[1];
        while ( 1 )
        {
          NextDeviceScope = (char *)DmrGetNextDeviceScope((unsigned __int64)(v4 + 12), v6, v5);
          v5 = (unsigned __int64)NextDeviceScope;
          if ( !NextDeviceScope )
            break;
          if ( HalpIvtCheckIdPathMatch((__int64)a1, NextDeviceScope) )
            return 1;
        }
      }
    }
  }
  return 0;
}
