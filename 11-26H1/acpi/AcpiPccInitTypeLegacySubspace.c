/*
 * XREFs of AcpiPccInitTypeLegacySubspace @ 0x1400B2738
 * Callers:
 *     ACPIPccLegacyInitialize @ 0x1400B2490 (ACPIPccLegacyInitialize.c)
 * Callees:
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 *     AcpiPccInterruptSupported @ 0x1400B2990 (AcpiPccInterruptSupported.c)
 */

__int64 __fastcall AcpiPccInitTypeLegacySubspace(char *DeferredContext)
{
  char v2; // cl
  unsigned int v3; // ebx
  int v4; // r14d
  int v5; // eax
  unsigned __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  int MemoryCachingRequirements; // esi
  int v12; // eax
  __int64 v13; // rax
  int v15; // [rsp+50h] [rbp+30h] BYREF
  PKDEFERRED_ROUTINE DeferredRoutine; // [rsp+58h] [rbp+38h] BYREF
  PKDEFERRED_ROUTINE v17; // [rsp+60h] [rbp+40h] BYREF
  __int64 v18; // [rsp+68h] [rbp+48h] BYREF

  DeferredRoutine = 0LL;
  v2 = DeferredContext[104];
  v17 = 0LL;
  v18 = 0LL;
  v15 = 0;
  if ( v2 == 1 )
  {
    if ( (unsigned __int8)DeferredContext[107] > 0x20u )
      goto LABEL_3;
  }
  else if ( v2 )
  {
LABEL_3:
    *((_DWORD *)DeferredContext + 204) = 3;
LABEL_20:
    MemoryCachingRequirements = -1073741823;
    *((_DWORD *)DeferredContext + 2) = *((_DWORD *)DeferredContext + 2) & 0xFFFFFFE1 | 2;
    return (unsigned int)MemoryCachingRequirements;
  }
  if ( (*((_QWORD *)DeferredContext + 11) & *((_QWORD *)DeferredContext + 10)) != 0LL )
    goto LABEL_3;
  v3 = 516;
  v4 = 4;
  if ( !v2 )
  {
    if ( (int)HalGetMemoryCachingRequirements(
                *(_QWORD *)(DeferredContext + 108),
                (unsigned __int64)(unsigned __int8)DeferredContext[107] >> 3,
                &v15) >= 0 )
    {
      v5 = v15;
    }
    else
    {
      v5 = 0;
      v15 = 0;
    }
    v6 = (unsigned __int8)DeferredContext[107];
    v7 = v5 == 1;
    v8 = *(_QWORD *)(DeferredContext + 108);
    v9 = 516LL;
    if ( v7 )
      v9 = 4LL;
    *((_QWORD *)DeferredContext + 12) = v8;
    v10 = MmMapIoSpaceEx(v8, v6 >> 3, v9);
    *(_QWORD *)(DeferredContext + 108) = v10;
    if ( !v10 )
      goto LABEL_3;
  }
  MemoryCachingRequirements = HalGetMemoryCachingRequirements(
                                *((_QWORD *)DeferredContext + 15),
                                *((unsigned int *)DeferredContext + 32),
                                &v15);
  if ( MemoryCachingRequirements >= 0 )
  {
    v12 = v15;
  }
  else
  {
    v12 = 0;
    v15 = 0;
    MemoryCachingRequirements = 0;
  }
  if ( v12 == 1 )
    v3 = 4;
  v13 = MmMapIoSpaceEx(*((_QWORD *)DeferredContext + 15), *((unsigned int *)DeferredContext + 32), v3);
  if ( !v13 )
  {
    *((_DWORD *)DeferredContext + 204) = 2;
    goto LABEL_20;
  }
  *((_QWORD *)DeferredContext + 7) = v13;
  AcpiGetDriverProxyWrappedEndpoint(&DeferredRoutine, (__int64)AcpiPccCallbackDpc);
  KeInitializeDpc((PRKDPC)(DeferredContext + 712), DeferredRoutine, DeferredContext);
  KeSetImportanceDpc((PRKDPC)(DeferredContext + 712), MediumHighImportance);
  AcpiGetDriverProxyWrappedEndpoint(&v17, (__int64)AcpiPccRingDoorbell);
  KeInitializeDpc((PRKDPC)(DeferredContext + 496), v17, DeferredContext);
  KeSetImportanceDpc((PRKDPC)(DeferredContext + 496), MediumHighImportance);
  if ( *DeferredContext == -1 || (unsigned __int8)AcpiPccInterruptSupported(DeferredContext) )
    v4 = 0;
  *((_DWORD *)DeferredContext + 176) = v4;
  AcpiGetDriverProxyWrappedEndpoint(&v18, (__int64)AcpiPccWatchdog);
  KeInitializeTimer2(DeferredContext + 568, v18, DeferredContext, *((unsigned int *)DeferredContext + 176));
  KeInitializeTimer((PKTIMER)(DeferredContext + 432));
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 100);
  *((_QWORD *)DeferredContext + 46) = DeferredContext + 360;
  *((_QWORD *)DeferredContext + 45) = DeferredContext + 360;
  return (unsigned int)MemoryCachingRequirements;
}
