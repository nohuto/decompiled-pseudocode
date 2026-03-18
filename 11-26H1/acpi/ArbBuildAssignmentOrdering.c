/*
 * XREFs of ArbBuildAssignmentOrdering @ 0x1400D17D0
 * Callers:
 *     ArbInitializeArbiterInstance @ 0x1400AA02C (ArbInitializeArbiterInstance.c)
 * Callees:
 *     ZwClose_0 @ 0x140055D67 (ZwClose_0.c)
 *     ZwCreateKey_0 @ 0x140055DC1 (ZwCreateKey_0.c)
 *     ZwOpenKey_0 @ 0x140055DE5 (ZwOpenKey_0.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     ArbpGetRegistryValue @ 0x1400A840C (ArbpGetRegistryValue.c)
 *     ArbInitializeOrderingList @ 0x1400A91FC (ArbInitializeOrderingList.c)
 *     ArbFreeOrderingList @ 0x1400A998C (ArbFreeOrderingList.c)
 *     ArbAddOrdering @ 0x1400A99F4 (ArbAddOrdering.c)
 *     ArbPruneOrdering @ 0x1400BF36C (ArbPruneOrdering.c)
 */

__int64 __fastcall ArbBuildAssignmentOrdering(__int64 a1)
{
  unsigned int v1; // ebx
  _DWORD *v2; // rsi
  int v4; // edi
  int RegistryValue; // eax
  const WCHAR *v6; // rdx
  unsigned __int64 v7; // rax
  void *v8; // rcx
  void *v9; // rcx
  char *v11; // r13
  char *i; // r15
  int v13; // edx
  __int64 v14; // rax
  int v15; // eax
  const WCHAR *v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // r13
  unsigned __int64 j; // r15
  int v20; // edx
  __int64 v21; // rax
  PVOID P; // [rsp+48h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-61h] BYREF
  void *KeyHandle; // [rsp+58h] [rbp-59h] BYREF
  __int128 v25; // [rsp+60h] [rbp-51h] BYREF
  unsigned __int64 v26; // [rsp+70h] [rbp-41h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp-39h] BYREF
  __int64 v28; // [rsp+80h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-29h] BYREF
  __int128 v30; // [rsp+B8h] [rbp+7h] BYREF
  __int128 v31; // [rsp+C8h] [rbp+17h]

  v1 = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  v2 = 0LL;
  v25 = 0LL;
  P = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v30 = 0LL;
  v31 = 0LL;
  KeEnterCriticalRegion();
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  ArbFreeOrderingList(a1 + 56);
  ArbFreeOrderingList(a1 + 72);
  v4 = ArbInitializeOrderingList(a1 + 56);
  if ( v4 < 0 )
    goto LABEL_10;
  v4 = ArbInitializeOrderingList(a1 + 72);
  if ( v4 < 0 )
    goto LABEL_10;
  LODWORD(v25) = 7733366;
  *((_QWORD *)&v25 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v25;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey_0(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v4 < 0 )
    goto LABEL_10;
  LODWORD(v25) = 1966110;
  *((_QWORD *)&v25 + 1) = L"AllocationOrder";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v25;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey_0(&Handle, 0x20019u, &ObjectAttributes);
  if ( v4 < 0 )
    goto LABEL_10;
  RegistryValue = ArbpGetRegistryValue(Handle, L"Root", &P);
  v2 = P;
  v4 = RegistryValue;
  if ( RegistryValue < 0 || !P )
    goto LABEL_10;
  if ( *((_DWORD *)P + 1) == 1 )
  {
    v6 = (const WCHAR *)((char *)P + *((unsigned int *)P + 2));
    v7 = (unsigned __int64)*((unsigned int *)P + 3) >> 1;
    P = 0LL;
    if ( v6[v7 - 1] )
    {
LABEL_9:
      v4 = -1073741811;
LABEL_10:
      if ( KeyHandle )
        ZwClose_0(KeyHandle);
      if ( Handle )
        ZwClose_0(Handle);
      if ( v2 )
        ExFreePoolWithTag(v2, 0);
      v8 = *(void **)(a1 + 64);
      if ( v8 )
      {
        ExFreePoolWithTag(v8, 0);
        *(_DWORD *)(a1 + 56) = 0;
      }
      v9 = *(void **)(a1 + 80);
      if ( v9 )
      {
        ExFreePoolWithTag(v9, 0);
        *(_WORD *)(a1 + 72) = 0;
        *(_WORD *)(a1 + 74) = 0;
      }
      v1 = v4;
      goto LABEL_21;
    }
    v4 = ArbpGetRegistryValue(Handle, v6, &P);
    if ( v4 < 0 )
      goto LABEL_10;
    ExFreePoolWithTag(v2, 0);
    v2 = P;
  }
  ZwClose_0(Handle);
  Handle = 0LL;
  if ( v2[1] != 10 )
    goto LABEL_9;
  v11 = (char *)v2 + (unsigned int)v2[2] + 32;
  for ( i = v11 + 8; i < &v11[32 * *((unsigned int *)v11 + 1) + 8]; i += 32 )
  {
    v13 = *(_DWORD *)(a1 + 32);
    v14 = *(_QWORD *)i >> 8;
    v30 = *(_OWORD *)i;
    v31 = *((_OWORD *)i + 1);
    if ( (unsigned __int8)v14 == v13 || (_BYTE)v14 == 7 && v13 == 3 )
    {
      v4 = (*(__int64 (__fastcall **)(__int128 *, unsigned __int64 *, unsigned __int64 *, __int64 *, __int64 *))(a1 + 120))(
             &v30,
             &v27,
             &v26,
             &v28,
             &v28);
      if ( v4 < 0 )
        goto LABEL_10;
      v4 = ArbAddOrdering((unsigned __int16 *)(a1 + 56), v27, v26);
      if ( v4 < 0 )
        goto LABEL_10;
    }
  }
  ExFreePoolWithTag(v2, 0);
  *((_QWORD *)&v25 + 1) = L"ReservedResources";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v25;
  P = 0LL;
  v2 = 0LL;
  LODWORD(v25) = 2228258;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwCreateKey_0(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v4 < 0 )
    goto LABEL_10;
  v15 = ArbpGetRegistryValue(Handle, L"Root", &P);
  v2 = P;
  v4 = v15;
  if ( v15 < 0 )
    goto LABEL_10;
  if ( *((_DWORD *)P + 1) == 1 )
  {
    v16 = (const WCHAR *)((char *)P + *((unsigned int *)P + 2));
    v17 = (unsigned __int64)*((unsigned int *)P + 3) >> 1;
    P = 0LL;
    if ( v16[v17 - 1] )
      goto LABEL_9;
    v4 = ArbpGetRegistryValue(Handle, v16, &P);
    if ( v4 < 0 )
      goto LABEL_10;
    ExFreePoolWithTag(v2, 0);
    v2 = P;
  }
  ZwClose_0(Handle);
  Handle = 0LL;
  v18 = (__int64)v2 + (unsigned int)v2[2] + 32;
  for ( j = v18 + 8; j < v18 + 32 * (unsigned __int64)*(unsigned int *)(v18 + 4) + 8; j += 32LL )
  {
    v20 = *(_DWORD *)(a1 + 32);
    v21 = *(_QWORD *)j >> 8;
    v30 = *(_OWORD *)j;
    v31 = *(_OWORD *)(j + 16);
    if ( (unsigned __int8)v21 == v20 || (_BYTE)v21 == 7 && v20 == 3 )
    {
      v4 = (*(__int64 (__fastcall **)(__int128 *, unsigned __int64 *, unsigned __int64 *, __int64 *, __int64 *))(a1 + 120))(
             &v30,
             &v27,
             &v26,
             &v28,
             &v28);
      if ( v4 < 0 )
        goto LABEL_10;
      v4 = ArbAddOrdering((unsigned __int16 *)(a1 + 72), v27, v26);
      if ( v4 < 0 )
        goto LABEL_10;
      v4 = ArbPruneOrdering((unsigned __int16 *)(a1 + 56), v27, v26);
      if ( v4 < 0 )
        goto LABEL_10;
    }
  }
  ExFreePoolWithTag(v2, 0);
  ZwClose_0(KeyHandle);
  KeyHandle = 0LL;
LABEL_21:
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  KeLeaveCriticalRegion();
  return v1;
}
