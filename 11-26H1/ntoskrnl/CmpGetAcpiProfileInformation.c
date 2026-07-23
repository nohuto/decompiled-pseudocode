/*
 * XREFs of CmpGetAcpiProfileInformation @ 0x140859190
 * Callers:
 *     CmSetAcpiHwProfile @ 0x140857958 (CmSetAcpiHwProfile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x140728280 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ZwEnumerateKey @ 0x140728600 (ZwEnumerateKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlUnicodeStringToInteger @ 0x140975540 (RtlUnicodeStringToInteger.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpGetAcpiProfileInformation(
        void *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *KeyValueInformation)
{
  ULONG v5; // esi
  NTSTATUS v9; // ebx
  _DWORD *Pool2; // rax
  ULONG v11; // r14d
  ULONG v12; // esi
  void *v13; // rax
  unsigned int v14; // ecx
  size_t v15; // r8
  char *p_Src; // rdx
  ULONG v17; // ebx
  _DWORD *v18; // r9
  unsigned int i; // eax
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int128 v24; // xmm1
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // edx
  void *v28; // rcx
  _DWORD *v29; // rcx
  unsigned int v30; // edi
  void *v31; // rcx
  _DWORD *v32; // rcx
  unsigned int v33; // edi
  void *v34; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-B9h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-B1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-A9h] BYREF
  HANDLE v39; // [rsp+50h] [rbp-99h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-91h] BYREF
  __int128 v41; // [rsp+60h] [rbp-89h]
  ULONG Value[4]; // [rsp+70h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-69h] BYREF
  __int128 Src; // [rsp+B0h] [rbp-39h] BYREF
  __int128 KeyInformation; // [rsp+C0h] [rbp-29h] BYREF
  __int128 v46; // [rsp+D0h] [rbp-19h]
  __int128 v47; // [rsp+E0h] [rbp-9h]

  v5 = 0;
  *a2 = 0LL;
  v39 = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  ResultLength = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  *(_QWORD *)a3 = 0LL;
  KeyInformation = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Hardware Profiles");
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v9 >= 0 )
  {
    v9 = ZwQueryKey(KeyHandle, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
    if ( v9 >= 0 )
    {
      ResultLength = 32 * (DWORD1(v46) - 1) + 40;
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
      *a2 = (__int64)Pool2;
      if ( Pool2 )
      {
        v11 = 0;
        *Pool2 = DWORD1(v46);
        *(_DWORD *)(*a2 + 4) = 0;
        while ( v11 < DWORD1(v46) )
        {
          DWORD1(v41) = 0;
          *(_QWORD *)Value = 0LL;
          if ( ZwEnumerateKey(KeyHandle, v11, KeyBasicInformation, KeyValueInformation, 0xFEu, &ResultLength) < 0 )
            break;
          KeyValueInformation[((unsigned __int64)*((unsigned int *)KeyValueInformation + 3) >> 1) + 8] = 0;
          DestinationString.Length = KeyValueInformation[6];
          DestinationString.MaximumLength = DestinationString.Length + 2;
          DestinationString.Buffer = KeyValueInformation + 8;
          ObjectAttributes.RootDirectory = KeyHandle;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) < 0 )
            break;
          RtlUnicodeStringToInteger(&DestinationString, 0, &Value[1]);
          RtlInitUnicodeString(&DestinationString, L"PreferenceOrder");
          if ( ZwQueryValueKey(
                 Handle,
                 &DestinationString,
                 KeyValueFullInformation,
                 KeyValueInformation,
                 0x100u,
                 &ResultLength) >= 0
            && *((_DWORD *)KeyValueInformation + 1) == 4 )
          {
            v12 = *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2));
          }
          else
          {
            v12 = -1;
          }
          Value[0] = v12;
          RtlInitUnicodeString(&DestinationString, L"FriendlyName");
          if ( ZwQueryValueKey(
                 Handle,
                 &DestinationString,
                 KeyValueFullInformation,
                 KeyValueInformation,
                 0x100u,
                 &ResultLength) >= 0
            && *((_DWORD *)KeyValueInformation + 1) == 1 )
          {
            v13 = (void *)ExAllocatePool2(0x100uLL);
            v14 = *((_DWORD *)KeyValueInformation + 3);
            LODWORD(v41) = v14;
            *((_QWORD *)&v41 + 1) = v13;
            if ( !v13 )
              goto LABEL_37;
            v15 = v14;
            p_Src = (char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2);
          }
          else
          {
            Src = *(_OWORD *)L"-------";
            v13 = (void *)ExAllocatePool2(0x100uLL);
            LODWORD(v41) = 16;
            *((_QWORD *)&v41 + 1) = v13;
            if ( !v13 )
            {
LABEL_37:
              v9 = -1073741670;
LABEL_60:
              ZwClose(Handle);
              goto LABEL_61;
            }
            v15 = *((unsigned int *)KeyValueInformation + 3);
            p_Src = (char *)&Src;
          }
          memmove(v13, p_Src, v15);
          v17 = 0;
          Value[2] = 0;
          RtlInitUnicodeString(&DestinationString, L"Aliasable");
          if ( ZwQueryValueKey(
                 Handle,
                 &DestinationString,
                 KeyValueFullInformation,
                 KeyValueInformation,
                 0x100u,
                 &ResultLength) < 0
            || *((_DWORD *)KeyValueInformation + 1) != 4
            || *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2)) )
          {
            v17 = 1;
            Value[2] = 1;
          }
          RtlInitUnicodeString(&DestinationString, L"Pristine");
          if ( ZwQueryValueKey(
                 Handle,
                 &DestinationString,
                 KeyValueFullInformation,
                 KeyValueInformation,
                 0x100u,
                 &ResultLength) >= 0
            && *((_DWORD *)KeyValueInformation + 1) == 4 )
          {
            if ( *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2)) )
              v17 = 4;
            Value[2] = v17;
          }
          if ( !Value[1] )
          {
            v12 = -1;
            Value[2] = 4;
            Value[0] = -1;
          }
          v18 = (_DWORD *)*a2;
          for ( i = 0; ; ++i )
          {
            v20 = i;
            if ( i >= *(_DWORD *)(*a2 + 4) )
              break;
            v21 = 8LL * i;
            if ( v18[v21 + 6] >= v12 )
            {
              memmove(&v18[8 * i + 10], &v18[v21 + 2], 32LL * (*v18 + ~i));
              break;
            }
          }
          v22 = *a2;
          v23 = 32 * v20;
          v24 = *(_OWORD *)Value;
          *(_OWORD *)(v23 + v22 + 8) = v41;
          *(_OWORD *)(v23 + v22 + 24) = v24;
          ++*(_DWORD *)(*a2 + 4);
          ZwClose(Handle);
          ++v11;
          v5 = 0;
        }
        RtlInitUnicodeString(&DestinationString, L"AcpiAlias");
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = a1;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&v39, 0x20019u, &ObjectAttributes) < 0 )
        {
          v9 = 0;
          v39 = 0LL;
          goto LABEL_63;
        }
        v9 = ZwQueryKey(v39, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
        if ( v9 >= 0 )
        {
          v25 = ExAllocatePool2(0x100uLL);
          *(_QWORD *)a3 = v25;
          if ( !v25 )
            goto LABEL_5;
          *(_DWORD *)(v25 + 4) = DWORD1(v46);
          **(_DWORD **)a3 = DWORD1(v46);
          while ( v5 < DWORD1(v46) )
          {
            v9 = ZwEnumerateKey(v39, v5, KeyBasicInformation, KeyValueInformation, 0xFEu, &ResultLength);
            if ( v9 < 0 )
              break;
            KeyValueInformation[((unsigned __int64)*((unsigned int *)KeyValueInformation + 3) >> 1) + 8] = 0;
            DestinationString.Length = KeyValueInformation[6];
            DestinationString.MaximumLength = DestinationString.Length + 2;
            DestinationString.Buffer = KeyValueInformation + 8;
            ObjectAttributes.RootDirectory = v39;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v9 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
            if ( v9 < 0 )
              break;
            RtlInitUnicodeString(&DestinationString, L"ProfileNumber");
            if ( ZwQueryValueKey(
                   Handle,
                   &DestinationString,
                   KeyValueFullInformation,
                   KeyValueInformation,
                   0x100u,
                   &ResultLength) < 0
              || *((_DWORD *)KeyValueInformation + 1) != 4
              || (*(_DWORD *)(*(_QWORD *)a3 + 24LL * v5 + 8) = *(_DWORD *)((char *)KeyValueInformation
                                                                         + *((unsigned int *)KeyValueInformation + 2)),
                  RtlInitUnicodeString(&DestinationString, L"DockingState"),
                  ZwQueryValueKey(
                    Handle,
                    &DestinationString,
                    KeyValueFullInformation,
                    KeyValueInformation,
                    0x100u,
                    &ResultLength) < 0)
              || *((_DWORD *)KeyValueInformation + 1) != 4
              || (*(_DWORD *)(*(_QWORD *)a3 + 24LL * v5 + 12) = *(_DWORD *)((char *)KeyValueInformation
                                                                          + *((unsigned int *)KeyValueInformation + 2)),
                  RtlInitUnicodeString(&DestinationString, L"AcpiSerialNumber"),
                  v9 = ZwQueryValueKey(
                         Handle,
                         &DestinationString,
                         KeyValueFullInformation,
                         KeyValueInformation,
                         0x100u,
                         &ResultLength),
                  v9 < 0)
              || *((_DWORD *)KeyValueInformation + 1) != 3 )
            {
              v9 = -1073741492;
              goto LABEL_60;
            }
            *(_DWORD *)(*(_QWORD *)a3 + 24LL * v5 + 16) = *((_DWORD *)KeyValueInformation + 3);
            if ( *((_DWORD *)KeyValueInformation + 3) )
              v26 = ExAllocatePool2(0x100uLL);
            else
              v26 = 0LL;
            *(_QWORD *)(*(_QWORD *)a3 + 24LL * v5 + 24) = v26;
            v27 = *((_DWORD *)KeyValueInformation + 3);
            if ( v27 )
            {
              v28 = *(void **)(*(_QWORD *)a3 + 24LL * v5 + 24);
              if ( !v28 )
                goto LABEL_37;
              memmove(v28, (char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2), v27);
            }
            ZwClose(Handle);
            ++v5;
          }
        }
      }
      else
      {
LABEL_5:
        v9 = -1073741670;
      }
    }
  }
  else
  {
    KeyHandle = 0LL;
  }
LABEL_61:
  if ( v39 )
    ZwClose(v39);
LABEL_63:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v9 < 0 )
  {
    v29 = (_DWORD *)*a2;
    if ( *a2 )
    {
      v30 = 0;
      if ( v29[1] )
      {
        do
        {
          v31 = *(void **)&v29[8 * v30 + 4];
          if ( v31 )
            ExFreePoolWithTag(v31, 0);
          v29 = (_DWORD *)*a2;
          ++v30;
        }
        while ( v30 < *(_DWORD *)(*a2 + 4) );
      }
      ExFreePoolWithTag(v29, 0);
      *a2 = 0LL;
    }
    v32 = *(_DWORD **)a3;
    if ( *(_QWORD *)a3 )
    {
      v33 = 0;
      if ( v32[1] )
      {
        do
        {
          v34 = *(void **)&v32[6 * v33 + 6];
          if ( v34 )
            ExFreePoolWithTag(v34, 0);
          v32 = *(_DWORD **)a3;
          ++v33;
        }
        while ( v33 < *(_DWORD *)(*(_QWORD *)a3 + 4LL) );
      }
      ExFreePoolWithTag(v32, 0);
      *(_QWORD *)a3 = 0LL;
    }
  }
  return (unsigned int)v9;
}
