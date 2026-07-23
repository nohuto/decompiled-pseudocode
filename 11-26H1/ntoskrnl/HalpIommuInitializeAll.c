/*
 * XREFs of HalpIommuInitializeAll @ 0x140C1378C
 * Callers:
 *     HalpInterruptReinitialize @ 0x140BF0368 (HalpInterruptReinitialize.c)
 *     HalpIommuInitSystem @ 0x140BF16E0 (HalpIommuInitSystem.c)
 * Callees:
 *     RtlClearAllBits @ 0x140478400 (RtlClearAllBits.c)
 *     HviGetHardwareFeatures @ 0x1404DF900 (HviGetHardwareFeatures.c)
 *     HalpInterruptIsRemappingRequired @ 0x1404E1048 (HalpInterruptIsRemappingRequired.c)
 *     HalpIommuPopulateExceptionList @ 0x1405060CC (HalpIommuPopulateExceptionList.c)
 *     HalpMmAllocateMemory @ 0x1405801F4 (HalpMmAllocateMemory.c)
 *     HalpIommuUpdatePageTableLevel @ 0x140589C14 (HalpIommuUpdatePageTableLevel.c)
 *     HalpIommuUpdatePageWalkCapability @ 0x140589CB4 (HalpIommuUpdatePageWalkCapability.c)
 *     HalpIommuConfigureInterrupt @ 0x14058E40C (HalpIommuConfigureInterrupt.c)
 *     HalpGetIrtEntryCount @ 0x1405922EC (HalpGetIrtEntryCount.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpIommuSetupMessageInterruptRouting @ 0x140BF1C10 (HalpIommuSetupMessageInterruptRouting.c)
 *     HalpIommuProcessReservedDomains @ 0x140BF1D4C (HalpIommuProcessReservedDomains.c)
 */

__int64 __fastcall HalpIommuInitializeAll(char a1, __int64 a2)
{
  char v4; // al
  unsigned int v5; // esi
  ULONG_PTR *v6; // r14
  __int64 v7; // r12
  __int64 v8; // rdi
  int v9; // eax
  int v10; // ebx
  unsigned int v11; // ebx
  __int64 result; // rax
  volatile LONG Lock; // ecx
  int v14; // edx
  __int64 v15; // rdx
  const char *v16; // rcx
  __int64 StackBase_high; // rdx
  unsigned __int64 v18[3]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v19; // [rsp+48h] [rbp-38h] BYREF
  __int128 v20; // [rsp+58h] [rbp-28h] BYREF
  __int64 v21; // [rsp+68h] [rbp-18h]

  v21 = 0LL;
  v19 = 0LL;
  *(_OWORD *)v18 = 0LL;
  v20 = 0LL;
  if ( !a1 && (int)HalpIommuPopulateExceptionList() < 0 )
    return 3221225473LL;
  if ( HalpHvIommu )
  {
    if ( HalpHvCpuManager )
    {
      HviGetHardwareFeatures((__int64)&v19);
      v4 = BYTE4(v19);
      if ( BYTE4(v19) )
        goto LABEL_50;
    }
    return 0LL;
  }
  if ( LODWORD(HalpDeviceBlockUnblockPushLock.StackLimit) && (ULONG_PTR *)HalpIommuList == &HalpIommuList )
    return 3221225659LL;
  v5 = 0;
LABEL_10:
  if ( v5 <= 5 )
  {
    v6 = (ULONG_PTR *)HalpIommuList;
    while ( 1 )
    {
      v7 = (__int64)v6;
      if ( v6 == &HalpIommuList )
      {
        ++v5;
        goto LABEL_10;
      }
      v8 = (__int64)v6;
      v6 = (ULONG_PTR *)*v6;
      v9 = *(_DWORD *)(v8 + 464);
      if ( (v9 & 0x40) == 0 && LODWORD(HalpDeviceBlockUnblockPushLock.StackLimit) )
        return 3221225659LL;
      v10 = (*(_DWORD *)(v8 + 464) & 0x20) != 0;
      if ( (v9 & 0x180) != 0 )
        break;
      if ( (v9 & 0x20) != 0 || LODWORD(HalpDeviceBlockUnblockPushLock.StackLimit) )
      {
LABEL_24:
        if ( v5 )
        {
          if ( v5 < 5 )
            goto LABEL_30;
          if ( *(_QWORD *)(v8 + 304) )
          {
            if ( a1 )
            {
              if ( (*(_DWORD *)(v8 + 384) & 2) != 0 )
              {
                result = HalpIommuSetupMessageInterruptRouting(v8, 0x10000LL);
                if ( (int)result < 0 )
                  return result;
              }
              else
              {
                result = 0LL;
              }
              v15 = *(_QWORD *)(v8 + 288);
              if ( !v15 )
                return result;
              guard_dispatch_icall_no_overrides(*(_QWORD *)(v8 + 16), v15);
            }
            else
            {
              Lock = KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock;
              v18[1] = (unsigned __int16)((unsigned int)KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock >> 6);
              v18[0] = 1LL << Lock;
              if ( !HalpInterruptIsRemappingRequired() || (v14 = 6, (*(_DWORD *)(v8 + 464) & 0x10) != 0) )
                v14 = 1073741822;
              HalpIommuConfigureInterrupt(v7, v14, v18);
            }
          }
        }
        else
        {
          if ( !a1 && (int)HalpIommuProcessReservedDomains(a2, v8) < 0 )
            return 3221225473LL;
          *(_QWORD *)&v20 = 0LL;
          HIDWORD(v21) = 0;
          *((_QWORD *)&v20 + 1) = __PAIR64__((unsigned int)HalpDeviceBlockUnblockPushLock.StackLimit, v10);
          LODWORD(v21) = HalpGetIrtEntryCount();
          if ( (int)guard_dispatch_icall_no_overrides(*(_QWORD *)(v8 + 16), (__int64)&v20) < 0 )
            return 3221225473LL;
LABEL_30:
          result = guard_dispatch_icall_no_overrides(*(_QWORD *)(v8 + 16), v5);
          if ( (int)result < 0 )
            return result;
        }
      }
    }
    if ( !v5 && !a1 )
    {
      v11 = *(_DWORD *)(v8 + 432);
      if ( v11 > 0x10000 )
        v11 = 0x10000;
      *(_QWORD *)(v8 + 456) = HalpMmAllocateMemory(4 * ((v11 + 32) >> 5));
      *(_DWORD *)(v8 + 448) = v11;
      RtlClearAllBits((PRTL_BITMAP)(v8 + 448));
      *(_QWORD *)(v8 + 440) = 0LL;
    }
    v10 = (HalpIommuPolicy == 3) + 1;
    goto LABEL_24;
  }
  HalpIommuUpdatePageWalkCapability();
  HalpIommuUpdatePageTableLevel();
  if ( HIDWORD(HalpDeviceBlockUnblockPushLock.StackBase) )
  {
    v4 = 12;
    v16 = "\t";
    HalpIommuDomainMaxInputBitWidth = 12;
    StackBase_high = HIDWORD(HalpDeviceBlockUnblockPushLock.StackBase);
    do
    {
      v4 += *v16;
      v16 += 4;
      --StackBase_high;
    }
    while ( StackBase_high );
LABEL_50:
    HalpIommuDomainMaxInputBitWidth = v4;
  }
  return 0LL;
}
