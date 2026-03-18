/*
 * XREFs of SepCreateClaimAttributes @ 0x140AEFEE8
 * Callers:
 *     SepSetTokenClaims @ 0x140AEFE60 (SepSetTokenClaims.c)
 * Callees:
 *     RtlSidHashInitialize @ 0x140260B30 (RtlSidHashInitialize.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1403CAE7C (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403CB2B8 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1403CF030 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepLengthSidAndAttributesArray @ 0x140A44A14 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140A44CF8 (SeCaptureSidAndAttributesArray.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140AFC080 (AuthzBasepAllocateClaimCollectionNoLists.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCreateClaimAttributes(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, char *a5)
{
  __int64 result; // rax
  int v8; // ebx
  _DWORD *v9; // r14
  _DWORD *v10; // rsi
  char v11; // r12
  char *v12; // rbp
  _QWORD *ClaimCollectionNoLists; // rdi
  __int64 SecurityAttributesList; // rax
  __int64 v15; // rax
  unsigned int v16; // ebx
  char *Pool2; // rax
  __int64 v18; // [rsp+28h] [rbp-80h]
  size_t v19; // [rsp+30h] [rbp-78h]
  int v20; // [rsp+54h] [rbp-54h] BYREF
  unsigned int v21; // [rsp+58h] [rbp-50h] BYREF
  PVOID v22; // [rsp+60h] [rbp-48h] BYREF
  char v23; // [rsp+B0h] [rbp+8h]

  v20 = 1;
  v23 = 0;
  result = a2;
  v21 = 0;
  v8 = 0;
  v22 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  if ( a2 || a3 || a4 )
  {
    ClaimCollectionNoLists = (_QWORD *)AuthzBasepAllocateClaimCollectionNoLists();
    if ( !ClaimCollectionNoLists )
      return (unsigned int)-1073741670;
    if ( a2 )
    {
      SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList();
      v9 = (_DWORD *)SecurityAttributesList;
      if ( !SecurityAttributesList )
      {
        v8 = -1073741670;
LABEL_37:
        ExFreePoolWithTag(ClaimCollectionNoLists, 0);
        return (unsigned int)v8;
      }
      v8 = AuthzBasepSetSecurityAttributesToken(SecurityAttributesList, &v20, a2);
      if ( v8 < 0 )
        goto LABEL_30;
      v23 = 1;
      ClaimCollectionNoLists[72] = v9;
    }
    if ( a3 )
    {
      v15 = AuthzBasepAllocateSecurityAttributesList();
      v10 = (_DWORD *)v15;
      if ( !v15 )
      {
LABEL_26:
        v8 = -1073741670;
        goto LABEL_27;
      }
      v8 = AuthzBasepSetSecurityAttributesToken(v15, &v20, a3);
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
        if ( v23 )
          AuthzBasepFreeSecurityAttributesList(v9);
LABEL_30:
        ExFreePoolWithTag(v9, 0);
        goto LABEL_31;
      }
      v11 = 1;
      ClaimCollectionNoLists[73] = v10;
    }
    if ( !a5 || !a4 )
      goto LABEL_24;
    v8 = SepLengthSidAndAttributesArray((__int64)a5, a4, &v21);
    if ( v8 < 0 )
      goto LABEL_27;
    v16 = v21;
    Pool2 = (char *)ExAllocatePool2(0x100uLL);
    v12 = Pool2;
    if ( Pool2 )
    {
      v8 = SeCaptureSidAndAttributesArray(a5, a4, 0, Pool2, v16, v18, v19, &v22, &v21);
      if ( v8 >= 0 )
      {
        *(_DWORD *)ClaimCollectionNoLists = a4;
        ClaimCollectionNoLists[1] = v12;
        RtlSidHashInitialize((__int64 *)v12, a4, ClaimCollectionNoLists + 4);
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
