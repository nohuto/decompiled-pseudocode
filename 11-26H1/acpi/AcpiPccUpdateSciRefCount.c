/*
 * XREFs of AcpiPccUpdateSciRefCount @ 0x14004D418
 * Callers:
 *     AcpiPccEjectInterface @ 0x1400500C8 (AcpiPccEjectInterface.c)
 *     AcpiPccCommandComplete @ 0x14006492C (AcpiPccCommandComplete.c)
 *     AcpiPccRingDoorbell @ 0x140065000 (AcpiPccRingDoorbell.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiPccUpdateSciRefCount(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( *(_BYTE *)a1 == 0xFF && (result = *(_QWORD *)(a1 + 56), *(__int16 *)(result + 12) < 0)
      || !*(_BYTE *)a1 && (result = *(_QWORD *)(a1 + 56), *(__int16 *)(result + 4) < 0) )
    {
      if ( a2 )
        _InterlockedIncrement(&AcpiPccSciReferenceCount);
      else
        _InterlockedDecrement(&AcpiPccSciReferenceCount);
    }
  }
  return result;
}
