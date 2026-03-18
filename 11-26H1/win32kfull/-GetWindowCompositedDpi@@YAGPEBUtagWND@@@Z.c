/*
 * XREFs of ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1401F1C9C
 * Callers:
 *     SelectWindowRgn @ 0x140018490 (SelectWindowRgn.c)
 *     GetMaxTrackSizeForWindow @ 0x14003289C (GetMaxTrackSizeForWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowCompositedDpi(const struct tagWND *a1)
{
  unsigned __int16 v2; // cx
  __int64 v3; // rax

  v2 = 0;
  v3 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 488LL);
  if ( v3 && (*(_DWORD *)(**(_QWORD **)(v3 + 8) + 64LL) & 1) != 0 )
    return (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) >> 8) & 0x1FF;
  return v2;
}
