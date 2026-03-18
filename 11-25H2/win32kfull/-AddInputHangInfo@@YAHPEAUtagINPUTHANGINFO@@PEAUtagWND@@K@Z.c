/*
 * XREFs of ?AddInputHangInfo@@YAHPEAUtagINPUTHANGINFO@@PEAUtagWND@@K@Z @ 0x140216950
 * Callers:
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x14001ED60 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AddInputHangInfo(struct tagINPUTHANGINFO *a1, struct tagWND *a2, int a3)
{
  unsigned int v5; // ebx
  __int64 v7; // r9

  v5 = 0;
  v7 = Win32AllocPoolZInit(48LL, 1952936789LL);
  if ( v7 )
  {
    v5 = 1;
    *(_QWORD *)v7 = *(_QWORD *)a1;
    *(_QWORD *)(v7 + 8) = a2;
    *(_DWORD *)(v7 + 16) = a3;
    *(_QWORD *)a1 = v7;
  }
  return v5;
}
