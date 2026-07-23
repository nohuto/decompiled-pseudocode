/*
 * XREFs of PiGetDeviceRegistryProperty @ 0x1407A2E2C
 * Callers:
 *     IoGetDeviceProperty @ 0x1409556D0 (IoGetDeviceProperty.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     wcsstr @ 0x14053A900 (wcsstr.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1409AC818 (PnpDeviceObjectToDeviceInstance.c)
 *     IopOpenRegistryKeyEx @ 0x1409DC0A0 (IopOpenRegistryKeyEx.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     PnpFindAlternateStringData @ 0x140AA4B50 (PnpFindAlternateStringData.c)
 *     RtlFormatMessageEx @ 0x140B119B0 (RtlFormatMessageEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiGetDeviceRegistryProperty(__int64 a1, __int64 a2, __int64 a3, __int64 a4, WCHAR *a5, ULONG *a6)
{
  ULONG *ReturnLength; // r12
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v9; // rsi
  va_list v10; // r13
  wchar_t *v11; // r15
  NTSTATUS v12; // ebx
  NTSTATUS RegistryValue; // eax
  ULONG v14; // r14d
  wchar_t *v15; // rdi
  int AlternateStringData; // eax
  wchar_t *v17; // rax
  __int64 v18; // rcx
  const wchar_t *v19; // rcx
  unsigned int i; // r12d
  wchar_t *v21; // rax
  va_list v22; // rax
  __int64 v23; // rcx
  char v24; // cl
  size_t Size; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  wchar_t *Str; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-98h] BYREF
  _DWORD *v30; // [rsp+78h] [rbp-90h]
  PULONG v31; // [rsp+80h] [rbp-88h]
  PWSTR Buffer; // [rsp+88h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  va_list Arguments; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v35[152]; // [rsp+B0h] [rbp-58h] BYREF

  ReturnLength = a6;
  Handle = 0LL;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  Buffer = a5;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v31 = a6;
  v10 = 0LL;
  v30 = 0LL;
  v11 = 0LL;
  HIDWORD(Size) = 0;
  --CurrentThread->KernelApcDisable;
  Str = 0LL;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v12 = PnpDeviceObjectToDeviceInstance(a1, &Handle, 131097LL);
  if ( v12 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"LogConf");
    v12 = IopOpenRegistryKeyEx(&KeyHandle, Handle, &DestinationString, 131097LL);
    if ( v12 >= 0 )
    {
      ZwClose(Handle);
      Handle = KeyHandle;
      RegistryValue = IopGetRegistryValue(KeyHandle);
      v9 = v30;
      v12 = RegistryValue;
    }
    ZwClose(Handle);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( v12 >= 0 )
  {
    v14 = v9[3];
    v15 = (wchar_t *)((char *)v9 + (unsigned int)v9[2]);
    if ( v9[1] == 1 )
    {
      AlternateStringData = PnpFindAlternateStringData((char *)v9 + (unsigned int)v9[2], v14, &Str, (char *)&Size + 4);
      v11 = Str;
      if ( AlternateStringData )
      {
        v14 = HIDWORD(Size);
        v15 = Str;
        v17 = wcsstr(Str, L";(");
        v10 = (va_list)v17;
        if ( v17 )
        {
          v18 = (v14 >> 1) - 2;
          if ( v11[v18] == 41 )
          {
            *v17 = 0;
            v10 = (va_list)(v17 + 2);
            v11[v18] = 0;
            memset_0(v35, 0, sizeof(v35));
            v19 = (const wchar_t *)v10;
            Arguments = v10;
            for ( i = 1; ; ++i )
            {
              v21 = wcschr(v19, 0x2Cu);
              if ( !v21 )
                break;
              *v21 = 0;
              v22 = (va_list)(v21 + 1);
              if ( i >= 0x13 )
              {
                ReturnLength = v31;
                v24 = 1;
                goto LABEL_17;
              }
              v23 = i;
              *(_QWORD *)&v35[8 * v23 - 8] = v22;
              v19 = (const wchar_t *)v22;
            }
            ReturnLength = v31;
          }
        }
      }
      v24 = 0;
    }
    else
    {
      v24 = 0;
    }
LABEL_17:
    if ( *ReturnLength < v14 )
    {
      v12 = -1073741789;
    }
    else if ( v9[1] == 8 )
    {
      if ( v10 )
      {
        if ( v24 )
          v12 = -1073741619;
        else
          v12 = RtlFormatMessageEx(v11, 0, 0, 0, 1u, &Arguments, Buffer, *ReturnLength, ReturnLength, 0LL);
      }
      else
      {
        memmove(Buffer, v15, v14);
      }
    }
    else
    {
      v12 = -1073741584;
    }
    *ReturnLength = v14;
    ExFreePoolWithTag(v9, 0);
  }
  return (unsigned int)v12;
}
