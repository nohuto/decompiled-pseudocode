/*
 * XREFs of ViAddVerifierSpecialThunks @ 0x1406443FC
 * Callers:
 *     DifRegisterClassDriverPlugin @ 0x140643DA0 (DifRegisterClassDriverPlugin.c)
 * Callees:
 *     MmFindDataTableEntryByAddress @ 0x140368C40 (MmFindDataTableEntryByAddress.c)
 *     MmReleaseLoadLock @ 0x14049E200 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404A5040 (MmAcquireLoadLock.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140C3B11C (VfThunkAddSpecialDriverThunks.c)
 */

__int64 __fastcall ViAddVerifierSpecialThunks(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned int v8; // edi
  struct _KTHREAD *Lock; // rsi
  struct _LIST_ENTRY *DataTableEntryByAddress; // rax
  struct _LIST_ENTRY *v11; // r9
  unsigned __int64 Flink; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // rax
  unsigned int v15; // ebx
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  if ( !ViVerifierEnabled )
    return 3221225659LL;
  if ( KernelVerifier )
    return 3221228661LL;
  v8 = a3 >> 4;
  if ( !(a3 >> 4) )
    return 3221225713LL;
  VfNumberOfClassDriverThunks += v8;
  if ( !MmVerifierData )
    return 3221225711LL;
  Lock = MmAcquireLoadLock();
  DataTableEntryByAddress = MmFindDataTableEntryByAddress(a1);
  v11 = DataTableEntryByAddress;
  if ( !DataTableEntryByAddress
    || (Flink = (unsigned __int64)DataTableEntryByAddress[3].Flink, retaddr < Flink)
    || (v13 = Flink + LODWORD(DataTableEntryByAddress[4].Flink), retaddr >= v13) )
  {
    MmReleaseLoadLock(Lock);
    return 3221225711LL;
  }
  v14 = (unsigned __int64 *)(a2 + 8);
  while ( v3 < v8 )
  {
    if ( *v14 < Flink || *v14 >= v13 )
    {
      MmReleaseLoadLock(Lock);
      return 3221225712LL;
    }
    v14 += 2;
    ++v3;
  }
  v15 = VfThunkAddSpecialDriverThunks(a1, a2, a3, v11);
  MmReleaseLoadLock(Lock);
  return v15;
}
