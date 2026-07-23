/*
 * XREFs of NtSetDefaultLocale @ 0x140B10920
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     OpenGlobalizationUserSettingsKey @ 0x1404F05D4 (OpenGlobalizationUserSettingsKey.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x140729BA0 (ZwDeleteValueKey.c)
 *     ExCheckFullProcessInformationAccess @ 0x1409D42F8 (ExCheckFullProcessInformationAccess.c)
 *     RtlIsMultiSessionSku @ 0x140A968C0 (RtlIsMultiSessionSku.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtSetDefaultLocale(BOOLEAN UserProfile, LCID DefaultLocaleId)
{
  int v2; // edi
  NTSTATUS result; // eax
  ULONG v5; // ebx
  const WCHAR *v6; // r15
  const WCHAR *v7; // rdx
  int v8; // ebx
  int *v9; // rdx
  unsigned int i; // r9d
  int v11; // ecx
  unsigned int v12; // eax
  _KPROCESS *Process; // rax
  unsigned __int64 CycleTime; // rcx
  unsigned int v15; // r9d
  _WORD *v16; // r8
  _WORD *v17; // rdx
  unsigned int v18; // ecx
  __int16 v19; // ax
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  ULONG ResultLength[2]; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v24; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  _WORD KeyValueInformation[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v27; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v28; // [rsp+B0h] [rbp-58h]
  int v29; // [rsp+B4h] [rbp-54h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v2 = DefaultLocaleId;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  ResultLength[0] = 0;
  v24 = 0LL;
  DestinationString_8 = 0LL;
  if ( UserProfile )
  {
    result = OpenGlobalizationUserSettingsKey(UserProfile, *(__int64 *)&DefaultLocaleId, &DestinationString);
    if ( result < 0 )
      return result;
    v5 = 1600;
    v6 = L"Control Panel\\International";
    v7 = L"Locale";
  }
  else
  {
    result = ExCheckFullProcessInformationAccess(KeGetCurrentThread()->PreviousMode);
    if ( result < 0 )
      return result;
    v5 = 576;
    v6 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Language";
    v7 = L"Default";
  }
  RtlInitUnicodeString(&DestinationString_8, v7);
  RtlInitUnicodeString(&v24, v6);
  ObjectAttributes.RootDirectory = DestinationString;
  ObjectAttributes.ObjectName = &v24;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = v5;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( v2 )
  {
    if ( !UserProfile || RtlIsMultiSessionSku() )
    {
      v8 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
      if ( v8 < 0 )
        goto LABEL_14;
      v15 = v2;
      v16 = (_WORD *)((char *)&v27 + (UserProfile != 0 ? 8 : 0) + 2);
      *(_WORD *)((char *)&v28 + (UserProfile != 0 ? 8 : 0)) = 0;
      if ( v16 >= KeyValueInformation )
      {
        do
        {
          v17 = v16 - 1;
          v18 = v15 & 0xF;
          v19 = 48;
          if ( v18 > 9 )
            v19 = 55;
          v15 >>= 4;
          *v16-- = v18 + v19;
        }
        while ( v17 >= KeyValueInformation );
      }
      v8 = ZwSetValueKey(KeyHandle, &DestinationString_8, 0, 1u, KeyValueInformation, UserProfile != 0 ? 18 : 10);
    }
    else
    {
      v8 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
      if ( v8 < 0 )
        goto LABEL_14;
      ZwDeleteValueKey(KeyHandle, &DestinationString_8);
    }
    goto LABEL_13;
  }
  v8 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
  if ( v8 >= 0 )
  {
    v8 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString_8,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x100u,
           ResultLength);
    if ( v8 >= 0 )
    {
      if ( v27 == 1 )
      {
        v9 = &v29;
        for ( i = 0; i < v28; v2 = v12 | (16 * v2) )
        {
          v11 = *(unsigned __int16 *)v9;
          v9 = (int *)((char *)v9 + 2);
          if ( (unsigned __int16)(v11 - 48) > 9u )
          {
            if ( (unsigned __int16)(v11 - 65) > 5u )
            {
              if ( (unsigned __int16)(v11 - 97) > 5u )
                break;
              v12 = v11 - 87;
            }
            else
            {
              v12 = v11 - 55;
            }
          }
          else
          {
            v12 = v11 - 48;
          }
          if ( v12 >= 0x10 )
            break;
          i += 2;
        }
      }
      else if ( v27 == 4 && v28 == 4 )
      {
        v2 = v29;
      }
      else
      {
        v8 = -1073741823;
      }
    }
LABEL_13:
    ZwClose(KeyHandle);
  }
LABEL_14:
  if ( DestinationString )
    ZwClose(DestinationString);
  if ( v8 >= 0 )
  {
    if ( UserProfile )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      CycleTime = Process[1].CycleTime;
      if ( !CycleTime || (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
        HIDWORD(PspSiloMonitorLock.Timer.Header.WaitListHead.Flink) = v2;
      else
        *(_DWORD *)(CycleTime + 48) = v2;
    }
    else
    {
      PsDefaultSystemLocaleId = v2;
    }
  }
  return v8;
}
