/*
 * XREFs of BvgaEnableBootDriver @ 0x1405C84A0
 * Callers:
 *     <none>
 * Callees:
 *     BvgaAcquireLock @ 0x1405C8340 (BvgaAcquireLock.c)
 *     BvgaReleaseLock @ 0x1405C8630 (BvgaReleaseLock.c)
 */

__int64 __fastcall BvgaEnableBootDriver(char a1)
{
  int v1; // ebx
  __int64 v3; // rcx
  __int64 result; // rax

  v1 = 0;
  if ( BvgaBootDriverFullyInitialized )
  {
    if ( BvgaDisplayState < 2 )
    {
      BvgaAcquireLock();
      if ( !BvgaDisplayState )
        VidCleanUp();
      LOBYTE(v1) = a1 == 0;
      BvgaDisplayState = v1;
      return BvgaReleaseLock(v3);
    }
  }
  else
  {
    LOBYTE(v1) = a1 == 0;
    BvgaDisplayState = v1;
  }
  return result;
}
