/*
 * XREFs of ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1400B1E90
 * Callers:
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z @ 0x1400B084C (-IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z.c)
 *     IsMouseDeviceOnIgnoreList @ 0x1400B1DA8 (IsMouseDeviceOnIgnoreList.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?CompareDeviceVIDPID@@YAHU_UNICODE_STRING@@PEAU_KEY_VALUE_FULL_INFORMATION@@K@Z @ 0x1400B2278 (-CompareDeviceVIDPID@@YAHU_UNICODE_STRING@@PEAU_KEY_VALUE_FULL_INFORMATION@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

_BOOL8 __fastcall IsDeviceOnRegistryList(struct _UNICODE_STRING *a1, struct _UNICODE_STRING *a2, int a3)
{
  BOOL v5; // r14d
  ULONG v6; // ebx
  NTSTATUS v7; // r15d
  __int64 v8; // rdx
  struct _KEY_VALUE_FULL_INFORMATION *v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // r12d
  __int64 v13; // rbx
  bool v14; // r12
  ULONG NameLength; // ebx
  __int64 v16; // rax
  int v17; // edx
  int v18; // r8d
  char v19; // bl
  bool v20; // si
  __int64 UserSessionState; // rax
  int v22; // r8d
  int v23; // edx
  ULONG Length; // [rsp+50h] [rbp-39h] BYREF
  ULONG v25; // [rsp+54h] [rbp-35h]
  unsigned int v26; // [rsp+58h] [rbp-31h]
  void *KeyHandle; // [rsp+60h] [rbp-29h] BYREF
  struct _UNICODE_STRING v28; // [rsp+70h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  bool v30; // [rsp+F0h] [rbp+67h]
  ULONG ResultLength; // [rsp+108h] [rbp+7Fh] BYREF

  ObjectAttributes.ObjectName = a1;
  KeyHandle = 0LL;
  ResultLength = 0;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v5 = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, 0LL, 0, &ResultLength) == -1073741772
      || !ResultLength )
    {
      if ( a3 && a2->Length >= 0x2Au )
      {
        v6 = 0;
        Length = 0;
        v7 = 0;
        while ( 1 )
        {
          v25 = v6;
          if ( v7 == -2147483622 || v5 )
            break;
          v7 = ZwEnumerateValueKey(KeyHandle, v6, KeyValueFullInformation, 0LL, 0, &Length);
          if ( v7 != -1073741789 )
          {
            if ( v7 != -2147483622 )
            {
              if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
              {
                v19 = 0;
              }
              v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
                LOBYTE(v22) = v20;
                LOBYTE(v23) = v19;
                WPP_RECORDER_AND_TRACE_SF_D(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v23,
                  v22,
                  *(_QWORD *)(UserSessionState + 19336),
                  3,
                  1,
                  17,
                  (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids,
                  v7);
              }
            }
            break;
          }
          v9 = (struct _KEY_VALUE_FULL_INFORMATION *)Win32AllocPoolZInitImpl(256LL, Length, 0x78657355u);
          if ( v9 )
          {
            v7 = ZwEnumerateValueKey(KeyHandle, v6, KeyValueFullInformation, v9, Length, &Length);
            if ( v7 >= 0 )
            {
              v11 = *((unsigned __int8 *)&v9->TitleIndex + v9->DataOffset);
              v26 = v11;
              if ( v11 - 1 <= 1
                && v9->Type == 4
                && v9->NameLength >= 0x2A
                && RtlCompareMemory(v9->Name, L"HID", 6uLL) == 6 )
              {
                v28 = *a2;
                v5 = CompareDeviceVIDPID(&v28, v9, v11) != 0;
              }
              else
              {
                v14 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                   && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
                   && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
                v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  NameLength = v9->NameLength;
                  v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
                  LOBYTE(v17) = v14;
                  LOBYTE(v18) = v30;
                  WPP_RECORDER_AND_TRACE_SF_Dd(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v17,
                    v18,
                    *(_QWORD *)(v16 + 19336),
                    4,
                    1,
                    16,
                    (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids,
                    v26,
                    NameLength);
                  v6 = v25;
                }
              }
            }
            GreDeleteFastMutex((char *)v9);
          }
          ++v6;
        }
      }
    }
    else
    {
      v13 = Win32AllocPoolZInitImpl(256LL, ResultLength, 0x78657355u);
      if ( v13 )
      {
        if ( ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, (PVOID)v13, ResultLength, &ResultLength) >= 0
          && *(_DWORD *)(v13 + 4) == 4 )
        {
          v5 = (unsigned __int8)(*(_BYTE *)(v13 + 12) - 1) <= 2u;
        }
        GreDeleteFastMutex((char *)v13);
      }
    }
    ZwClose(KeyHandle);
  }
  return v5;
}
