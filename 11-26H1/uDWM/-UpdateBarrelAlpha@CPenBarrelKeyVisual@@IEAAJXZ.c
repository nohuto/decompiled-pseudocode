/*
 * XREFs of ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800133AC
 * Callers:
 *     ?Update@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@K@Z @ 0x1800132C0 (-Update@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@K@Z.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x18004F36C (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 *     ?ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z @ 0x18005ED6C (-ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x180068984 (-Unhide@CVisual@@QEAAXXZ.c)
 *     ?Hide@CVisual@@QEAAXXZ @ 0x180078960 (-Hide@CVisual@@QEAAXXZ.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x18008B5D4 (McTemplateU0q_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::UpdateBarrelAlpha(CVisual **this)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( *((_BYTE *)this + 268) && (*((_DWORD *)this + 59) & 0x20) != 0 )
  {
    if ( *((_BYTE *)this + 269) )
    {
      CVisual::Unhide(this[31]);
      *((_BYTE *)this + 269) = 0;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0q_EtwEventWriteTransfer(v4, &UdwmPenBarrel_Start, *((unsigned int *)this + 56));
      *((_BYTE *)this + 270) = 1;
    }
  }
  else if ( !*((_BYTE *)this + 269) )
  {
    CVisual::Hide(this[31]);
    *((_BYTE *)this + 269) = 1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0q_EtwEventWriteTransfer(v3, &UdwmPenBarrel_Stop, *((unsigned int *)this + 56));
    *((_BYTE *)this + 270) = 0;
  }
  return 0LL;
}
