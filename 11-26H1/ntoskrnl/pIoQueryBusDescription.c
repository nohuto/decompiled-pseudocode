/*
 * XREFs of pIoQueryBusDescription @ 0x140A4AF48
 * Callers:
 *     IoQueryDeviceDescription @ 0x140A4AE00 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140A4AF48 (pIoQueryBusDescription.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     wcsncmp @ 0x14053A620 (wcsncmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x140728600 (ZwEnumerateKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     pIoQueryDeviceDescription @ 0x140A4A8E8 (pIoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140A4AF48 (pIoQueryBusDescription.c)
 *     IopGetRegistryKeyInformation @ 0x140A4B2B0 (IopGetRegistryKeyInformation.c)
 *     IopGetRegistryValues @ 0x140A4B368 (IopGetRegistryValues.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall pIoQueryBusDescription(__int64 a1, UNICODE_STRING *a2, void *a3, _DWORD *a4, char a5)
{
  __int64 result; // rax
  PVOID v8; // rbx
  unsigned int v9; // eax
  unsigned __int16 *Pool2; // r14
  ULONG v11; // r12d
  NTSTATUS RegistryValues; // edi
  _DWORD *v13; // rcx
  PVOID v14; // r8
  _DWORD *v15; // rcx
  NTSTATUS BusDescription; // ebx
  __int64 v17; // r9
  _DWORD *v18; // rax
  NTSTATUS v19; // eax
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h]
  ULONG ResultLength[4]; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING Destination; // [rsp+80h] [rbp-80h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-70h]
  UNICODE_STRING Source; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING *v26; // [rsp+A8h] [rbp-58h]
  UNICODE_STRING v27; // [rsp+B0h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v29[2]; // [rsp+F0h] [rbp-10h] BYREF
  PVOID v30; // [rsp+100h] [rbp+0h]

  v26 = a2;
  KeyHandle = a3;
  v30 = 0LL;
  Handle = 0LL;
  P = 0LL;
  ResultLength[0] = 0;
  Source = 0LL;
  Destination = 0LL;
  *(_OWORD *)v29 = 0LL;
  result = IopGetRegistryKeyInformation(a3);
  if ( (int)result >= 0 )
  {
    v8 = P;
    v9 = *((_DWORD *)P + 6);
    if ( v9 + 32 >= v9 )
    {
      P = (PVOID)(v9 + 32);
      Pool2 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
      ExFreePoolWithTag(v8, 0);
      if ( Pool2 )
      {
        v11 = 0;
        RegistryValues = 0;
        do
        {
          v13 = *(_DWORD **)(a1 + 8);
          if ( v13 && *v13 == *a4 )
            break;
          RegistryValues = ZwEnumerateKey(KeyHandle, v11, KeyBasicInformation, Pool2, (ULONG)P, ResultLength);
          if ( RegistryValues < 0 )
            break;
          if ( !a5
            || !wcsncmp(Pool2 + 8, L"MultifunctionAdapter", (unsigned __int64)*((unsigned int *)Pool2 + 3) >> 1)
            || !wcsncmp(Pool2 + 8, L"EisaAdapter", (unsigned __int64)*((unsigned int *)Pool2 + 3) >> 1)
            || !wcsncmp(Pool2 + 8, L"TcAdapter", (unsigned __int64)*((unsigned int *)Pool2 + 3) >> 1) )
          {
            *(_QWORD *)&ObjectAttributes.Length = 48LL;
            Source.Buffer = Pool2 + 8;
            Source.Length = Pool2[6];
            Source.MaximumLength = Pool2[6];
            ObjectAttributes.RootDirectory = KeyHandle;
            ObjectAttributes.ObjectName = &Source;
            *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
            {
              Destination = *v26;
              RtlAppendUnicodeToString(&Destination, L"\\");
              RtlAppendUnicodeStringToString(&Destination, &Source);
              if ( a5 )
                goto LABEL_20;
              RegistryValues = IopGetRegistryValues(Handle);
              if ( RegistryValues >= 0 )
              {
                v14 = v29[1];
                if ( v29[1] )
                {
                  if ( *((_DWORD *)v29[1] + 3) )
                  {
                    if ( *(_DWORD *)((char *)v29[1] + *((unsigned int *)v29[1] + 2)) == **(_DWORD **)a1 )
                    {
                      v17 = (unsigned int)(*a4 + 1);
                      *a4 = v17;
                      v18 = *(_DWORD **)(a1 + 8);
                      if ( !v18 || *v18 == (_DWORD)v17 )
                      {
                        if ( *(_QWORD *)(a1 + 16) )
                        {
                          v27 = Destination;
                          v19 = pIoQueryDeviceDescription(a1, &v27, (__int64)v14, v17, (__int64)v29);
                        }
                        else
                        {
                          v19 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 56), (__int64)&Destination);
                        }
                        v14 = v29[1];
                        RegistryValues = v19;
                      }
                    }
                  }
                }
                if ( v29[0] )
                {
                  ExFreePoolWithTag(v29[0], 0);
                  v14 = v29[1];
                  v29[0] = 0LL;
                }
                if ( v14 )
                {
                  ExFreePoolWithTag(v14, 0);
                  v29[1] = 0LL;
                }
                if ( v30 )
                {
                  ExFreePoolWithTag(v30, 0);
                  v30 = 0LL;
                }
              }
              v15 = *(_DWORD **)(a1 + 8);
              if ( v15 && *v15 == *a4 )
              {
                ZwClose(Handle);
                Handle = 0LL;
              }
              else
              {
LABEL_20:
                v27 = Destination;
                BusDescription = pIoQueryBusDescription(a1, (unsigned int)&v27, (_DWORD)Handle, (_DWORD)a4, a5 == 0);
                ZwClose(Handle);
                RegistryValues = 0;
                Handle = 0LL;
                if ( BusDescription != -2147483622 )
                  RegistryValues = BusDescription;
              }
            }
          }
          ++v11;
        }
        while ( RegistryValues >= 0 );
        ExFreePoolWithTag(Pool2, 0);
        return (unsigned int)RegistryValues;
      }
      else
      {
        return 3221225626LL;
      }
    }
    else
    {
      return 3221225621LL;
    }
  }
  return result;
}
