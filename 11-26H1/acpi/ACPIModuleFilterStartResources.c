/*
 * XREFs of ACPIModuleFilterStartResources @ 0x14005B69C
 * Callers:
 *     ACPIBusIrpStartDevice @ 0x1400ADD90 (ACPIBusIrpStartDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIModuleFilterStartResources(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int i; // ecx
  __int64 v6; // rax
  unsigned int v7; // r8d
  _WORD *v8; // rdx
  __int64 v9; // r9
  char v10; // r8

  for ( i = 0; i < 2; ++i )
  {
    while ( !i )
    {
      if ( a2 )
      {
        v6 = a2 + 4;
        goto LABEL_8;
      }
      i = 1;
    }
    if ( !a3 )
      return 0LL;
    v6 = a3 + 4;
LABEL_8:
    if ( !v6 )
      break;
    v7 = *(_DWORD *)(v6 + 12);
    if ( v7 )
    {
      v8 = (_WORD *)(v6 + 18);
      v9 = v7;
      do
      {
        v10 = *((_BYTE *)v8 - 2);
        if ( v10 == 3 || v10 == 7 )
          *v8 &= ~0x100u;
        v8 += 10;
        --v9;
      }
      while ( v9 );
    }
  }
  return 0LL;
}
