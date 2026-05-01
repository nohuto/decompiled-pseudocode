/*
 * XREFs of ?ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z @ 0x1802AC430
 * Callers:
 *     ?GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z @ 0x18020B708 (-GetPinSourceForPinnedItem@@YAJPEFBU_ITEMIDLIST@@PEAW4TaskbarPinningSource@@@Z.c)
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x18068EC70 (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     ?FindPinEntryFromAppId@CPinList@@QEAAPEAVPINENTRY@@PEBG_NPEAH@Z @ 0x18068EDB0 (-FindPinEntryFromAppId@CPinList@@QEAAPEAVPINENTRY@@PEBG_NPEAH@Z.c)
 *     ?GetAppIDForPinnedItem@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@PEAPEAG@Z @ 0x18068EFA0 (-GetAppIDForPinnedItem@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@PEAPEAG@Z.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180692D40 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z @ 0x180694120 (-ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z.c)
 *     ?_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z @ 0x1806994E0 (-_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x1801B6528 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1802AC4C0 (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

_BOOL8 __fastcall ILGetHiddenStringAllocW(__int64 a1, __int64 a2, void **a3)
{
  int v4; // ebx
  __int64 v5; // rax
  const void *v6; // rsi
  SIZE_T v7; // rbp
  void *v8; // rcx

  v4 = -2147467259;
  v5 = ILFindHiddenIDOn();
  if ( v5 )
  {
    if ( *(_WORD *)(v5 + 8) == 2 )
    {
      v6 = (const void *)(v5 + 10);
      v7 = 2 * ualstrlenW(v5 + 10) + 2;
      v4 = CTCoAllocPolicy::Alloc(v8, 1, v7, a3);
      if ( v4 >= 0 )
        memcpy_0(*a3, v6, v7);
    }
  }
  return v4 >= 0;
}
