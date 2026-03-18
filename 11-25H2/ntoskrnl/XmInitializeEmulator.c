/*
 * XREFs of XmInitializeEmulator @ 0x14055C208
 * Callers:
 *     x86BiosInitializeBiosShadowed @ 0x140543CEC (x86BiosInitializeBiosShadowed.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x14046AC70 (x86BiosTranslateAddress.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 XmInitializeEmulator()
{
  _WORD *v0; // rax
  int *v1; // rdi
  __int64 v2; // rcx
  __int64 result; // rax

  memset_0(&XmContext, 0, 0x1C0uLL);
  v0 = &unk_140E1154E;
  do
    *v0-- = -1;
  while ( (__int64)v0 >= (__int64)word_140E11544 );
  dword_140E116A0 = 0x8000000;
  dword_140E11528 = 2048;
  word_140E1153C = 0;
  qword_140E116A8 = (__int64)x86BiosReadIoSpace;
  qword_140E116B0 = (__int64)x86BiosWriteIoSpace;
  qword_140E116B8 = (__int64)x86BiosTranslateAddress;
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
