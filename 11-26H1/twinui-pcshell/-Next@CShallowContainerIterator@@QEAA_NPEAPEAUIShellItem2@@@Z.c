/*
 * XREFs of ?Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z @ 0x18019265C
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1800AB350 (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z @ 0x1801924DC (-_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z.c)
 *     ?AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806012D0 (-AddMissingLinksFromDefaultProfile@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ @ 0x180601530 (-CleanupObsoleteLinks@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     ?NextItem@CContainerIterator@@SAJPEAUIEnumShellItems@@PEAPEAUIShellItem2@@@Z @ 0x18019273C (-NextItem@CContainerIterator@@SAJPEAUIEnumShellItems@@PEAPEAUIShellItem2@@@Z.c)
 *     ??$_CreatePropertyBagBindCtx@K@@YAJPEAUIBindCtx@@PEBGKPEAPEAU0@@Z @ 0x1801F5AF4 (--$_CreatePropertyBagBindCtx@K@@YAJPEAUIBindCtx@@PEBGKPEAPEAU0@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CShallowContainerIterator::Next(CShallowContainerIterator *this, struct IShellItem2 **a2)
{
  char v2; // bl
  struct IEnumShellItems **v6; // rsi
  struct IEnumShellItems *v7; // rcx
  int v8; // eax
  __int64 v9; // r8
  int v10; // eax
  bool v11; // zf
  int v12; // eax
  struct IShellItem2 *v13; // rcx
  struct IShellItem2 *v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0LL;
  if ( !*(_DWORD *)this )
  {
    v6 = (struct IEnumShellItems **)((char *)this + 16);
    if ( *((_QWORD *)this + 2) )
      goto LABEL_4;
    if ( !*((_QWORD *)this + 1) )
    {
      *(_DWORD *)this = 1;
      return v2;
    }
    v9 = *((unsigned int *)this + 6);
    v14 = 0LL;
    v10 = _CreatePropertyBagBindCtx<unsigned long>(this, a2, v9, &v14);
    *(_DWORD *)this = v10;
    v11 = v10 == 0;
    if ( v10 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, struct IShellItem2 *, const GUID *, GUID *, struct IEnumShellItems **))(**((_QWORD **)this + 1) + 24LL))(
              *((_QWORD *)this + 1),
              v14,
              &BHID_EnumItems,
              &GUID_70629033_e363_4a28_a567_0db78006e6d7,
              v6);
      v13 = v14;
      *(_DWORD *)this = v12;
      ((void (__fastcall *)(struct IShellItem2 *))v13->lpVtbl->Release)(v13);
      v11 = *(_DWORD *)this == 0;
    }
    if ( v11 )
    {
LABEL_4:
      v7 = *v6;
      v14 = 0LL;
      v8 = CContainerIterator::NextItem(v7, &v14);
      *(_DWORD *)this = v8;
      if ( !v8 )
      {
        v2 = 1;
        *a2 = v14;
      }
    }
  }
  return v2;
}
