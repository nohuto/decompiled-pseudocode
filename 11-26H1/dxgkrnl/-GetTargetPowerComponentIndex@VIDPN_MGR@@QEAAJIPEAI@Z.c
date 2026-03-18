/*
 * XREFs of ?GetTargetPowerComponentIndex@VIDPN_MGR@@QEAAJIPEAI@Z @ 0x14025C630
 * Callers:
 *     ?DmmGetVidPnTargetPowerComponentIndex@@YAJQEAXIPEAI@Z @ 0x1401914E8 (-DmmGetVidPnTargetPowerComponentIndex@@YAJQEAXIPEAI@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x14003CFA8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 */

__int64 __fastcall VIDPN_MGR::GetTargetPowerComponentIndex(VIDPN_MGR *this, unsigned int a2, unsigned int *a3)
{
  __int64 v6; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  struct DXGADAPTER *ContainingAdapter; // rax
  unsigned int v10; // eax

  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 15) + 72LL));
  v6 = *((_QWORD *)this + 15);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v6, a2);
  if ( TargetById )
  {
    v10 = *((_DWORD *)TargetById + 100);
    *a3 = v10;
    if ( v10 == -1 )
    {
      if ( v6 )
        ReferenceCounted::Release((ReferenceCounted *)(v6 + 64));
      return 3221225485LL;
    }
    else
    {
      if ( v6 )
        ReferenceCounted::Release((ReferenceCounted *)(v6 + 64));
      return 0LL;
    }
  }
  else
  {
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry2(2LL, a2, ContainingAdapter);
    WdLogGlobalForLineNumber = 5983;
    if ( v6 )
      ReferenceCounted::Release((ReferenceCounted *)(v6 + 64));
    return 3223192325LL;
  }
}
