/*
 * XREFs of ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010873C
 * Callers:
 *     EvictResources @ 0x1401172F8 (EvictResources.c)
 * Callees:
 *     VidSchSwitchFromContext @ 0x1401087A0 (VidSchSwitchFromContext.c)
 *     VidSchSwitchFromDevice @ 0x1401089B0 (VidSchSwitchFromDevice.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyContextAllocationEviction(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)a2 + 8);
  if ( (*((_DWORD *)a2 + 6) & 0x1000000) != 0 )
  {
    if ( v2 && *(_QWORD *)(v2 + 800) )
      VidSchSwitchFromDevice();
  }
  else if ( v2 && (*(_DWORD *)(v2 + 392) & 0x10) == 0 )
  {
    v3 = *(_QWORD *)(v2 + 256);
    if ( v3 )
    {
      LOBYTE(a2) = 1;
      VidSchSwitchFromContext(v3, a2);
    }
  }
}
