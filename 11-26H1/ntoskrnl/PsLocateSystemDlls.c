/*
 * XREFs of PsLocateSystemDlls @ 0x1407F3B98
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x140415184 (VslGetNestedPageProtectionFlags.c)
 *     ExVerifySuite @ 0x140529E40 (ExVerifySuite.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PspLocateSystemDll @ 0x1407F3EEC (PspLocateSystemDll.c)
 *     PspMapSystemDll @ 0x140A08A9C (PspMapSystemDll.c)
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

  if ( !ExVerifySuite(EmbeddedNT) || (PspSiloMonitorLock.SchedulerApcFill4[68] & 1) == 0 )
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
