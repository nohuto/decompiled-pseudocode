/*
 * XREFs of PiDevCfgResolveVariable @ 0x140A480A0
 * Callers:
 *     PiDevCfgQueryResolveValue @ 0x1405DDD44 (PiDevCfgQueryResolveValue.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1407AE0F0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x1407AE7A0 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1407AE990 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A47C2C (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A48420 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgCopyDeviceKey @ 0x140A49C64 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140B42E9C (PiDevCfgResolveVariableKeyHandle.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     NLS_UPCASE @ 0x14041C340 (NLS_UPCASE.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PnpValidateRegistryString @ 0x1404E6600 (PnpValidateRegistryString.c)
 *     PnpStringToDwordValue @ 0x1404F4A2C (PnpStringToDwordValue.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     PiDevCfgFreeVariable @ 0x140A429C4 (PiDevCfgFreeVariable.c)
 *     RtlCreateUnicodeString @ 0x140A478B0 (RtlCreateUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariable(__int64 a1, const WCHAR *a2, UNICODE_STRING **a3)
{
  unsigned int v4; // ebx
  unsigned int *v5; // r14
  unsigned int v6; // edi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  wchar_t *Buffer; // rsi
  __int64 Flink; // r15
  int v10; // edx
  int v11; // r11d
  UNICODE_STRING *v12; // r15
  UNICODE_STRING *v13; // rsi
  NTSTATUS v14; // eax
  NTSTATUS RegistryValue; // eax
  const wchar_t *v16; // r12
  unsigned int j; // edi
  __int64 v18; // r12
  unsigned int i; // edi
  const wchar_t **v21; // r12
  const WCHAR *v22; // r13
  int v23; // r15d
  UNICODE_STRING *Pool2; // rdi
  UNICODE_STRING *v25; // rcx
  wchar_t *v26; // rax
  int v27; // eax
  _WORD *v28; // rsi
  __int64 v29; // rax
  wchar_t *v30; // rax
  int *v31; // rax
  __int64 v32; // rcx
  wchar_t *v33; // rax
  HANDLE KeyHandle; // [rsp+28h] [rbp-59h] BYREF
  int v35; // [rsp+30h] [rbp-51h]
  PVOID P[2]; // [rsp+38h] [rbp-49h] BYREF
  void *Src; // [rsp+48h] [rbp-39h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-31h] BYREF
  UNICODE_STRING *v39; // [rsp+60h] [rbp-21h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-19h] BYREF
  int v44; // [rsp+100h] [rbp+7Fh] BYREF

  v4 = 0;
  KeyHandle = 0LL;
  v5 = 0LL;
  P[0] = 0LL;
  DestinationString = 0LL;
  Src = 0LL;
  v35 = 0;
  v44 = 0;
  if ( !*a2 )
    return (unsigned int)-1073741772;
  *a3 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v6 = 0;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  Buffer = DestinationString.Buffer;
  Flink = (__int64)CurrentServerSiloGlobals[75].Flink;
  if ( DestinationString.Length >> 1 )
  {
    do
    {
      v10 = *Buffer++;
      v6 = (unsigned __int16)NLS_UPCASE(Flink, v10) + 65599 * v6;
    }
    while ( v11 != 1 );
  }
  v12 = (UNICODE_STRING *)(*(_QWORD *)(a1 + 24) + 16LL * (v6 % 0x7F));
  v39 = v12;
  v13 = *(UNICODE_STRING **)&v12->Length;
  if ( *(UNICODE_STRING **)&v12->Length == v12 )
    goto LABEL_5;
  do
  {
    Pool2 = v13;
    if ( RtlEqualUnicodeString(&DestinationString, v13 + 1, 1u) )
      break;
    v13 = *(UNICODE_STRING **)&v13->Length;
    Pool2 = 0LL;
  }
  while ( v13 != v12 );
  if ( !Pool2 )
  {
LABEL_5:
    ObjectAttributes.RootDirectory = *(HANDLE *)(a1 + 16);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v14 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    v4 = v14;
    if ( v14 < 0 )
    {
      if ( v14 != -1073741772 )
        goto LABEL_16;
      v4 = 0;
      for ( i = 0; ; ++i )
      {
        if ( i >= 4 )
          goto LABEL_25;
        v21 = (const wchar_t **)&(&off_140BE1C70)[3 * i];
        if ( !wcsicmp(*v21, a2) )
          break;
      }
      if ( !v21 )
      {
LABEL_25:
        v22 = a2;
        if ( !PnpStringToDwordValue((__int64)a2, (unsigned int *)&v44) )
        {
          v4 = -1073741772;
          goto LABEL_16;
        }
        v23 = v44;
        v18 = 0LL;
LABEL_27:
        Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
        {
          v4 = -1073741670;
          goto LABEL_14;
        }
        v25 = v39;
        v26 = v39->Buffer;
        if ( *(UNICODE_STRING **)v26 != v39 )
LABEL_29:
          __fastfail(3u);
        *(_QWORD *)&Pool2->Length = v39;
        Pool2->Buffer = v26;
        *(_QWORD *)v26 = Pool2;
        v25->Buffer = &Pool2->Length;
        if ( RtlCreateUnicodeString(Pool2 + 1, v22) )
        {
          if ( v18 )
          {
            *(_DWORD *)&Pool2[2].Length = -1;
            v27 = guard_dispatch_icall_no_overrides(a1, (__int64)KeyHandle);
            v4 = v27;
            if ( v27 >= 0 )
            {
LABEL_38:
              *a3 = Pool2;
              goto LABEL_14;
            }
            if ( v27 == -1073741772 )
              v4 = -1073741823;
            goto LABEL_57;
          }
          v28 = Src;
          if ( Src )
          {
            *(_DWORD *)&Pool2[2].Length = 1;
            v29 = -1LL;
            do
              ++v29;
            while ( v28[v29] );
            *(_DWORD *)(&Pool2[2].MaximumLength + 1) = 2 * v29 + 2;
            v30 = (wchar_t *)ExAllocatePool2(0x100uLL);
            Pool2[2].Buffer = v30;
            if ( v30 )
            {
              memmove(v30, v28, *(unsigned int *)(&Pool2[2].MaximumLength + 1));
              goto LABEL_38;
            }
          }
          else
          {
            *(_DWORD *)&Pool2[2].Length = 4;
            *(_DWORD *)(&Pool2[2].MaximumLength + 1) = 4;
            v31 = (int *)ExAllocatePool2(0x100uLL);
            Pool2[2].Buffer = (wchar_t *)v31;
            if ( v31 )
            {
              *v31 = v23;
              goto LABEL_38;
            }
          }
        }
        v4 = -1073741670;
LABEL_57:
        v32 = *(_QWORD *)&Pool2->Length;
        if ( *(UNICODE_STRING **)(*(_QWORD *)&Pool2->Length + 8LL) != Pool2 )
          goto LABEL_29;
        v33 = Pool2->Buffer;
        if ( *(UNICODE_STRING **)v33 != Pool2 )
          goto LABEL_29;
        *(_QWORD *)v33 = v32;
        *(_QWORD *)(v32 + 8) = v33;
        PiDevCfgFreeVariable(Pool2);
LABEL_14:
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        goto LABEL_16;
      }
      v18 = 0LL;
      v23 = dword_140BE1C80[6 * i];
      Src = (void *)qword_140BE1C78[3 * i];
    }
    else
    {
      RegistryValue = IopGetRegistryValue(KeyHandle, (const WCHAR *)&dword_140BE88B4, 0, P);
      v5 = (unsigned int *)P[0];
      v4 = RegistryValue;
      if ( RegistryValue < 0 )
        goto LABEL_14;
      if ( !PnpValidateRegistryString((_DWORD *)P[0]) )
      {
        v4 = -1073741823;
        goto LABEL_14;
      }
      v16 = (const wchar_t *)((char *)v5 + v5[2]);
      for ( j = 0; ; ++j )
      {
        if ( j >= 8 )
          goto LABEL_13;
        if ( !wcsicmp((&off_140BE2330)[2 * j], v16) )
          break;
      }
      v18 = (__int64)*(&off_140BE2338 + 2 * j);
      if ( !v18 )
      {
LABEL_13:
        v4 = -1073741772;
        goto LABEL_14;
      }
      v23 = v35;
    }
    v22 = a2;
    goto LABEL_27;
  }
  if ( *(_DWORD *)&Pool2[2].Length != -1 )
    goto LABEL_38;
  v4 = -1073741823;
LABEL_16:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v4;
}
