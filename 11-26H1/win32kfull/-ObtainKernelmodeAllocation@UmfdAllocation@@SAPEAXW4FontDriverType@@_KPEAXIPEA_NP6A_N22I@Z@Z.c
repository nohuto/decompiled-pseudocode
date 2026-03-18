/*
 * XREFs of ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1400D1DD0
 * Callers:
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1400D1B40 (-CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ.c)
 *     ?CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ @ 0x14028433C (-CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ.c)
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x140284D50 (-CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1400D1C9C (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ?_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z @ 0x1400D1FD0 (-_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z.c)
 *     ?ReleaseShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D21E8 (-ReleaseShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D2214 (-AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D2494 (-ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D24C0 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1400D261C (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 *     ?TryProbeForRead@@YA_NPEAXII@Z @ 0x1400D279C (-TryProbeForRead@@YA_NPEAXII@Z.c)
 *     ?_ValidateAllocationPair@UmfdAllocation@@CA_NW4FontDriverType@@_KPEAV1@PEAXIP6A_N33I@Z@Z @ 0x1400D2A9C (-_ValidateAllocationPair@UmfdAllocation@@CA_NW4FontDriverType@@_KPEAV1@PEAXIP6A_N33I@Z@Z.c)
 *     unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___::_unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___ @ 0x14025D780 (unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___--_unique_ptr_UmfdAllocatio.c)
 *     ?TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z @ 0x140295AF0 (-TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z.c)
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
  NSInstrumentation::CPlatformReaderWriterLock *v10; // rbx
  struct UmfdAllocation *v11; // rdi
  unsigned int v12; // r8d
  char *v13; // rax
  void *v14; // rdi
  const void *v15; // r15
  NSInstrumentation::CPlatformReaderWriterLock *v16; // rbx
  struct UmfdAllocation *v17; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  char *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // r8
  NSInstrumentation::CPointerHashTable **v24; // [rsp+30h] [rbp-48h]
  char *v25; // [rsp+38h] [rbp-40h] BYREF

  v9 = a1;
  v24 = *(NSInstrumentation::CPointerHashTable ***)(W32GetSessionState(a1, a2, a3) + 104);
  v10 = v24[1];
  NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(v10);
  v11 = UmfdAllocation::_FindAndReferenceExistingKernelmodeAllocation(a3);
  NSInstrumentation::CPlatformReaderWriterLock::ReleaseShared(v10);
  if ( a5 )
    *a5 = 0;
  if ( v11 )
  {
    if ( (unsigned __int8)UmfdAllocation::_ValidateAllocationPair(v9, a2, v11, a3, a4, a6) )
      return (char *)v11 + 28;
    UmfdAllocation::ReleaseKernelmodeAllocation((char *)v11 + 28, v19, v20);
    return 0LL;
  }
  if ( !TryProbeForRead(a3, a4, v12) || a4 + 28 < a4 )
    return 0LL;
  v13 = (char *)EngAllocMem(0, a4 + 28, 0x61646647u);
  v25 = v13;
  v14 = v13;
  if ( !v13 )
    goto LABEL_21;
  *((_DWORD *)v13 + 1) = v9;
  v15 = v13 + 28;
  *((_QWORD *)v13 + 1) = a2;
  *((_DWORD *)v13 + 6) = a4;
  *(_DWORD *)v13 = 1;
  *((_QWORD *)v13 + 2) = a3;
  if ( !TryCopyMemoryFromProbedPointer(v13 + 28, a3, a4) )
    goto LABEL_21;
  v16 = v24[1];
  NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(v16);
  v17 = UmfdAllocation::_FindAndReferenceExistingKernelmodeAllocation(a3);
  if ( v17 )
  {
    v21 = (char *)v17 + 28;
    if ( (unsigned __int8)UmfdAllocation::_ValidateAllocationPair(v9, a2, v17, a3, a4, a6) )
    {
      NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(v16);
LABEL_22:
      unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___::_unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___(&v25);
      return v21;
    }
    UmfdAllocation::ReleaseKernelmodeAllocation(v21, v22, v23);
    NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(v16);
LABEL_21:
    v21 = 0LL;
    goto LABEL_22;
  }
  if ( !NSInstrumentation::CPointerHashTable::Insert(*v24, a3, v15) )
  {
    NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(v16);
    EngFreeMem(v14);
    return 0LL;
  }
  NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(v16);
  if ( a5 )
    *a5 = 1;
  return (char *)v15;
}
