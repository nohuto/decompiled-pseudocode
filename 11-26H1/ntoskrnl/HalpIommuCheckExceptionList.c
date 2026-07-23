/*
 * XREFs of HalpIommuCheckExceptionList @ 0x1404FB164
 * Callers:
 *     HalpIommuUnblockDevice @ 0x140505B10 (HalpIommuUnblockDevice.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x140782F1C (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpIommuCheckExceptionList(__int64 a1)
{
  __int64 i; // rdx

  if ( *(_DWORD *)a1 == 1 )
  {
    for ( i = HalpIommuExceptionList; (__int64 *)i != &HalpIommuExceptionList; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 16) == *(unsigned __int16 *)(a1 + 8) && *(_QWORD *)(i + 24) == *(unsigned __int16 *)(a1 + 12) )
        return 1;
    }
  }
  return 0;
}
