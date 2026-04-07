/*
 * XREFs of ?_LogVisualBeginAndEndValues@CAnimatedTransitionVisual@@IEAAXI@Z @ 0x180069594
 * Callers:
 *     ?OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z @ 0x1800694E0 (-OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z.c)
 * Callees:
 *     McTemplateU0ddddddddddffffqqq_EtwEventWriteTransfer @ 0x180097DD0 (McTemplateU0ddddddddddffffqqq_EtwEventWriteTransfer.c)
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
      v3 = *(_DWORD *)(v2 + 24);
    McTemplateU0ddddddddddffffqqq_EtwEventWriteTransfer(
      (_DWORD)this,
      a2,
      *((_DWORD *)this + 168),
      *((_DWORD *)this + 169),
      *((_DWORD *)this + 198),
      *((_DWORD *)this + 199),
      *((_DWORD *)this + 200),
      *((_DWORD *)this + 201),
      *((_DWORD *)this + 202),
      *((_DWORD *)this + 203),
      *((_DWORD *)this + 204),
      *((_DWORD *)this + 205),
      *((_DWORD *)this + 216),
      *((_DWORD *)this + 217),
      *((_DWORD *)this + 214),
      *((_DWORD *)this + 215),
      v3,
      *((_DWORD *)this + 224),
      a2);
  }
}
