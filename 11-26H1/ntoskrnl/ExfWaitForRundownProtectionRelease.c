/*
 * XREFs of ExfWaitForRundownProtectionRelease @ 0x14045CD8C
 * Callers:
 *     BgkpDisableConsole @ 0x14045C580 (BgkpDisableConsole.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     CmLoadAppKey @ 0x1408B87F4 (CmLoadAppKey.c)
 *     PfSnPrefetchScenario @ 0x1409CFF44 (PfSnPrefetchScenario.c)
 *     PfSnPrefetchSections @ 0x140A58EC4 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x140A5926C (PfSnPrefetchSectionsCleanup.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 */

int __fastcall ExfWaitForRundownProtectionRelease(volatile signed __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  int v6; // edx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 Object; // [rsp+38h] [rbp-28h] BYREF
  char *v15; // [rsp+48h] [rbp-18h]
  signed __int32 v16[4]; // [rsp+50h] [rbp-10h] BYREF
  int v17; // [rsp+70h] [rbp+10h] BYREF

  *(_QWORD *)v16 = 1LL;
  v15 = 0LL;
  v2 = a2 >> 1;
  v13 = a2 >> 1;
  Object = 0LL;
  v4 = _InterlockedCompareExchange64(a1, (signed __int64)&v13 + 1, a2);
  if ( a2 != v4 )
  {
    do
    {
      v5 = v4;
      v2 = v4 >> 1;
      v13 = v4 >> 1;
      v4 = _InterlockedCompareExchange64(a1, (signed __int64)&v13 + 1, v4);
    }
    while ( v4 != v5 );
  }
  if ( v2 )
  {
    v17 = 0;
    if ( KeGetCurrentIrql() < 2u )
    {
      if ( MEMORY[0xFFFFF7800000036A] <= 1u )
      {
LABEL_14:
        LOWORD(Object) = 1;
        v15 = (char *)&Object + 8;
        *((_QWORD *)&Object + 1) = (char *)&Object + 8;
        v4 = (unsigned __int64)v16;
        BYTE2(Object) = 6;
        DWORD1(Object) = 0;
        if ( _interlockedbittestandreset(v16, 0) )
          LODWORD(v4) = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      }
      else if ( MEMORY[0xFFFFF78000000297] )
      {
        v8 = __rdtsc();
        v9 = v8 + (unsigned int)ExpSpinCycleCount;
        while ( 1 )
        {
          v4 = (unsigned __int64)v16;
          __asm { monitorx rax, rcx, rdx }
          if ( (v16[0] & 1) == 0 )
            break;
          v10 = v8;
          v11 = __rdtsc();
          v8 = v11;
          if ( v11 < v10 || v11 >= v9 )
            goto LABEL_14;
          __asm { mwaitx  rax, rcx, rbx }
        }
      }
      else
      {
        LODWORD(v4) = ExpSpinCycleCount / (unsigned int)MEMORY[0xFFFFF780000002D6];
        v6 = 0;
        while ( (v16[0] & 1) != 0 )
        {
          if ( v6 == (_DWORD)v4 )
            goto LABEL_14;
          _mm_pause();
          ++v6;
        }
      }
    }
    else
    {
      while ( 1 )
      {
        LODWORD(v4) = v16[0];
        if ( (v16[0] & 1) == 0 )
          break;
        KeYieldProcessorEx(&v17);
      }
    }
  }
  return v4;
}
