/*
 * XREFs of UpdateKernelIdleDomains @ 0x140036F3C
 * Callers:
 *     DeregisterKernelIdleDomains @ 0x1400325B8 (DeregisterKernelIdleDomains.c)
 *     RegisterKernelIdleDomains @ 0x140042518 (RegisterKernelIdleDomains.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UpdateKernelIdleDomains(__int64 a1)
{
  __int64 v2; // rbp
  char *Pool2; // rax
  char *v4; // rdi
  int v5; // ebx
  __int64 v6; // rsi
  char *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // edx

  v2 = *(unsigned int *)(*(_QWORD *)(a1 + 712) + 48LL);
  Pool2 = (char *)ExAllocatePool2(64LL, (unsigned int)(264 * v2 + 272), 1919119952LL);
  v4 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 87;
    *((_DWORD *)Pool2 + 1) = v2;
    KeInitializeAffinityEx2(Pool2 + 8, 32LL);
    KeAddProcessorAffinityEx(v4 + 8, *(unsigned int *)(a1 + 56));
    if ( (_DWORD)v2 )
    {
      v6 = 0LL;
      v7 = v4 + 272;
      do
      {
        KeInitializeAffinityEx2(v7, 32LL);
        v8 = *(_QWORD *)(v6 + *(_QWORD *)(a1 + 712) + 128);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v8 + 8);
          if ( v9 )
          {
            if ( *(_DWORD *)(v9 + 32) >= *(_DWORD *)(v9 + 44) )
              KeCopyAffinityEx2(v7, v9 + 48);
          }
        }
        v7 += 264;
        v6 += 88LL;
        --v2;
      }
      while ( v2 );
    }
    v5 = ((__int64 (__fastcall *)(char *))qword_140015918)(v4);
    if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        3,
        27,
        (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids,
        v5);
    }
    ExFreePoolWithTag(v4, (ULONG)0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
