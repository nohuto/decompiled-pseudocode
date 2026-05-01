/*
 * XREFs of ?_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z @ 0x1801924DC
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1800AB350 (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806012D0 (-AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     ?Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z @ 0x18019265C (-Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z.c)
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x1801927C4 (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1802B7548 (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CLauncherTipContextMenu::_AddFolderLinksToCommands(
        CLauncherTipContextMenu *this,
        struct IShellItem2 *a2,
        bool a3,
        unsigned int a4)
{
  unsigned __int64 v4; // r15
  unsigned int v7; // edi
  struct IShellItem2 *v8; // rbx
  int v9; // r14d
  bool v10; // al
  __int64 v11; // rcx
  __int64 v13; // rdx
  struct IShellItem2 *v14; // [rsp+20h] [rbp-30h] BYREF
  int v15; // [rsp+28h] [rbp-28h] BYREF
  struct IShellItem2 *v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h]
  int v18; // [rsp+40h] [rbp-10h]
  int v19; // [rsp+88h] [rbp+38h] BYREF

  v4 = a4;
  v15 = 0;
  v16 = a2;
  v17 = 0LL;
  v18 = 64;
  ((void (__fastcall *)(struct IShellItem2 *))a2->lpVtbl->AddRef)(a2);
  v7 = 0;
  v8 = 0LL;
  v14 = 0LL;
  v9 = 0;
  while ( 1 )
  {
    if ( v8 )
    {
      v14 = 0LL;
      ((void (__fastcall *)(struct IShellItem2 *))v8->lpVtbl->Release)(v8);
    }
    v10 = CShallowContainerIterator::Next((CShallowContainerIterator *)&v15, &v14);
    v8 = v14;
    if ( !v10 )
      goto LABEL_10;
    v19 = 0;
    v7 = 0x10000;
    if ( ((int (__fastcall *)(struct IShellItem2 *, __int64, int *))v14->lpVtbl->GetAttributes)(v14, 0x10000LL, &v19) >= 0
      && (v19 & 0x10000) != 0 )
    {
      v13 = *((_QWORD *)this + 48);
      if ( (*((_QWORD *)this + 49) - v13) >> 2 <= v4 )
      {
        std::_Xout_of_range("invalid vector subscript");
        goto LABEL_18;
      }
      CLauncherTipContextMenu::_AddLinkToCommands(this, v8, a3, v9 + *(_DWORD *)(v13 + 4 * v4));
      ++v9;
    }
    if ( *((_BYTE *)this + 322) )
      break;
    v7 = 0;
  }
  v7 = -2147467260;
LABEL_10:
  if ( v8 )
    ((void (__fastcall *)(struct IShellItem2 *))v8->lpVtbl->Release)(v8);
  v11 = v17;
  v17 = 0LL;
  if ( v11 )
LABEL_18:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  SafeRelease<IShellItemArray>(&v16);
  return v7;
}
