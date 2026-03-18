/*
 * XREFs of WindowHasShadow @ 0x1400E1290
 * Callers:
 *     NtUserSetLayeredWindowAttributes @ 0x1400E0EB0 (NtUserSetLayeredWindowAttributes.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140233E58 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1400E12C0 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall WindowHasShadow(struct tagWND *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
    return FindShadow(a1) != 0LL;
  return v1;
}
