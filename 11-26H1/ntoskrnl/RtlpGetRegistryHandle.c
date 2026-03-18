/*
 * XREFs of RtlpGetRegistryHandle @ 0x140A11948
 * Callers:
 *     RtlCreateRegistryKey @ 0x140804BF0 (RtlCreateRegistryKey.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x140804F78 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1408054A0 (RtlpUpdateDynamicTimeZones.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14093C97C (PerfDiagpSaveActiveDCLLogFileName.c)
 *     RtlCheckRegistryKey @ 0x140A10F50 (RtlCheckRegistryKey.c)
 *     RtlpQueryRegistryValues @ 0x140A10F94 (RtlpQueryRegistryValues.c)
 *     RtlWriteRegistryValue @ 0x140A11D10 (RtlWriteRegistryValue.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x140A13574 (RtlpGetTimeZoneInfoHandle.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140AD7C68 (EtwpEnableAutoLoggerProvider.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B1209C (ExpRefreshTimeZoneInformation.c)
 *     RtlDeleteRegistryValue @ 0x140B46070 (RtlDeleteRegistryValue.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140432EB0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140432F70 (RtlAppendUnicodeStringToString.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140723790 (ZwCreateKey.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140925F40 (RtlFormatCurrentUserKeyPath.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
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
  UNICODE_STRING Source; // [rsp+58h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF

  result = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  memset(&ObjectAttributes, 0, 44);
  Source = 0LL;
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
        if ( (_DWORD)v8 == 5 && RtlFormatCurrentUserKeyPath(&Source) >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&Destination, &Source);
          if ( Source.Buffer )
            ExFreePool(Source.Buffer);
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
