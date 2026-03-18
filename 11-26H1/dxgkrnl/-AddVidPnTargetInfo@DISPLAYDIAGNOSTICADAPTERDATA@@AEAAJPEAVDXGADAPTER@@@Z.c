/*
 * XREFs of ?AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1404228A8
 * Callers:
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1401C9CF0 (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14004A53C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1401CB42C (-Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z.c)
 */

__int64 __fastcall DISPLAYDIAGNOSTICADAPTERDATA::AddVidPnTargetInfo(
        DISPLAYDIAGNOSTICADAPTERDATA *this,
        struct DXGADAPTER *a2)
{
  unsigned int v2; // edi
  __int64 v6; // rbx
  _QWORD *v7; // rbx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rsi
  _QWORD *v9; // rcx
  __int64 v10; // rax
  VIDPNTARGETINFO *v11; // rcx
  __int64 v12; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a2 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1314;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsCoreResourceSharedOwner()",
      1314LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = *(_QWORD *)(*((_QWORD *)a2 + 395) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v12, v6);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v6 + 120) + 72LL));
  v7 = *(_QWORD **)(v6 + 120);
  NextTarget = 0LL;
  v9 = (_QWORD *)v7[3];
  if ( v9 != v7 + 3 )
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v9 - 1);
  while ( NextTarget )
  {
    if ( *((_QWORD *)NextTarget + 14) )
    {
      v10 = *((unsigned int *)this + 489);
      if ( (unsigned int)v10 >= 4 || (v11 = (DISPLAYDIAGNOSTICADAPTERDATA *)((char *)this + 248 * v10 + 964)) == 0LL )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1336;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"No memory available for adding a new display target",
          1336LL,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( v7 )
          ReferenceCounted::Release((ReferenceCounted *)(v7 + 8));
        v2 = -1073741801;
        goto LABEL_19;
      }
      if ( (int)VIDPNTARGETINFO::Initialize(v11, a2, NextTarget) >= 0 )
        ++*((_DWORD *)this + 489);
    }
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v7, NextTarget);
  }
  if ( v7 )
    ReferenceCounted::Release((ReferenceCounted *)(v7 + 8));
LABEL_19:
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
  return v2;
}
