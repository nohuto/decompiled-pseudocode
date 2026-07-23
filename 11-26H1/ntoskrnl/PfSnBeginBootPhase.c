/*
 * XREFs of PfSnBeginBootPhase @ 0x140BFEFAC
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x140ACC2CC (PfSnSetPrefetcherInformation.c)
 *     PfPowerActionNotify @ 0x140C0D3C0 (PfPowerActionNotify.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     PfSnUpdatePrefetcherFlags @ 0x140602A80 (PfSnUpdatePrefetcherFlags.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x1407C9F1C (PfSnQueueEnablePrefetcherTimer.c)
 *     EtwRegister @ 0x140917980 (EtwRegister.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140C13090 (PfSnAllocateEnablePrefetcherTimer.c)
 */

__int64 __fastcall PfSnBeginBootPhase(unsigned int a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  __int64 EnablePrefetcherTimer; // rdi
  int v6; // ecx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  if ( a1 >= 5 )
    return (unsigned int)-1073741811;
  v1 = 0;
  if ( !a1 )
  {
    EtwRegister(&MS_Kernel_Prefetch_Provider, 0LL, 0LL, (PREGHANDLE)&stru_140E67200.WaitBlock[0].Thread);
    PfSnUpdatePrefetcherFlags(3, 1);
    v8 = -3000000000LL;
    PfSnQueueEnablePrefetcherTimer(&v8);
    return v1;
  }
  v2 = a1 - 1;
  if ( !v2 )
    goto LABEL_11;
  v3 = v2 - 1;
  if ( !v3 )
  {
    PfSnUpdatePrefetcherFlags(4, 1);
    v6 = 17;
    goto LABEL_12;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    if ( (PfSnUpdatePrefetcherFlags(8, 1) & 4) == 0 )
      return v1;
LABEL_11:
    v6 = 1;
LABEL_12:
    PfSnUpdatePrefetcherFlags(v6, 0);
    return v1;
  }
  if ( v4 == 1 )
  {
    EnablePrefetcherTimer = PfSnAllocateEnablePrefetcherTimer(16LL);
    if ( EnablePrefetcherTimer )
    {
      PfSnUpdatePrefetcherFlags(16, 1);
      KiSetTimerEx(EnablePrefetcherTimer, -600000000LL, 0, 0, EnablePrefetcherTimer + 64);
    }
  }
  return v1;
}
