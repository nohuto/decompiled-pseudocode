/*
 * XREFs of ?_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z @ 0x180198E6C
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x18009D874 (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DC6CC (-AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     ?Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z @ 0x180198FDC (-Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z.c)
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x18019913C (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1802C068C (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CLauncherTipContextMenu::_AddFolderLinksToCommands(
        CLauncherTipContextMenu *this,
        struct IShellItem2 *a2,
        bool a3,
        unsigned int a4)
{
  unsigned __int64 v4; // r14
  struct IShellItem2 *v7; // rbx
  struct IShellItem2 *v8; // rcx
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct IShellItem2 *v13; // [rsp+20h] [rbp-30h] BYREF
  int v14; // [rsp+28h] [rbp-28h] BYREF
  struct IShellItem2 *v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h]
  int v17; // [rsp+40h] [rbp-10h]
  int v18; // [rsp+78h] [rbp+28h] BYREF

  v4 = a4;
  v14 = 0;
  v15 = a2;
  v16 = 0LL;
  v17 = 64;
  ((void (__fastcall *)(struct IShellItem2 *))a2->lpVtbl->AddRef)(a2);
  LODWORD(v7) = 0;
  v8 = 0LL;
  v13 = 0LL;
  v9 = 0;
  while ( 1 )
  {
    if ( v8 )
    {
      v13 = 0LL;
      ((void (__fastcall *)(struct IShellItem2 *))v8->lpVtbl->Release)(v8);
    }
    if ( !CShallowContainerIterator::Next((CShallowContainerIterator *)&v14, &v13) )
      goto LABEL_13;
    v18 = 0;
    v7 = v13;
    if ( ((int (__fastcall *)(struct IShellItem2 *, __int64, int *))v13->lpVtbl->GetAttributes)(v13, 0x10000LL, &v18) >= 0
      && (v18 & 0x10000) != 0 )
    {
      v10 = *((_QWORD *)this + 48);
      if ( (*((_QWORD *)this + 49) - v10) >> 2 <= v4 )
      {
        std::_Xout_of_range("invalid vector subscript");
        goto LABEL_18;
      }
      CLauncherTipContextMenu::_AddLinkToCommands(this, v7, a3, v9 + *(_DWORD *)(v10 + 4 * v4));
      ++v9;
    }
    if ( *((_BYTE *)this + 322) )
      break;
    LODWORD(v7) = 0;
    v8 = v13;
  }
  LODWORD(v7) = -2147467260;
LABEL_13:
  if ( v13 )
    ((void (__fastcall *)(struct IShellItem2 *))v13->lpVtbl->Release)(v13);
  v11 = v16;
  v16 = 0LL;
  if ( v11 )
LABEL_18:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  SafeRelease<IShellItemArray>(&v15);
  return (unsigned int)v7;
}
