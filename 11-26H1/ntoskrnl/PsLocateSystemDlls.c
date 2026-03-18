/*
 * XREFs of PsLocateSystemDlls @ 0x1407EE038
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14041D934 (VslGetNestedPageProtectionFlags.c)
 *     ExVerifySuite @ 0x1405277D0 (ExVerifySuite.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     PspLocateSystemDll @ 0x1407EE38C (PspLocateSystemDll.c)
 *     PspMapSystemDll @ 0x140962C14 (PspMapSystemDll.c)
 */

__int64 PsLocateSystemDlls()
{
  _QWORD *v0; // rbx
  __int64 v1; // rsi
  int i; // edi
  __int64 v3; // r10
  int v4; // eax
  __int64 v5; // rdx
  int SystemDll; // eax

  if ( !ExVerifySuite(EmbeddedNT) || (PspSiloMonitorLock.SchedulerApcFill4[64] & 1) == 0 )
  {
    v0 = (_QWORD *)((char *)&ExpPlatformBinaryLock.116 + 4);
    v1 = VslGetNestedPageProtectionFlags(0LL) & 4;
    for ( i = 0; i < 6; ++i )
    {
      v3 = *v0;
      if ( *v0 )
      {
        v4 = *(_DWORD *)(v3 + 8);
        if ( (v4 & 0x20) != 0 )
        {
          v5 = *v0;
          *(_QWORD *)(v3 + 56) = *(_QWORD *)(*(_QWORD *)((char *)&ExpPlatformBinaryLock.116 + 4) + 56LL);
          if ( (int)PspMapSystemDll(KeGetCurrentThread()->ApcState.Process, v5, 0LL, 1LL) < 0 )
            *v0 = 0LL;
        }
        else
        {
          SystemDll = PspLocateSystemDll(*v0, (v4 & 0x10) != 0 ? (unsigned int)v1 : 0);
          if ( SystemDll < 0 && (*(_DWORD *)(*v0 + 8LL) & 1) != 0 )
            KeBugCheckEx(0x6Bu, SystemDll, 2uLL, i, 0LL);
        }
      }
      ++v0;
    }
  }
  return 0LL;
}
