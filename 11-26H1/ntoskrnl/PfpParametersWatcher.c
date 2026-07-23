/*
 * XREFs of PfpParametersWatcher @ 0x1407CAD40
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PfLockExclusiveAcquire @ 0x1404BD3F0 (PfLockExclusiveAcquire.c)
 *     PfLockExclusiveRelease @ 0x1404C0F38 (PfLockExclusiveRelease.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ZwNotifyChangeKey @ 0x14072A440 (ZwNotifyChangeKey.c)
 *     PfpRpShutdown @ 0x1407C9D30 (PfpRpShutdown.c)
 *     PfSnParametersRead @ 0x1407CA570 (PfSnParametersRead.c)
 *     PfpParametersRead @ 0x1407CAB70 (PfpParametersRead.c)
 */

void __fastcall PfpParametersWatcher(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *v4; // rsi
  void *v6; // rcx
  NTSTATUS v7; // eax
  void *v8; // rcx
  char v9; // di
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+17h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+67h] BYREF

  v4 = (struct _KTHREAD *)(a1 + 504);
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  KeyHandle = 0LL;
  PfLockExclusiveAcquire((unsigned __int64 *)(a1 + 504), a2, a3, a4);
  v6 = *(void **)(a1 + 8);
  if ( v6 )
  {
    v7 = ZwNotifyChangeKey(
           v6,
           0LL,
           (PIO_APC_ROUTINE)(a1 + 32),
           (PVOID)1,
           (PIO_STATUS_BLOCK)(a1 + 16),
           0x1000000Fu,
           0,
           (PVOID)(a1 + 64),
           4u,
           1u);
    if ( v7 >= 0 )
      goto LABEL_8;
    if ( v7 == -1073741444 )
    {
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\PrefetchParameters");
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
      {
        v8 = *(void **)(a1 + 8);
        *(_QWORD *)(a1 + 8) = KeyHandle;
        if ( v8 )
          ZwClose(v8);
        if ( ZwNotifyChangeKey(
               *(HANDLE *)(a1 + 8),
               0LL,
               (PIO_APC_ROUTINE)(a1 + 32),
               (PVOID)1,
               (PIO_STATUS_BLOCK)(a1 + 16),
               0x1000000Fu,
               0,
               (PVOID)(a1 + 64),
               4u,
               1u) >= 0 )
        {
LABEL_8:
          v9 = 0;
          if ( (int)PfpParametersRead(a1) >= 0 )
          {
            if ( ((*(_DWORD *)(a1 + 68) & 2) != 0) != (stru_140E66D40.Padding[1] & 1) )
            {
              if ( (*(_DWORD *)(a1 + 68) & 2) != 0 )
              {
                _InterlockedExchange64(&stru_140E66D40.SchedulerAssistLastYieldBoostTime, 0LL);
                LODWORD(stru_140E66D40.Padding[1]) |= 1u;
              }
              else
              {
                PfpRpShutdown((__int64)&stru_140E66D40.KernelShadowStack);
              }
            }
            v9 = 1;
          }
          if ( (int)PfSnParametersRead(a1) >= 0 || v9 )
          {
            if ( *(_QWORD *)a1 )
              KeSetEvent(*(PRKEVENT *)a1, 0, 0);
          }
        }
      }
    }
  }
  PfLockExclusiveRelease(v4);
}
