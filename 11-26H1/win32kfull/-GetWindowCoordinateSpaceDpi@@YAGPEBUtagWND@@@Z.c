/*
 * XREFs of ?GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z @ 0x14002F6D0
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x14002D070 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14002EDBC (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     ScaleDpiOffsetWithSubpixel @ 0x1401F43FC (ScaleDpiOffsetWithSubpixel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowCoordinateSpaceDpi(const struct tagWND *a1)
{
  __int64 v1; // rcx
  unsigned __int16 v2; // bx
  __int64 v3; // rax

  v1 = *((_QWORD *)a1 + 5);
  v2 = (*(_DWORD *)(v1 + 288) >> 8) & 0x1FF;
  if ( !v2 )
  {
    v3 = ValidateHmonitorNoRip(*(_QWORD *)(v1 + 256));
    if ( v3 )
      return *(unsigned __int16 *)(*(_QWORD *)(v3 + 40) + 60LL);
  }
  return v2;
}
