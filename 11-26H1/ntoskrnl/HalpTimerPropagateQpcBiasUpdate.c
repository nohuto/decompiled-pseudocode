/*
 * XREFs of HalpTimerPropagateQpcBiasUpdate @ 0x1404DEEA0
 * Callers:
 *     HalpTimerCalibratePerformanceCounter @ 0x1404DED74 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerInitSystem @ 0x140579A20 (HalpTimerInitSystem.c)
 *     HalpTimerSelectRoles @ 0x14057A3A8 (HalpTimerSelectRoles.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x140208DE0 (HalpTimerScaleCounter.c)
 *     RtlSetSystemGlobalData @ 0x1404B81B0 (RtlSetSystemGlobalData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpTimerPropagateQpcBiasUpdate(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // r11
  unsigned __int64 Buffer; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 == HalpPerformanceCounter )
  {
    if ( !qword_140FBB550 )
    {
      v4 = *(_QWORD *)(a1 + 208);
      if ( qword_140FBB548 )
        guard_dispatch_icall_no_overrides(v4, a2);
    }
    if ( *(_DWORD *)(a1 + 228) == 5 )
    {
      v5 = *(_QWORD *)(a1 + 192);
      if ( v5 )
      {
        v6 = -*(_QWORD *)(a1 + 208);
        if ( *(__int64 *)(a1 + 208) > 0 )
          v6 = *(_QWORD *)(a1 + 208);
        v7 = HalpTimerScaleCounter(v6, v5, 10000000LL);
        if ( v8 < 0 )
          v7 = -(__int64)v7;
        Buffer = v7;
        RtlSetSystemGlobalData(GlobalDataIdQpcData, &Buffer, 8u);
      }
    }
    v3 = *(_DWORD *)(a1 + 228);
    if ( v3 == 8 || v3 == 11 )
      *(_QWORD *)(MmWriteableSharedUserData + 952) = *(_QWORD *)(a1 + 208);
  }
}
