/*
 * XREFs of MmDoesFileHaveUserWritableReferences @ 0x1403FFAC0
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x1403FC3F4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1403FEDE8 (FsRtlpRequestShareableOplock.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140416FD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDoesControlAreaHaveUserWritableReferences @ 0x1404935B8 (MiDoesControlAreaHaveUserWritableReferences.c)
 */

ULONG __stdcall MmDoesFileHaveUserWritableReferences(PSECTION_OBJECT_POINTERS SectionPointer)
{
  KIRQL v2; // al
  char *DataSectionObject; // rsi
  unsigned __int64 v4; // rbx
  _DWORD *v5; // rdi
  _BOOL8 v6; // rsi
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  while ( 1 )
  {
    v2 = ExAcquireSpinLockExclusive(&dword_140E2C7C0);
    DataSectionObject = (char *)SectionPointer->DataSectionObject;
    v4 = v2;
    if ( !SectionPointer->DataSectionObject )
      break;
    v5 = DataSectionObject + 72;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(DataSectionObject + 72) )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        dword_140E2C7C0 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C7C0, retaddr);
      v6 = (unsigned int)MiDoesControlAreaHaveUserWritableReferences(DataSectionObject) != 0;
      if ( (_BYTE)v4 == 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        {
          *v5 = 0;
          return v6;
        }
        else
        {
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5, retaddr);
          return v6;
        }
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
          *v5 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5, retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
        __writecr8(v4);
        return v6;
      }
    }
    if ( (_BYTE)v4 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        dword_140E2C7C0 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C7C0, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        dword_140E2C7C0 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C7C0, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
      __writecr8(v4);
    }
  }
  if ( v2 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      dword_140E2C7C0 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C7C0, retaddr);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      dword_140E2C7C0 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E2C7C0, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
    __writecr8(v4);
  }
  return 0;
}
