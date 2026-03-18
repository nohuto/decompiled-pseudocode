/*
 * XREFs of XmEmulateInterrupt @ 0x14055C170
 * Callers:
 *     x86BiosExecuteInterruptShadowed @ 0x140543B88 (x86BiosExecuteInterruptShadowed.c)
 * Callees:
 *     XmEmulateStream @ 0x14046AAC4 (XmEmulateStream.c)
 *     x86BiosTranslateAddress @ 0x14046AC70 (x86BiosTranslateAddress.c)
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
  word_140E1153C = dword_140E116A0;
  dword_140E11528 = HIWORD(dword_140E116A0);
  XmStatus = 0;
  v5 = x86BiosTranslateAddress(dword_140E116A0, HIWORD(dword_140E116A0));
  *((_WORD *)v5 - 3) = -1;
  *(v5 - 1) = 0xFFFF;
  LOWORD(dword_140E11528) = dword_140E11528 - 6;
  v6 = x86BiosTranslateAddress(0, 0);
  return XmEmulateStream(v7, HIWORD(v6[v2]), v6[v2], a2);
}
