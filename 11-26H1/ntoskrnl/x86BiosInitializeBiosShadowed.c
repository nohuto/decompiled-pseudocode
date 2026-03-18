/*
 * XREFs of x86BiosInitializeBiosShadowed @ 0x140580D3C
 * Callers:
 *     x86BiosInitializeBiosEx @ 0x140580CB8 (x86BiosInitializeBiosEx.c)
 * Callees:
 *     XmInitializeEmulator @ 0x140596C08 (XmInitializeEmulator.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall x86BiosInitializeBiosShadowed(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  memset_0(&x86BiosLowMemory, 0, 0x800uLL);
  x86BiosIoSpace = 0LL;
  x86BiosIoMemory = a2;
  x86BiosFrameBuffer = a3;
  result = XmInitializeEmulator();
  x86BiosInitialized = 1;
  return result;
}
