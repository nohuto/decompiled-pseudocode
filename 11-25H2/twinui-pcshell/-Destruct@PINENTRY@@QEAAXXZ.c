/*
 * XREFs of ?Destruct@PINENTRY@@QEAAXXZ @ 0x18066823C
 * Callers:
 *     ?DestroyCallback@PINENTRY@@SAHPEAV1@PEAX@Z @ 0x180668220 (-DestroyCallback@PINENTRY@@SAHPEAV1@PEAX@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18066EF00 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 * Callees:
 *     <none>
 */

void __fastcall PINENTRY::Destruct(PINENTRY *this)
{
  ILFree(*(LPITEMIDLIST *)this);
  *((_DWORD *)this + 6) = 0;
  SafeRelease<IShellItemArray>((__int64 *)this + 1);
}
