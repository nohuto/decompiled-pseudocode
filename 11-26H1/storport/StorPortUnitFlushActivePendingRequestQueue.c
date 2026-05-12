/*
 * XREFs of StorPortUnitFlushActivePendingRequestQueue @ 0x140033000
 * Callers:
 *     RaUnitDeregisterFromIdleDetection @ 0x14007ECF0 (RaUnitDeregisterFromIdleDetection.c)
 * Callees:
 *     RaUnitStartResetIo @ 0x1400A2224 (RaUnitStartResetIo.c)
 */

void __fastcall StorPortUnitFlushActivePendingRequestQueue(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rsi
  _QWORD *v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  KIRQL v11; // di

  if ( (*(_DWORD *)(a1 + 504) & 0x8000) != 0
    && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864)) )
  {
    while ( 1 )
    {
      v2 = (_QWORD *)(*(_QWORD *)(a1 + 1872) + 80LL);
      if ( (_QWORD *)*v2 == v2 )
        break;
      v3 = *(_QWORD **)(*(_QWORD *)(a1 + 1872) + 88LL);
      if ( (_QWORD *)*v3 != v2 || (v4 = (_QWORD *)v3[1], (_QWORD *)*v4 != v3) )
        __fastfail(3u);
      *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 88LL) = v4;
      *v4 = v2;
      v5 = v3[2];
      v6 = *(_QWORD *)(*(_QWORD *)(v5 + 184) + 8LL);
      v7 = *(unsigned __int8 *)(v6 + 2);
      if ( (_BYTE)v7 == 40 )
        v7 = *(_DWORD *)(v6 + 20);
      v8 = v7 - 16;
      if ( !v8 || (v9 = v8 - 2) == 0 || (v10 = v9 - 1) == 0 || v10 == 13 )
      {
        v11 = KfRaiseIrql(2u);
        RaUnitStartResetIo(*(_QWORD *)(a1 + 8), v5, a1 + 1824);
        KeLowerIrql(v11);
      }
      ExFreePoolWithTag(v3, 0x4F506152u);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  }
}
