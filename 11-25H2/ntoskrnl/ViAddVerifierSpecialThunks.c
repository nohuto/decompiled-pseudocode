/*
 * XREFs of ViAddVerifierSpecialThunks @ 0x14060436C
 * Callers:
 *     DifRegisterClassDriverPlugin @ 0x140603D30 (DifRegisterClassDriverPlugin.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x14036D060 (MmReleaseLoadLock.c)
 *     MiAcquireLoadLock @ 0x14036DF38 (MiAcquireLoadLock.c)
 *     MmFindDataTableEntryByAddress @ 0x14036E0D0 (MmFindDataTableEntryByAddress.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140B86EF4 (VfThunkAddSpecialDriverThunks.c)
 */

__int64 __fastcall ViAddVerifierSpecialThunks(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned int v8; // edi
  struct _KTHREAD *Lock; // rsi
  __int64 *DataTableEntryByAddress; // rax
  __int64 *v11; // r9
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
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
  Lock = MiAcquireLoadLock(1);
  DataTableEntryByAddress = MmFindDataTableEntryByAddress(a1);
  v11 = DataTableEntryByAddress;
  if ( !DataTableEntryByAddress
    || (v12 = DataTableEntryByAddress[6], retaddr < v12)
    || (v13 = v12 + *((unsigned int *)DataTableEntryByAddress + 16), retaddr >= v13) )
  {
    MmReleaseLoadLock(Lock);
    return 3221225711LL;
  }
  v14 = (unsigned __int64 *)(a2 + 8);
  while ( v3 < v8 )
  {
    if ( *v14 < v12 || *v14 >= v13 )
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
