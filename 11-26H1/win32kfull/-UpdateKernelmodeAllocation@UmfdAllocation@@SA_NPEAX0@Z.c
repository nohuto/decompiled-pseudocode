/*
 * XREFs of ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x1402923EC
 * Callers:
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x140261E10 (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1400D1C9C (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ?ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D2494 (-ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D24C0 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1400D261C (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1400D30C8 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 */

char __fastcall UmfdAllocation::UpdateKernelmodeAllocation(char *a1, char *a2, __int64 a3)
{
  char *v3; // rdi
  NSInstrumentation::CPointerHashTable **v6; // r14
  NSInstrumentation::CPlatformReaderWriterLock *v7; // rbx
  NSInstrumentation::CPointerHashTable *v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  NSInstrumentation::CPointerHashTable *v11; // rcx
  const void *v12; // rdx
  void *v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2 - 28;
  if ( a1 - 28 == a2 - 28 )
  {
    UmfdAllocation::ReleaseKernelmodeAllocation(a2, (__int64)a2, a3);
    return 1;
  }
  v6 = *(NSInstrumentation::CPointerHashTable ***)(W32GetSessionState((_DWORD)a1, a2) + 104);
  v7 = v6[1];
  NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(v7);
  if ( *((_DWORD *)a1 - 6) == *((_DWORD *)v3 + 1) && *((_DWORD *)a1 - 1) == *((_DWORD *)v3 + 6) && *(_DWORD *)v3 <= 1u )
  {
    v8 = *v6;
    if ( *v6 )
    {
      v9 = *(_QWORD *)(a1 - 12);
      if ( v9 )
      {
        v13 = 0LL;
        NSInstrumentation::CPointerHashTable::Remove(v8, v9, &v13);
      }
      v10 = *((_QWORD *)v3 + 2);
      if ( v10 )
      {
        v11 = *v6;
        v13 = 0LL;
        NSInstrumentation::CPointerHashTable::Remove(v11, v10, &v13);
      }
    }
    *(_QWORD *)(a1 - 20) = *((_QWORD *)v3 + 1);
    v12 = (const void *)*((_QWORD *)v3 + 2);
    *(_QWORD *)(a1 - 12) = v12;
    if ( NSInstrumentation::CPointerHashTable::Insert(*v6, v12, a1) )
    {
      EngFreeMem(v3);
      NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(v7);
      return 1;
    }
  }
  NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(v7);
  return 0;
}
