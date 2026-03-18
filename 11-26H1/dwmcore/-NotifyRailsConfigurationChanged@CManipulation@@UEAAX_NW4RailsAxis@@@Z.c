/*
 * XREFs of ?NotifyRailsConfigurationChanged@CManipulation@@UEAAX_NW4RailsAxis@@@Z @ 0x1801C5350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CManipulation::NotifyRailsConfigurationChanged(__int64 a1, char a2, int a3)
{
  __int64 *v4; // rcx
  unsigned __int8 v5; // r10
  char v6; // r9
  char result; // al
  char v8; // r10
  __int64 v9; // rax

  v4 = (__int64 *)(a1 - 80);
  v5 = *(_BYTE *)(a1 + 372);
  v6 = v5;
  result = v5 >> 1;
  if ( a3 )
    v6 = *(_BYTE *)(a1 + 372) >> 1;
  if ( (v6 & 1) != a2 )
  {
    if ( a3 )
    {
      v8 = v5 & 0xFD;
      a2 *= 2;
    }
    else
    {
      v8 = v5 & 0xFE;
    }
    v9 = *v4;
    *(_BYTE *)(a1 + 372) = a2 | v8;
    return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v9 + 80))(v4, 12LL, v4);
  }
  return result;
}
