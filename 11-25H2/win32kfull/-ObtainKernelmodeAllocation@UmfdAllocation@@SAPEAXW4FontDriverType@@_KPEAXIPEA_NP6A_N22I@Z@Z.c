/*
 * XREFs of ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1400B284C
 * Callers:
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1401091F4 (-CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ.c)
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x14010A880 (-CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ @ 0x1401A3744 (-CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ.c)
 * Callees:
 *     ?W32AcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14004C9C4 (-W32AcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z @ 0x1400B2628 (-_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1400B26AC (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 *     ?TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z @ 0x1400B282C (-TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B2A6C (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B473C (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B4870 (-W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?TryProbeForRead@@YA_NPEAXII@Z @ 0x1400B4930 (-TryProbeForRead@@YA_NPEAXII@Z.c)
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x140109360 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ?_ValidateAllocationPair@UmfdAllocation@@CA_NW4FontDriverType@@_KPEAV1@PEAXIP6A_N33I@Z@Z @ 0x1401DEB0C (-_ValidateAllocationPair@UmfdAllocation@@CA_NW4FontDriverType@@_KPEAV1@PEAXIP6A_N33I@Z@Z.c)
 *     unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___::_unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___ @ 0x140222C08 (unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___--_unique_ptr_UmfdAllocatio.c)
 */

char *__fastcall UmfdAllocation::ObtainKernelmodeAllocation(
        __int64 a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        _BYTE *a5,
        __int64 a6)
{
  unsigned int v9; // r13d
  struct W32_PUSH_LOCK *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  struct UmfdAllocation *v13; // rdi
  unsigned int v14; // r8d
  char *v15; // rax
  struct W32_PUSH_LOCK *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  struct UmfdAllocation *v19; // rax
  void *v21; // rdi
  NSInstrumentation::CPointerHashTable **v22; // [rsp+30h] [rbp-48h]
  _QWORD v23[3]; // [rsp+38h] [rbp-40h] BYREF

  v9 = a1;
  v22 = *(NSInstrumentation::CPointerHashTable ***)(W32GetSessionState(a1, a2, a3) + 104);
  v10 = v22[1];
  W32AcquirePushLockShared(v10);
  v13 = UmfdAllocation::_FindAndReferenceExistingKernelmodeAllocation((unsigned __int64)a3, v11, v12);
  W32ReleasePushLockShared(v10);
  if ( a5 )
    *a5 = 0;
  if ( v13 )
  {
    if ( (unsigned __int8)UmfdAllocation::_ValidateAllocationPair(v9, a2, v13, a3, a4, a6) )
      return (char *)v13 + 28;
    UmfdAllocation::ReleaseKernelmodeAllocation((char *)v13 + 28);
    return 0LL;
  }
  if ( !TryProbeForRead(a3, a4, v14) || a4 + 28 < a4 )
    return 0LL;
  v15 = (char *)EngAllocMem(0, a4 + 28, 0x61646647u);
  v23[0] = v15;
  v13 = (struct UmfdAllocation *)v15;
  if ( !v15 )
  {
    unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___::_unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___(v23);
    return 0LL;
  }
  *((_DWORD *)v15 + 1) = v9;
  *((_QWORD *)v15 + 1) = a2;
  *((_DWORD *)v15 + 6) = a4;
  *(_DWORD *)v15 = 1;
  *((_QWORD *)v15 + 2) = a3;
  if ( !TryCopyMemoryFromProbedPointer(v15 + 28, a3, a4) )
  {
LABEL_14:
    EngFreeMem(v13);
    return 0LL;
  }
  v16 = v22[1];
  W32AcquirePushLockExclusive(v16);
  v19 = UmfdAllocation::_FindAndReferenceExistingKernelmodeAllocation((unsigned __int64)a3, v17, v18);
  if ( !v19 )
  {
    if ( NSInstrumentation::CPointerHashTable::Insert(*v22, a3, (char *)v13 + 28) )
    {
      W32ReleasePushLockExclusive(v16);
      if ( a5 )
        *a5 = 1;
      return (char *)v13 + 28;
    }
    W32ReleasePushLockExclusive(v16);
    goto LABEL_14;
  }
  v21 = (char *)v19 + 28;
  if ( !(unsigned __int8)UmfdAllocation::_ValidateAllocationPair(v9, a2, v19, a3, a4, a6) )
  {
    UmfdAllocation::ReleaseKernelmodeAllocation(v21);
    v21 = 0LL;
  }
  W32ReleasePushLockExclusive(v16);
  unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___::_unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___(v23);
  return (char *)v21;
}
