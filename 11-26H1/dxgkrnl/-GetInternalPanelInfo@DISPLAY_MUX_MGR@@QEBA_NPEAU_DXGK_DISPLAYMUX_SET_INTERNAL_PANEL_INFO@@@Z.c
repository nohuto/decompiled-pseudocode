/*
 * XREFs of ?GetInternalPanelInfo@DISPLAY_MUX_MGR@@QEBA_NPEAU_DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO@@@Z @ 0x14008C580
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x14008D6DC (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 *     DpiMdmProcessAdapterBrightness @ 0x140090678 (DpiMdmProcessAdapterBrightness.c)
 * Callees:
 *     <none>
 */

char __fastcall DISPLAY_MUX_MGR::GetInternalPanelInfo(
        DISPLAY_MUX_MGR *this,
        struct _DXGK_DISPLAYMUX_SET_INTERNAL_PANEL_INFO *a2)
{
  char *v3; // rdx

  if ( !*((_BYTE *)this + 148) )
    return 0;
  if ( a2 )
  {
    *(_OWORD *)a2 = *(_OWORD *)((char *)this + 149);
    *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 165);
    *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)this + 181);
    *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)this + 197);
    *((_OWORD *)a2 + 4) = *(_OWORD *)((char *)this + 213);
    *((_OWORD *)a2 + 5) = *(_OWORD *)((char *)this + 229);
    *((_OWORD *)a2 + 6) = *(_OWORD *)((char *)this + 245);
    v3 = (char *)a2 + 128;
    *((_OWORD *)v3 - 1) = *(_OWORD *)((char *)this + 261);
    *(_OWORD *)v3 = *(_OWORD *)((char *)this + 277);
    *((_OWORD *)v3 + 1) = *(_OWORD *)((char *)this + 293);
    *((_OWORD *)v3 + 2) = *(_OWORD *)((char *)this + 309);
    *((_OWORD *)v3 + 3) = *(_OWORD *)((char *)this + 325);
    *((_OWORD *)v3 + 4) = *(_OWORD *)((char *)this + 341);
    v3[80] = *((_BYTE *)this + 357);
  }
  return 1;
}
