/*
 * XREFs of HalpDeleteSecondaryIcEntry @ 0x140591E58
 * Callers:
 *     HalpUnregisterSecondaryIcInterface @ 0x140592240 (HalpUnregisterSecondaryIcInterface.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpAcquireSecondaryIcEntryExclusive @ 0x140591C28 (HalpAcquireSecondaryIcEntryExclusive.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpDeleteSecondaryIcEntry(PVOID P)
{
  unsigned int v1; // edi
  _QWORD *v3; // rcx
  PVOID *v4; // rax
  unsigned __int8 v5; // dl
  unsigned __int8 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v7 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)P + 29, 0, 0) <= 0 )
  {
    HalpAcquireSecondaryIcEntryExclusive((volatile signed __int32 *)P, &v7);
    v3 = *(_QWORD **)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || (v4 = (PVOID *)*((_QWORD *)P + 1), *v4 != P) )
      __fastfail(3u);
    v5 = v7;
    *v4 = v3;
    v3[1] = v4;
    _InterlockedDecrement((volatile signed __int32 *)P + 28);
    HalpReleaseHighLevelLock(&SecondaryIcListSpinLock, v5);
    KeSetEvent((PRKEVENT)P + 5, 0, 0);
    ObfDereferenceObjectWithTag(*((PVOID *)P + 6), 0x746C6644u);
    ExFreePoolWithTag(P, 0x326C6148u);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
