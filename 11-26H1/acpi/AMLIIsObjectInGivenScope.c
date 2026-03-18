/*
 * XREFs of AMLIIsObjectInGivenScope @ 0x140043B44
 * Callers:
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x140022548 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x14004767C (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x140062778 (ACPIIoctlEvalPreProcessingV2Ex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIIsObjectInGivenScope(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  KIRQL v5; // dl
  __int64 i; // rcx

  v4 = -1073741767;
  v5 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  for ( i = *(_QWORD *)(*(_QWORD *)a1 + 16LL); i; i = *(_QWORD *)(i + 16) )
  {
    if ( i == *a2 )
    {
      v4 = 0;
      break;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v5);
  return v4;
}
