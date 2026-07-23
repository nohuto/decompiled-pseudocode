/*
 * XREFs of pIoQueryDeviceDescription @ 0x140A4A8E8
 * Callers:
 *     pIoQueryBusDescription @ 0x140A4AF48 (pIoQueryBusDescription.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlIntegerToUnicodeString @ 0x14097BC70 (RtlIntegerToUnicodeString.c)
 *     IopGetRegistryKeyInformation @ 0x140A4B2B0 (IopGetRegistryKeyInformation.c)
 *     IopGetRegistryValues @ 0x140A4B368 (IopGetRegistryValues.c)
 *     IopOpenRegistryKey @ 0x140B1EB30 (IopOpenRegistryKey.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall pIoQueryDeviceDescription(__int64 a1, UNICODE_STRING *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // edi
  int appended; // ebx
  ULONG *v8; // rsi
  ULONG v9; // esi
  ULONG v10; // r12d
  UNICODE_STRING v11; // xmm7
  ULONG *v12; // rdi
  ULONG v13; // edi
  ULONG v14; // r15d
  UNICODE_STRING v15; // xmm6
  int v17; // [rsp+20h] [rbp-E0h]
  UNICODE_STRING Destination; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  __int64 v21; // [rsp+80h] [rbp-80h]
  UNICODE_STRING String; // [rsp+88h] [rbp-78h] BYREF
  PVOID v23; // [rsp+98h] [rbp-68h]
  PVOID P; // [rsp+A0h] [rbp-60h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  PVOID v26[2]; // [rsp+D8h] [rbp-28h]
  PVOID v27; // [rsp+E8h] [rbp-18h]
  PVOID v28[2]; // [rsp+F0h] [rbp-10h]
  PVOID v29; // [rsp+100h] [rbp+0h]
  char v30; // [rsp+108h] [rbp+8h] BYREF

  v5 = a5;
  Destination = *a2;
  v27 = 0LL;
  v29 = 0LL;
  v21 = a5;
  String.MaximumLength = 28;
  KeyHandle = 0LL;
  String.Buffer = (wchar_t *)&v30;
  Handle = 0LL;
  P = 0LL;
  v23 = 0LL;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  *(_OWORD *)v26 = 0LL;
  *(_OWORD *)v28 = 0LL;
  appended = RtlAppendUnicodeToString(&Destination, L"\\");
  if ( appended >= 0 )
  {
    appended = RtlAppendUnicodeToString(&Destination, CmTypeString[**(int **)(a1 + 16)]);
    if ( appended >= 0 )
    {
      v8 = *(ULONG **)(a1 + 24);
      if ( v8 )
      {
        v9 = *v8;
        v10 = v9 + 1;
      }
      else
      {
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        ObjectAttributes.ObjectName = &Destination;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        ObjectAttributes.RootDirectory = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        appended = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        if ( appended < 0 )
          return (unsigned int)appended;
        appended = IopGetRegistryKeyInformation(KeyHandle);
        ZwClose(KeyHandle);
        KeyHandle = 0LL;
        if ( appended < 0 )
          return (unsigned int)appended;
        v9 = 0;
        v10 = *((_DWORD *)P + 5);
        ExFreePoolWithTag(P, 0);
      }
      v11 = Destination;
      if ( v9 < v10 )
      {
        while ( 1 )
        {
          Destination = v11;
          String.Length = 26;
          appended = RtlIntegerToUnicodeString(v9, 0xAu, &String);
          if ( appended < 0 )
            return (unsigned int)appended;
          appended = RtlAppendUnicodeToString(&Destination, L"\\");
          if ( appended < 0 )
            return (unsigned int)appended;
          appended = RtlAppendUnicodeStringToString(&Destination, &String);
          if ( appended < 0 )
            return (unsigned int)appended;
          LOBYTE(v17) = 0;
          appended = IopOpenRegistryKey(&KeyHandle, 0LL, &Destination, 131097LL, v17);
          if ( appended >= 0 )
          {
            appended = IopGetRegistryValues(KeyHandle);
            ZwClose(KeyHandle);
            KeyHandle = 0LL;
            if ( appended >= 0 )
              break;
          }
LABEL_46:
          if ( ++v9 >= v10 )
            return (unsigned int)appended;
        }
        if ( !*(_QWORD *)(a1 + 32) )
        {
          v17 = v5;
          appended = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 56), (__int64)&Destination);
          goto LABEL_39;
        }
        appended = RtlAppendUnicodeToString(&Destination, L"\\");
        if ( appended < 0
          || (appended = RtlAppendUnicodeToString(&Destination, CmTypeString[**(int **)(a1 + 32)]), appended < 0) )
        {
LABEL_39:
          if ( v26[0] )
          {
            ExFreePoolWithTag(v26[0], 0);
            v26[0] = 0LL;
          }
          if ( v26[1] )
          {
            ExFreePoolWithTag(v26[1], 0);
            v26[1] = 0LL;
          }
          if ( v27 )
          {
            ExFreePoolWithTag(v27, 0);
            v27 = 0LL;
          }
          if ( appended < 0 )
            return (unsigned int)appended;
          goto LABEL_46;
        }
        v12 = *(ULONG **)(a1 + 40);
        if ( v12 )
        {
          v13 = *v12;
          v14 = v13 + 1;
        }
        else
        {
          LOBYTE(v17) = 0;
          if ( (int)IopOpenRegistryKey(&Handle, 0LL, &Destination, 131097LL, v17) < 0
            || (appended = IopGetRegistryKeyInformation(Handle), ZwClose(Handle), Handle = 0LL, appended < 0) )
          {
            appended = 0;
LABEL_38:
            v5 = v21;
            goto LABEL_39;
          }
          v13 = 0;
          v14 = *((_DWORD *)v23 + 5);
          ExFreePoolWithTag(v23, 0);
          v23 = 0LL;
        }
        v15 = Destination;
        while ( v13 < v14 )
        {
          Destination = v15;
          String.Length = 26;
          appended = RtlIntegerToUnicodeString(v13, 0xAu, &String);
          if ( appended < 0 )
            break;
          appended = RtlAppendUnicodeToString(&Destination, L"\\");
          if ( appended < 0 )
            break;
          appended = RtlAppendUnicodeStringToString(&Destination, &String);
          if ( appended < 0 )
            break;
          LOBYTE(v17) = 0;
          appended = IopOpenRegistryKey(&Handle, 0LL, &Destination, 131097LL, v17);
          if ( appended >= 0 )
          {
            appended = IopGetRegistryValues(Handle);
            ZwClose(Handle);
            Handle = 0LL;
            if ( appended >= 0 )
            {
              v17 = v21;
              appended = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 56), (__int64)&Destination);
              if ( v28[0] )
              {
                ExFreePoolWithTag(v28[0], 0);
                v28[0] = 0LL;
              }
              if ( v28[1] )
              {
                ExFreePoolWithTag(v28[1], 0);
                v28[1] = 0LL;
              }
              if ( v29 )
              {
                ExFreePoolWithTag(v29, 0);
                v29 = 0LL;
              }
              if ( appended < 0 )
                break;
            }
          }
          ++v13;
        }
        goto LABEL_38;
      }
    }
  }
  return (unsigned int)appended;
}
