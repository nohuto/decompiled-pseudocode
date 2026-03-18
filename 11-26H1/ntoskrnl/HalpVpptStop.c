/*
 * XREFs of HalpVpptStop @ 0x140583330
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x1402C4DEC (HalpReleaseHighLevelLock.c)
 *     HalpTimerGetInternalData @ 0x140426EC0 (HalpTimerGetInternalData.c)
 *     HalpAcquireHighLevelLock @ 0x140426EEC (HalpAcquireHighLevelLock.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x140426F38 (HalpVpptUpdatePhysicalTimer.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpVpptStop(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  bool v4; // dl
  __int64 InternalData; // rax
  __int64 v6; // rdx

  byte_140FBB3F8 = HalpAcquireHighLevelLock(&qword_140FBB3F0);
  if ( *(_BYTE *)(a1 + 24) )
  {
    v2 = *(_QWORD *)a1;
    v3 = *(__int64 **)(a1 + 8);
    v4 = *(_QWORD *)&HalpVpptQueue == a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || *v3 != a1 )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    if ( v3 == (__int64 *)v2 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&HalpVpptPhysicalTimer + 228LL) != 3 )
      {
        InternalData = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
        guard_dispatch_icall_no_overrides(InternalData, v6);
      }
    }
    else if ( v4 )
    {
      HalpVpptUpdatePhysicalTimer(v2);
    }
  }
  *(_DWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 24) = 0;
  HalpReleaseHighLevelLock(&qword_140FBB3F0, byte_140FBB3F8);
}
