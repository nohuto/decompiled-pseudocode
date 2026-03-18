/*
 * XREFs of ??1?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@MEAA@XZ @ 0x1800AD324
 * Callers:
 *     ??1CResource@@MEAA@XZ @ 0x1800AD07C (--1CResource@@MEAA@XZ.c)
 *     ??1CPropertySet@@UEAA@XZ @ 0x1800AD1AC (--1CPropertySet@@UEAA@XZ.c)
 *     ??1CBrush@@MEAA@XZ @ 0x1800AD2A8 (--1CBrush@@MEAA@XZ.c)
 *     ??1COverlaySwapChain@@MEAA@XZ @ 0x1801347F4 (--1COverlaySwapChain@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILCOMBaseWeakRefSource<CResourceDeleter>::~CMILCOMBaseWeakRefSource<CResourceDeleter>(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
  }
  return result;
}
