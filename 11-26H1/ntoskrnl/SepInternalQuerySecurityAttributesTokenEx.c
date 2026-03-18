/*
 * XREFs of SepInternalQuerySecurityAttributesTokenEx @ 0x1403CC2F0
 * Callers:
 *     SeQuerySecurityAttributesTokenAccessInformation @ 0x1403CBD30 (SeQuerySecurityAttributesTokenAccessInformation.c)
 *     NtQuerySecurityAttributesToken @ 0x1408F55B0 (NtQuerySecurityAttributesToken.c)
 *     SeQuerySecurityAttributesToken @ 0x140A7CEC0 (SeQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x140B79CE0 (NtQueryInformationToken.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1403CA6D0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1403CAE7C (AuthzBasepAllocateSecurityAttributesList.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1403CB24C (SepGetSingletonEntryFromIndexNumber.c)
 *     SepInternalFillNoAttribs @ 0x1403CBB54 (SepInternalFillNoAttribs.c)
 *     AuthzBasepEqualUnicodeString @ 0x1403CBD00 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1403CC900 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x1403CCC60 (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1403CCDF0 (AuthzBasepCopyoutSecurityAttributes.c)
 *     SepPotentialGlobalTableAttribute @ 0x1403CD380 (SepPotentialGlobalTableAttribute.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x1403CD3FC (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 *     AuthzBasepSecurityAttributePresent @ 0x1403CD5A0 (AuthzBasepSecurityAttributePresent.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403CD668 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1403CF030 (AuthzBasepFreeSecurityAttributesList.c)
 *     RtlSetVolatileMemory @ 0x1407330A0 (RtlSetVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlSetUserMemory @ 0x14077F608 (RtlSetUserMemory.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x14077F7E4 (RtlWriteUShortToUser.c)
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  __int64 v37; // rdx
  __int64 v38; // r8
  unsigned int i; // ebp
  _WORD *v40; // rax
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v42; // rbx
  KIRQL v43; // al
  KIRQL v44; // di
  __int64 SecurityAttributesList; // rax
  void *v46; // r15
  int SecurityAttributesToken; // ebp
  unsigned int v48; // eax
  __int64 v49; // rsi
  _WORD *v50; // rbx
  size_t v51; // [rsp+20h] [rbp-58h]
  unsigned int *v52; // [rsp+30h] [rbp-48h]
  _QWORD v53[8]; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v54; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v55; // [rsp+98h] [rbp+20h]

  v55 = a4;
  v8 = 0;
  v9 = a4;
  v10 = (*(_DWORD *)(a1 + 200) & 0x20000) == 0;
  v53[0] = 0LL;
  LODWORD(v54) = 0;
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
    if ( (RtlpBootStatHandleLock.SchedulerApcFill3[60] & 3) != 3 )
      goto LABEL_52;
    if ( KeGetCurrentIrql() >= 2u )
    {
      ProcUniqueLuidAndIndexFromAttributeInfo = SepGetProcUniqueLuidAndIndexFromAttributeInfo(
                                                  *(_QWORD *)(a1 + 776),
                                                  &v54,
                                                  v53);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
      ProcUniqueLuidAndIndexFromAttributeInfo = SepGetProcUniqueLuidAndIndexFromAttributeInfo(
                                                  *(_QWORD *)(a1 + 776),
                                                  &v54,
                                                  v53);
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v37, v38);
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
        v50 = a6;
        RtlSetVolatileMemory(a6, 0, 0x10uLL);
        *v50 = 1;
      }
      return v8;
    }
    SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(v54);
    v42 = SingletonEntryFromIndexNumber;
    if ( !SingletonEntryFromIndexNumber )
      return SepInternalFillNoAttribs(a6, Size, (_DWORD *)a8, a2);
    v43 = ExAcquireSpinLockShared(SingletonEntryFromIndexNumber);
    v44 = v43;
    if ( !*((_QWORD *)v42 + 2) )
    {
      ExReleaseSpinLockShared(v42, v43);
      return SepInternalFillNoAttribs(a6, Size, (_DWORD *)a8, a2);
    }
    SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList();
    v46 = (void *)SecurityAttributesList;
    if ( SecurityAttributesList )
      SecurityAttributesToken = AuthzBasepDuplicateSecurityAttributes(*((_QWORD *)v42 + 2), SecurityAttributesList, 0);
    else
      SecurityAttributesToken = -1073741801;
    ExReleaseSpinLockShared(v42, v44);
    if ( SecurityAttributesToken == -1073741275 )
      return SepInternalFillNoAttribs(a6, Size, (_DWORD *)a8, a2);
    if ( SecurityAttributesToken < 0 )
    {
      if ( v46 )
        goto LABEL_85;
    }
    else if ( v46 )
    {
      LODWORD(v51) = Size;
      SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken((int)v46, a3, v9, (int)a6, v51, a8);
LABEL_85:
      AuthzBasepFreeSecurityAttributesList(v46);
      ExFreePoolWithTag(v46, 0);
    }
    return (unsigned int)SecurityAttributesToken;
  }
LABEL_5:
  v14 = (_DWORD *)a8;
  v52 = *(unsigned int **)(a1 + 776);
  *(_DWORD *)a8 = 0;
  v15 = *v52;
  if ( !(_DWORD)v15 )
  {
    if ( (unsigned int)Size < 0x10 )
    {
      result = 3221225507LL;
    }
    else
    {
      v40 = a6;
      *(_OWORD *)a6 = 0LL;
      *v40 = 1;
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
  v54 = 0LL;
  if ( !a3 )
  {
    v30 = 40 * v15;
    if ( is_mul_ok(0x28uLL, v15) )
    {
      v20 = v30 + 16;
      if ( v30 < 0xFFFFFFFFFFFFFFF0uLL )
      {
        v31 = v52;
        v32 = (unsigned int *)*((_QWORD *)v52 + 1);
        while ( v32 != v52 + 2 )
        {
          v33 = (v20 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v33 < v20 || v33 + *((unsigned __int16 *)v32 + 16) < v33 )
            return 3221225621LL;
          v54 = v33 + *((unsigned __int16 *)v32 + 16);
          result = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v32, &v54);
          if ( (int)result < 0 )
            return result;
          v32 = *(unsigned int **)v32;
          v20 = v54;
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
    v53[0] = 0LL;
    for ( m = (unsigned int *)*((_QWORD *)v52 + 1); m != v52 + 2; m = *(unsigned int **)m )
    {
      v53[0] = m;
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
    LODWORD(v9) = v55;
    for ( n = (unsigned int *)*((_QWORD *)v52 + 4); n != v52 + 8; n = *(unsigned int **)n )
    {
      v48 = n[10];
      v53[0] = n - 4;
      if ( (v48 & 1) == 0
        && AuthzBasepEqualUnicodeString((const UNICODE_STRING *)n + 1, (const UNICODE_STRING *)(a3 + 16LL * k)) )
      {
        goto LABEL_47;
      }
    }
    v27 = 0;
LABEL_27:
    v28 = 0LL;
    if ( v27 )
      v28 = v53[0];
    if ( !v28 )
      return 3221226021LL;
    v34 = (v20 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v34 < v20 || v34 + *(unsigned __int16 *)(v28 + 32) < v34 )
      return 3221225621LL;
    v54 = v34 + *(unsigned __int16 *)(v28 + 32);
    result = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v28, &v54);
    if ( (int)result < 0 )
      return result;
    v20 = v54;
  }
  v31 = v52;
  v14 = (_DWORD *)a8;
LABEL_89:
  if ( !v20 )
    return 3221225485LL;
  v49 = (unsigned int)Size;
  if ( (unsigned int)Size < v20 )
  {
    *v14 = v20;
    return 3221225507LL;
  }
  else
  {
    memset_0(a6, 0, (unsigned int)Size);
    result = AuthzBasepCopyoutSecurityAttributes(v31, a3, (unsigned int)v9, a6, v49);
    *v14 = v20;
  }
  return result;
}
