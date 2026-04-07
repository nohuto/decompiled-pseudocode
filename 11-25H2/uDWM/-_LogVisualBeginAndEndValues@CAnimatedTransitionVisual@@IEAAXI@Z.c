/*
 * XREFs of ?_LogVisualBeginAndEndValues@CAnimatedTransitionVisual@@IEAAXI@Z @ 0x18002306C
 * Callers:
 *     ?OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z @ 0x180022FC0 (-OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z.c)
 * Callees:
 *     McTemplateU0ddddddddddffffqqq_EtwEventWriteTransfer @ 0x1800A5128 (McTemplateU0ddddddddddffffqqq_EtwEventWriteTransfer.c)
 */

void __fastcall CAnimatedTransitionVisual::_LogVisualBeginAndEndValues(CAnimatedTransitionVisual *this, int a2)
{
  __int64 v2; // r8
  int v3; // eax

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v2 = *((_QWORD *)this + 3);
    LOBYTE(v3) = 0;
    if ( v2 )
      v3 = *(_DWORD *)(*(_QWORD *)(v2 + 16) + 24LL);
    McTemplateU0ddddddddddffffqqq_EtwEventWriteTransfer(
      (_DWORD)this,
      a2,
      *((_DWORD *)this + 172),
      *((_DWORD *)this + 173),
      *((_DWORD *)this + 202),
      *((_DWORD *)this + 203),
      *((_DWORD *)this + 204),
      *((_DWORD *)this + 205),
      *((_DWORD *)this + 206),
      *((_DWORD *)this + 207),
      *((_DWORD *)this + 208),
      *((_DWORD *)this + 209),
      *((_DWORD *)this + 220),
      *((_DWORD *)this + 221),
      *((_DWORD *)this + 218),
      *((_DWORD *)this + 219),
      v3,
      *((_DWORD *)this + 228),
      a2);
  }
}
