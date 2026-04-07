/*
 * XREFs of ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18002D2F8
 * Callers:
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x18002BA14 (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 *     ?Update@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@K@Z @ 0x18002D20C (-Update@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@K@Z.c)
 *     ?ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z @ 0x180070F98 (-ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Hide@CVisual@@QEAAXXZ @ 0x180004498 (-Hide@CVisual@@QEAAXXZ.c)
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x180005CFC (-Unhide@CVisual@@QEAAXXZ.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180097EBC (McTemplateU0q_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::UpdateBarrelAlpha(CVisual **this)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( *((_BYTE *)this + 300) && (*((_DWORD *)this + 67) & 0x20) != 0 )
  {
    if ( *((_BYTE *)this + 301) )
    {
      CVisual::Unhide(this[35]);
      *((_BYTE *)this + 301) = 0;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0q_EtwEventWriteTransfer(v4, &UdwmPenBarrel_Start, *((unsigned int *)this + 64));
      *((_BYTE *)this + 302) = 1;
    }
  }
  else if ( !*((_BYTE *)this + 301) )
  {
    CVisual::Hide(this[35]);
    *((_BYTE *)this + 301) = 1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0q_EtwEventWriteTransfer(v3, &UdwmPenBarrel_Stop, *((unsigned int *)this + 64));
    *((_BYTE *)this + 302) = 0;
  }
  return 0LL;
}
