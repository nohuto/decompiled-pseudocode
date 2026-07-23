/*
 * XREFs of BapdpMarshallBootDataToRegistry @ 0x1406CE6E8
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140C85BB0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     RtlIntegerToUnicodeString @ 0x14097BC70 (RtlIntegerToUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x1409FA570 (RtlStringFromGUIDEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void BapdpMarshallBootDataToRegistry()
{
  struct _KTHREAD *Flink; // rbx
  struct _KTHREAD *v1; // rax
  unsigned int v2; // edi
  struct _LIST_ENTRY *Blink; // rdx
  unsigned int v4; // ecx
  __int64 v5; // rcx
  unsigned int v6; // r14d
  _QWORD *Pool2; // rsi
  struct _LIST_ENTRY *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ebx
  GUID **v12; // r15
  GUID *v13; // rax
  GUID v14; // xmm0
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
  UNICODE_STRING GuidString; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING String; // [rsp+88h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-70h] BYREF
  char v29; // [rsp+C8h] [rbp-40h] BYREF

  Flink = (struct _KTHREAD *)stru_140E62450.Header.WaitListHead.Flink;
  Handle = (HANDLE)0x43F585FA729AF26ELL;
  v1 = (struct _KTHREAD *)stru_140E62450.Header.WaitListHead.Flink;
  v2 = 0;
  v22 = 0x55C1EB7445F20CB8LL;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  if ( stru_140E62450.Header.WaitListHead.Flink )
  {
    do
    {
      if ( v1 == (struct _KTHREAD *)&stru_140E62450.Header.WaitListHead )
        break;
      Blink = v1->Header.WaitListHead.Blink;
      v1 = *(struct _KTHREAD **)&v1->Header.Lock;
      v4 = (unsigned int)Blink[2].Flink;
      if ( v4 && v4 <= 2 )
      {
        v5 = (char *)Blink[1].Flink - (char *)Handle;
        if ( !v5 )
          v5 = (__int64)Blink[1].Blink - v22;
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
        while ( Flink != (struct _KTHREAD *)&stru_140E62450.Header.WaitListHead )
        {
          v8 = Flink->Header.WaitListHead.Blink;
          Flink = *(struct _KTHREAD **)&Flink->Header.Lock;
          if ( (unsigned int)(LODWORD(v8[2].Flink) - 1) <= 1 )
          {
            v9 = (char *)v8[1].Flink - (char *)Handle;
            if ( !v9 )
              v9 = (__int64)v8[1].Blink - v22;
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
          v12 = (GUID **)Pool2;
          do
          {
            v13 = *v12;
            Handle = 0LL;
            if ( v13 )
            {
              v14 = *v13;
              *(_QWORD *)&GuidString.Length = 5111808LL;
              DestinationString_8 = (UNICODE_STRING)v14;
              GuidString.Buffer = (wchar_t *)&v29;
              memset(&ObjectAttributes, 0, 44);
              if ( RtlStringFromGUIDEx((PGUID)&DestinationString_8, &GuidString, 0) >= 0 )
              {
                ObjectAttributes.RootDirectory = DestinationString;
                ObjectAttributes.ObjectName = &GuidString;
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
