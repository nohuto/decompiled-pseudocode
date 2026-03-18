/*
 * XREFs of ?ScheduleEvictionTimer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@@Z @ 0x140123BEC
 * Callers:
 *     PurgeSegments @ 0x1400FEE38 (PurgeSegments.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14001D9F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall VIDMM_GLOBAL::ScheduleEvictionTimer(VIDMM_GLOBAL *this, struct VIDMM_PHYSICAL_ADAPTER *a2)
{
  __int64 v4; // rdx

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 11342, 1, 0) )
  {
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 76308) || (v4 = *((_QWORD *)a2 + 4), v4 == 9000000000LL) )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 76308) != 1 || (v4 = *((_QWORD *)a2 + 3), v4 == 9000000000LL) )
        v4 = qword_14008A688;
    }
    KeSetTimer((PKTIMER)((char *)this + 45304), (LARGE_INTEGER)-v4, (PKDPC)this + 709);
  }
}
