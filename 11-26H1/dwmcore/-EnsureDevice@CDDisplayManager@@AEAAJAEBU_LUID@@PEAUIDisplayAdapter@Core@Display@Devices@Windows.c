/*
 * XREFs of ?EnsureDevice@CDDisplayManager@@AEAAJAEBU_LUID@@PEAUIDisplayAdapter@Core@Display@Devices@Windows@@PEAPEAUIDisplayDevice@4567@@Z @ 0x1801BB408
 * Callers:
 *     ?GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z @ 0x18029EABC (-GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Find_lower_bound@U_LUID@@@?$_Tree@V?$_Tmap_traits@U_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@ULUIDComparator@CDDisplayManager@@V?$allocator@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBU_LUID@@@Z @ 0x1801BB524 (--$_Find_lower_bound@U_LUID@@@-$_Tree@V-$_Tmap_traits@U_LUID@@V-$com_ptr_t@UIDisplayDevice@Core@.c)
 *     ??$_Emplace@AEBU_LUID@@AEAV?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@U_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@ULUIDComparator@CDDisplayManager@@V?$allocator@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_LUID@@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBU_LUID@@AEAV?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18029C164 (--$_Emplace@AEBU_LUID@@AEAV-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_return.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayManager::EnsureDevice(
        CDDisplayManager *this,
        const struct _LUID *a2,
        struct Windows::Devices::Display::Core::IDisplayAdapter *a3,
        struct Windows::Devices::Display::Core::IDisplayDevice **a4)
{
  unsigned int v6; // ebx
  _QWORD *v7; // r8
  __int64 v8; // r10
  __int64 v9; // rcx
  struct Windows::Devices::Display::Core::IDisplayDevice *v10; // rax
  __int64 v12; // rax
  int v13; // eax
  struct Windows::Devices::Display::Core::IDisplayDevice *v14; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v15[16]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v16; // [rsp+48h] [rbp-10h]

  v6 = 0;
  std::_Tree<std::_Tmap_traits<_LUID,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>,CDDisplayManager::LUIDComparator,std::allocator<std::pair<_LUID const,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>>,0>>::_Find_lower_bound<_LUID>(
    &qword_1803DE740,
    v15,
    a2);
  v9 = v16;
  if ( *(_BYTE *)(v16 + 25) || *v7 < *(_QWORD *)(v16 + 32) )
    v9 = qword_1803DE740;
  if ( v9 != qword_1803DE740 )
  {
    v10 = *(struct Windows::Devices::Display::Core::IDisplayDevice **)(v9 + 40);
    v14 = v10;
    if ( !v10 )
    {
LABEL_7:
      *a4 = v10;
      return v6;
    }
    (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayDevice *))(*(_QWORD *)v10 + 8LL))(v10);
LABEL_6:
    v10 = v14;
    goto LABEL_7;
  }
  v12 = *g_DDisplayManager;
  v14 = 0LL;
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct Windows::Devices::Display::Core::IDisplayDevice **))(v12 + 112))(
          g_DDisplayManager,
          v8,
          &v14);
  v6 = v13;
  if ( v13 >= 0 )
  {
    std::_Tree<std::_Tmap_traits<_LUID,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>,CDDisplayManager::LUIDComparator,std::allocator<std::pair<_LUID const,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>>>,0>>::_Emplace<_LUID const &,wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy> &>(
      &qword_1803DE740,
      v15,
      a2,
      &v14);
    goto LABEL_6;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x2D1u, 0LL);
  if ( v14 )
    (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayDevice *))(*(_QWORD *)v14 + 16LL))(v14);
  return v6;
}
