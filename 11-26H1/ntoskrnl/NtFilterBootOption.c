/*
 * XREFs of NtFilterBootOption @ 0x14081BCA0
 * Callers:
 *     DifNtFilterBootOptionWrapper @ 0x14067B1A0 (DifNtFilterBootOptionWrapper.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140493B20 (RtlCheckTokenMembership.c)
 *     HviIsAnyHypervisorPresent @ 0x1404DF970 (HviIsAnyHypervisorPresent.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     HviGetHypervisorFeatures @ 0x1406E09D0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x14081C508 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     SepSecureBootCorrectBcd @ 0x140B85B08 (SepSecureBootCorrectBcd.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtFilterBootOption(
        FILTER_BOOT_OPTION_OPERATION FilterOperation,
        ULONG ObjectType,
        ULONG ElementType,
        PVOID Data,
        ULONG DataSize)
{
  ULONG v6; // esi
  void *v7; // r15
  NTSTATUS v8; // edi
  ULONG v9; // r11d
  int v10; // eax
  int v11; // eax
  void *Pool2; // rax
  unsigned int v13; // r8d
  unsigned int v14; // r10d
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rcx
  BOOLEAN IsMember; // [rsp+20h] [rbp-78h] BYREF
  bool v20; // [rsp+21h] [rbp-77h]
  _BYTE v21[2]; // [rsp+22h] [rbp-76h] BYREF
  ULONG v22; // [rsp+24h] [rbp-74h]
  FILTER_BOOT_OPTION_OPERATION v23; // [rsp+28h] [rbp-70h]
  ULONG v24; // [rsp+2Ch] [rbp-6Ch]
  int v25; // [rsp+30h] [rbp-68h]
  __int64 v26; // [rsp+38h] [rbp-60h] BYREF
  void *v27; // [rsp+40h] [rbp-58h]
  __int64 *v28; // [rsp+48h] [rbp-50h]
  __int128 v29; // [rsp+50h] [rbp-48h] BYREF

  v6 = ElementType;
  v24 = ElementType;
  v22 = ObjectType;
  v23 = FilterOperation;
  v7 = 0LL;
  v27 = 0LL;
  v21[0] = 0;
  v26 = 0LL;
  v20 = HviIsAnyHypervisorPresent() && (v29 = 0LL, HviGetHypervisorFeatures(&v29), (v29 & 0x100000000000LL) == 0);
  IsMember = SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode);
  if ( IsMember )
  {
    v8 = 0;
  }
  else if ( RtlCheckTokenMembership(0LL, SeAliasAdminsSid, &IsMember) < 0 || (v8 = 0, !IsMember) )
  {
    v8 = -1073741790;
  }
  if ( v8 < 0 )
    goto LABEL_66;
  if ( !RtlpBootStatHandleLock.SchedulerApc.Reserved[1] )
  {
    v8 = -2143092730;
    goto LABEL_66;
  }
  if ( v23 == FilterBootOptionOperationOpenSystemStore )
  {
    if ( !v22 && !v6 && !Data && !DataSize )
    {
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)&RtlpBootStatHandleLock.SchedulerApcFill5[76], 0, 0) )
      {
        v8 = SepSecureBootCorrectBcd(v21);
        if ( v8 >= 0 && (RtlpBootStatHandleLock.SchedulerApc.ApcStateIndex || !v21[0]) )
          _InterlockedExchange((volatile __int32 *)&RtlpBootStatHandleLock.SchedulerApcFill5[76], 1);
      }
      goto LABEL_66;
    }
    goto LABEL_65;
  }
  if ( v23 == FilterBootOptionOperationSetElement )
  {
    v9 = v22;
    if ( v22 && v6 && Data && DataSize )
    {
      v11 = *(_DWORD *)&RtlpBootStatHandleLock.SchedulerApcFill5[72];
      if ( !_bittest(&v11, HIBYTE(v6) & 0xF) )
      {
LABEL_28:
        v8 = 0;
        goto LABEL_66;
      }
      if ( KeGetCurrentThread()->PreviousMode )
      {
        if ( DataSize > 8 )
        {
          Pool2 = (void *)ExAllocatePool2(0x100uLL);
          v7 = Pool2;
          v27 = Pool2;
          if ( !Pool2 )
          {
            v8 = -1073741801;
            v25 = -1073741801;
            goto LABEL_66;
          }
          RtlCopyFromUser(Pool2, Data, DataSize);
          Data = v7;
          v28 = (__int64 *)v7;
        }
        else
        {
          RtlCopyFromUser(&v26, Data, DataSize);
          Data = &v26;
          v28 = &v26;
        }
        v6 = v24;
        v9 = v22;
      }
      goto LABEL_36;
    }
LABEL_65:
    v8 = -1073741811;
    goto LABEL_66;
  }
  if ( v23 != FilterBootOptionOperationDeleteElement )
  {
    v8 = -1073741585;
    goto LABEL_66;
  }
  v9 = v22;
  if ( !v22 || !v6 || Data || DataSize )
    goto LABEL_65;
  v10 = *(_DWORD *)&RtlpBootStatHandleLock.SchedulerApcFill5[72];
  if ( !_bittest(&v10, HIBYTE(v6) & 0xF) )
    goto LABEL_28;
LABEL_36:
  v13 = 0;
  v14 = *((unsigned __int16 *)RtlpBootStatHandleLock.SchedulerApc.Reserved[1] + 18);
  if ( (_WORD)v14 )
  {
    while ( 1 )
    {
      if ( *((_DWORD *)RtlpBootStatHandleLock.SchedulerApc.SystemArgument1 + 3 * v13 + 1) == v6 )
      {
        v15 = *((_DWORD *)RtlpBootStatHandleLock.SchedulerApc.SystemArgument1 + 3 * v13);
        if ( !v15 || v15 == v9 )
        {
          v16 = *(unsigned __int16 *)((char *)RtlpBootStatHandleLock.SchedulerApc.Reserved[2]
                                    + *((unsigned int *)RtlpBootStatHandleLock.SchedulerApc.SystemArgument1 + 3 * v13 + 2));
          if ( (v16 & 0xFFFFF000) == 0
            && ((v16 & 0x20) == 0 || (RtlpBootStatHandleLock.SchedulerApcFill3[20] & 4) != 0)
            && ((v16 & 0x40) == 0 || (RtlpBootStatHandleLock.SchedulerApcFill3[20] & 0x10) != 0)
            && ((v16 & 0x800) == 0 || (RtlpBootStatHandleLock.SchedulerApcFill3[20] & 0x40) != 0)
            && (!v20 || *((_DWORD *)RtlpBootStatHandleLock.SchedulerApc.SystemArgument1 + 3 * v13 + 1) != 620757041) )
          {
            break;
          }
        }
      }
      if ( ++v13 >= v14 )
        goto LABEL_66;
    }
    if ( v23 == FilterBootOptionOperationSetElement )
    {
      v8 = SepSecureBootValidateBcdDataAgainstBcdRule(
             (char *)RtlpBootStatHandleLock.SchedulerApc.SystemArgument1 + 12 * v13,
             Data,
             DataSize,
             RtlpBootStatHandleLock.SchedulerApc.Reserved[2]);
    }
    else
    {
      v8 = 0;
      v17 = *((unsigned int *)RtlpBootStatHandleLock.SchedulerApc.SystemArgument1 + 3 * v13 + 2);
      if ( (*((_BYTE *)RtlpBootStatHandleLock.SchedulerApc.Reserved[2] + v17) & 0x1F) != 8
        || *(_WORD *)((char *)RtlpBootStatHandleLock.SchedulerApc.Reserved[2] + v17 + 2) )
      {
        v8 = -1069350910;
      }
    }
  }
LABEL_66:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x62536553u);
  return v8;
}
