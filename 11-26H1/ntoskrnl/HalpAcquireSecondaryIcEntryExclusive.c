/*
 * XREFs of HalpAcquireSecondaryIcEntryExclusive @ 0x140591C28
 * Callers:
 *     HalpDeleteSecondaryIcEntry @ 0x140591E58 (HalpDeleteSecondaryIcEntry.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 */

__int64 __fastcall HalpAcquireSecondaryIcEntryExclusive(volatile signed __int32 *a1, unsigned __int8 *a2)
{
  unsigned __int8 i; // al
  unsigned __int8 v5; // cl
  __int64 result; // rax

  _InterlockedIncrement(a1 + 29);
  KeWaitForSingleObject((PVOID)(a1 + 30), Executive, 0, 0, 0LL);
  for ( i = HalpAcquireHighLevelLock(&SecondaryIcListSpinLock); ; i = HalpAcquireHighLevelLock(&SecondaryIcListSpinLock) )
  {
    v5 = i;
    result = (unsigned int)_InterlockedCompareExchange(a1 + 28, 2, 1);
    if ( (_DWORD)result == 1 )
      break;
    HalpReleaseHighLevelLock(&SecondaryIcListSpinLock, v5);
    KeWaitForSingleObject((PVOID)(a1 + 30), Executive, 0, 0, 0LL);
  }
  _InterlockedDecrement(a1 + 29);
  *a2 = v5;
  return result;
}
