/*
 * XREFs of SepSetTokenCapabilities @ 0x140A44AC4
 * Callers:
 *     SepGetAnonymousToken @ 0x1403C9F7C (SepGetAnonymousToken.c)
 *     NtCreateLowBoxToken @ 0x1408140F0 (NtCreateLowBoxToken.c)
 *     SepDuplicateToken @ 0x14092A5A0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140A45584 (SepFilterToken.c)
 * Callees:
 *     RtlSidHashInitialize @ 0x140260B30 (RtlSidHashInitialize.c)
 *     SepFreeTokenCapabilities @ 0x1404A72A0 (SepFreeTokenCapabilities.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SeCaptureSidAndAttributesArray @ 0x140A44CF8 (SeCaptureSidAndAttributesArray.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140A4621C (SepInsertOrReferenceSharedSidEntries.c)
 *     RtlIsParentOfChildAppContainer @ 0x140A8F93C (RtlIsParentOfChildAppContainer.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSetTokenCapabilities(__int64 a1, void *a2, __int64 a3, unsigned int a4)
{
  void *Pool2; // r15
  unsigned int v8; // ebx
  __int64 result; // rax
  __int64 v10; // rax
  void *v11; // rbx
  int v12; // eax
  unsigned int v13; // ebp
  void *v14; // rcx

  if ( *(_QWORD *)(a1 + 792) )
  {
    if ( !a2 )
      return 3221225506LL;
    v14 = *(void **)(a1 + 784);
    if ( v14 )
    {
      if ( !(unsigned __int8)RtlIsParentOfChildAppContainer(v14, a2) )
        return 3221225506LL;
    }
  }
  if ( a4 )
  {
    if ( a4 > 0x1000 )
      return 3221225485LL;
    if ( RtlpBootStatHandleLock.WaitBlockFill7[130] )
      goto LABEL_9;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return 3221225626LL;
    v8 = SeCaptureSidAndAttributesArray(a3, a4, 0LL);
    ExFreePoolWithTag(Pool2, 0);
    result = 0LL;
    if ( v8 != -1073741789 )
      result = v8;
    if ( (int)result >= 0 )
    {
LABEL_9:
      v10 = ExAllocatePool2(0x100uLL);
      v11 = (void *)v10;
      if ( v10 )
      {
        if ( RtlpBootStatHandleLock.WaitBlockFill7[130] )
          v12 = SepInsertOrReferenceSharedSidEntries(a3, v10, a4);
        else
          v12 = SeCaptureSidAndAttributesArray(a3, a4, 0LL);
        v13 = v12;
        if ( v12 < 0 )
        {
          ExFreePoolWithTag(v11, 0);
        }
        else
        {
          if ( *(_QWORD *)(a1 + 792) )
            SepFreeTokenCapabilities(a1);
          *(_QWORD *)(a1 + 792) = v11;
          *(_DWORD *)(a1 + 800) = a4;
          RtlSidHashInitialize((__int64 *)v11, a4, (_QWORD *)(a1 + 808));
        }
        return v13;
      }
      return 3221225626LL;
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 792) )
      SepFreeTokenCapabilities(a1);
    *(_QWORD *)(a1 + 792) = 0LL;
    *(_DWORD *)(a1 + 800) = 0;
    memset_0((void *)(a1 + 808), 0, 0x110uLL);
    return 0LL;
  }
  return result;
}
