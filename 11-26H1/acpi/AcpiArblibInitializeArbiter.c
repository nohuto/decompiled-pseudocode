/*
 * XREFs of AcpiArblibInitializeArbiter @ 0x1400555EC
 * Callers:
 *     ACPIBuildPdo @ 0x14004FAEC (ACPIBuildPdo.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x14004FE60 (ACPIDispatchIrpDepPdoQueryID.c)
 * Callees:
 *     AcpiArblibFreeArbiterInstance @ 0x1400575CC (AcpiArblibFreeArbiterInstance.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1400ACFC4 (AcpiArblibAllocateArbiterInstance.c)
 *     AcpiInitializeBusNumberArbiter @ 0x1400AE568 (AcpiInitializeBusNumberArbiter.c)
 *     AcpiInitializeMemoryArbiter @ 0x1400B1D28 (AcpiInitializeMemoryArbiter.c)
 *     AcpiInitializePortArbiter @ 0x1400B591C (AcpiInitializePortArbiter.c)
 */

__int64 __fastcall AcpiArblibInitializeArbiter(__int64 a1, unsigned int a2, _QWORD *a3)
{
  int v6; // eax
  __int64 ArbiterInstance; // rax
  _BYTE *v8; // rbx
  __int64 result; // rax
  int v10; // eax
  unsigned int v11; // edi

  if ( a2 > 6 )
    return 3221225485LL;
  v6 = 74;
  if ( !_bittest(&v6, a2) )
    return 3221225485LL;
  ArbiterInstance = AcpiArblibAllocateArbiterInstance();
  v8 = (_BYTE *)ArbiterInstance;
  if ( !ArbiterInstance )
    return 3221225626LL;
  if ( a2 == 1 )
  {
    v10 = AcpiInitializePortArbiter(ArbiterInstance, a1);
  }
  else if ( a2 == 3 )
  {
    v10 = AcpiInitializeMemoryArbiter(ArbiterInstance, a1);
  }
  else
  {
    v10 = AcpiInitializeBusNumberArbiter(ArbiterInstance, a1);
  }
  v11 = v10;
  if ( v10 >= 0 )
  {
    v8[128] = 1;
    result = 0LL;
    *a3 = v8;
  }
  else
  {
    AcpiArblibFreeArbiterInstance(v8);
    return v11;
  }
  return result;
}
