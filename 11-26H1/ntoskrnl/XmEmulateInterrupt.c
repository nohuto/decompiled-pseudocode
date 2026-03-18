/*
 * XREFs of XmEmulateInterrupt @ 0x140596B70
 * Callers:
 *     x86BiosExecuteInterruptShadowed @ 0x140580BD8 (x86BiosExecuteInterruptShadowed.c)
 * Callees:
 *     XmEmulateStream @ 0x1404A8978 (XmEmulateStream.c)
 *     x86BiosTranslateAddress @ 0x1404A8B20 (x86BiosTranslateAddress.c)
 */

__int64 __fastcall XmEmulateInterrupt(unsigned __int8 a1, __int64 a2)
{
  __int64 v2; // rdi
  int *v5; // rax
  int *v6; // rax
  __int64 v7; // rcx

  v2 = a1;
  if ( !XmEmulatorInitialized )
    return 4LL;
  word_140E10C7C = dword_140E10DE0;
  dword_140E10C68 = HIWORD(dword_140E10DE0);
  XmStatus = 0;
  v5 = x86BiosTranslateAddress(dword_140E10DE0, HIWORD(dword_140E10DE0));
  *((_WORD *)v5 - 3) = -1;
  *(v5 - 1) = 0xFFFF;
  LOWORD(dword_140E10C68) = dword_140E10C68 - 6;
  v6 = x86BiosTranslateAddress(0, 0);
  return XmEmulateStream(v7, HIWORD(v6[v2]), v6[v2], a2);
}
