/*
 * XREFs of ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1400D1C9C
 * Callers:
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1400D1B40 (-CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ.c)
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1400D1DD0 (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1400D2A18 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdDrvFree @ 0x1400D3850 (UmfdDrvFree.c)
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x140284D50 (-CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z.c)
 *     ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x1402923EC (-UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z.c)
 * Callees:
 *     ?ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D2494 (-ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D24C0 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1400D30C8 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 */

void __fastcall UmfdAllocation::ReleaseKernelmodeAllocation(char *a1, __int64 a2, __int64 a3)
{
  char *v3; // rdi
  NSInstrumentation::CPointerHashTable **v4; // rsi
  NSInstrumentation::CPlatformReaderWriterLock *v5; // rbx
  NSInstrumentation::CPointerHashTable *v7; // rcx
  const void *v8; // rdx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1 - 28;
  v4 = *(NSInstrumentation::CPointerHashTable ***)(W32GetSessionState(a1, a2, a3) + 104);
  v5 = v4[1];
  NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(v5);
  if ( (*(_DWORD *)v3)-- == 1 )
  {
    v7 = *v4;
    if ( *v4 )
    {
      v8 = (const void *)*((_QWORD *)v3 + 2);
      if ( v8 )
      {
        v9 = 0LL;
        NSInstrumentation::CPointerHashTable::Remove(v7, v8, &v9);
      }
    }
    NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(v5);
    EngFreeMem(v3);
  }
  else
  {
    NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(v5);
  }
}
