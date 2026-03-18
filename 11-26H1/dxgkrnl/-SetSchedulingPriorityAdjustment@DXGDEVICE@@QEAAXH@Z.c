/*
 * XREFs of ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1403EEBD4
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404348A4 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N0@Z @ 0x140192EFC (-SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N0@Z.c)
 */

void __fastcall DXGDEVICE::SetSchedulingPriorityAdjustment(DXGDEVICE *this, int a2)
{
  char *v2; // rsi
  char *i; // rdi
  char *v5; // rax
  DXGCONTEXT *v6; // rbx

  v2 = (char *)this + 496;
  for ( i = (char *)*((_QWORD *)this + 62); ; i = *(char **)i )
  {
    v5 = 0LL;
    if ( i != v2 )
      v5 = i;
    if ( !v5 )
      break;
    v6 = (DXGCONTEXT *)i;
    if ( i == v2 )
      v6 = 0LL;
    DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL) + 16LL));
    DXGCONTEXT::SetSchedulingPriority(v6, a2 + *((_DWORD *)v6 + 105));
    *((_DWORD *)v6 + 104) = a2;
  }
}
