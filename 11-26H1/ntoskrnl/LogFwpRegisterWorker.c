/*
 * XREFs of LogFwpRegisterWorker @ 0x140C59910
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 */

int LogFwpRegisterWorker()
{
  int result; // eax
  NTSTATUS v1; // eax
  HANDLE v2; // rcx
  int WriteOperationCount; // ebx
  HANDLE KeyHandle; // [rsp+40h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp+Fh] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+1Fh] BYREF
  int Data; // [rsp+A8h] [rbp+6Fh] BYREF
  ULONG Disposition; // [rsp+B0h] [rbp+77h] BYREF
  HANDLE v9; // [rsp+B8h] [rbp+7Fh] BYREF

  Disposition = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v9 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"BGFX");
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v1 = ZwCreateKey(&v9, 0x20019u, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
    v2 = KeyHandle;
    if ( v1 >= 0 )
    {
      WriteOperationCount = WheapPfaLock.WriteOperationCount;
      ZwClose(KeyHandle);
      RtlInitUnicodeString(&DestinationString, L"Resume");
      Data = (WriteOperationCount & 0x100000) != 0;
      ZwSetValueKey(v9, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"Width");
      Data = WheapPfaLock.ForegroundLossTime;
      ZwSetValueKey(v9, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"Height");
      Data = *(&WheapPfaLock.ForegroundLossTime + 1);
      ZwSetValueKey(v9, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"BPP");
      Data = *(_DWORD *)WheapPfaLock.PriorityFloorCounts;
      ZwSetValueKey(v9, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"LogoSize");
      Data = *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[168];
      ZwSetValueKey(v9, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressFrames");
      Data = HIDWORD(WheapPfaLock.ReadOperationCount);
      ZwSetValueKey(v9, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressMemory");
      Data = *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[112];
      ZwSetValueKey(v9, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressProlog");
      Data = 1000000LL * *(_QWORD *)&WheapPfaLock.ThreadTimerDelay / qword_140E0F250;
      ZwSetValueKey(v9, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressLow");
      Data = 1000000 * qword_140E0F248 / qword_140E0F250;
      ZwSetValueKey(v9, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressHigh");
      Data = 1000000LL * *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[8] / qword_140E0F250;
      ZwSetValueKey(v9, &DestinationString, 0, 4u, &Data, 4u);
      if ( gLoadedDiffHivesLock.WaitBlock[2].Object )
      {
        RtlInitUnicodeString(&DestinationString, L"ResidentSize");
        Data = *(_DWORD *)gLoadedDiffHivesLock.WaitBlock[2].Object;
        ZwSetValueKey(v9, &DestinationString, 0, 4u, &Data, 4u);
      }
      RtlInitUnicodeString(&DestinationString, L"ProgressTotal");
      Data = 1000000LL * *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[24] / qword_140E0F250;
      ZwSetValueKey(v9, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"ProgressManual");
      Data = 1000000 * WheapPfaLock.OtherOperationCount / qword_140E0F250;
      ZwSetValueKey(v9, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeProlog");
      Data = (signed __int64)(1000000 * WheapPfaLock.InGlobalForegroundList) / qword_140E0F250;
      ZwSetValueKey(v9, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeOverlap");
      Data = (int)WheapPfaLock.QueuedScb;
      ZwSetValueKey(v9, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeIo");
      Data = WheapPfaLock.ReadOperationCount;
      ZwSetValueKey(v9, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeCpu");
      Data = HIDWORD(WheapPfaLock.IoSelfBoostsEntry.Next);
      ZwSetValueKey(v9, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeFrames");
      Data = (int)WheapPfaLock.IoSelfBoostsEntry.Next;
      ZwSetValueKey(v9, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeMemory");
      Data = *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[108];
      ZwSetValueKey(v9, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeLow");
      Data = 1000000 * qword_140E0F258 / qword_140E0F250;
      ZwSetValueKey(v9, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeHigh");
      Data = 1000000 * (__int64)WheapPfaLock.PropagateBoostsEntry.Next / qword_140E0F250;
      ZwSetValueKey(v9, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"FadeTotal");
      Data = 1000000LL * *(_QWORD *)&WheapPfaLock.PriorityFloorCounts[16] / qword_140E0F250;
      ZwSetValueKey(v9, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"AnimationTotal");
      Data = 1000000LL * *(_QWORD *)&WheapPfaLock.AbCompletedIoQoSBoostCount / qword_140E0F250;
      ZwSetValueKey(v9, &DestinationString, 0, 4u, &Data, 4u);
      RtlInitUnicodeString(&DestinationString, L"CompressBitmaps");
      Data = 1000000 * qword_140E651F8 / qword_140E0F250;
      ZwSetValueKey(v9, &DestinationString, 0, 4u, &Data, 4u);
      v2 = v9;
    }
    return ZwClose(v2);
  }
  return result;
}
