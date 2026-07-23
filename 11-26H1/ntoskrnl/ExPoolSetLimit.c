/*
 * XREFs of ExPoolSetLimit @ 0x1406CFD68
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     RtlULongLongMult @ 0x14045E560 (RtlULongLongMult.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     ExpTrackTableInsertLimit @ 0x1406D0D90 (ExpTrackTableInsertLimit.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ExSystemExceptionFilter @ 0x14083CCA0 (ExSystemExceptionFilter.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     RtlRunOnceExecuteOnce @ 0x1409D46E0 (RtlRunOnceExecuteOnce.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExPoolSetLimit(void *Src, size_t Size, KPROCESSOR_MODE PreviousMode)
{
  _DWORD *v6; // rdi
  NTSTATUS inserted; // ebx
  _DWORD *Pool2; // rax
  int v9; // eax
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // r10
  _DWORD *v13; // r9
  __int64 i; // rcx
  _DWORD *v16; // [rsp+20h] [rbp-28h]
  ULONGLONG pullResult; // [rsp+68h] [rbp+20h] BYREF

  pullResult = 0LL;
  v6 = 0LL;
  if ( PreviousMode && !SeSinglePrivilegeCheck((LUID)PspSiloMonitorLock.QuantumTarget, PreviousMode) )
  {
    inserted = -1073741727;
    goto LABEL_31;
  }
  if ( Size < 0x38 )
    goto LABEL_5;
  inserted = RtlRunOnceExecuteOnce(&ExpPlInitOnceVar, ExpPlRunOnceInit, 0LL, 0LL);
  if ( inserted >= 0 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
    v6 = Pool2;
    v16 = Pool2;
    if ( Pool2 )
    {
      if ( PreviousMode )
        RtlCopyFromUser(Pool2, Src, Size);
      else
        RtlCopyVolatileMemory(Pool2, Src, Size);
      if ( *v6 == 1 && (v9 = v6[1]) != 0 )
      {
        inserted = RtlULongLongMult((unsigned int)(v9 - 1), 0x30uLL, &pullResult);
        if ( inserted >= 0 )
        {
          if ( pullResult < 0xFFFFFFFFFFFFFFC8uLL )
          {
            if ( pullResult + 56 > Size )
            {
LABEL_5:
              inserted = -1073741820;
              goto LABEL_31;
            }
            v11 = 0LL;
            v12 = 0LL;
            v13 = v6 + 2;
            while ( v11 < (unsigned int)v6[1] )
            {
              if ( *v13 == 1819242320 || !*v13 )
                goto LABEL_13;
              for ( i = 0LL; i < 2; ++i )
              {
                v10 = 2 * (v12 + i + 1);
                if ( (v6[4 * v12 + 4 + 4 * i] & 0xF) != 0 || (v6[4 * v12 + 6 + 4 * i] & 0xF) != 0 )
                  goto LABEL_13;
              }
              ++v11;
              v13 += 12;
              v12 += 3LL;
            }
            inserted = ExpTrackTableInsertLimit(v6, v11, v10, v13, v16);
            if ( inserted >= 0 )
              inserted = 0;
          }
          else
          {
            inserted = -1073741675;
          }
        }
      }
      else
      {
LABEL_13:
        inserted = -1073741811;
      }
    }
    else
    {
      inserted = -1073741670;
    }
  }
LABEL_31:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)inserted;
}
