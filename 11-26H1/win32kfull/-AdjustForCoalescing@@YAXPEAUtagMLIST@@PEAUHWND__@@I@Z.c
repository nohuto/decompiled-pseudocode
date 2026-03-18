/*
 * XREFs of ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x14019C53C
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140021BA8 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     _PostThreadMessageEx @ 0x1401D3210 (_PostThreadMessageEx.c)
 * Callees:
 *     DelQEntry @ 0x140095C20 (DelQEntry.c)
 */

void __fastcall AdjustForCoalescing(struct tagMLIST *a1, HWND a2, int a3)
{
  __int64 v4; // rdx

  if ( (unsigned int)(a3 - 912) <= 0xF || a3 == 30 )
  {
    v4 = *((_QWORD *)a1 + 1);
    if ( v4 && *(_DWORD *)(v4 + 24) == a3 && *(HWND *)(v4 + 16) == a2 )
      DelQEntry((__int64)a1, v4, 1);
  }
}
