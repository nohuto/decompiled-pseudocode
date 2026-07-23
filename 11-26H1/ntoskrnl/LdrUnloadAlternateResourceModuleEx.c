/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x1404ABC54
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x1403E0000 (LdrpGetFromMUIMemCache.c)
 *     LdrUnloadAlternateResourceModule @ 0x1404ABC3C (LdrUnloadAlternateResourceModule.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutant @ 0x1403E02A0 (KeReleaseMutant.c)
 *     KeReleaseMutantEx @ 0x1403E0320 (KeReleaseMutantEx.c)
 *     LdrpInitMuiCrits @ 0x1403E0804 (LdrpInitMuiCrits.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     MmUnmapViewInSystemSpace @ 0x140ADFA00 (MmUnmapViewInSystemSpace.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

BOOLEAN __cdecl LdrUnloadAlternateResourceModuleEx(PVOID DllHandle, ULONG Flags)
{
  BOOLEAN v3; // bl
  int WaitBlockList; // edi
  int v5; // r15d
  __int64 v6; // rsi
  void *v7; // rcx
  int v8; // ebx
  void *v9; // rcx
  int v10; // eax
  void *Pool2; // rax
  volatile __int64 v12; // rdi
  LONG v14; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  if ( !DllHandle )
    return 0;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&NormalizationListLock.FirstArgument, Executive, 0, 0, 0LL);
  WaitBlockList = (int)NormalizationListLock.WaitBlockList;
  if ( LODWORD(NormalizationListLock.WaitBlockList) )
  {
    while ( 1 )
    {
      if ( WaitBlockList <= 0 )
        goto LABEL_22;
      v5 = WaitBlockList - 1;
      v6 = NormalizationListLock.WaitStatus + ((__int64)(WaitBlockList - 1) << 6);
      if ( *(PVOID *)(v6 + 8) == DllHandle )
        break;
LABEL_5:
      WaitBlockList = v5;
    }
    v7 = *(void **)(v6 + 32);
    if ( v7 && v7 != (void *)-1LL )
    {
      MmUnmapViewInSystemSpace(v7);
      v9 = *(void **)(v6 + 40);
      if ( v9 )
      {
        ZwClose(v9);
        *(_QWORD *)(v6 + 40) = 0LL;
      }
      *(_QWORD *)(v6 + 32) = 0LL;
    }
    v8 = (int)NormalizationListLock.WaitBlockList;
    if ( WaitBlockList != LODWORD(NormalizationListLock.WaitBlockList) )
      memmove(
        (void *)v6,
        (const void *)(v6 + 64),
        (unsigned __int64)(unsigned int)(LODWORD(NormalizationListLock.WaitBlockList) - WaitBlockList) << 6);
    LODWORD(NormalizationListLock.WaitBlockList) = v8 - 1;
    if ( v8 == 1 )
    {
      ExFreePoolWithTag((PVOID)NormalizationListLock.WaitStatus, 0);
      NormalizationListLock.WaitStatus = 0LL;
      v10 = 0;
    }
    else
    {
      if ( v8 - 1 >= (unsigned int)(*(_DWORD *)&NormalizationListLock.ApcStateFill[40] - 32) )
      {
LABEL_11:
        v3 = 1;
        goto LABEL_5;
      }
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      v12 = (volatile __int64)Pool2;
      if ( !Pool2 )
      {
        v3 = 0;
        goto LABEL_22;
      }
      memmove(
        Pool2,
        (const void *)NormalizationListLock.WaitStatus,
        (unsigned __int64)(unsigned int)(*(_DWORD *)&NormalizationListLock.ApcStateFill[40] - 32) << 6);
      ExFreePoolWithTag((PVOID)NormalizationListLock.WaitStatus, 0);
      NormalizationListLock.WaitStatus = v12;
      v10 = *(_DWORD *)&NormalizationListLock.ApcStateFill[40] - 32;
    }
    *(_DWORD *)&NormalizationListLock.ApcStateFill[40] = v10;
    goto LABEL_11;
  }
  v3 = 1;
LABEL_22:
  KeReleaseMutantEx((struct _KTHREAD *)&NormalizationListLock.FirstArgument, 1LL, 4LL, &v14);
  return v3;
}
