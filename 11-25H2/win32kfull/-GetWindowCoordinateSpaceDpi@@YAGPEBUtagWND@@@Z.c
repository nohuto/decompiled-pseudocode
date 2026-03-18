/*
 * XREFs of ?GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z @ 0x1401B1920
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x140031C80 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14003364C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     ScaleDpiOffsetWithSubpixel @ 0x1401B18A0 (ScaleDpiOffsetWithSubpixel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowCoordinateSpaceDpi(const struct tagWND *a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int16 v3; // bx
  __int64 v4; // rax

  v2 = *((_QWORD *)a1 + 5);
  v3 = (*(_DWORD *)(v2 + 288) >> 8) & 0x1FF;
  if ( !v3 )
  {
    v4 = ValidateHmonitorNoRip(*(_QWORD *)(v2 + 256), a2);
    if ( v4 )
      return *(unsigned __int16 *)(*(_QWORD *)(v4 + 40) + 60LL);
  }
  return v3;
}
