/*
 * XREFs of VrpPostEnumerateKey @ 0x140938960
 * Callers:
 *     VrpRegistryCallback @ 0x140935A40 (VrpRegistryCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x140460340 (EtwActivityIdControl.c)
 *     ExGetPreviousMode @ 0x140469E00 (ExGetPreviousMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x140728280 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x140728600 (ZwEnumerateKey.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     VrpUnlockJobContextShared @ 0x14093891C (VrpUnlockJobContextShared.c)
 *     VrpInputBufferParameter @ 0x14093948C (VrpInputBufferParameter.c)
 *     VrpOutputBufferParameter @ 0x1409394B8 (VrpOutputBufferParameter.c)
 *     VrpUpdateKeyInformation @ 0x1409394EC (VrpUpdateKeyInformation.c)
 *     VrpBuildKeyPath @ 0x1409396A0 (VrpBuildKeyPath.c)
 *     VrpFindExactNamespaceNode @ 0x14093979C (VrpFindExactNamespaceNode.c)
 *     VrpLockJobContextShared @ 0x140939A38 (VrpLockJobContextShared.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpPostEnumerateKey(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  KPROCESSOR_MODE AccessMode; // r12
  NTSTATUS v6; // edi
  void *Pool2; // rcx
  __int64 v8; // rcx
  void *v9; // rax
  int v10; // eax
  unsigned __int16 *v11; // rcx
  bool v12; // cc
  int v13; // eax
  unsigned __int16 *v14; // r14
  int v15; // eax
  wchar_t *v16; // rax
  __int64 ExactNamespaceNode; // rax
  const UNICODE_STRING *v18; // r13
  __int64 *v19; // r14
  unsigned __int16 *v21; // rax
  __int64 *v22; // rcx
  void *v23; // rcx
  void *v24; // r14
  NTSTATUS Key; // eax
  __int64 v26; // rcx
  unsigned int *v27; // r12
  int updated; // eax
  size_t v29; // r8
  void *v30; // rcx
  int v31; // eax
  const wchar_t *v32; // rcx
  unsigned __int16 v33; // ax
  KPROCESSOR_MODE v34; // [rsp+40h] [rbp-198h]
  const UNICODE_STRING *v35; // [rsp+48h] [rbp-190h]
  int v37; // [rsp+58h] [rbp-180h] BYREF
  int v38; // [rsp+5Ch] [rbp-17Ch] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp-178h] BYREF
  PVOID v40; // [rsp+68h] [rbp-170h] BYREF
  PVOID v41; // [rsp+70h] [rbp-168h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-160h] BYREF
  __int64 v43; // [rsp+88h] [rbp-150h]
  HANDLE v44; // [rsp+90h] [rbp-148h] BYREF
  PVOID v45; // [rsp+98h] [rbp-140h]
  PVOID v46; // [rsp+A0h] [rbp-138h]
  UNICODE_STRING Source; // [rsp+A8h] [rbp-130h] BYREF
  PVOID P[2]; // [rsp+B8h] [rbp-120h] BYREF
  __int64 v49; // [rsp+C8h] [rbp-110h]
  __int64 v50; // [rsp+D0h] [rbp-108h]
  __int64 v51; // [rsp+D8h] [rbp-100h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E0h] [rbp-F8h] BYREF
  GUID ActivityId; // [rsp+110h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54[2]; // [rsp+120h] [rbp-B8h] BYREF
  int *v55; // [rsp+140h] [rbp-98h]
  __int64 v56; // [rsp+148h] [rbp-90h]
  int *v57; // [rsp+150h] [rbp-88h]
  __int64 v58; // [rsp+158h] [rbp-80h]
  __int64 v59; // [rsp+160h] [rbp-78h]
  int v60; // [rsp+168h] [rbp-70h] BYREF
  int v61; // [rsp+16Ch] [rbp-6Ch]
  _DWORD *v62; // [rsp+170h] [rbp-68h]
  __int64 v63; // [rsp+178h] [rbp-60h]
  const wchar_t *v64; // [rsp+180h] [rbp-58h]
  _DWORD v65[2]; // [rsp+188h] [rbp-50h] BYREF
  int *v66; // [rsp+190h] [rbp-48h]
  __int64 v67; // [rsp+198h] [rbp-40h]

  v43 = a1;
  v50 = a2;
  *(_OWORD *)P = 0LL;
  Source = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v46 = 0LL;
  v37 = 0;
  v3 = *(_QWORD *)(a1 + 40);
  v35 = (const UNICODE_STRING *)v3;
  v49 = v3;
  KeyHandle = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v51 = v4;
  v40 = 0LL;
  v45 = 0LL;
  AccessMode = ExGetPreviousMode();
  v34 = AccessMode;
  ResultLength = 0;
  v41 = 0LL;
  v6 = *(_DWORD *)(a1 + 8);
  v44 = 0LL;
  if ( (unsigned int)dword_140E0A5C0 > 5 )
  {
    v38 = *(_DWORD *)(v4 + 12);
    v55 = &v38;
    v56 = 4LL;
    v22 = (__int64 *)(v3 + 16);
    if ( !*(_QWORD *)(v3 + 24) )
      v22 = &EmptyUnicodeString;
    v57 = &v60;
    v58 = 2LL;
    v59 = v22[1];
    v60 = *(unsigned __int16 *)v22;
    v61 = 0;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E0A5C0,
      (unsigned __int8 *)&byte_14005B847,
      &ActivityId,
      0LL,
      5u,
      v54);
  }
  if ( v6 < 0 && v6 != -1073741789 && v6 != -2147483643 )
    goto LABEL_29;
  Pool2 = 0LL;
  v6 = 0;
  if ( AccessMode == 1 )
  {
    if ( *(_DWORD *)(v4 + 24) && (Pool2 = (void *)ExAllocatePool2(0x100uLL)) == 0LL )
      v6 = -1073741670;
    else
      v40 = Pool2;
  }
  else
  {
    v40 = *(PVOID *)(v4 + 16);
  }
  if ( v6 < 0 )
    goto LABEL_29;
  LOBYTE(Pool2) = AccessMode;
  v6 = VrpInputBufferParameter(Pool2, *(_QWORD *)(v4 + 16), *(unsigned int *)(v4 + 24), &v40);
  if ( v6 < 0 )
    goto LABEL_29;
  v9 = *(void **)(v4 + 32);
  v6 = 0;
  if ( AccessMode == 1 && (v9 = (void *)ExAllocatePool2(0x100uLL)) == 0LL )
    v6 = -1073741670;
  else
    v41 = v9;
  if ( v6 < 0 )
    goto LABEL_29;
  LOBYTE(v8) = AccessMode;
  v6 = VrpInputBufferParameter(v8, *(_QWORD *)(v4 + 32), 4LL, &v41);
  if ( v6 < 0 )
    goto LABEL_29;
  if ( AccessMode == 1 && *(int *)(v43 + 8) >= 0 )
  {
    v10 = *(_DWORD *)(v4 + 12);
    v11 = (unsigned __int16 *)v40;
    if ( v10 )
    {
      if ( v10 != 1 )
        goto LABEL_19;
      v12 = *((_DWORD *)v40 + 5) <= (unsigned int)(*(_DWORD *)(v4 + 24) - 24);
    }
    else
    {
      v12 = *((_DWORD *)v40 + 3) <= (unsigned int)(*(_DWORD *)(v4 + 24) - 16);
    }
    if ( !v12 )
    {
LABEL_29:
      v18 = v35;
      v19 = &EmptyUnicodeString;
      goto LABEL_30;
    }
  }
  else
  {
    v11 = (unsigned __int16 *)v40;
  }
LABEL_19:
  v13 = *(_DWORD *)(v43 + 8);
  if ( v13 == -1073741789 || v13 == -2147483643 || *(_DWORD *)(v4 + 12) == 2 )
  {
    v6 = ObOpenObjectByPointer(
           *(PVOID *)v4,
           0x240u,
           0LL,
           0xF003Fu,
           (POBJECT_TYPE)CmKeyObjectType,
           AccessMode,
           &KeyHandle);
    if ( v6 < 0 )
      goto LABEL_29;
    v6 = ZwEnumerateKey(KeyHandle, *(_DWORD *)(v4 + 8), KeyBasicInformation, 0LL, 0, &ResultLength);
    if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741789 )
      goto LABEL_28;
    v21 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
    v14 = v21;
    if ( !v21 )
      goto LABEL_74;
    v46 = v21;
    v6 = ZwEnumerateKey(KeyHandle, *(_DWORD *)(v4 + 8), KeyBasicInformation, v21, ResultLength, &ResultLength);
    if ( v6 < 0 )
      goto LABEL_28;
  }
  else
  {
    v14 = v11;
  }
  v15 = *(_DWORD *)(v4 + 12);
  if ( !v15 || v46 )
  {
    Source.MaximumLength = v14[6];
    Source.Length = Source.MaximumLength;
    v16 = v14 + 8;
  }
  else
  {
    if ( v15 != 1 )
    {
      v6 = -1073741811;
      goto LABEL_28;
    }
    Source.MaximumLength = v14[10];
    Source.Length = Source.MaximumLength;
    v16 = v14 + 12;
  }
  Source.Buffer = v16;
  v6 = VrpBuildKeyPath(v35 + 1, &Source, (PUNICODE_STRING)P);
  if ( v6 < 0 )
  {
LABEL_28:
    AccessMode = v34;
    goto LABEL_29;
  }
  VrpLockJobContextShared(a2);
  v37 = 1;
  ExactNamespaceNode = VrpFindExactNamespaceNode(a2, P, 0LL);
  if ( !ExactNamespaceNode )
    goto LABEL_27;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(ExactNamespaceNode + 24);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v44, 0xF003Fu, &ObjectAttributes) < 0 )
    goto LABEL_27;
  VrpUnlockJobContextShared(a2);
  v37 = 0;
  if ( *(_DWORD *)(v4 + 24) )
  {
    v23 = (void *)ExAllocatePool2(0x100uLL);
    v45 = v23;
    if ( !v23 )
    {
LABEL_74:
      v6 = -1073741670;
      goto LABEL_28;
    }
  }
  else
  {
    v23 = 0LL;
  }
  v24 = v23;
  Key = ZwQueryKey(v44, *(KEY_INFORMATION_CLASS *)(v4 + 12), v23, *(_DWORD *)(v4 + 24), (PULONG)v41);
  v6 = Key;
  if ( Key == -1073741789 )
  {
    v24 = 0LL;
    goto LABEL_85;
  }
  if ( ((Key + 0x80000000) & 0x80000000) == 0 && Key != -2147483643 )
  {
LABEL_27:
    v6 = 0;
    goto LABEL_28;
  }
LABEL_85:
  v26 = *(unsigned int *)(v4 + 12);
  v27 = (unsigned int *)v41;
  if ( (_DWORD)v26 != 2 )
  {
    updated = VrpUpdateKeyInformation(v26, (_DWORD)v24, *(_DWORD *)(v4 + 24), (_DWORD)v41, (__int64)P, 0);
    v6 = updated;
    if ( updated < 0 && updated != -2147483643 && updated != -1073741789 )
      goto LABEL_28;
  }
  if ( v6 == -2147483643 || v6 == -1073741789 )
  {
    AccessMode = v34;
  }
  else
  {
    v29 = *v27;
    v30 = *(void **)(v4 + 16);
    AccessMode = v34;
    if ( v34 )
      RtlCopyToUser(v30, v24, v29);
    else
      RtlCopyVolatileMemory(v30, v24, v29);
  }
  LOBYTE(v26) = AccessMode;
  v31 = VrpOutputBufferParameter(v26, *(_QWORD *)(v4 + 32), 4LL, &v41);
  v19 = &EmptyUnicodeString;
  v18 = v35;
  if ( v31 >= 0 )
  {
    *(_DWORD *)(v43 + 24) = v6;
    v6 = -1073740541;
  }
  else
  {
    v6 = v31;
  }
LABEL_30:
  if ( v37 )
    VrpUnlockJobContextShared(a2);
  if ( v6 < 0 && (unsigned int)dword_140E0A5C0 > 2 )
  {
    v38 = *(_DWORD *)(v4 + 12);
    v55 = &v38;
    v56 = 4LL;
    if ( v18[1].Buffer )
      v19 = (__int64 *)&v18[1];
    v57 = &v60;
    v58 = 2LL;
    v59 = v19[1];
    v60 = *(unsigned __int16 *)v19;
    v61 = 0;
    v32 = (const wchar_t *)P[1];
    if ( P[1] )
    {
      v33 = (unsigned __int16)P[0];
    }
    else
    {
      v33 = 0;
      v32 = &cchOriginalDestLength;
    }
    v62 = v65;
    v63 = 2LL;
    v64 = v32;
    v65[0] = v33;
    v65[1] = 0;
    v37 = v6;
    v66 = &v37;
    v67 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E0A5C0,
      (unsigned __int8 *)byte_14005B7C7,
      &ActivityId,
      0LL,
      8u,
      v54);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v44 )
    ZwClose(v44);
  if ( v45 )
    ExFreePoolWithTag(v45, 0x67655256u);
  if ( v46 )
    ExFreePoolWithTag(v46, 0x67655256u);
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x67655256u);
  if ( AccessMode == 1 )
  {
    if ( v40 )
      ExFreePoolWithTag(v40, 0x67655256u);
    if ( v41 )
      ExFreePoolWithTag(v41, 0x67655256u);
  }
  return (unsigned int)v6;
}
