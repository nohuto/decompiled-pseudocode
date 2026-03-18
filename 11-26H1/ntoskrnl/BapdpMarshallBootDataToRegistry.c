/*
 * XREFs of BapdpMarshallBootDataToRegistry @ 0x1406CA6B8
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140C7FBB0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140723790 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140723FF0 (ZwSetValueKey.c)
 *     RtlIntegerToUnicodeString @ 0x14096B330 (RtlIntegerToUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x140A3EB50 (RtlStringFromGUIDEx.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void BapdpMarshallBootDataToRegistry()
{
  __int64 *v0; // rbx
  __int64 *v1; // rax
  unsigned int v2; // edi
  __int64 v3; // rdx
  unsigned int v4; // ecx
  __int64 v5; // rcx
  unsigned int v6; // r14d
  _QWORD *Pool2; // rsi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ebx
  UNICODE_STRING **v12; // r15
  UNICODE_STRING *v13; // rax
  UNICODE_STRING v14; // xmm0
  ULONG v15; // r13d
  __int64 v16; // r12
  char *v17; // r14
  _QWORD *v18; // rcx
  unsigned __int64 v19; // rax
  ULONG v20; // ecx
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B8h]
  HANDLE KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v26[2]; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING String; // [rsp+88h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-70h] BYREF
  char v29; // [rsp+C8h] [rbp-40h] BYREF

  v0 = (__int64 *)qword_140E622C0;
  Handle = (HANDLE)0x43F585FA729AF26ELL;
  v1 = (__int64 *)qword_140E622C0;
  v2 = 0;
  v22 = 0x55C1EB7445F20CB8LL;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  if ( qword_140E622C0 )
  {
    do
    {
      if ( v1 == &qword_140E622C0 )
        break;
      v3 = v1[2];
      v1 = (__int64 *)*v1;
      v4 = *(_DWORD *)(v3 + 32);
      if ( v4 && v4 <= 2 )
      {
        v5 = *(_QWORD *)(v3 + 16) - (_QWORD)Handle;
        if ( !v5 )
          v5 = *(_QWORD *)(v3 + 24) - v22;
        if ( !v5 )
          ++v2;
      }
    }
    while ( v1 );
    if ( v2 )
    {
      v6 = 0;
      Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        while ( v0 != &qword_140E622C0 )
        {
          v8 = v0[2];
          v0 = (__int64 *)*v0;
          if ( (unsigned int)(*(_DWORD *)(v8 + 32) - 1) <= 1 )
          {
            v9 = *(_QWORD *)(v8 + 16) - (_QWORD)Handle;
            if ( !v9 )
              v9 = *(_QWORD *)(v8 + 24) - v22;
            if ( !v9 )
            {
              v10 = v6++;
              Pool2[v10] = v8;
            }
          }
        }
        *(&ObjectAttributes.Length + 1) = 0;
        *(&ObjectAttributes.Attributes + 1) = 0;
        DestinationString_8 = 0LL;
        RtlInitUnicodeString(&DestinationString_8, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString_8;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
        {
          KeyHandle = 0LL;
LABEL_40:
          if ( DestinationString )
            ZwClose(DestinationString);
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0x64506142u);
          return;
        }
        *(&ObjectAttributes.Length + 1) = 0;
        *(&ObjectAttributes.Attributes + 1) = 0;
        DestinationString_8 = 0LL;
        RtlInitUnicodeString(&DestinationString_8, L"BootApplicationPersistentData");
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.ObjectName = &DestinationString_8;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateKey(&DestinationString, 0x6001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL) >= 0 )
        {
          v11 = 0;
          v12 = (UNICODE_STRING **)Pool2;
          do
          {
            v13 = *v12;
            Handle = 0LL;
            if ( v13 )
            {
              v14 = *v13;
              v26[0] = 5111808LL;
              DestinationString_8 = v14;
              v26[1] = &v29;
              memset(&ObjectAttributes, 0, 44);
              if ( (int)RtlStringFromGUIDEx(&DestinationString_8, v26, 0LL) >= 0 )
              {
                ObjectAttributes.RootDirectory = DestinationString;
                ObjectAttributes.ObjectName = (PUNICODE_STRING)v26;
                ObjectAttributes.Length = 48;
                ObjectAttributes.Attributes = 576;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( ZwCreateKey(&Handle, 0x6001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL) >= 0 )
                {
                  v15 = 0;
                  v16 = v2 - v11;
                  v17 = (char *)&Pool2[v11];
                  do
                  {
                    v18 = *(_QWORD **)v17;
                    *(_QWORD *)&String.Length = 1572864LL;
                    String.Buffer = (wchar_t *)&ObjectAttributes;
                    if ( v18 )
                    {
                      v19 = *v18 - *(_QWORD *)&DestinationString_8.Length;
                      if ( *v18 == *(_QWORD *)&DestinationString_8.Length )
                        v19 = v18[1] - (unsigned __int64)DestinationString_8.Buffer;
                      if ( !v19 )
                      {
                        v20 = v15++;
                        if ( RtlIntegerToUnicodeString(v20, 0xAu, &String) >= 0 )
                        {
                          ZwSetValueKey(
                            Handle,
                            &String,
                            0,
                            3u,
                            (PVOID)(*(_QWORD *)v17 + *(unsigned int *)(*(_QWORD *)v17 + 40LL)),
                            *(_DWORD *)(*(_QWORD *)v17 + 36LL));
                          *(_QWORD *)v17 = 0LL;
                        }
                      }
                    }
                    v17 += 8;
                    --v16;
                  }
                  while ( v16 );
                  ZwClose(Handle);
                }
              }
            }
            ++v11;
            ++v12;
          }
          while ( v11 < v2 );
        }
        else
        {
          DestinationString = 0LL;
        }
      }
      if ( KeyHandle )
        ZwClose(KeyHandle);
      goto LABEL_40;
    }
  }
}
