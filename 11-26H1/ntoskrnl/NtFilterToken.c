/*
 * XREFs of NtFilterToken @ 0x1409E32D0
 * Callers:
 *     DifNtFilterTokenWrapper @ 0x14067B590 (DifNtFilterTokenWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     SepFinalizeTokenAcls @ 0x140902AEC (SepFinalizeTokenAcls.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     SeCaptureLuidAndAttributesArray @ 0x1409E2108 (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1409E21E8 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x1409E2E88 (SeCaptureSidAndAttributesArray.c)
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 */

NTSTATUS __stdcall NtFilterToken(
        HANDLE ExistingTokenHandle,
        ULONG Flags,
        PTOKEN_GROUPS SidsToDisable,
        PTOKEN_PRIVILEGES PrivilegesToDelete,
        PTOKEN_GROUPS RestrictedSids,
        PHANDLE NewTokenHandle)
{
  NTSTATUS inserted; // edi
  _DWORD *v8; // r15
  unsigned int ULongFromUser; // r12d
  PVOID v10; // r13
  char PreviousMode; // si
  unsigned int i; // edi
  unsigned int PrivilegeCount; // eax
  unsigned int GroupCount; // eax
  unsigned int j; // ecx
  int v16; // edx
  void *v17; // r14
  int Object; // [rsp+20h] [rbp-C8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-C0h]
  size_t v21; // [rsp+30h] [rbp-B8h]
  unsigned int v22; // [rsp+64h] [rbp-84h]
  unsigned int v23; // [rsp+68h] [rbp-80h]
  __int64 v24; // [rsp+70h] [rbp-78h] BYREF
  unsigned int v25; // [rsp+78h] [rbp-70h]
  unsigned int v26; // [rsp+7Ch] [rbp-6Ch]
  unsigned int v27; // [rsp+80h] [rbp-68h]
  unsigned int v28; // [rsp+84h] [rbp-64h] BYREF
  PVOID v29; // [rsp+88h] [rbp-60h] BYREF
  PVOID v30; // [rsp+90h] [rbp-58h] BYREF
  _DWORD *v31; // [rsp+98h] [rbp-50h] BYREF
  PVOID v32; // [rsp+A0h] [rbp-48h] BYREF
  unsigned int v33; // [rsp+A8h] [rbp-40h]
  void *v34; // [rsp+B0h] [rbp-38h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v35; // [rsp+B8h] [rbp-30h] BYREF
  struct _TOKEN_PRIVILEGES *v38; // [rsp+108h] [rbp+20h]

  v38 = PrivilegesToDelete;
  v30 = 0LL;
  inserted = 0;
  v23 = 0;
  v25 = 0;
  v8 = 0LL;
  v31 = 0LL;
  v28 = 0;
  ULongFromUser = 0;
  v26 = 0;
  v10 = 0LL;
  v32 = 0LL;
  v22 = 0;
  v27 = 0;
  v24 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( SidsToDisable )
  {
    if ( PreviousMode )
      ULongFromUser = RtlReadULongFromUser(&SidsToDisable->GroupCount);
    else
      ULongFromUser = SidsToDisable->GroupCount;
    v26 = ULongFromUser;
    for ( i = 0; ; ++i )
    {
      v33 = i;
      if ( i >= ULongFromUser )
        break;
      if ( PreviousMode )
        RtlWriteULongToUser(&SidsToDisable->Groups[i].Attributes, 0);
      else
        SidsToDisable->Groups[i].Attributes = 0;
    }
    inserted = SeCaptureSidAndAttributesArray(
                 (char *)SidsToDisable->Groups,
                 ULongFromUser,
                 PreviousMode,
                 0LL,
                 0,
                 (__int64)HandleInformation,
                 v21,
                 &v32,
                 (unsigned int *)&v29);
    v10 = v32;
    PrivilegesToDelete = v38;
  }
  if ( inserted >= 0 )
  {
    if ( PrivilegesToDelete )
    {
      if ( PreviousMode )
      {
        PrivilegeCount = RtlReadULongFromUser(&PrivilegesToDelete->PrivilegeCount);
        PrivilegesToDelete = v38;
      }
      else
      {
        PrivilegeCount = PrivilegesToDelete->PrivilegeCount;
      }
      v22 = PrivilegeCount;
      v27 = PrivilegeCount;
      inserted = SeCaptureLuidAndAttributesArray(
                   PrivilegesToDelete->Privileges,
                   PrivilegeCount,
                   PreviousMode,
                   (__int64)PrivilegesToDelete,
                   Object,
                   (int)HandleInformation,
                   v21,
                   &v24,
                   &v29);
    }
    if ( inserted >= 0 && RestrictedSids )
    {
      if ( PreviousMode )
        GroupCount = RtlReadULongFromUser(&RestrictedSids->GroupCount);
      else
        GroupCount = RestrictedSids->GroupCount;
      v23 = GroupCount;
      v25 = GroupCount;
      inserted = SeCaptureSidAndAttributesArray(
                   (char *)RestrictedSids->Groups,
                   GroupCount,
                   PreviousMode,
                   0LL,
                   0,
                   (__int64)HandleInformation,
                   v21,
                   (PVOID *)&v31,
                   &v28);
      v8 = v31;
    }
  }
  if ( inserted < 0 )
  {
LABEL_45:
    v17 = (void *)v24;
  }
  else
  {
    for ( j = 0; j < v23; ++j )
    {
      if ( v8[4 * j + 2] )
      {
        inserted = -1073741811;
        goto LABEL_45;
      }
    }
    v29 = 0LL;
    inserted = ObReferenceObjectByHandle(
                 ExistingTokenHandle,
                 2u,
                 (POBJECT_TYPE)SeTokenObjectType,
                 PreviousMode,
                 &v29,
                 &v35);
    if ( inserted < 0 )
      goto LABEL_45;
    v30 = 0LL;
    v17 = (void *)v24;
    LOBYTE(v16) = PreviousMode;
    inserted = SepFilterToken(
                 (_DWORD)v29,
                 v16,
                 Flags,
                 ULongFromUser,
                 (__int64)v10,
                 v22,
                 v24,
                 v23,
                 (__int64)v8,
                 v28,
                 (__int64)&v30);
    if ( inserted >= 0 )
    {
      inserted = ObInsertObjectEx((char *)v30, 0LL, v35.GrantedAccess, 1, 0, 0LL, &v34);
      if ( inserted >= 0 )
      {
        SepFinalizeTokenAcls(v30);
        ObfDereferenceObject(v30);
      }
    }
    ObfDereferenceObject(v29);
    if ( inserted >= 0 )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(NewTokenHandle, (__int64)v34);
      else
        *NewTokenHandle = v34;
    }
  }
  if ( v10 )
    SeReleaseLuidAndAttributesArray(v10, PreviousMode);
  if ( v17 )
    SeReleaseLuidAndAttributesArray(v17, PreviousMode);
  if ( v8 )
    SeReleaseLuidAndAttributesArray(v8, PreviousMode);
  return inserted;
}
