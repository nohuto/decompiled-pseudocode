/*
 * XREFs of SepInformLsaOfDeletedLogon @ 0x140B3E8E4
 * Callers:
 *     SepDeReferenceLogonSession @ 0x140B7CDEC (SepDeReferenceLogonSession.c)
 * Callees:
 *     SepQueueWorkItem @ 0x140216854 (SepQueueWorkItem.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepInformLsaOfDeletedLogon(_QWORD *a1, void *a2, __int64 a3)
{
  __int64 Pool2; // rbx

  Pool2 = a3;
  if ( a3 || (Pool2 = ExAllocatePool2(0x100uLL)) != 0 )
  {
    *(_QWORD *)(Pool2 + 24) = *a1;
    *(_DWORD *)(Pool2 + 32) = 3;
    *(_DWORD *)(Pool2 + 36) = 8;
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_DWORD *)(Pool2 + 48) = 0;
    *(_QWORD *)(Pool2 + 16) = 1LL;
    *(_QWORD *)(Pool2 + 56) = a2;
    if ( !SepQueueWorkItem((__int64)&RtlpBootStatHandleLock.216, Pool2, 0LL) )
    {
      if ( a2 )
        ObfDereferenceObjectWithTag(a2, 0x734C6553u);
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
  }
  else if ( a2 )
  {
    ObfDereferenceObjectWithTag(a2, 0x734C6553u);
  }
}
