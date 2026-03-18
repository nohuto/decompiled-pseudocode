/*
 * XREFs of ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1400EF4D8
 * Callers:
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z @ 0x1400EED24 (-IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z.c)
 *     IsMouseDeviceOnIgnoreList @ 0x1400EF3E4 (IsMouseDeviceOnIgnoreList.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?CompareDeviceVIDPID@@YAHU_UNICODE_STRING@@PEAU_KEY_VALUE_FULL_INFORMATION@@K@Z @ 0x1400EF8C0 (-CompareDeviceVIDPID@@YAHU_UNICODE_STRING@@PEAU_KEY_VALUE_FULL_INFORMATION@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

_BOOL8 __fastcall IsDeviceOnRegistryList(struct _UNICODE_STRING *a1, struct _UNICODE_STRING *a2, int a3)
{
  BOOL v5; // r14d
  ULONG v6; // ebx
  NTSTATUS v7; // r15d
  int v8; // edx
  int v9; // r8d
  struct _KEY_VALUE_FULL_INFORMATION *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r12d
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  bool v20; // r12
  ULONG NameLength; // ebx
  __int64 v22; // rax
  int v23; // edx
  int v24; // r8d
  char v25; // bl
  bool v26; // si
  __int64 UserSessionState; // rax
  int v28; // r8d
  int v29; // edx
  ULONG Length; // [rsp+50h] [rbp-39h] BYREF
  ULONG v31; // [rsp+54h] [rbp-35h]
  unsigned int v32; // [rsp+58h] [rbp-31h]
  void *KeyHandle; // [rsp+60h] [rbp-29h] BYREF
  struct _UNICODE_STRING v34; // [rsp+70h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  bool v36; // [rsp+F0h] [rbp+67h]
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
          v31 = v6;
          if ( v7 == -2147483622 || v5 )
            break;
          v7 = ZwEnumerateValueKey(KeyHandle, v6, KeyValueFullInformation, 0LL, 0, &Length);
          if ( v7 != -1073741789 )
          {
            if ( v7 != -2147483622 )
            {
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
              {
                v25 = 0;
              }
              v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v8, v9);
                LOBYTE(v28) = v26;
                LOBYTE(v29) = v25;
                WPP_RECORDER_AND_TRACE_SF_D(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v29,
                  v28,
                  *(_QWORD *)(UserSessionState + 19368),
                  3,
                  1,
                  17,
                  (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids,
                  v7);
              }
            }
            break;
          }
          v10 = (struct _KEY_VALUE_FULL_INFORMATION *)Win32AllocPoolZInitImpl(256LL, Length, 0x78657355u);
          if ( v10 )
          {
            v7 = ZwEnumerateValueKey(KeyHandle, v6, KeyValueFullInformation, v10, Length, &Length);
            if ( v7 >= 0 )
            {
              v14 = *((unsigned __int8 *)&v10->TitleIndex + v10->DataOffset);
              v32 = v14;
              if ( v14 - 1 <= 1
                && v10->Type == 4
                && v10->NameLength >= 0x2A
                && RtlCompareMemory(v10->Name, L"HID", 6uLL) == 6 )
              {
                v34 = *a2;
                v5 = CompareDeviceVIDPID(&v34, v10, v14) != 0;
              }
              else
              {
                v20 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
                   && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
                   && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
                v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  NameLength = v10->NameLength;
                  v22 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, v12);
                  LOBYTE(v23) = v20;
                  LOBYTE(v24) = v36;
                  WPP_RECORDER_AND_TRACE_SF_Dd(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v23,
                    v24,
                    *(_QWORD *)(v22 + 19368),
                    4,
                    1,
                    16,
                    (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids,
                    v32,
                    NameLength);
                  v6 = v31;
                }
              }
            }
            GreDeleteFastMutex((char *)v10, v11, v12, v13);
          }
          ++v6;
        }
      }
    }
    else
    {
      v16 = Win32AllocPoolZInitImpl(256LL, ResultLength, 0x78657355u);
      if ( v16 )
      {
        if ( ZwQueryValueKey(KeyHandle, a2, KeyValuePartialInformation, (PVOID)v16, ResultLength, &ResultLength) >= 0
          && *(_DWORD *)(v16 + 4) == 4 )
        {
          v5 = (unsigned __int8)(*(_BYTE *)(v16 + 12) - 1) <= 2u;
        }
        GreDeleteFastMutex((char *)v16, v17, v18, v19);
      }
    }
    ZwClose(KeyHandle);
  }
  return v5;
}
