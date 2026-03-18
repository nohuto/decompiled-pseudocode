/*
 * XREFs of ?UpdateTargetConnectionId@VIDPN_MGR@@QEAAJI@Z @ 0x14025D978
 * Callers:
 *     ?DmmUpdateTargetConnectionId@@YAJQEAXI@Z @ 0x14025C4BC (-DmmUpdateTargetConnectionId@@YAJQEAXI@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x14003CFA8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 */

__int64 __fastcall VIDPN_MGR::UpdateTargetConnectionId(VIDPN_MGR *this, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rbp
  int v7; // ecx

  v3 = a2;
  if ( !DXGFASTMUTEX::IsOwner((VIDPN_MGR *)((char *)this + 40)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5633;
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 15) + 72LL));
  v4 = *((_QWORD *)this + 15);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v4, v3);
  if ( TargetById )
  {
    if ( v4 )
      ReferenceCounted::Release((ReferenceCounted *)(v4 + 64));
    v7 = `DMMVIDEOPRESENTTARGET::IncreaseConnectionId'::`2'::s_TargetConnectionId;
    *((_DWORD *)TargetById + 33) = `DMMVIDEOPRESENTTARGET::IncreaseConnectionId'::`2'::s_TargetConnectionId;
    `DMMVIDEOPRESENTTARGET::IncreaseConnectionId'::`2'::s_TargetConnectionId = v7 + 1;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, v3, this);
    WdLogGlobalForLineNumber = 5646;
    if ( v4 )
      ReferenceCounted::Release((ReferenceCounted *)(v4 + 64));
    return 3223192325LL;
  }
}
