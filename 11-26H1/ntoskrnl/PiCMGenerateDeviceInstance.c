/*
 * XREFs of PiCMGenerateDeviceInstance @ 0x1407B3B38
 * Callers:
 *     PiCMCreateDevice @ 0x140B5D998 (PiCMCreateDevice.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     RtlStringCchLengthW @ 0x1404509C0 (RtlStringCchLengthW.c)
 *     RtlStringCchCopyExW @ 0x140454380 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCatExW @ 0x14049034C (RtlStringCchCatExW.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _CmDeleteDevice @ 0x14089CD0C (_CmDeleteDevice.c)
 *     _CmValidateDeviceName @ 0x14094D660 (_CmValidateDeviceName.c)
 *     _CmGetDeviceStatus @ 0x140955C8C (_CmGetDeviceStatus.c)
 *     _PnpCtxRegSetValue @ 0x1409AD0CC (_PnpCtxRegSetValue.c)
 *     RtlUpcaseUnicodeString @ 0x1409D2F80 (RtlUpcaseUnicodeString.c)
 *     _CmCreateDevice @ 0x140AF540C (_CmCreateDevice.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGenerateDeviceInstance(NTSTRSAFE_PCWSTR pszSrc, char a2, wchar_t *a3, int a4)
{
  void *v7; // rdi
  NTSTATUS inited; // ebx
  NTSTRSAFE_PCWSTR i; // rdx
  wchar_t v10; // cx
  NTSTRSAFE_PWSTR *v11; // r9
  NTSTRSAFE_PWSTR *v12; // r9
  wchar_t *Pool2; // rsi
  int v14; // r15d
  struct _KTHREAD *CurrentThread; // rax
  int Device; // eax
  __int64 v17; // rcx
  __int64 v19; // rcx
  size_t *pcchRemaining; // [rsp+20h] [rbp-50h]
  size_t *pcchRemaininga; // [rsp+20h] [rbp-50h]
  ULONG dwFlags; // [rsp+28h] [rbp-48h]
  ULONG dwFlagsa; // [rsp+28h] [rbp-48h]
  __int64 v24; // [rsp+38h] [rbp-38h]
  __int64 v25; // [rsp+40h] [rbp-30h] BYREF
  __int64 v26; // [rsp+48h] [rbp-28h] BYREF
  void *v27; // [rsp+50h] [rbp-20h] BYREF
  size_t pcchLength; // [rsp+58h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  int v30; // [rsp+C0h] [rbp+50h] BYREF
  int v31; // [rsp+C8h] [rbp+58h] BYREF

  v31 = a4;
  *a3 = 0;
  LODWORD(v26) = 0;
  v25 = 0LL;
  v30 = 0;
  v27 = 0LL;
  DestinationString = 0LL;
  v7 = 0LL;
  inited = RtlStringCchLengthW(pszSrc, 0xC8uLL, &pcchLength);
  if ( inited >= 0 )
  {
    for ( i = pszSrc; ; ++i )
    {
      v10 = *i;
      if ( !*i )
        break;
      if ( (unsigned __int16)(v10 - 33) > 0x5Eu || v10 == 44 || v10 == 92 )
        return (unsigned int)-1073741773;
    }
    inited = RtlStringCchCopyExW(a3, 0xC8uLL, L"Root", 0LL, 0LL, 0x800u);
    if ( inited >= 0 )
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, a3);
      if ( inited >= 0 )
      {
        inited = RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
        if ( inited >= 0 )
        {
          inited = RtlStringCchCatExW(a3, 0xC8uLL, L"\\", v11, pcchRemaining, dwFlags);
          if ( inited >= 0 )
          {
            inited = RtlStringCchCatExW(a3, 0xC8uLL, pszSrc, v12, pcchRemaininga, dwFlagsa);
            if ( inited >= 0 )
            {
              Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
              if ( !Pool2 )
                return (unsigned int)-1073741670;
              v14 = 0;
              while ( 1 )
              {
                if ( v7 )
                {
                  ZwClose(v7);
                  v7 = 0LL;
                  v27 = 0LL;
                }
                LODWORD(v24) = v14;
                inited = RtlStringCchPrintfExW(Pool2, 0xC8uLL, 0LL, 0LL, 0x800u, L"%s\\%04u", a3, v24, v25, v26);
                if ( inited < 0 )
                  break;
                if ( (int)CmGetDeviceStatus(
                            PiPnpRtlCtx,
                            (_DWORD)Pool2,
                            0,
                            (unsigned int)&v26,
                            (__int64)&v25 + 4,
                            (__int64)&v25) < 0 )
                {
                  CurrentThread = KeGetCurrentThread();
                  --CurrentThread->KernelApcDisable;
                  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
                  LOBYTE(v31) = 0;
                  Device = CmCreateDevice(PiPnpRtlCtx, (_DWORD)Pool2, 131078, (unsigned int)&v27, (__int64)&v31, 0);
                  v7 = v27;
                  inited = Device;
                  if ( Device < 0 )
                    goto LABEL_37;
                  if ( (_BYTE)v31 )
                  {
                    inited = CmValidateDeviceName(v17, Pool2);
                    if ( inited < 0 || (inited = RtlStringCchCopyExW(a3, 0xC8uLL, Pool2, 0LL, 0LL, 0x800u), inited < 0) )
                    {
                      CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, Pool2, 0LL);
                    }
                    else if ( a2 )
                    {
                      v30 = 1;
                      inited = PnpCtxRegSetValue(v19, v7, L"Phantom", 4LL, &v30, 4);
                    }
LABEL_37:
                    ExReleaseResourceLite(&PnpRegistryDeviceResource);
                    KeLeaveCriticalRegion();
                    break;
                  }
                  ExReleaseResourceLite(&PnpRegistryDeviceResource);
                  KeLeaveCriticalRegion();
                }
                if ( (unsigned int)++v14 > 0x270F )
                {
                  inited = -2147483622;
                  break;
                }
              }
              if ( v7 )
                ZwClose(v7);
              ExFreePoolWithTag(Pool2, 0x34706E50u);
            }
          }
        }
      }
    }
  }
  if ( inited == -2147483643 )
    return (unsigned int)-1073741789;
  return (unsigned int)inited;
}
