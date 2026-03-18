/*
 * XREFs of NtFilterBootOption @ 0x140815AF0
 * Callers:
 *     DifNtFilterBootOptionWrapper @ 0x1406775C0 (DifNtFilterBootOptionWrapper.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140499FD0 (RtlCheckTokenMembership.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1408162F8 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     SepSecureBootCorrectBcd @ 0x140B5C260 (SepSecureBootCorrectBcd.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtFilterBootOption(int a1, int a2, unsigned int a3, __int64 *a4, unsigned int Size)
{
  int v7; // r15d
  __int64 *v9; // r12
  int v10; // edi
  unsigned int v11; // r14d
  int v12; // eax
  int v13; // eax
  __int64 *Pool2; // rax
  unsigned int i; // edx
  int v16; // eax
  int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v21[4]; // [rsp+20h] [rbp-58h] BYREF
  int v22; // [rsp+24h] [rbp-54h]
  __int64 v23; // [rsp+28h] [rbp-50h] BYREF
  __int64 *v24; // [rsp+30h] [rbp-48h]
  __int64 *v25; // [rsp+38h] [rbp-40h]

  v7 = a2;
  v9 = 0LL;
  v24 = 0LL;
  v21[0] = 0;
  v23 = 0LL;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
  {
    v10 = 0;
  }
  else
  {
    RtlCheckTokenMembership(0LL, SeAliasAdminsSid);
    v10 = -1073741790;
  }
  if ( v10 < 0 )
    goto LABEL_58;
  if ( !*(_QWORD *)&RtlpBootStatHandleLock.SavedApcStateFill[40] )
  {
    v10 = -2143092730;
    goto LABEL_58;
  }
  if ( !a1 )
  {
    if ( !v7 && !a3 && !a4 && !Size )
    {
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)&RtlpBootStatHandleLock.SchedulerApcFill5[40], 0, 0) )
      {
        v10 = SepSecureBootCorrectBcd(v21);
        if ( v10 >= 0 && (RtlpBootStatHandleLock.SchedulerApcFill3[44] || !v21[0]) )
          _InterlockedExchange((volatile __int32 *)&RtlpBootStatHandleLock.SchedulerApcFill5[40], 1);
      }
      goto LABEL_58;
    }
    goto LABEL_57;
  }
  if ( a1 == 1 )
  {
    if ( v7 )
    {
      if ( a3 )
      {
        if ( a4 )
        {
          v11 = Size;
          if ( Size )
          {
            v13 = *(_DWORD *)&RtlpBootStatHandleLock.SchedulerApcFill5[56];
            if ( !_bittest(&v13, HIBYTE(a3) & 0xF) )
            {
LABEL_22:
              v10 = 0;
              goto LABEL_58;
            }
            if ( KeGetCurrentThread()->PreviousMode )
            {
              if ( Size > 8 )
              {
                Pool2 = (__int64 *)ExAllocatePool2(0x100uLL);
                v9 = Pool2;
                v24 = Pool2;
                if ( !Pool2 )
                {
                  v10 = -1073741801;
                  v22 = -1073741801;
                  goto LABEL_58;
                }
                RtlCopyFromUser(Pool2, a4, Size);
                a4 = v9;
                v25 = v9;
              }
              else
              {
                RtlCopyFromUser(&v23, a4, Size);
                a4 = &v23;
                v25 = &v23;
              }
              v7 = a2;
            }
            goto LABEL_30;
          }
        }
      }
    }
LABEL_57:
    v10 = -1073741811;
    goto LABEL_58;
  }
  if ( a1 != 2 )
  {
    v10 = -1073741585;
    goto LABEL_58;
  }
  if ( !v7 )
    goto LABEL_57;
  if ( !a3 )
    goto LABEL_57;
  if ( a4 )
    goto LABEL_57;
  v11 = Size;
  if ( Size )
    goto LABEL_57;
  v12 = *(_DWORD *)&RtlpBootStatHandleLock.SchedulerApcFill5[56];
  if ( !_bittest(&v12, HIBYTE(a3) & 0xF) )
    goto LABEL_22;
LABEL_30:
  for ( i = 0; i < *(unsigned __int16 *)(*(_QWORD *)&RtlpBootStatHandleLock.SavedApcStateFill[40] + 36LL); ++i )
  {
    if ( *((_DWORD *)RtlpBootStatHandleLock.SchedulerApc.Reserved[2] + 3 * i + 1) == a3 )
    {
      v16 = *((_DWORD *)RtlpBootStatHandleLock.SchedulerApc.Reserved[2] + 3 * i);
      if ( !v16 || v16 == v7 )
      {
        v17 = *(unsigned __int16 *)((char *)&RtlpBootStatHandleLock.SchedulerApc.ApcListEntry.Blink->Flink
                                  + *((unsigned int *)RtlpBootStatHandleLock.SchedulerApc.Reserved[2] + 3 * i + 2));
        if ( (v17 & 0xFFFFF000) == 0
          && ((v17 & 0x20) == 0 || (RtlpBootStatHandleLock.SchedulerApcFill3[4] & 4) != 0)
          && ((v17 & 0x40) == 0 || (RtlpBootStatHandleLock.SchedulerApcFill3[4] & 0x10) != 0)
          && ((v17 & 0x800) == 0 || (RtlpBootStatHandleLock.SchedulerApcFill3[4] & 0x40) != 0) )
        {
          v18 = 3LL * i;
          if ( a1 == 1 )
          {
            v10 = SepSecureBootValidateBcdDataAgainstBcdRule(
                    (char *)RtlpBootStatHandleLock.SchedulerApc.Reserved[2] + 4 * v18,
                    a4,
                    v11);
          }
          else
          {
            _mm_lfence();
            v10 = 0;
            v19 = *((unsigned int *)RtlpBootStatHandleLock.SchedulerApc.Reserved[2] + v18 + 2);
            if ( (*((_BYTE *)&RtlpBootStatHandleLock.SchedulerApc.ApcListEntry.Blink->Flink + v19) & 0x1F) != 8
              || *(_WORD *)((char *)&RtlpBootStatHandleLock.SchedulerApc.ApcListEntry.Blink->Flink + v19 + 2) )
            {
              v10 = -1069350910;
            }
          }
          break;
        }
      }
    }
  }
LABEL_58:
  if ( v9 )
    ExFreePoolWithTag(v9, 0x62536553u);
  return (unsigned int)v10;
}
