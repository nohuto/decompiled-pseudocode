/*
 * XREFs of DxgkRemoveAdapter @ 0x1401E0898
 * Callers:
 *     DpiRemoveAdapter @ 0x1400859EC (DpiRemoveAdapter.c)
 * Callees:
 *     ?Stop@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@EE@Z @ 0x14019FF84 (-Stop@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@EE@Z.c)
 */

void __fastcall DxgkRemoveAdapter(struct _LUID *a1, DXGADAPTER *this, unsigned __int8 a3, unsigned __int8 a4)
{
  if ( this && *((_DWORD *)this + 50) != 2 && *((_DWORD *)this + 50) != 4 )
    DXGADAPTER::Stop(this, a1, a3, a4);
}
