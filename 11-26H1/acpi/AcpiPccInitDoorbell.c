/*
 * XREFs of AcpiPccInitDoorbell @ 0x1400B2F58
 * Callers:
 *     AcpiPccInitType0Subspace @ 0x1400B32C0 (AcpiPccInitType0Subspace.c)
 *     AcpiPccInitType1Subspace @ 0x1400B3400 (AcpiPccInitType1Subspace.c)
 *     AcpiPccInitType2Subspace @ 0x1400B3550 (AcpiPccInitType2Subspace.c)
 *     AcpiPccInitType34Subspace @ 0x1400B36F0 (AcpiPccInitType34Subspace.c)
 * Callees:
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 *     AcpiPccInitMapRegister @ 0x1400B3060 (AcpiPccInitMapRegister.c)
 */

__int64 __fastcall AcpiPccInitDoorbell(char *DeferredContext, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 result; // rax
  int v10; // eax
  PKDEFERRED_ROUTINE DeferredRoutine[5]; // [rsp+20h] [rbp-28h] BYREF

  DeferredRoutine[0] = 0LL;
  if ( !DeferredContext )
    return 3221225485LL;
  if ( (unsigned __int8)RtlIsZeroMemory(a2, 12LL) )
  {
    result = a5 == 0 ? 0xC000000D : 0;
    if ( a5 )
      return result;
  }
  else if ( (a3 & a4) != 0 )
  {
    result = 3221225485LL;
  }
  else
  {
    v10 = *(_DWORD *)(a2 + 8);
    *((_QWORD *)DeferredContext + 13) = *(_QWORD *)a2;
    *((_DWORD *)DeferredContext + 28) = v10;
    *((_QWORD *)DeferredContext + 11) = a3;
    *((_QWORD *)DeferredContext + 10) = a4;
    result = AcpiPccInitMapRegister(DeferredContext + 104, DeferredContext + 96);
    if ( (int)result >= 0 )
    {
      AcpiGetDriverProxyWrappedEndpoint(DeferredRoutine, (__int64)AcpiPccRingDoorbell);
      KeInitializeDpc((PRKDPC)(DeferredContext + 496), DeferredRoutine[0], DeferredContext);
      KeSetImportanceDpc((PRKDPC)(DeferredContext + 496), MediumHighImportance);
      return 0LL;
    }
  }
  *((_DWORD *)DeferredContext + 204) = 3;
  return result;
}
