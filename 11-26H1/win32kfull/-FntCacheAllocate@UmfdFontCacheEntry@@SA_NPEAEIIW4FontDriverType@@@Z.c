/*
 * XREFs of ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x14025AC08
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400D02BC (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     EngFntCacheAllocInternal @ 0x14029054C (EngFntCacheAllocInternal.c)
 *     EngFntCacheFault @ 0x1402960A0 (EngFntCacheFault.c)
 */

char __fastcall UmfdFontCacheEntry::FntCacheAllocate(volatile void *a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rax
  _DWORD v11[10]; // [rsp+30h] [rbp-28h] BYREF

  v8 = a2;
  ProbeForRead(a1, a2, 1u);
  if ( a2 >= 0xFFFFFFF0 )
    return 0;
  v11[0] = 0;
  v9 = (_QWORD *)EngFntCacheAllocInternal(a3, a2 + 16, v11);
  if ( v11[0] )
    return 0;
  if ( v9 )
  {
    *v9 = 0LL;
    v9[1] = 0LL;
    *(_DWORD *)v9 = a4;
    GreProbeAndReadFromUntrustedVa(v9 + 2, v8, (const void *)a1, v8, 1uLL);
  }
  return 1;
}
