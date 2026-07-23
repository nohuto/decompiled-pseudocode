/*
 * XREFs of MiSystemVaToDynamicBitmap @ 0x1402A42B4
 * Callers:
 *     MiMakeSystemRangeAvailable @ 0x1402A3998 (MiMakeSystemRangeAvailable.c)
 *     MiObtainSystemVa @ 0x1402A428C (MiObtainSystemVa.c)
 *     MiMarkSystemVaAllocated @ 0x1405044E8 (MiMarkSystemVaAllocated.c)
 *     MiIsSystemVaAllocated @ 0x1406FA104 (MiIsSystemVaAllocated.c)
 *     MiInitializeDynamicRegion @ 0x140CFFB44 (MiInitializeDynamicRegion.c)
 * Callees:
 *     <none>
 */

$A4FCC2D77D2C8DA06473821DBD6C3FF5 *__fastcall MiSystemVaToDynamicBitmap(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  if ( a1 <= 11 )
  {
    if ( a1 == 11 )
      return ($A4FCC2D77D2C8DA06473821DBD6C3FF5 *)&stru_140E2DAB0.WaitBlockFill11[64];
    v6 = a1 - 5;
    if ( !v6 )
      return ($A4FCC2D77D2C8DA06473821DBD6C3FF5 *)&stru_140E2DAB0.WaitBlockFill11[136];
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
        return ($A4FCC2D77D2C8DA06473821DBD6C3FF5 *)&stru_140E2DAB0.QueueListEntry.Blink;
      v9 = v8 - 1;
      if ( !v9 )
        return ($A4FCC2D77D2C8DA06473821DBD6C3FF5 *)&stru_140E2DAB0.Teb;
      if ( v9 != 2 )
        return 0LL;
    }
    return ($A4FCC2D77D2C8DA06473821DBD6C3FF5 *)&stru_140E2DAB0.Timer.Processor;
  }
  v1 = a1 - 12;
  if ( !v1 )
    return ($A4FCC2D77D2C8DA06473821DBD6C3FF5 *)&stru_140E2DAB0.Teb;
  v2 = v1 - 1;
  if ( !v2 )
    return ($A4FCC2D77D2C8DA06473821DBD6C3FF5 *)&stru_140E2DAB0.StateSaveArea;
  v3 = v2 - 1;
  if ( !v3 )
    return ($A4FCC2D77D2C8DA06473821DBD6C3FF5 *)&stru_140E2DAB0.SchedulerApcFill5[24];
  v4 = v3 - 1;
  if ( v4 )
  {
    if ( v4 == 2 )
      return &stru_140E2DAB0.600;
    return 0LL;
  }
  return ($A4FCC2D77D2C8DA06473821DBD6C3FF5 *)&stru_140E2DAB0.ApcStateFill[16];
}
