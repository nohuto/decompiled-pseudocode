/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x1404B2744
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x1403DCE10 (LdrpGetFromMUIMemCache.c)
 *     LdrUnloadAlternateResourceModule @ 0x1404B272C (LdrUnloadAlternateResourceModule.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseMutant @ 0x1403DD0B0 (KeReleaseMutant.c)
 *     KeReleaseMutantEx @ 0x1403DD130 (KeReleaseMutantEx.c)
 *     LdrpInitMuiCrits @ 0x1403DD614 (LdrpInitMuiCrits.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     MmUnmapViewInSystemSpace @ 0x140AE2510 (MmUnmapViewInSystemSpace.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

char __fastcall LdrUnloadAlternateResourceModuleEx(__int64 a1)
{
  char v2; // bl
  signed int SystemCallNumber; // edi
  signed int v4; // r15d
  _QWORD *v5; // rsi
  void *v6; // rcx
  unsigned int v7; // ebx
  void *v8; // rcx
  int v9; // eax
  void *Pool2; // rax
  $353D57E818BB6F967B4B818D974CF463 v11; // rdi
  LONG v13; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a1 )
    return 0;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&NormalizationListLock.FirstArgument, Executive, 0, 0, 0LL);
  SystemCallNumber = NormalizationListLock.SystemCallNumber;
  if ( NormalizationListLock.SystemCallNumber )
  {
    while ( 1 )
    {
      if ( SystemCallNumber <= 0 )
        goto LABEL_22;
      v4 = SystemCallNumber - 1;
      v5 = (_QWORD *)(*(_QWORD *)((char *)&NormalizationListLock.116 + 4) + ((__int64)(SystemCallNumber - 1) << 6));
      if ( v5[1] == a1 )
        break;
LABEL_5:
      SystemCallNumber = v4;
    }
    v6 = (void *)v5[4];
    if ( v6 && v6 != (void *)-1LL )
    {
      MmUnmapViewInSystemSpace(v6);
      v8 = (void *)v5[5];
      if ( v8 )
      {
        ZwClose(v8);
        v5[5] = 0LL;
      }
      v5[4] = 0LL;
    }
    v7 = NormalizationListLock.SystemCallNumber;
    if ( SystemCallNumber != NormalizationListLock.SystemCallNumber )
      memmove(v5, v5 + 8, (unsigned __int64)(NormalizationListLock.SystemCallNumber - SystemCallNumber) << 6);
    NormalizationListLock.SystemCallNumber = v7 - 1;
    if ( v7 == 1 )
    {
      ExFreePoolWithTag(*(PVOID *)((char *)&NormalizationListLock.116 + 4), 0);
      *($353D57E818BB6F967B4B818D974CF463 *)((char *)&NormalizationListLock.116 + 4) = 0LL;
      v9 = 0;
    }
    else
    {
      if ( v7 - 1 >= *(_DWORD *)&NormalizationListLock.WaitRegister.Flags - 32 )
      {
LABEL_11:
        v2 = 1;
        goto LABEL_5;
      }
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      v11.0 = ($3C37BCD2CC8A9A13CF8DF3DA08EBA37B)Pool2;
      if ( !Pool2 )
      {
        v2 = 0;
        goto LABEL_22;
      }
      memmove(
        Pool2,
        *(const void **)((char *)&NormalizationListLock.116 + 4),
        (unsigned __int64)(unsigned int)(*(_DWORD *)&NormalizationListLock.WaitRegister.Flags - 32) << 6);
      ExFreePoolWithTag(*(PVOID *)((char *)&NormalizationListLock.116 + 4), 0);
      *($353D57E818BB6F967B4B818D974CF463 *)((char *)&NormalizationListLock.116 + 4) = v11;
      v9 = *(_DWORD *)&NormalizationListLock.WaitRegister.Flags - 32;
    }
    *(_DWORD *)&NormalizationListLock.WaitRegister.Flags = v9;
    goto LABEL_11;
  }
  v2 = 1;
LABEL_22:
  KeReleaseMutantEx((struct _KTHREAD *)&NormalizationListLock.FirstArgument, 1LL, 4LL, &v13);
  return v2;
}
