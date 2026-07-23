/*
 * XREFs of ViAddVerifierThunks @ 0x140644514
 * Callers:
 *     DifRegisterClassDriverPlugin @ 0x140643DA0 (DifRegisterClassDriverPlugin.c)
 * Callees:
 *     MmFindDataTableEntryByAddress @ 0x140368C40 (MmFindDataTableEntryByAddress.c)
 *     MmReleaseLoadLock @ 0x14049E200 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404A5040 (MmAcquireLoadLock.c)
 *     VfThunkAddDriverThunks @ 0x140C3B084 (VfThunkAddDriverThunks.c)
 */

__int64 __fastcall ViAddVerifierThunks(unsigned __int64 *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned __int64 *v6; // rsi
  unsigned int v7; // edi
  struct _KTHREAD *Lock; // rbp
  struct _LIST_ENTRY *DataTableEntryByAddress; // rax
  struct _LIST_ENTRY *Flink; // r9
  int v11; // edx
  PVOID *v12; // rcx
  char *v13; // r8
  unsigned __int64 v14; // rcx
  unsigned int v15; // ebx

  v2 = 0;
  if ( !ViVerifierEnabled )
    return 3221225659LL;
  if ( KernelVerifier )
    return 3221228661LL;
  v6 = a1;
  v7 = a2 >> 4;
  if ( !(a2 >> 4) )
    return 3221225711LL;
  VfNumberOfClassDriverThunks += v7;
  if ( MmVerifierData )
  {
    Lock = MmAcquireLoadLock();
    DataTableEntryByAddress = MmFindDataTableEntryByAddress(*a1);
    if ( DataTableEntryByAddress )
    {
      Flink = DataTableEntryByAddress[3].Flink;
      v11 = 0;
      v12 = (PVOID *)PsLoadedModuleList;
      v13 = (char *)Flink + LODWORD(DataTableEntryByAddress[4].Flink);
      while ( 1 )
      {
        if ( v12 == &PsLoadedModuleList )
          goto LABEL_14;
        if ( DataTableEntryByAddress == (struct _LIST_ENTRY *)v12 )
          break;
        if ( (unsigned int)++v11 >= 2 )
        {
LABEL_14:
          while ( v2 < v7 )
          {
            if ( *v6 < (unsigned __int64)Flink )
              goto LABEL_21;
            if ( *v6 >= (unsigned __int64)v13 )
              goto LABEL_21;
            v14 = v6[1];
            if ( v14 < (unsigned __int64)Flink || v14 >= (unsigned __int64)v13 )
              goto LABEL_21;
            v6 += 2;
            ++v2;
          }
          v15 = VfThunkAddDriverThunks(a1, a2, DataTableEntryByAddress);
          MmReleaseLoadLock(Lock);
          return v15;
        }
        v12 = (PVOID *)*v12;
      }
    }
LABEL_21:
    MmReleaseLoadLock(Lock);
  }
  return 3221225712LL;
}
