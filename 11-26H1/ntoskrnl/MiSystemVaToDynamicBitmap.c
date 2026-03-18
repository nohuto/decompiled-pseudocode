/*
 * XREFs of MiSystemVaToDynamicBitmap @ 0x1402A4D64
 * Callers:
 *     MiMakeSystemRangeAvailable @ 0x1402A4448 (MiMakeSystemRangeAvailable.c)
 *     MiObtainSystemVa @ 0x1402A4D3C (MiObtainSystemVa.c)
 *     MiMarkSystemVaAllocated @ 0x14050AA78 (MiMarkSystemVaAllocated.c)
 *     MiIsSystemVaAllocated @ 0x1406F5494 (MiIsSystemVaAllocated.c)
 *     MiInitializeDynamicRegion @ 0x140CF97C4 (MiInitializeDynamicRegion.c)
 * Callees:
 *     <none>
 */

$B3FD53340A977CC9CDA66D808670C106 *__fastcall MiSystemVaToDynamicBitmap(int a1)
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
      return ($B3FD53340A977CC9CDA66D808670C106 *)&stru_140E2D930.WaitBlockFill11[64];
    v6 = a1 - 5;
    if ( !v6 )
      return ($B3FD53340A977CC9CDA66D808670C106 *)&stru_140E2D930.WaitBlockFill11[136];
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
        return ($B3FD53340A977CC9CDA66D808670C106 *)&stru_140E2D930.QueueListEntry.Blink;
      v9 = v8 - 1;
      if ( !v9 )
        return ($B3FD53340A977CC9CDA66D808670C106 *)&stru_140E2D930.Teb;
      if ( v9 != 2 )
        return 0LL;
    }
    return ($B3FD53340A977CC9CDA66D808670C106 *)&stru_140E2D930.Timer.Processor;
  }
  v1 = a1 - 12;
  if ( !v1 )
    return ($B3FD53340A977CC9CDA66D808670C106 *)&stru_140E2D930.Teb;
  v2 = v1 - 1;
  if ( !v2 )
    return ($B3FD53340A977CC9CDA66D808670C106 *)&stru_140E2D930.StateSaveArea;
  v3 = v2 - 1;
  if ( !v3 )
    return ($B3FD53340A977CC9CDA66D808670C106 *)&stru_140E2D930.SchedulerApcFill5[24];
  v4 = v3 - 1;
  if ( v4 )
  {
    if ( v4 == 2 )
      return &stru_140E2D930.600;
    return 0LL;
  }
  return ($B3FD53340A977CC9CDA66D808670C106 *)&stru_140E2D930.ApcStateFill[16];
}
