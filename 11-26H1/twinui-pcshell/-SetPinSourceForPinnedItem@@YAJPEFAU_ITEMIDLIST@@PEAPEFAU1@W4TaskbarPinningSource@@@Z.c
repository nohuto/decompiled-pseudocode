/*
 * XREFs of ?SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z @ 0x180696C64
 * Callers:
 *     ?_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEFAU_ITEMIDLIST@@@Z @ 0x1801DD4E4 (-_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEFAU_ITEMIDLIST@@@Z.c)
 *     GetPidlsFromTaskbarLayout @ 0x180690384 (GetPidlsFromTaskbarLayout.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180692D40 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x1806950C0 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x180695AE0 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 *     ?v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x18069B8D0 (-v_UpgradeItem@CPinnedList@@UEAAJKPEFAU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 * Callees:
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1802AC4C0 (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 *     ILExpungeRemovedHiddenIDs @ 0x180309AD8 (ILExpungeRemovedHiddenIDs.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PGTBPlaceholderPinning@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18031DE80 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PGTBPlaceholderPinning@@@details@wil@@QEA.c)
 *     ?ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z @ 0x180692864 (-ILAppendHiddenStringW@@YAPEFAU_ITEMIDLIST@@PEFAU1@W4IDLHID@@PEBG@Z.c)
 */

__int64 __fastcall SetPinSourceForPinnedItem(ITEMIDLIST *a1, struct _ITEMIDLIST **a2, __int64 a3)
{
  unsigned int v3; // edi
  int v4; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  WCHAR *v10; // rbx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  const struct _HIDDENITEMID *v15; // rax

  v3 = 0;
  v4 = a3;
  *a2 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PGTBPlaceholderPinning>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_PGTBPlaceholderPinning>::GetImpl'::`2'::impl,
    1u,
    a3);
  if ( v4 > 5 )
  {
    v11 = v4 - 6;
    if ( !v11 )
    {
      v10 = (WCHAR *)L"CloudPinned";
      goto LABEL_25;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v10 = (WCHAR *)L"PlaceholderPinned";
      goto LABEL_25;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v10 = (WCHAR *)L"RestorePinned";
      goto LABEL_25;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v10 = (WCHAR *)L"ProgrammablePlaceholder";
      goto LABEL_25;
    }
    if ( v14 == 1 )
    {
      v10 = (WCHAR *)L"ProgrammableRestored";
      goto LABEL_25;
    }
    return (unsigned int)-2147024809;
  }
  if ( v4 == 5 )
  {
    v10 = (WCHAR *)L"SCOOBEPinned";
    goto LABEL_25;
  }
  if ( !v4 )
  {
    v10 = (WCHAR *)L"UserPinned";
    goto LABEL_25;
  }
  v7 = v4 - 1;
  if ( !v7 )
  {
    v10 = (WCHAR *)L"SystemPinned";
    goto LABEL_25;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v10 = (WCHAR *)L"OEMPinned";
    goto LABEL_25;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v10 = (WCHAR *)L"EnterprisePinned";
    goto LABEL_25;
  }
  if ( v9 != 1 )
    return (unsigned int)-2147024809;
  v10 = (WCHAR *)L"OOBEPinned";
LABEL_25:
  v15 = ILFindHiddenIDOn(a1, -1091633122);
  if ( v15 )
  {
    *((_DWORD *)v15 + 1) = -1091633152;
    ILExpungeRemovedHiddenIDs(a1);
  }
  *a2 = ILAppendHiddenStringW(a1, -1091633122, v10);
  return v3;
}
