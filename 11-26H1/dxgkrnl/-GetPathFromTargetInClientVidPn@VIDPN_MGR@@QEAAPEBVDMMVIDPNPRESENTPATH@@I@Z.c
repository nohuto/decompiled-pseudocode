/*
 * XREFs of ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1402DB0E0
 * Callers:
 *     ?ReleaseDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x140260820 (-ReleaseDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 *     ?DmmIsHdrAllowedOnTarget@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1402DAD90 (-DmmIsHdrAllowedOnTarget@@YA_NPEAVDXGADAPTER@@I@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x14004B63C (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1402DB730 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

const struct DMMVIDPNPRESENTPATH *__fastcall VIDPN_MGR::GetPathFromTargetInClientVidPn(
        VIDPN_MGR *this,
        unsigned int a2)
{
  struct DMMVIDPNPRESENTPATH *v4; // rbx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  DMMVIDPNTOPOLOGY *v6; // rdi
  int PathSourceFromTarget; // eax
  struct DMMVIDPNPRESENTPATH *Path; // rdi
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( !DXGFASTMUTEX::IsOwner((VIDPN_MGR *)((char *)this + 40)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1713;
  }
  v10 = 0LL;
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(this);
  auto_rc<DMMVIDPN const>::reset(&v10, (__int64)ClientCommittedVidPnRef);
  if ( v10 )
  {
    v6 = (DMMVIDPNTOPOLOGY *)(v10 + 96);
    if ( v10 == -96 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1732;
    }
    PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v6, a2);
    if ( PathSourceFromTarget == -1 )
    {
      WdLogSingleEntry1(7LL);
      WdLogGlobalForLineNumber = 1741;
    }
    else
    {
      Path = DMMVIDPNTOPOLOGY::FindPath(v6, PathSourceFromTarget, a2);
      if ( !Path )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1751;
      }
      v4 = Path;
    }
    auto_rc<DMMVIDPN const>::reset(&v10, 0LL);
    return v4;
  }
  else
  {
    VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(7LL);
    WdLogGlobalForLineNumber = 1722;
    auto_rc<DMMVIDPN const>::reset(&v10, 0LL);
    return 0LL;
  }
}
