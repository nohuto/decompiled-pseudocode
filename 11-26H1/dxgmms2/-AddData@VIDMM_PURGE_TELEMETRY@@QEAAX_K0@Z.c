/*
 * XREFs of ?AddData@VIDMM_PURGE_TELEMETRY@@QEAAX_K0@Z @ 0x1401236F4
 * Callers:
 *     ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@@Z @ 0x1400E46C4 (-PurgeAllSegments@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PURGE_TELEMETRY::AddData(VIDMM_PURGE_TELEMETRY *this, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rdi
  char *v6; // rdi
  unsigned __int64 v7; // rax

  if ( a2 < 0x40000000 )
  {
    v5 = 32LL * (unsigned int)(a2 >> 25) + 8;
LABEL_3:
    v6 = (char *)this + v5;
    goto LABEL_4;
  }
  if ( a2 < 0x140000000LL )
  {
    v5 = 32LL * (unsigned int)((a2 - 0x40000000) >> 27) + 1032;
    goto LABEL_3;
  }
  if ( a2 < 0x540000000LL )
  {
    v5 = 32LL * (unsigned int)((a2 - 0x140000000LL) >> 29) + 2056;
    goto LABEL_3;
  }
  v6 = (char *)this + 3080;
LABEL_4:
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 3112, 0LL);
  *((_QWORD *)this + 390) = KeGetCurrentThread();
  v7 = *((_QWORD *)v6 + 1);
  *(_QWORD *)v6 += a3;
  ++*((_DWORD *)v6 + 6);
  if ( v7 > a3 )
    a3 = v7;
  *((_QWORD *)v6 + 1) = a3;
  *((_QWORD *)this + 390) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 3112, 0LL);
  KeLeaveCriticalRegion();
}
