/*
 * XREFs of ?SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z @ 0x18066FFA0
 * Callers:
 *     ?_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEFAU_ITEMIDLIST@@@Z @ 0x1801E779C (-_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEFAU_ITEMIDLIST@@@Z.c)
 *     GetPidlsFromTaskbarLayout @ 0x180669AEC (GetPidlsFromTaskbarLayout.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x18066C480 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x18066E4A0 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18066EF00 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 *     ?v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180674B90 (-v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 * Callees:
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1802B5F74 (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 *     ILExpungeRemovedHiddenIDs @ 0x18030DD20 (ILExpungeRemovedHiddenIDs.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PGTBPlaceholderPinning@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803216C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PGTBPlaceholderPinning@@@details@wil@@QEA.c)
 *     ?ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z @ 0x18066BFA4 (-ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z.c)
 */

__int64 __fastcall SetPinSourceForPinnedItem(ITEMIDLIST *a1, struct _ITEMIDLIST **a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  int v5; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  WCHAR *v11; // rbx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  const struct _HIDDENITEMID *v16; // rax

  v4 = 0;
  v5 = a3;
  *a2 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PGTBPlaceholderPinning>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_PGTBPlaceholderPinning>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  if ( v5 > 5 )
  {
    v12 = v5 - 6;
    if ( !v12 )
    {
      v11 = (WCHAR *)L"CloudPinned";
      goto LABEL_25;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v11 = (WCHAR *)L"PlaceholderPinned";
      goto LABEL_25;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v11 = (WCHAR *)L"RestorePinned";
      goto LABEL_25;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v11 = (WCHAR *)L"ProgrammablePlaceholder";
      goto LABEL_25;
    }
    if ( v15 == 1 )
    {
      v11 = (WCHAR *)L"ProgrammableRestored";
      goto LABEL_25;
    }
    return (unsigned int)-2147024809;
  }
  if ( v5 == 5 )
  {
    v11 = (WCHAR *)L"SCOOBEPinned";
    goto LABEL_25;
  }
  if ( !v5 )
  {
    v11 = (WCHAR *)L"UserPinned";
    goto LABEL_25;
  }
  v8 = v5 - 1;
  if ( !v8 )
  {
    v11 = (WCHAR *)L"SystemPinned";
    goto LABEL_25;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v11 = (WCHAR *)L"OEMPinned";
    goto LABEL_25;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v11 = (WCHAR *)L"EnterprisePinned";
    goto LABEL_25;
  }
  if ( v10 != 1 )
    return (unsigned int)-2147024809;
  v11 = (WCHAR *)L"OOBEPinned";
LABEL_25:
  v16 = ILFindHiddenIDOn(a1, -1091633122);
  if ( v16 )
  {
    *((_DWORD *)v16 + 1) = -1091633152;
    ILExpungeRemovedHiddenIDs(a1);
  }
  *a2 = ILAppendHiddenStringW(a1, -1091633122, v11);
  return v4;
}
