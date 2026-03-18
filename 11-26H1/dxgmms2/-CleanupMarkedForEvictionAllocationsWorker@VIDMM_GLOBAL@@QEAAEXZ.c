/*
 * XREFs of ?CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ @ 0x1400CE0F8
 * Callers:
 *     ?CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400CE160 (-CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

char __fastcall VIDMM_GLOBAL::CleanupMarkedForEvictionAllocationsWorker(VIDMM_GLOBAL *this)
{
  char v1; // bl
  unsigned __int16 i; // si
  __int64 v4; // rcx

  v1 = 0;
  for ( i = 0;
        (unsigned int)i < *((_DWORD *)this + 1738);
        v1 |= (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 72LL))(v4) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * i++);
  }
  return v1;
}
