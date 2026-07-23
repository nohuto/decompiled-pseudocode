/*
 * XREFs of RtlpGetRegistryHandle @ 0x140A10B38
 * Callers:
 *     RtlCreateRegistryKey @ 0x14080A690 (RtlCreateRegistryKey.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x14080AA18 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14080AF40 (RtlpUpdateDynamicTimeZones.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14091851C (PerfDiagpSaveActiveDCLLogFileName.c)
 *     RtlCheckRegistryKey @ 0x140A10140 (RtlCheckRegistryKey.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 *     RtlWriteRegistryValue @ 0x140A10F00 (RtlWriteRegistryValue.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x140A12764 (RtlpGetTimeZoneInfoHandle.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140AD4710 (EtwpEnableAutoLoggerProvider.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B13E1C (ExpRefreshTimeZoneInformation.c)
 *     RtlDeleteRegistryValue @ 0x140B480A0 (RtlDeleteRegistryValue.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140901A50 (RtlFormatCurrentUserKeyPath.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall RtlpGetRegistryHandle(int a1, const WCHAR *a2, char a3, HANDLE *a4)
{
  __int64 result; // rax
  __int64 v8; // rbx
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rdi
  wchar_t *v11; // rcx
  NTSTATUS appended; // ebx
  NTSTATUS v13; // eax
  struct _KPRCB *v14; // r8
  wchar_t *Buffer; // rdx
  _GENERAL_LOOKASIDE *v16; // rcx
  _GENERAL_LOOKASIDE *L; // rdi
  UNICODE_STRING Destination; // [rsp+48h] [rbp-19h] BYREF
  UNICODE_STRING CurrentUserKeyPath; // [rsp+58h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF

  result = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  memset(&ObjectAttributes, 0, 44);
  CurrentUserKeyPath = 0LL;
  if ( (a1 & 0x40000000) != 0 )
  {
    *a4 = (HANDLE)a2;
  }
  else
  {
    v8 = (unsigned int)a1;
    LODWORD(v8) = a1 & 0x7FFFFFFF;
    if ( a1 >= 0 )
      v8 = (unsigned int)a1;
    if ( (unsigned int)v8 >= 6 )
    {
      return 3221225485LL;
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[8].P;
      ++P->TotalAllocates;
      v11 = (wchar_t *)RtlpInterlockedPopEntrySList(&P->ListHead);
      if ( v11
        || (++P->AllocateMisses,
            L = CurrentPrcb->PPLookasideList[8].L,
            ++L->TotalAllocates,
            (v11 = (wchar_t *)RtlpInterlockedPopEntrySList(&L->ListHead)) != 0LL)
        || (++L->AllocateMisses,
            (v11 = (wchar_t *)guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size)) != 0LL) )
      {
        *(_DWORD *)v11 = CurrentPrcb->Number;
      }
      Destination.Buffer = v11;
      if ( v11 )
      {
        *(_DWORD *)&Destination.Length = 34340864;
        if ( !(_DWORD)v8 )
          goto LABEL_9;
        if ( (_DWORD)v8 == 5 && RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath) >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&Destination, &CurrentUserKeyPath);
          if ( CurrentUserKeyPath.Buffer )
            ExFreePool(CurrentUserKeyPath.Buffer);
        }
        else
        {
          appended = RtlAppendUnicodeToString(&Destination, (PCWSTR)RtlpRegistryPaths[v8]);
        }
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&Destination, L"\\");
          if ( appended >= 0 )
          {
LABEL_9:
            appended = RtlAppendUnicodeToString(&Destination, a2);
            if ( appended >= 0 )
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = &Destination;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              if ( a3 )
                v13 = ZwCreateKey(a4, 0x40000000u, &ObjectAttributes, 0, 0LL, 0, 0LL);
              else
                v13 = ZwOpenKey(a4, 0x82000000, &ObjectAttributes);
              appended = v13;
            }
          }
        }
        v14 = KeGetCurrentPrcb();
        Buffer = Destination.Buffer;
        v16 = v14->PPLookasideList[8].P;
        ++v16->TotalFrees;
        if ( LOWORD(v16->ListHead.Alignment) < v16->Depth
          || (++v16->FreeMisses,
              v16 = v14->PPLookasideList[8].L,
              ++v16->TotalFrees,
              LOWORD(v16->ListHead.Alignment) < v16->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v16->ListHead, (PSLIST_ENTRY)Buffer);
        }
        else
        {
          ++v16->FreeMisses;
          guard_dispatch_icall_no_overrides((__int64)Buffer, (__int64)Buffer);
        }
        return (unsigned int)appended;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
  return result;
}
