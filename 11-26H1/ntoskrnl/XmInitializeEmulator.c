/*
 * XREFs of XmInitializeEmulator @ 0x140596C08
 * Callers:
 *     x86BiosInitializeBiosShadowed @ 0x140580D3C (x86BiosInitializeBiosShadowed.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1404A8B20 (x86BiosTranslateAddress.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 XmInitializeEmulator()
{
  _WORD *v0; // rax
  int *v1; // rdi
  __int64 v2; // rcx
  __int64 result; // rax

  memset_0(&XmContext, 0, 0x1C0uLL);
  v0 = &unk_140E10C8E;
  do
    *v0-- = -1;
  while ( (__int64)v0 >= (__int64)word_140E10C84 );
  dword_140E10DE0 = 0x8000000;
  dword_140E10C68 = 2048;
  word_140E10C7C = 0;
  qword_140E10DE8 = (__int64)x86BiosReadIoSpace;
  qword_140E10DF0 = (__int64)x86BiosWriteIoSpace;
  qword_140E10DF8 = (__int64)x86BiosTranslateAddress;
  v1 = x86BiosTranslateAddress(0, 0);
  XmEmulatorInitialized = 1;
  v2 = 256LL;
  v1[320] = 207;
  result = 1280LL;
  while ( v2 )
  {
    *v1++ = 1280;
    --v2;
  }
  return result;
}
