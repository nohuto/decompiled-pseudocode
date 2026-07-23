/*
 * XREFs of SepDuplicateClaimAttributes @ 0x140AFDB28
 * Callers:
 *     SepConvertToOwnTokenClaims @ 0x1404DFD60 (SepConvertToOwnTokenClaims.c)
 *     SepDuplicateTokenClaims @ 0x140AFDAB8 (SepDuplicateTokenClaims.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402FBB30 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1403B2488 (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1403B2AA0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     RtlSidHashInitialize @ 0x140406710 (RtlSidHashInitialize.c)
 *     SepLengthSidAndAttributesArray @ 0x1409E2BA4 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x1409E2E88 (SeCaptureSidAndAttributesArray.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140AFDC80 (AuthzBasepAllocateClaimCollectionNoLists.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDuplicateClaimAttributes(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int v5; // ebx
  _DWORD *v6; // r14
  _DWORD *v7; // rdi
  char v8; // r13
  _SID_AND_ATTRIBUTES *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  _DWORD *ClaimCollectionNoLists; // rsi
  __int64 SecurityAttributesList; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // ebx
  char *Pool2; // rax
  ULONG v18; // edx
  __int64 v19; // [rsp+28h] [rbp-70h]
  size_t v20; // [rsp+30h] [rbp-68h]
  char v21; // [rsp+A8h] [rbp+10h]
  unsigned int v22; // [rsp+B0h] [rbp+18h] BYREF
  PVOID v23; // [rsp+B8h] [rbp+20h] BYREF

  result = 0LL;
  v21 = 0;
  v22 = 0;
  v5 = 0;
  v23 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  *a2 = 0LL;
  if ( a1 )
  {
    ClaimCollectionNoLists = (_DWORD *)AuthzBasepAllocateClaimCollectionNoLists();
    if ( !ClaimCollectionNoLists )
      return (unsigned int)-1073741670;
    if ( *(_QWORD *)(a1 + 576) )
    {
      SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(v11, v10);
      v6 = (_DWORD *)SecurityAttributesList;
      if ( !SecurityAttributesList )
      {
        v5 = -1073741670;
LABEL_35:
        ExFreePoolWithTag(ClaimCollectionNoLists, 0);
        return (unsigned int)v5;
      }
      v5 = AuthzBasepDuplicateSecurityAttributes(*(_QWORD *)(a1 + 576), SecurityAttributesList, 0);
      if ( v5 < 0 )
        goto LABEL_13;
      v21 = 1;
      *((_QWORD *)ClaimCollectionNoLists + 72) = v6;
    }
    if ( *(_QWORD *)(a1 + 584) )
    {
      v15 = AuthzBasepAllocateSecurityAttributesList(v11, v10);
      v7 = (_DWORD *)v15;
      if ( !v15 )
      {
LABEL_23:
        v5 = -1073741670;
        goto LABEL_24;
      }
      v5 = AuthzBasepDuplicateSecurityAttributes(*(_QWORD *)(a1 + 584), v15, 0);
      if ( v5 < 0 )
      {
LABEL_24:
        if ( !v6 )
          goto LABEL_14;
        if ( v21 )
          AuthzBasepFreeSecurityAttributesList(v6);
LABEL_13:
        ExFreePoolWithTag(v6, 0);
LABEL_14:
        if ( v7 )
        {
          if ( v8 )
            AuthzBasepFreeSecurityAttributesList(v7);
          ExFreePoolWithTag(v7, 0);
        }
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
        goto LABEL_35;
      }
      v8 = 1;
      *((_QWORD *)ClaimCollectionNoLists + 73) = v7;
    }
    v14 = *(_QWORD *)(a1 + 8);
    if ( !v14 || !*(_DWORD *)a1 )
      goto LABEL_10;
    v5 = SepLengthSidAndAttributesArray(v14, *(_DWORD *)a1, &v22);
    if ( v5 < 0 )
      goto LABEL_24;
    v16 = v22;
    Pool2 = (char *)ExAllocatePool2(0x100uLL);
    v9 = (_SID_AND_ATTRIBUTES *)Pool2;
    if ( Pool2 )
    {
      v5 = SeCaptureSidAndAttributesArray(*(char **)(a1 + 8), *(_DWORD *)a1, 0, Pool2, v16, v19, v20, &v23, &v22);
      if ( v5 >= 0 )
      {
        v18 = *(_DWORD *)a1;
        *ClaimCollectionNoLists = *(_DWORD *)a1;
        *((_QWORD *)ClaimCollectionNoLists + 1) = v9;
        RtlSidHashInitialize(v9, v18, (PSID_AND_ATTRIBUTES_HASH)(ClaimCollectionNoLists + 8));
LABEL_10:
        *a2 = ClaimCollectionNoLists;
        return (unsigned int)v5;
      }
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  return result;
}
