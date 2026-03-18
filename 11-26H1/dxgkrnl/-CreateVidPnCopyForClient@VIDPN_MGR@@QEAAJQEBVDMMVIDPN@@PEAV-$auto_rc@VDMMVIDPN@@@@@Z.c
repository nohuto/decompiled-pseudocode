/*
 * XREFs of ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1403444C8
 * Callers:
 *     ?CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x140262A20 (-CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x14026BCB4 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x140344370 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?Add@?$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x14004ED44 (-Add@-$Set@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1402A7B08 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CreateVidPnCopyForClient(
        VIDPN_MGR *this,
        const struct DMMVIDPNSOURCESET **a2,
        __int64 *a3)
{
  __int64 v6; // rbx
  DMMVIDPN *v7; // rax
  unsigned __int8 v8; // r8
  DMMVIDPN *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 result; // rax
  unsigned int v13; // ebx

  v6 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = VIDPN_MGR::GetContainingAdapter(this);
  WdLogGlobalForLineNumber = 1022;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1026;
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1027;
  }
  if ( *a3 )
    ReferenceCounted::Release((ReferenceCounted *)(*a3 + 24));
  *a3 = 0LL;
  v7 = (DMMVIDPN *)operator new(0x140uLL, 0x4E506456u, 256LL);
  if ( v7 && (v9 = DMMVIDPN::DMMVIDPN(v7, a2, v8), (v10 = (__int64)v9) != 0) )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(__int64))v9 + 9))((__int64)v9 + 72) )
    {
      if ( !DXGFASTMUTEX::IsOwner((VIDPN_MGR *)((char *)this + 40)) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1056;
      }
      if ( Set<DMMVIDPN>::Add((__int64)this + 136, v10) != 1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1063;
      }
      v11 = *a3;
      if ( *a3 )
      {
        if ( v10 != v11 )
          ReferenceCounted::Release((ReferenceCounted *)(v11 + 24));
      }
      *a3 = v10;
      return 0LL;
    }
    else
    {
      WdLogSingleEntry3(7LL, v10, a2, *(int *)(v10 + 80));
      v13 = *(_DWORD *)(v10 + 80);
      WdLogGlobalForLineNumber = 1049;
      ReferenceCounted::Release((ReferenceCounted *)(v10 + 24));
      return v13;
    }
  }
  else
  {
    WdLogSingleEntry1(6LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 1041;
  }
  return result;
}
