/*
 * XREFs of ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140259390
 * Callers:
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x14025AE74 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x140054670 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1401CD9F8 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1403EF914 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042C10C (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPnViaSDC(
        ADAPTER_DISPLAY **this,
        struct DMMVIDPN *a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v8; // rdx
  __int64 result; // rax
  struct _DXGK_WIN32K_PARAM_DATA *Pool2; // rax
  struct _DXGK_WIN32K_PARAM_DATA *v11; // rdi
  struct DXGADAPTER *ContainingAdapter; // rax
  struct DXGADAPTER *v13; // rax
  int v14; // eax
  __int64 v15; // rbp
  int v16; // eax
  struct DXGADAPTER *v17; // rax
  PVOID ModesArray; // rcx

  if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(this + 5)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1401;
  }
  if ( !Set<DMMVIDPN>::FindByValue((__int64)(this + 17), (__int64)a2) )
  {
    WdLogSingleEntry2(2LL, v8, this);
    WdLogGlobalForLineNumber = 1409;
    return 3223192323LL;
  }
  if ( !DMMVIDPN::IsFunctional(a2, v8) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1418;
    return 3223192323LL;
  }
  Pool2 = (struct _DXGK_WIN32K_PARAM_DATA *)ExAllocatePool2(256LL, 32LL, 1313891414LL);
  v11 = Pool2;
  if ( !Pool2 )
  {
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
    WdLogSingleEntry2(6LL, ContainingAdapter, 32LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 1430;
    return result;
  }
  *(_OWORD *)&Pool2->PathsArray = 0LL;
  *(_OWORD *)&Pool2->NumPathArrayElements = 0LL;
  v13 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
  v14 = DispConfigConvertFromVidPn(v11, v13, a2, a3);
  LODWORD(v15) = v14;
  if ( v14 < 0 )
  {
    WdLogSingleEntry3(2LL, a2, v11, v14);
    WdLogGlobalForLineNumber = 1456;
  }
  else
  {
    if ( !this[1] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    v16 = ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this[1], v11, a4);
    v15 = v16;
    if ( v16 >= 0 )
      return (unsigned int)v15;
    v17 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
    WdLogSingleEntry2(2LL, v17, v15);
    WdLogGlobalForLineNumber = 1448;
  }
  ModesArray = v11->ModesArray;
  if ( ModesArray )
  {
    ExFreePoolWithTag(ModesArray, 0);
    v11->ModesArray = 0LL;
  }
  if ( v11->PathsArray )
  {
    ExFreePoolWithTag(v11->PathsArray, 0);
    v11->PathsArray = 0LL;
  }
  ExFreePoolWithTag(v11, 0);
  return (unsigned int)v15;
}
