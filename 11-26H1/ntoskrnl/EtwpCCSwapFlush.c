/*
 * XREFs of EtwpCCSwapFlush @ 0x140217830
 * Callers:
 *     EtwpCCSwapTrace @ 0x1402174B0 (EtwpCCSwapTrace.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140218430 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpCloseLogger @ 0x140218480 (EtwpCloseLogger.c)
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall EtwpCCSwapFlush(_DWORD *a1, __int64 a2, __int64 a3)
{
  int v3; // r15d
  int v4; // eax
  unsigned int v5; // ebp
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // r14
  char v12; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  _DWORD *v16; // [rsp+38h] [rbp-30h] BYREF
  int v17; // [rsp+40h] [rbp-28h]
  int v18; // [rsp+44h] [rbp-24h]

  v16 = a1 + 4;
  v3 = a2;
  v4 = *a1 - 16;
  v18 = 0;
  v17 = v4;
  v5 = *(_DWORD *)(EtwpHostSiloState + 4520);
  while ( _BitScanForward((unsigned int *)&v7, v5) )
  {
    v8 = EtwpHostSiloState;
    v5 &= v5 - 1;
    v9 = EtwpHostSiloState + 32LL * (unsigned int)v7 + 4556;
    if ( v9 )
    {
      v10 = *(_DWORD *)(v9 + 4);
      if ( (v10 & 4) != 0 && (v10 & 0x100) != 0 )
      {
        v11 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v7 + 4504);
        v12 = 0;
        if ( (unsigned __int8)KeGetEffectiveIrql(v7, a2, a3) >= 2u )
          goto LABEL_10;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        if ( ExAcquireRundownProtectionCacheAwareEx(
               *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v8 + 704) + 8 * v11),
               1u) )
        {
          v12 = 1;
LABEL_10:
          v14 = *(_QWORD *)(*(_QWORD *)(v8 + 712) + 8 * v11);
          if ( (v14 & 1) != 0 )
          {
            v15 = v8;
            goto LABEL_17;
          }
          if ( v14 )
          {
            if ( *(_DWORD *)(v14 + 200) == v3 )
              EtwpLogKernelEvent((unsigned int)&v16, EtwpHostSiloState, v11, 1, 1317, 514);
            v15 = EtwpHostSiloState;
LABEL_17:
            LOBYTE(a3) = v12;
            EtwpCloseLogger((unsigned int)v11, v15, a3);
          }
        }
        else
        {
          KeLeaveCriticalRegion();
        }
      }
    }
  }
}
