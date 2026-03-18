/*
 * XREFs of AcpiPccInitCommonFields @ 0x1400B2D94
 * Callers:
 *     AcpiPccInitType0Subspace @ 0x1400B32C0 (AcpiPccInitType0Subspace.c)
 *     AcpiPccInitType1Subspace @ 0x1400B3400 (AcpiPccInitType1Subspace.c)
 *     AcpiPccInitType2Subspace @ 0x1400B3550 (AcpiPccInitType2Subspace.c)
 *     AcpiPccInitType34Subspace @ 0x1400B36F0 (AcpiPccInitType34Subspace.c)
 * Callees:
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 */

void __fastcall AcpiPccInitCommonFields(
        unsigned int *DeferredContext,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  int v5; // ecx
  int v6; // esi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx
  PKDEFERRED_ROUTINE DeferredRoutine; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+28h] [rbp-20h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp+8h] BYREF

  if ( DeferredContext )
  {
    DeferredContext[5] = a2;
    v5 = 500;
    DeferredRoutine = 0LL;
    v10[0] = 0LL;
    PerformanceFrequency.QuadPart = 0LL;
    v6 = 4;
    if ( a2 >= 0x1F4 )
      v5 = a2;
    DeferredContext[6] = v5;
    if ( (DeferredContext[2] & 1) != 0
      && (DeferredContext[3] == 1 || *(_BYTE *)DeferredContext == 3 || *(_BYTE *)DeferredContext == 4) )
    {
      DeferredContext[6] = v5 + 500;
    }
    DeferredContext[8] = a4;
    DeferredContext[7] = a3 / 0x3C;
    KeQueryPerformanceCounter(&PerformanceFrequency);
    v7 = DeferredContext[8];
    v10[1] = 0LL;
    if ( is_mul_ok(v7, PerformanceFrequency.QuadPart) )
      v8 = v7 * PerformanceFrequency.QuadPart / 0xF4240;
    else
      v8 = v7 * (PerformanceFrequency.QuadPart / 1000000);
    *((_QWORD *)DeferredContext + 53) = v8;
    AcpiGetDriverProxyWrappedEndpoint(&DeferredRoutine, (__int64)AcpiPccCallbackDpc);
    KeInitializeDpc((PRKDPC)(DeferredContext + 178), DeferredRoutine, DeferredContext);
    KeSetImportanceDpc((PRKDPC)(DeferredContext + 178), MediumHighImportance);
    if ( (DeferredContext[2] & 1) != 0
      && (DeferredContext[3] == 1 || *(_BYTE *)DeferredContext == 3 || *(_BYTE *)DeferredContext == 4)
      || *(_BYTE *)DeferredContext == 0xFF )
    {
      v6 = 0;
    }
    DeferredContext[176] = v6;
    AcpiGetDriverProxyWrappedEndpoint(v10, (__int64)AcpiPccWatchdog);
    KeInitializeTimer2(DeferredContext + 142, v10[0], DeferredContext, DeferredContext[176]);
    KeInitializeTimer((PKTIMER)(DeferredContext + 108));
    KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 100);
    *((_QWORD *)DeferredContext + 46) = DeferredContext + 90;
    *((_QWORD *)DeferredContext + 45) = DeferredContext + 90;
  }
}
