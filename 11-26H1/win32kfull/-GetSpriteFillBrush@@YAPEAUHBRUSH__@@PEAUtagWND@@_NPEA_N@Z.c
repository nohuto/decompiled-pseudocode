/*
 * XREFs of ?GetSpriteFillBrush@@YAPEAUHBRUSH__@@PEAUtagWND@@_NPEA_N@Z @ 0x140040868
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x140041344 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall GetSpriteFillBrush(struct tagWND *a1, __int64 a2, bool *a3)
{
  bool v5; // bl
  unsigned __int64 SolidBrush; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 1076LL) == -1
    && (v7 = *((unsigned int *)a1 + 45), (_DWORD)v7 == -1) )
  {
    v5 = 0;
    if ( (_BYTE)a2 )
    {
      SolidBrush = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, a2) + 19904) + 4736LL);
    }
    else
    {
      v8 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
      SolidBrush = *(_QWORD *)(v8 + 72);
      if ( SolidBrush && SolidBrush <= 0x1F )
        SolidBrush = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, a2) + 19904) + 8 * SolidBrush + 4688);
    }
  }
  else
  {
    v5 = 1;
    SolidBrush = GreCreateSolidBrush();
  }
  *a3 = v5;
  return SolidBrush;
}
