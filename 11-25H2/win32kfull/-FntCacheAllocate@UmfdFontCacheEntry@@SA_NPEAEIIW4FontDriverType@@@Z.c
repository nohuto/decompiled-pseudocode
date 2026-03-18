/*
 * XREFs of ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1401ABFD8
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B13EC (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?Win32ProbeForRead@@YAXPEAX_KK@Z @ 0x1401AC084 (-Win32ProbeForRead@@YAXPEAX_KK@Z.c)
 *     EngFntCacheAllocInternal @ 0x14026AC58 (EngFntCacheAllocInternal.c)
 *     EngFntCacheFault @ 0x1403041E0 (EngFntCacheFault.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

char __fastcall UmfdFontCacheEntry::FntCacheAllocate(void *a1, unsigned int a2, unsigned int a3, int a4)
{
  size_t v8; // rsi
  _QWORD *v9; // rax
  _DWORD v11[10]; // [rsp+20h] [rbp-28h] BYREF

  v8 = a2;
  Win32ProbeForRead(a1, a2, 1u);
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
    memmove(v9 + 2, a1, v8);
  }
  return 1;
}
