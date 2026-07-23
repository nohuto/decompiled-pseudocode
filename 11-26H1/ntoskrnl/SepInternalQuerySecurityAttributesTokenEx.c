/*
 * XREFs of SepInternalQuerySecurityAttributesTokenEx @ 0x1403B0C10
 * Callers:
 *     SeQuerySecurityAttributesTokenAccessInformation @ 0x1403B0650 (SeQuerySecurityAttributesTokenAccessInformation.c)
 *     NtQuerySecurityAttributesToken @ 0x140925540 (NtQuerySecurityAttributesToken.c)
 *     SeQuerySecurityAttributesToken @ 0x140A82D30 (SeQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402FBB30 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     AuthzBasepEqualUnicodeString @ 0x1403B0620 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1403B1220 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x1403B1580 (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1403B1710 (AuthzBasepCopyoutSecurityAttributes.c)
 *     SepPotentialGlobalTableAttribute @ 0x1403B1CA0 (SepPotentialGlobalTableAttribute.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x1403B1D1C (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 *     AuthzBasepSecurityAttributePresent @ 0x1403B1EC0 (AuthzBasepSecurityAttributePresent.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403B1F88 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     SepInternalFillNoAttribs @ 0x1403B1FBC (SepInternalFillNoAttribs.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1403B212C (SepGetSingletonEntryFromIndexNumber.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1403B2488 (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1403B2AA0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     RtlSetVolatileMemory @ 0x140737C70 (RtlSetVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlSetUserMemory @ 0x140782108 (RtlSetUserMemory.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepInternalQuerySecurityAttributesTokenEx(
        __int64 a1,
        char a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        void *a6,
        size_t Size,
        __int64 a8)
{
  unsigned int v8; // edi
  unsigned __int64 v9; // r14
  bool v10; // zf
  _DWORD *v14; // r12
  unsigned __int64 v15; // r9
  unsigned int j; // eax
  unsigned __int16 v17; // r8
  unsigned __int16 v18; // dx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbp
  unsigned int k; // r12d
  unsigned int *m; // rbx
  const UNICODE_STRING *v23; // rcx
  const UNICODE_STRING *v24; // rdx
  BOOLEAN v25; // al
  unsigned int *n; // rsi
  char v27; // al
  __int64 v28; // rcx
  __int64 result; // rax
  unsigned __int64 v30; // rax
  unsigned int *v31; // r15
  unsigned int *v32; // rbx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int ProcUniqueLuidAndIndexFromAttributeInfo; // ebp
  unsigned int i; // ebp
  _WORD *v38; // rax
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v40; // rbx
  KIRQL v41; // al
  KIRQL v42; // di
  __int64 SecurityAttributesList; // rax
  _DWORD *v44; // r15
  int SecurityAttributesToken; // ebp
  unsigned int v46; // eax
  __int64 v47; // rsi
  _WORD *v48; // rbx
  size_t v49; // [rsp+20h] [rbp-58h]
  unsigned int *v50; // [rsp+30h] [rbp-48h]
  _QWORD v51[8]; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v52; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v53; // [rsp+98h] [rbp+20h]

  v53 = a4;
  v8 = 0;
  v9 = a4;
  v10 = (*(_DWORD *)(a1 + 200) & 0x20000) == 0;
  v51[0] = 0LL;
  LODWORD(v52) = 0;
  if ( v10 )
  {
    if ( !a5 )
    {
      if ( (SepSingletonGlobal[4] & 1) == 0 || !a3 )
        goto LABEL_5;
      for ( i = 0; i < (unsigned int)v9; ++i )
      {
        if ( !(unsigned __int8)SepPotentialGlobalTableAttribute((PCUNICODE_STRING)(a3 + 16LL * i))
          || (unsigned __int8)AuthzBasepSecurityAttributePresent(*(_QWORD *)(a1 + 776), a3 + 16LL * i) )
        {
          goto LABEL_5;
        }
      }
    }
    if ( (RtlpBootStatHandleLock.UserTime & 3) != 3 )
      goto LABEL_52;
    if ( KeGetCurrentIrql() >= 2u )
    {
      ProcUniqueLuidAndIndexFromAttributeInfo = SepGetProcUniqueLuidAndIndexFromAttributeInfo(
                                                  *(_QWORD *)(a1 + 776),
                                                  &v52,
                                                  v51);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
      ProcUniqueLuidAndIndexFromAttributeInfo = SepGetProcUniqueLuidAndIndexFromAttributeInfo(
                                                  *(_QWORD *)(a1 + 776),
                                                  &v52,
                                                  v51);
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    if ( ProcUniqueLuidAndIndexFromAttributeInfo < 0 )
    {
LABEL_52:
      if ( a2 )
        RtlWriteULongToUser(a8, 16LL);
      else
        *(_DWORD *)a8 = 16;
      if ( (unsigned int)Size < 0x10 )
      {
        return (unsigned int)-1073741789;
      }
      else if ( a2 )
      {
        RtlSetUserMemory(a6);
        RtlWriteUShortToUser(a6, 1LL);
      }
      else
      {
        v48 = a6;
        RtlSetVolatileMemory(a6, 0, 0x10uLL);
        *v48 = 1;
      }
      return v8;
    }
    SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber((unsigned int)v52);
    v40 = SingletonEntryFromIndexNumber;
    if ( !SingletonEntryFromIndexNumber )
      return SepInternalFillNoAttribs(a6);
    v41 = ExAcquireSpinLockShared(SingletonEntryFromIndexNumber);
    v42 = v41;
    if ( !*((_QWORD *)v40 + 2) )
    {
      ExReleaseSpinLockShared(v40, v41);
      return SepInternalFillNoAttribs(a6);
    }
    SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList();
    v44 = (_DWORD *)SecurityAttributesList;
    if ( SecurityAttributesList )
      SecurityAttributesToken = AuthzBasepDuplicateSecurityAttributes(*((_QWORD *)v40 + 2), SecurityAttributesList, 0LL);
    else
      SecurityAttributesToken = -1073741801;
    ExReleaseSpinLockShared(v40, v42);
    if ( SecurityAttributesToken == -1073741275 )
      return SepInternalFillNoAttribs(a6);
    if ( SecurityAttributesToken < 0 )
    {
      if ( v44 )
        goto LABEL_85;
    }
    else if ( v44 )
    {
      LODWORD(v49) = Size;
      SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken((int)v44, a3, v9, (int)a6, v49, a8);
LABEL_85:
      AuthzBasepFreeSecurityAttributesList(v44);
      ExFreePoolWithTag(v44, 0);
    }
    return (unsigned int)SecurityAttributesToken;
  }
LABEL_5:
  v14 = (_DWORD *)a8;
  v50 = *(unsigned int **)(a1 + 776);
  *(_DWORD *)a8 = 0;
  v15 = *v50;
  if ( !(_DWORD)v15 )
  {
    if ( (unsigned int)Size < 0x10 )
    {
      result = 3221225507LL;
    }
    else
    {
      v38 = a6;
      *(_OWORD *)a6 = 0LL;
      *v38 = 1;
      result = 0LL;
    }
    *v14 = 16;
    return result;
  }
  for ( j = 0; j < (unsigned int)v9; ++j )
  {
    v17 = *(_WORD *)(a3 + 16LL * j);
    if ( !v17 )
      return 3221225485LL;
    v18 = *(_WORD *)(a3 + 16LL * j + 2);
    if ( !v18 || v17 > v18 || !*(_QWORD *)(a3 + 16LL * j + 8) )
      return 3221225485LL;
  }
  v52 = 0LL;
  if ( !a3 )
  {
    v30 = 40 * v15;
    if ( is_mul_ok(0x28uLL, v15) )
    {
      v20 = v30 + 16;
      if ( v30 < 0xFFFFFFFFFFFFFFF0uLL )
      {
        v31 = v50;
        v32 = (unsigned int *)*((_QWORD *)v50 + 1);
        while ( v32 != v50 + 2 )
        {
          v33 = (v20 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v33 < v20 || v33 + *((unsigned __int16 *)v32 + 16) < v33 )
            return 3221225621LL;
          v52 = v33 + *((unsigned __int16 *)v32 + 16);
          result = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v32, &v52);
          if ( (int)result < 0 )
            return result;
          v32 = *(unsigned int **)v32;
          v20 = v52;
        }
        goto LABEL_89;
      }
    }
    return 3221225621LL;
  }
  v19 = 40 * v9;
  if ( !is_mul_ok(0x28uLL, v9) )
    return 3221225621LL;
  v20 = v19 + 16;
  if ( v19 >= 0xFFFFFFFFFFFFFFF0uLL )
    return 3221225621LL;
  for ( k = 0; k < (unsigned int)v9; ++k )
  {
    v51[0] = 0LL;
    for ( m = (unsigned int *)*((_QWORD *)v50 + 1); m != v50 + 2; m = *(unsigned int **)m )
    {
      v51[0] = m;
      v23 = (const UNICODE_STRING *)(m + 8);
      v24 = (const UNICODE_STRING *)(a3 + 16LL * k);
      if ( KeGetCurrentIrql() >= 2u )
        v25 = AuthzBasepEqualUnicodeStringCaseSensitive(v23, v24);
      else
        v25 = RtlEqualUnicodeString(v23, v24, 1u);
      if ( v25 )
      {
LABEL_47:
        v27 = 1;
        goto LABEL_27;
      }
    }
    LODWORD(v9) = v53;
    for ( n = (unsigned int *)*((_QWORD *)v50 + 4); n != v50 + 8; n = *(unsigned int **)n )
    {
      v46 = n[10];
      v51[0] = n - 4;
      if ( (v46 & 1) == 0
        && AuthzBasepEqualUnicodeString((const UNICODE_STRING *)n + 1, (const UNICODE_STRING *)(a3 + 16LL * k)) )
      {
        goto LABEL_47;
      }
    }
    v27 = 0;
LABEL_27:
    v28 = 0LL;
    if ( v27 )
      v28 = v51[0];
    if ( !v28 )
      return 3221226021LL;
    v34 = (v20 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v34 < v20 || v34 + *(unsigned __int16 *)(v28 + 32) < v34 )
      return 3221225621LL;
    v52 = v34 + *(unsigned __int16 *)(v28 + 32);
    result = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v28, &v52);
    if ( (int)result < 0 )
      return result;
    v20 = v52;
  }
  v31 = v50;
  v14 = (_DWORD *)a8;
LABEL_89:
  if ( !v20 )
    return 3221225485LL;
  v47 = (unsigned int)Size;
  if ( (unsigned int)Size < v20 )
  {
    *v14 = v20;
    return 3221225507LL;
  }
  else
  {
    memset_0(a6, 0, (unsigned int)Size);
    result = AuthzBasepCopyoutSecurityAttributes(v31, a3, (unsigned int)v9, a6, v47);
    *v14 = v20;
  }
  return result;
}
