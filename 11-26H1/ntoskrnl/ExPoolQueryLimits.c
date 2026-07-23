/*
 * XREFs of ExPoolQueryLimits @ 0x1405127B0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlULongLongMult @ 0x14045E560 (RtlULongLongMult.c)
 *     ExpPlFindLimitEntry @ 0x1404D05D0 (ExpPlFindLimitEntry.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ExSystemExceptionFilter @ 0x14083CCA0 (ExSystemExceptionFilter.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExPoolQueryLimits(void *Src, size_t Size, void *a3, size_t a4, KPROCESSOR_MODE PreviousMode)
{
  _DWORD *v9; // rdi
  NTSTATUS v10; // ebx
  _DWORD *Pool2; // rax
  int v12; // eax
  __int64 i; // rbx
  _QWORD *LimitEntry; // rax
  __int64 v15; // r11
  _QWORD *v16; // rcx
  __int64 v17; // r9
  _QWORD *v18; // rdx
  ULONGLONG pullResult[2]; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  pullResult[0] = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = 0LL;
  if ( PreviousMode && !SeSinglePrivilegeCheck((LUID)PspSiloMonitorLock.QuantumTarget, PreviousMode) )
  {
    v10 = -1073741727;
    goto LABEL_30;
  }
  if ( Size < 0x38 )
    goto LABEL_5;
  if ( Size > a4 )
    goto LABEL_7;
  Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
  v9 = Pool2;
  pullResult[1] = (ULONGLONG)Pool2;
  if ( Pool2 )
  {
    if ( PreviousMode )
      RtlCopyFromUser(Pool2, Src, Size);
    else
      RtlCopyVolatileMemory(Pool2, Src, Size);
    if ( *v9 != 1 || (v12 = v9[1]) == 0 )
    {
LABEL_7:
      v10 = -1073741811;
      goto LABEL_30;
    }
    v10 = RtlULongLongMult((unsigned int)(v12 - 1), 0x30uLL, pullResult);
    if ( v10 >= 0 )
    {
      if ( pullResult[0] < 0xFFFFFFFFFFFFFFC8uLL )
      {
        if ( pullResult[0] + 56 > Size )
        {
LABEL_5:
          v10 = -1073741820;
          goto LABEL_30;
        }
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        for ( i = 0LL; (unsigned int)i < v9[1]; i = (unsigned int)(i + 1) )
        {
          LimitEntry = ExpPlFindLimitEntry(v9[12 * i + 2]);
          if ( LimitEntry )
          {
            v16 = LimitEntry + 3;
            v17 = 2LL;
            v18 = (_QWORD *)((char *)v9 + v15 + 24);
            do
            {
              *(v18 - 1) = *(v16 - 1);
              *v18 = *v16;
              v16 += 3;
              v18 += 2;
              --v17;
            }
            while ( v17 );
            LimitEntry = (_QWORD *)LimitEntry[8];
          }
          else
          {
            *(_OWORD *)((char *)v9 + v15 + 16) = 0LL;
            *(_OWORD *)((char *)v9 + v15 + 32) = 0LL;
          }
          *(_QWORD *)((char *)v9 + v15 + 48) = LimitEntry;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( PreviousMode )
          RtlCopyToUser(a3, v9, Size);
        else
          RtlCopyVolatileMemory(a3, v9, Size);
        v10 = 0;
      }
      else
      {
        v10 = -1073741675;
      }
    }
  }
  else
  {
    v10 = -1073741670;
  }
LABEL_30:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v10;
}
