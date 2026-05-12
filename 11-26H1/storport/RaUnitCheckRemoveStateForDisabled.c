/*
 * XREFs of RaUnitCheckRemoveStateForDisabled @ 0x14005AEB8
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidSrbFunctionFromIrp @ 0x140070658 (RaidSrbFunctionFromIrp.c)
 */

__int64 __fastcall RaUnitCheckRemoveStateForDisabled(__int64 a1, __int64 a2)
{
  char *v2; // r10
  char v3; // r9
  char v4; // r8
  char v5; // al

  if ( a2 )
  {
    v2 = *(char **)(a2 + 184);
    v3 = *v2;
    v4 = v2[1];
    if ( *v2 == 15 )
    {
      v5 = RaidSrbFunctionFromIrp(a2, a2);
      if ( v4 == -16 || v5 == 1 )
        return 0LL;
    }
    switch ( v3 )
    {
      case 27:
        return 0LL;
      case 14:
        if ( *((_DWORD *)v2 + 6) == 266264 )
          return 0LL;
        break;
      case 22:
        return v4 != 2 ? 0xC0000056 : 0;
    }
  }
  return 3221225558LL;
}
