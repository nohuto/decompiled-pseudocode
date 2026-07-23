/*
 * XREFs of HalpIvtProcessDmarTable @ 0x1405B1244
 * Callers:
 *     HalpIommuRegisterBuiltinPlugins @ 0x1405A2738 (HalpIommuRegisterBuiltinPlugins.c)
 * Callees:
 *     HalpIvtProcessDrhdEntry @ 0x1405B12F8 (HalpIvtProcessDrhdEntry.c)
 *     DmrEnumerateSatcDevices @ 0x1405B2734 (DmrEnumerateSatcDevices.c)
 *     DmrGetNextRemappingStructure @ 0x1405B28DC (DmrGetNextRemappingStructure.c)
 */

__int64 __fastcall HalpIvtProcessDmarTable(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // r11
  __int64 v3; // rbx
  int v4; // r10d
  bool v5; // zf
  _WORD *v6; // rdx
  _WORD *NextRemappingStructure; // rax
  _WORD *i; // rdx
  _WORD *v9; // rax
  _WORD *v10; // rdi

  v2 = a2;
  v3 = a1;
  v4 = 0;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 4) >= 0x40u )
    {
      v5 = (*(_BYTE *)(a1 + 37) & 4) == 0;
      qword_140E65B50 = a1;
      if ( !v5 )
      {
        v6 = 0LL;
        while ( 1 )
        {
          NextRemappingStructure = (_WORD *)DmrGetNextRemappingStructure(a1, v6);
          if ( !NextRemappingStructure )
            break;
          if ( *NextRemappingStructure == 4 )
          {
            LOBYTE(v4) = 0;
            break;
          }
          v6 = NextRemappingStructure;
          a1 = v3;
        }
      }
      *v2 = v4;
      v4 = DmrEnumerateSatcDevices(v3);
      if ( v4 >= 0 )
      {
        for ( i = 0LL; ; i = v10 )
        {
          v9 = (_WORD *)DmrGetNextRemappingStructure(v3, i);
          v10 = v9;
          if ( !v9 )
            break;
          if ( !*v9 )
          {
            v4 = HalpIvtProcessDrhdEntry(v3, v9);
            if ( v4 < 0 )
              break;
          }
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v4;
}
