/*
 * XREFs of RaidAdapterQueryCoolingInterface @ 0x14007F56C
 * Callers:
 *     RaidAdapterQueryInterfaceIrp @ 0x140064C48 (RaidAdapterQueryInterfaceIrp.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterQueryCoolingInterface(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax

  v2 = *(_QWORD *)(a2 + 184);
  if ( !RaidIsAdapterControlSupported(a1 + 376, 14) )
    return 3221225659LL;
  if ( *(_WORD *)(v2 + 16) < 0x38u || !*(_WORD *)(v2 + 18) )
    return 3221225485LL;
  v5 = *(_QWORD *)(v2 + 24);
  *(_QWORD *)(v5 + 16) = RaidNullReference;
  *(_QWORD *)(v5 + 24) = RaidNullReference;
  *(_QWORD *)(v5 + 48) = RaidAdapterPassiveCoolingCallback;
  *(_DWORD *)v5 = 65592;
  *(_QWORD *)(v5 + 8) = a1;
  *(_QWORD *)(v5 + 40) = 0LL;
  return 0LL;
}
