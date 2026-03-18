/*
 * XREFs of ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1402AB7A4
 * Callers:
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x14025B780 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x14025CB60 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?RemovePath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z @ 0x140266DD0 (-RemovePath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1402A9F68 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1402AA220 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403451A4 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x14038275C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x140384650 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAXXZ @ 0x14002CCFC (-_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAXXZ.c)
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAXXZ @ 0x14002CF00 (-_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAXXZ.c)
 *     ?FindByValue@?$Set@VDMMVIDPNPRESENTPATH@@@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x140046060 (-FindByValue@-$Set@VDMMVIDPNPRESENTPATH@@@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNPRESENTPATH@@@@@@QEAAEQEBVDMMVIDPNPRESENTPATH@@@Z @ 0x1400460CC (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U-$DoubleLinkedListElementDeleter@.c)
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x14004A9E8 (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x14004B63C (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x14004B810 (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     ??A?$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEBAAEBTModifyingActionConstraints@ProtectableFromChange@@_K@Z @ 0x140053238 (--A-$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEBAAEBTModifyingActionConstrai.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x140384408 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::RemovePath(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        unsigned int a3,
        struct DMMVIDPNPRESENTPATH **a4)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  ProtectableFromChange *v8; // r15
  struct DMMVIDPNPRESENTPATH *Path; // r14
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rbx
  DMMVIDPNTARGET *v16; // rbp
  __int64 v17; // rdx
  __int64 result; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v4 = a3;
  v5 = a2;
  if ( a4 )
    *a4 = 0LL;
  v8 = (DMMVIDPNTOPOLOGY *)((char *)this + 56);
  if ( !ProtectableFromChange::IsModifyingActionAllowed((DMMVIDPNTOPOLOGY *)((char *)this + 56), 2u) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 778;
    return 3221225506LL;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(this, v5, v4);
  if ( Path )
  {
    if ( *((_BYTE *)this + 76) <= 2u )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 306;
    }
    if ( (*(_BYTE *)Vector<ProtectableFromChange::ModifyingActionConstraints>::operator[]((__int64)this + 80, 2uLL) & 1) != 0 )
    {
      v22 = 0LL;
      if ( DMMVIDPNTOPOLOGY::GetNumPathsFromSource(this, v5, &v22) < 0 || (v21 = v22) == 0 )
      {
        WdLogSingleEntry0(1LL);
        v21 = v22;
        WdLogGlobalForLineNumber = 808;
      }
      if ( v21 < 2 )
      {
        WdLogSingleEntry3(2LL, this, v5, v4);
        WdLogGlobalForLineNumber = 815;
        return 3221225506LL;
      }
    }
    v10 = Set<DMMVIDPNPRESENTPATH>::FindByValue((__int64)this, (__int64)Path);
    if ( DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::ContainsByReference(
           (__int64)this + 8,
           (__int64)v10) )
    {
      v11 = v10 + 1;
      v12 = v10[1];
      if ( *(_QWORD **)(v12 + 8) != v10 + 1 || (v13 = (_QWORD *)v10[2], (_QWORD *)*v13 != v11) )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      *v11 = 0LL;
      v10[2] = 0LL;
      --*((_QWORD *)this + 5);
    }
    else
    {
      v10 = 0LL;
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 826;
    }
    v14 = 0LL;
    *((_DWORD *)this + 49) &= ~(1 << (*((_DWORD *)v10 + 26) - 1));
    v15 = (_QWORD *)((char *)this + 24);
    v16 = (DMMVIDPNTARGET *)v10[12];
    if ( (_QWORD *)*v15 != v15 )
      v14 = *v15 - 8LL;
    if ( v14 )
    {
      while ( *(_DWORD *)(*(_QWORD *)(v14 + 96) + 24LL) != *((_DWORD *)v16 + 6) )
      {
        v19 = *(_QWORD **)(v14 + 8);
        v14 = (__int64)(v19 - 1);
        if ( v19 == v15 )
          v14 = 0LL;
        if ( !v14 )
          goto LABEL_17;
      }
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 846;
    }
LABEL_17:
    DMMVIDPNTARGET::_SetEmptyCofuncModeSet(v16);
    v17 = 0LL;
    if ( (_QWORD *)*v15 != v15 )
      v17 = *v15 - 8LL;
    if ( v17 )
    {
      while ( *(_DWORD *)(*(_QWORD *)(v17 + 88) + 24LL) != *(_DWORD *)(v10[11] + 24LL) )
      {
        v20 = *(_QWORD **)(v17 + 8);
        v17 = (__int64)(v20 - 1);
        if ( v20 == v15 )
          v17 = 0LL;
        if ( !v17 )
          goto LABEL_31;
      }
    }
    else
    {
LABEL_31:
      DMMVIDPNSOURCE::_SetEmptyCofuncModeSet((DMMVIDPNSOURCE *)v10[11]);
    }
    if ( a4 )
      *a4 = (struct DMMVIDPNPRESENTPATH *)v10;
    else
      (*(void (__fastcall **)(_QWORD *, __int64))*v10)(v10, 1LL);
    ProtectableFromChange::OnModifyingActionCompletion(v8, 2u);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry3(2LL, v5, v4, this);
    result = 3223192359LL;
    WdLogGlobalForLineNumber = 791;
  }
  return result;
}
