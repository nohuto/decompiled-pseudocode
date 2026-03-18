/*
 * XREFs of PiGetDeviceRegistryProperty @ 0x1407A02EC
 * Callers:
 *     IoGetDeviceProperty @ 0x140994C70 (IoGetDeviceProperty.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     wcschr @ 0x140537F60 (wcschr.c)
 *     wcsstr @ 0x140538480 (wcsstr.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x14090A260 (PnpDeviceObjectToDeviceInstance.c)
 *     IopGetRegistryValue @ 0x140A121A8 (IopGetRegistryValue.c)
 *     PnpFindAlternateStringData @ 0x140AA3080 (PnpFindAlternateStringData.c)
 *     IopOpenRegistryKeyEx @ 0x140AA8B70 (IopOpenRegistryKeyEx.c)
 *     RtlFormatMessageEx @ 0x140B0FF70 (RtlFormatMessageEx.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiGetDeviceRegistryProperty(__int64 a1, __int64 a2, __int64 a3, __int64 a4, wchar_t *a5, int *a6)
{
  int *v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v9; // rsi
  __int64 v10; // r13
  wchar_t *v11; // r15
  int v12; // ebx
  int RegistryValue; // eax
  unsigned int v14; // r14d
  wchar_t *v15; // rdi
  int AlternateStringData; // eax
  wchar_t *v17; // rax
  __int64 v18; // rcx
  const wchar_t *v19; // rcx
  unsigned int i; // r12d
  wchar_t *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  char v24; // cl
  size_t Size; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  wchar_t *Str; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-98h] BYREF
  _DWORD *v30; // [rsp+78h] [rbp-90h]
  __int64 v31; // [rsp+80h] [rbp-88h]
  NTSTRSAFE_PWSTR v32; // [rsp+88h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v35[152]; // [rsp+B0h] [rbp-58h] BYREF

  v6 = a6;
  Handle = 0LL;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v32 = a5;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v31 = (__int64)a6;
  v10 = 0LL;
  v30 = 0LL;
  LODWORD(v11) = 0;
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
        v10 = (__int64)v17;
        if ( v17 )
        {
          v18 = (v14 >> 1) - 2;
          if ( v11[v18] == 41 )
          {
            *v17 = 0;
            v10 = (__int64)(v17 + 2);
            v11[v18] = 0;
            memset_0(v35, 0, sizeof(v35));
            v19 = (const wchar_t *)v10;
            v34 = v10;
            for ( i = 1; ; ++i )
            {
              v21 = wcschr(v19, 0x2Cu);
              if ( !v21 )
                break;
              *v21 = 0;
              v22 = (__int64)(v21 + 1);
              if ( i >= 0x13 )
              {
                v6 = (int *)v31;
                v24 = 1;
                goto LABEL_17;
              }
              v23 = i;
              *(_QWORD *)&v35[8 * v23 - 8] = v22;
              v19 = (const wchar_t *)v22;
            }
            v6 = (int *)v31;
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
    if ( *v6 < v14 )
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
          v12 = RtlFormatMessageEx((int)v11, 0, 0, 0, 1, (__int64)&v34, v32, *v6, (__int64)v6);
      }
      else
      {
        memmove(v32, v15, v14);
      }
    }
    else
    {
      v12 = -1073741584;
    }
    *v6 = v14;
    ExFreePoolWithTag(v9, 0);
  }
  return (unsigned int)v12;
}
