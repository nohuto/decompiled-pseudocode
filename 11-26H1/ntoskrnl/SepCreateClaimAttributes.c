/*
 * XREFs of SepCreateClaimAttributes @ 0x140AF2AAC
 * Callers:
 *     SepSetTokenClaims @ 0x140AF2A24 (SepSetTokenClaims.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402FBB30 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403AFD64 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1403B2488 (AuthzBasepAllocateSecurityAttributesList.c)
 *     RtlSidHashInitialize @ 0x140406710 (RtlSidHashInitialize.c)
 *     SepLengthSidAndAttributesArray @ 0x1409E2BA4 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x1409E2E88 (SeCaptureSidAndAttributesArray.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140AFDC80 (AuthzBasepAllocateClaimCollectionNoLists.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCreateClaimAttributes(unsigned int **a1, __int64 a2, __int64 a3, unsigned int a4, char *a5)
{
  __int64 result; // rax
  int v8; // ebx
  _DWORD *v9; // r14
  _DWORD *v10; // rsi
  char v11; // r12
  _SID_AND_ATTRIBUTES *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int *ClaimCollectionNoLists; // rdi
  _DWORD *SecurityAttributesList; // rax
  _DWORD *v17; // rax
  unsigned int v18; // ebx
  char *Pool2; // rax
  __int64 v20; // [rsp+28h] [rbp-80h]
  size_t v21; // [rsp+30h] [rbp-78h]
  int v22; // [rsp+54h] [rbp-54h] BYREF
  unsigned int v23; // [rsp+58h] [rbp-50h] BYREF
  PVOID v24; // [rsp+60h] [rbp-48h] BYREF
  char v25; // [rsp+B0h] [rbp+8h]

  v22 = 1;
  v25 = 0;
  result = a2;
  v23 = 0;
  v8 = 0;
  v24 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  if ( a2 || a3 || a4 )
  {
    ClaimCollectionNoLists = (unsigned int *)AuthzBasepAllocateClaimCollectionNoLists();
    if ( !ClaimCollectionNoLists )
      return (unsigned int)-1073741670;
    if ( a2 )
    {
      SecurityAttributesList = (_DWORD *)AuthzBasepAllocateSecurityAttributesList(v14, v13);
      v9 = SecurityAttributesList;
      if ( !SecurityAttributesList )
      {
        v8 = -1073741670;
LABEL_37:
        ExFreePoolWithTag(ClaimCollectionNoLists, 0);
        return (unsigned int)v8;
      }
      v8 = AuthzBasepSetSecurityAttributesToken(SecurityAttributesList, &v22, a2);
      if ( v8 < 0 )
        goto LABEL_30;
      v25 = 1;
      *((_QWORD *)ClaimCollectionNoLists + 72) = v9;
    }
    if ( a3 )
    {
      v17 = (_DWORD *)AuthzBasepAllocateSecurityAttributesList(v14, v13);
      v10 = v17;
      if ( !v17 )
      {
LABEL_26:
        v8 = -1073741670;
        goto LABEL_27;
      }
      v8 = AuthzBasepSetSecurityAttributesToken(v17, &v22, a3);
      if ( v8 < 0 )
      {
LABEL_27:
        if ( !v9 )
        {
LABEL_31:
          if ( v10 )
          {
            if ( v11 )
              AuthzBasepFreeSecurityAttributesList(v10);
            ExFreePoolWithTag(v10, 0);
          }
          if ( v12 )
            ExFreePoolWithTag(v12, 0);
          goto LABEL_37;
        }
        if ( v25 )
          AuthzBasepFreeSecurityAttributesList(v9);
LABEL_30:
        ExFreePoolWithTag(v9, 0);
        goto LABEL_31;
      }
      v11 = 1;
      *((_QWORD *)ClaimCollectionNoLists + 73) = v10;
    }
    if ( !a5 || !a4 )
      goto LABEL_24;
    v8 = SepLengthSidAndAttributesArray((__int64)a5, a4, &v23);
    if ( v8 < 0 )
      goto LABEL_27;
    v18 = v23;
    Pool2 = (char *)ExAllocatePool2(0x100uLL);
    v12 = (_SID_AND_ATTRIBUTES *)Pool2;
    if ( Pool2 )
    {
      v8 = SeCaptureSidAndAttributesArray(a5, a4, 0, Pool2, v18, v20, v21, &v24, &v23);
      if ( v8 >= 0 )
      {
        *ClaimCollectionNoLists = a4;
        *((_QWORD *)ClaimCollectionNoLists + 1) = v12;
        RtlSidHashInitialize(v12, a4, (PSID_AND_ATTRIBUTES_HASH)(ClaimCollectionNoLists + 8));
LABEL_24:
        *a1 = ClaimCollectionNoLists;
        return (unsigned int)v8;
      }
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  return result;
}
