/*
 * XREFs of ?Destroy@DXGK_TRANSPORT_BUFFER@@QEAAXXZ @ 0x140191408
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402E7F14 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DestroyLiveMigrationState@DXGK_VIRTUAL_GPU_GPUP@@QEAAXXZ @ 0x1403FACB0 (-DestroyLiveMigrationState@DXGK_VIRTUAL_GPU_GPUP@@QEAAXXZ.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x140007E9C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGK_TRANSPORT_BUFFER::Destroy(DXGK_TRANSPORT_BUFFER *this)
{
  DXGPROCESS *Current; // rax

  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 760LL) + 8LL) + 1264LL))(
    *(_QWORD *)(*((_QWORD *)this + 3) + 768LL),
    *((_QWORD *)this + 4));
  Current = DXGPROCESS::GetCurrent();
  DXGPROCESS::FreeHandleSafe(Current, *(_DWORD *)this);
  *((_QWORD *)this + 4) = 0LL;
  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_BYTE *)this + 40) = 0;
}
