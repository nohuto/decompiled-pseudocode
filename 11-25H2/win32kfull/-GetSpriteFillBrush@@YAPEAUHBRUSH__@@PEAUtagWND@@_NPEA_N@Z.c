/*
 * XREFs of ?GetSpriteFillBrush@@YAPEAUHBRUSH__@@PEAUtagWND@@_NPEA_N@Z @ 0x140057588
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x140057650 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     SetRedirectedWindow @ 0x1400B4EC4 (SetRedirectedWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSpriteFillBrush(struct tagWND *a1, __int64 a2, bool *a3)
{
  int v5; // ecx
  bool v6; // di
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 SolidBrush; // rbx

  v5 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 1076LL);
  v6 = v5 != -1;
  if ( v5 == -1 && (v7 = *((unsigned int *)a1 + 45), v6 = (_DWORD)v7 != -1, (_DWORD)v7 == -1) )
  {
    if ( (_BYTE)a2 )
    {
      SolidBrush = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, a2) + 19872) + 4736LL);
    }
    else
    {
      v8 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
      SolidBrush = *(_QWORD *)(v8 + 72);
      if ( (unsigned __int64)(SolidBrush - 1) <= 0x1E )
        SolidBrush = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, a2) + 19872) + 8 * SolidBrush + 4688);
    }
  }
  else
  {
    SolidBrush = GreCreateSolidBrush();
  }
  *a3 = v6;
  return SolidBrush;
}
